#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_5D, _5D_0000) {
    const struct CPU_State initial_cpu = {.pc=0xa1c9, .a=0x06, .x=0xbc, .y=0x50, .sp=0x72, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa1ca, .a=0x06, .x=0x06, .y=0x50, .sp=0x72, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa1c9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa1c9, .value=0x5d, .type=IO_READ},
        {.addr=0xa1ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x291d, .a=0xde, .x=0x6e, .y=0x21, .sp=0x18, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x291d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x291e, .a=0xde, .x=0xde, .y=0x21, .sp=0x18, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x291d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x291d, .value=0x5d, .type=IO_READ},
        {.addr=0x291e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0002) {
    const struct CPU_State initial_cpu = {.pc=0xf48a, .a=0x5a, .x=0xb4, .y=0x6c, .sp=0x07, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xf48a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf48b, .a=0x5a, .x=0x5a, .y=0x6c, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf48a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf48a, .value=0x5d, .type=IO_READ},
        {.addr=0xf48b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x0288, .a=0x29, .x=0x11, .y=0x4d, .sp=0x10, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0288, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0289, .a=0x29, .x=0x29, .y=0x4d, .sp=0x10, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0288, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0288, .value=0x5d, .type=IO_READ},
        {.addr=0x0289, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0004) {
    const struct CPU_State initial_cpu = {.pc=0x0774, .a=0xc2, .x=0x8e, .y=0xad, .sp=0xe0, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0774, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0775, .a=0xc2, .x=0xc2, .y=0xad, .sp=0xe0, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0774, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0774, .value=0x5d, .type=IO_READ},
        {.addr=0x0775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0005) {
    const struct CPU_State initial_cpu = {.pc=0xb350, .a=0x98, .x=0x52, .y=0x01, .sp=0xfe, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb350, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb351, .a=0x98, .x=0x98, .y=0x01, .sp=0xfe, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb350, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb350, .value=0x5d, .type=IO_READ},
        {.addr=0xb351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0006) {
    const struct CPU_State initial_cpu = {.pc=0xc4da, .a=0xe6, .x=0x1c, .y=0xf9, .sp=0x91, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc4da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc4db, .a=0xe6, .x=0xe6, .y=0xf9, .sp=0x91, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc4da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc4da, .value=0x5d, .type=IO_READ},
        {.addr=0xc4db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x3174, .a=0xa2, .x=0x4a, .y=0x65, .sp=0x4c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x3174, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3175, .a=0xa2, .x=0xa2, .y=0x65, .sp=0x4c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3174, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3174, .value=0x5d, .type=IO_READ},
        {.addr=0x3175, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x3987, .a=0xc5, .x=0x5f, .y=0xd8, .sp=0x0f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x3987, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3988, .a=0xc5, .x=0xc5, .y=0xd8, .sp=0x0f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3987, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3987, .value=0x5d, .type=IO_READ},
        {.addr=0x3988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0009) {
    const struct CPU_State initial_cpu = {.pc=0x305d, .a=0xf9, .x=0xd1, .y=0x22, .sp=0x6c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x305d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x305e, .a=0xf9, .x=0xf9, .y=0x22, .sp=0x6c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x305d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x305d, .value=0x5d, .type=IO_READ},
        {.addr=0x305e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_000A) {
    const struct CPU_State initial_cpu = {.pc=0xeffa, .a=0xbc, .x=0x95, .y=0x4c, .sp=0x5d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xeffa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeffb, .a=0xbc, .x=0xbc, .y=0x4c, .sp=0x5d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xeffa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeffa, .value=0x5d, .type=IO_READ},
        {.addr=0xeffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_000B) {
    const struct CPU_State initial_cpu = {.pc=0x33f0, .a=0x12, .x=0x85, .y=0x54, .sp=0x84, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x33f0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33f1, .a=0x12, .x=0x12, .y=0x54, .sp=0x84, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x33f0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x33f0, .value=0x5d, .type=IO_READ},
        {.addr=0x33f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_000C) {
    const struct CPU_State initial_cpu = {.pc=0xfc10, .a=0x76, .x=0x27, .y=0xa5, .sp=0xb9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xfc10, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfc11, .a=0x76, .x=0x76, .y=0xa5, .sp=0xb9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xfc10, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfc10, .value=0x5d, .type=IO_READ},
        {.addr=0xfc11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x2f14, .a=0x31, .x=0x27, .y=0x49, .sp=0xb8, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2f14, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2f15, .a=0x31, .x=0x31, .y=0x49, .sp=0xb8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2f14, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2f14, .value=0x5d, .type=IO_READ},
        {.addr=0x2f15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_000E) {
    const struct CPU_State initial_cpu = {.pc=0xa2f2, .a=0x54, .x=0x98, .y=0x9a, .sp=0xe8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa2f3, .a=0x54, .x=0x54, .y=0x9a, .sp=0xe8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa2f2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa2f2, .value=0x5d, .type=IO_READ},
        {.addr=0xa2f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x32fd, .a=0x5d, .x=0x5f, .y=0x2e, .sp=0x1a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x32fd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x32fe, .a=0x5d, .x=0x5d, .y=0x2e, .sp=0x1a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x32fd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x32fd, .value=0x5d, .type=IO_READ},
        {.addr=0x32fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x3103, .a=0x3d, .x=0x9c, .y=0x7d, .sp=0x7f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3103, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3104, .a=0x3d, .x=0x3d, .y=0x7d, .sp=0x7f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3103, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3103, .value=0x5d, .type=IO_READ},
        {.addr=0x3104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6961, .a=0xde, .x=0x7e, .y=0xd3, .sp=0x53, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6961, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6962, .a=0xde, .x=0xde, .y=0xd3, .sp=0x53, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6961, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6961, .value=0x5d, .type=IO_READ},
        {.addr=0x6962, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x6ab4, .a=0xe0, .x=0x99, .y=0xd0, .sp=0x71, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6ab4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6ab5, .a=0xe0, .x=0xe0, .y=0xd0, .sp=0x71, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6ab4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6ab4, .value=0x5d, .type=IO_READ},
        {.addr=0x6ab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x6862, .a=0xf8, .x=0x2e, .y=0x3f, .sp=0x46, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6862, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6863, .a=0xf8, .x=0xf8, .y=0x3f, .sp=0x46, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6862, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6862, .value=0x5d, .type=IO_READ},
        {.addr=0x6863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0014) {
    const struct CPU_State initial_cpu = {.pc=0x8555, .a=0x6d, .x=0x35, .y=0xb5, .sp=0xd4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8555, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8556, .a=0x6d, .x=0x6d, .y=0xb5, .sp=0xd4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8555, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8555, .value=0x5d, .type=IO_READ},
        {.addr=0x8556, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0015) {
    const struct CPU_State initial_cpu = {.pc=0x1a88, .a=0xc0, .x=0x3b, .y=0x97, .sp=0x34, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1a88, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1a89, .a=0xc0, .x=0xc0, .y=0x97, .sp=0x34, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1a88, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1a88, .value=0x5d, .type=IO_READ},
        {.addr=0x1a89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0016) {
    const struct CPU_State initial_cpu = {.pc=0x08b3, .a=0xd5, .x=0xc4, .y=0xdf, .sp=0x26, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x08b3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x08b4, .a=0xd5, .x=0xd5, .y=0xdf, .sp=0x26, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x08b3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x08b3, .value=0x5d, .type=IO_READ},
        {.addr=0x08b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0017) {
    const struct CPU_State initial_cpu = {.pc=0x15c7, .a=0xa1, .x=0x5d, .y=0xa6, .sp=0x1f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x15c7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x15c8, .a=0xa1, .x=0xa1, .y=0xa6, .sp=0x1f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x15c7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x15c7, .value=0x5d, .type=IO_READ},
        {.addr=0x15c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x5367, .a=0x8c, .x=0x37, .y=0xc2, .sp=0x37, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5367, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5368, .a=0x8c, .x=0x8c, .y=0xc2, .sp=0x37, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5367, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5367, .value=0x5d, .type=IO_READ},
        {.addr=0x5368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x51e8, .a=0xcd, .x=0x43, .y=0xa9, .sp=0xe2, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x51e8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x51e9, .a=0xcd, .x=0xcd, .y=0xa9, .sp=0xe2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x51e8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x51e8, .value=0x5d, .type=IO_READ},
        {.addr=0x51e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_001A) {
    const struct CPU_State initial_cpu = {.pc=0x1cc1, .a=0x53, .x=0x36, .y=0xb1, .sp=0x9a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1cc2, .a=0x53, .x=0x53, .y=0xb1, .sp=0x9a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1cc1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1cc1, .value=0x5d, .type=IO_READ},
        {.addr=0x1cc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x2c83, .a=0xea, .x=0x3e, .y=0xd0, .sp=0x73, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2c83, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2c84, .a=0xea, .x=0xea, .y=0xd0, .sp=0x73, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2c83, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2c83, .value=0x5d, .type=IO_READ},
        {.addr=0x2c84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_001C) {
    const struct CPU_State initial_cpu = {.pc=0xf05d, .a=0xc9, .x=0xa7, .y=0xdf, .sp=0x2f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf05d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf05e, .a=0xc9, .x=0xc9, .y=0xdf, .sp=0x2f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf05d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf05d, .value=0x5d, .type=IO_READ},
        {.addr=0xf05e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_001D) {
    const struct CPU_State initial_cpu = {.pc=0xc7d6, .a=0x6c, .x=0x46, .y=0xba, .sp=0x1e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc7d7, .a=0x6c, .x=0x6c, .y=0xba, .sp=0x1e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc7d6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc7d6, .value=0x5d, .type=IO_READ},
        {.addr=0xc7d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x8cee, .a=0x2d, .x=0x6d, .y=0x8f, .sp=0x0c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8cee, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8cef, .a=0x2d, .x=0x2d, .y=0x8f, .sp=0x0c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8cee, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8cee, .value=0x5d, .type=IO_READ},
        {.addr=0x8cef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_001F) {
    const struct CPU_State initial_cpu = {.pc=0xc130, .a=0x30, .x=0xf2, .y=0x58, .sp=0xc4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc130, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc131, .a=0x30, .x=0x30, .y=0x58, .sp=0xc4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc130, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc130, .value=0x5d, .type=IO_READ},
        {.addr=0xc131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x62c3, .a=0x0d, .x=0xaf, .y=0x5c, .sp=0xe8, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x62c3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x62c4, .a=0x0d, .x=0x0d, .y=0x5c, .sp=0xe8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x62c3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x62c3, .value=0x5d, .type=IO_READ},
        {.addr=0x62c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x8c19, .a=0xef, .x=0x4d, .y=0x57, .sp=0x91, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x8c19, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8c1a, .a=0xef, .x=0xef, .y=0x57, .sp=0x91, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8c19, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8c19, .value=0x5d, .type=IO_READ},
        {.addr=0x8c1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0022) {
    const struct CPU_State initial_cpu = {.pc=0x8247, .a=0x50, .x=0x83, .y=0x44, .sp=0x71, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8247, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8248, .a=0x50, .x=0x50, .y=0x44, .sp=0x71, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8247, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8247, .value=0x5d, .type=IO_READ},
        {.addr=0x8248, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0023) {
    const struct CPU_State initial_cpu = {.pc=0xb176, .a=0x78, .x=0x8c, .y=0x78, .sp=0x56, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb176, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb177, .a=0x78, .x=0x78, .y=0x78, .sp=0x56, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb176, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb176, .value=0x5d, .type=IO_READ},
        {.addr=0xb177, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0024) {
    const struct CPU_State initial_cpu = {.pc=0x7161, .a=0xa1, .x=0xfd, .y=0x6b, .sp=0x10, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7161, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7162, .a=0xa1, .x=0xa1, .y=0x6b, .sp=0x10, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7161, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7161, .value=0x5d, .type=IO_READ},
        {.addr=0x7162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0025) {
    const struct CPU_State initial_cpu = {.pc=0xaf53, .a=0xb0, .x=0x2f, .y=0x95, .sp=0xf2, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xaf53, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaf54, .a=0xb0, .x=0xb0, .y=0x95, .sp=0xf2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xaf53, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaf53, .value=0x5d, .type=IO_READ},
        {.addr=0xaf54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0026) {
    const struct CPU_State initial_cpu = {.pc=0x9383, .a=0xf3, .x=0xef, .y=0x6b, .sp=0x44, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9383, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9384, .a=0xf3, .x=0xf3, .y=0x6b, .sp=0x44, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9383, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9383, .value=0x5d, .type=IO_READ},
        {.addr=0x9384, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0027) {
    const struct CPU_State initial_cpu = {.pc=0xb4bf, .a=0x79, .x=0x7e, .y=0x6b, .sp=0xe4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb4bf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb4c0, .a=0x79, .x=0x79, .y=0x6b, .sp=0xe4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb4bf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb4bf, .value=0x5d, .type=IO_READ},
        {.addr=0xb4c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xfddd, .a=0xba, .x=0x4a, .y=0xf8, .sp=0xb4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfddd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfdde, .a=0xba, .x=0xba, .y=0xf8, .sp=0xb4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfddd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfddd, .value=0x5d, .type=IO_READ},
        {.addr=0xfdde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0029) {
    const struct CPU_State initial_cpu = {.pc=0x651a, .a=0xaf, .x=0x27, .y=0xdd, .sp=0xbe, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x651a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x651b, .a=0xaf, .x=0xaf, .y=0xdd, .sp=0xbe, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x651a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x651a, .value=0x5d, .type=IO_READ},
        {.addr=0x651b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1256, .a=0xf6, .x=0x69, .y=0x05, .sp=0x1c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1256, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1257, .a=0xf6, .x=0xf6, .y=0x05, .sp=0x1c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1256, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1256, .value=0x5d, .type=IO_READ},
        {.addr=0x1257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xfa99, .a=0x8f, .x=0x26, .y=0x19, .sp=0x34, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xfa99, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfa9a, .a=0x8f, .x=0x8f, .y=0x19, .sp=0x34, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfa99, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfa99, .value=0x5d, .type=IO_READ},
        {.addr=0xfa9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_002C) {
    const struct CPU_State initial_cpu = {.pc=0xaa1c, .a=0x5d, .x=0xcc, .y=0x07, .sp=0x06, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaa1d, .a=0x5d, .x=0x5d, .y=0x07, .sp=0x06, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xaa1c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaa1c, .value=0x5d, .type=IO_READ},
        {.addr=0xaa1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_002D) {
    const struct CPU_State initial_cpu = {.pc=0xb69d, .a=0x7d, .x=0xd2, .y=0x83, .sp=0x23, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb69d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb69e, .a=0x7d, .x=0x7d, .y=0x83, .sp=0x23, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb69d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb69d, .value=0x5d, .type=IO_READ},
        {.addr=0xb69e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_002E) {
    const struct CPU_State initial_cpu = {.pc=0xdcd1, .a=0xe2, .x=0x12, .y=0x99, .sp=0x49, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xdcd1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdcd2, .a=0xe2, .x=0xe2, .y=0x99, .sp=0x49, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdcd1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdcd1, .value=0x5d, .type=IO_READ},
        {.addr=0xdcd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x9c0e, .a=0xf7, .x=0xc5, .y=0x83, .sp=0x68, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9c0f, .a=0xf7, .x=0xf7, .y=0x83, .sp=0x68, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9c0e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9c0e, .value=0x5d, .type=IO_READ},
        {.addr=0x9c0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0030) {
    const struct CPU_State initial_cpu = {.pc=0xee48, .a=0x4a, .x=0x10, .y=0x17, .sp=0xbd, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xee48, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xee49, .a=0x4a, .x=0x4a, .y=0x17, .sp=0xbd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xee48, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xee48, .value=0x5d, .type=IO_READ},
        {.addr=0xee49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x7e48, .a=0xaa, .x=0x2c, .y=0x24, .sp=0x98, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7e48, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e49, .a=0xaa, .x=0xaa, .y=0x24, .sp=0x98, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7e48, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e48, .value=0x5d, .type=IO_READ},
        {.addr=0x7e49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0032) {
    const struct CPU_State initial_cpu = {.pc=0xd077, .a=0xc8, .x=0x23, .y=0xc3, .sp=0x59, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xd077, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd078, .a=0xc8, .x=0xc8, .y=0xc3, .sp=0x59, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd077, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd077, .value=0x5d, .type=IO_READ},
        {.addr=0xd078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0033) {
    const struct CPU_State initial_cpu = {.pc=0x095e, .a=0x2e, .x=0x19, .y=0xb5, .sp=0xd7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x095e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x095f, .a=0x2e, .x=0x2e, .y=0xb5, .sp=0xd7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x095e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x095e, .value=0x5d, .type=IO_READ},
        {.addr=0x095f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0034) {
    const struct CPU_State initial_cpu = {.pc=0xc6f9, .a=0x2b, .x=0x9c, .y=0xcc, .sp=0x57, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc6fa, .a=0x2b, .x=0x2b, .y=0xcc, .sp=0x57, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc6f9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc6f9, .value=0x5d, .type=IO_READ},
        {.addr=0xc6fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x6364, .a=0xb1, .x=0x17, .y=0xcb, .sp=0x76, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x6364, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6365, .a=0xb1, .x=0xb1, .y=0xcb, .sp=0x76, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6364, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6364, .value=0x5d, .type=IO_READ},
        {.addr=0x6365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0036) {
    const struct CPU_State initial_cpu = {.pc=0x403e, .a=0x53, .x=0x62, .y=0x5a, .sp=0x04, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x403e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x403f, .a=0x53, .x=0x53, .y=0x5a, .sp=0x04, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x403e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x403e, .value=0x5d, .type=IO_READ},
        {.addr=0x403f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0037) {
    const struct CPU_State initial_cpu = {.pc=0xc4d7, .a=0x23, .x=0x93, .y=0x74, .sp=0xd3, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc4d8, .a=0x23, .x=0x23, .y=0x74, .sp=0xd3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc4d7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc4d7, .value=0x5d, .type=IO_READ},
        {.addr=0xc4d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x81a3, .a=0x20, .x=0xbf, .y=0x89, .sp=0x25, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x81a3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x81a4, .a=0x20, .x=0x20, .y=0x89, .sp=0x25, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x81a3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x81a3, .value=0x5d, .type=IO_READ},
        {.addr=0x81a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x9693, .a=0x29, .x=0xa2, .y=0xbf, .sp=0x7c, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9693, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9694, .a=0x29, .x=0x29, .y=0xbf, .sp=0x7c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9693, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9693, .value=0x5d, .type=IO_READ},
        {.addr=0x9694, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_003A) {
    const struct CPU_State initial_cpu = {.pc=0x24dc, .a=0xfe, .x=0xa2, .y=0x5b, .sp=0xe9, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x24dc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x24dd, .a=0xfe, .x=0xfe, .y=0x5b, .sp=0xe9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x24dc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x24dc, .value=0x5d, .type=IO_READ},
        {.addr=0x24dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9654, .a=0x1f, .x=0xb5, .y=0x58, .sp=0x61, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x9654, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9655, .a=0x1f, .x=0x1f, .y=0x58, .sp=0x61, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9654, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9654, .value=0x5d, .type=IO_READ},
        {.addr=0x9655, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x4f72, .a=0xeb, .x=0x63, .y=0x07, .sp=0x97, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x4f72, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4f73, .a=0xeb, .x=0xeb, .y=0x07, .sp=0x97, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4f72, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4f72, .value=0x5d, .type=IO_READ},
        {.addr=0x4f73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x2fb0, .a=0x3e, .x=0x2b, .y=0x77, .sp=0x4d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x2fb0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2fb1, .a=0x3e, .x=0x3e, .y=0x77, .sp=0x4d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2fb0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2fb0, .value=0x5d, .type=IO_READ},
        {.addr=0x2fb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x67d1, .a=0xec, .x=0x37, .y=0x71, .sp=0x0d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x67d1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x67d2, .a=0xec, .x=0xec, .y=0x71, .sp=0x0d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x67d1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x67d1, .value=0x5d, .type=IO_READ},
        {.addr=0x67d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_003F) {
    const struct CPU_State initial_cpu = {.pc=0xb40c, .a=0xb8, .x=0x0c, .y=0x6c, .sp=0xba, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xb40c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb40d, .a=0xb8, .x=0xb8, .y=0x6c, .sp=0xba, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb40c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb40c, .value=0x5d, .type=IO_READ},
        {.addr=0xb40d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0040) {
    const struct CPU_State initial_cpu = {.pc=0xe2e3, .a=0xe1, .x=0x5b, .y=0x29, .sp=0xfd, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xe2e3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe2e4, .a=0xe1, .x=0xe1, .y=0x29, .sp=0xfd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe2e3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe2e3, .value=0x5d, .type=IO_READ},
        {.addr=0xe2e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x5072, .a=0xd3, .x=0xfe, .y=0x86, .sp=0xcc, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x5072, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5073, .a=0xd3, .x=0xd3, .y=0x86, .sp=0xcc, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5072, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5072, .value=0x5d, .type=IO_READ},
        {.addr=0x5073, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0042) {
    const struct CPU_State initial_cpu = {.pc=0x939e, .a=0xd5, .x=0xef, .y=0x11, .sp=0xc5, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x939e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x939f, .a=0xd5, .x=0xd5, .y=0x11, .sp=0xc5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x939e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x939e, .value=0x5d, .type=IO_READ},
        {.addr=0x939f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0043) {
    const struct CPU_State initial_cpu = {.pc=0x7608, .a=0x37, .x=0xc7, .y=0x7c, .sp=0x10, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7608, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7609, .a=0x37, .x=0x37, .y=0x7c, .sp=0x10, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7608, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7608, .value=0x5d, .type=IO_READ},
        {.addr=0x7609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x499e, .a=0xb7, .x=0xba, .y=0x22, .sp=0x31, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x499e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x499f, .a=0xb7, .x=0xb7, .y=0x22, .sp=0x31, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x499e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x499e, .value=0x5d, .type=IO_READ},
        {.addr=0x499f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0045) {
    const struct CPU_State initial_cpu = {.pc=0xc2cb, .a=0xd9, .x=0xcc, .y=0xab, .sp=0x82, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc2cb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc2cc, .a=0xd9, .x=0xd9, .y=0xab, .sp=0x82, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc2cb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc2cb, .value=0x5d, .type=IO_READ},
        {.addr=0xc2cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0046) {
    const struct CPU_State initial_cpu = {.pc=0xa165, .a=0x35, .x=0x3e, .y=0x6a, .sp=0x5d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa165, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa166, .a=0x35, .x=0x35, .y=0x6a, .sp=0x5d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa165, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa165, .value=0x5d, .type=IO_READ},
        {.addr=0xa166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0047) {
    const struct CPU_State initial_cpu = {.pc=0xf3eb, .a=0xa7, .x=0x33, .y=0xd8, .sp=0xa8, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf3eb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf3ec, .a=0xa7, .x=0xa7, .y=0xd8, .sp=0xa8, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf3eb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf3eb, .value=0x5d, .type=IO_READ},
        {.addr=0xf3ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0048) {
    const struct CPU_State initial_cpu = {.pc=0xbb5c, .a=0x5c, .x=0x19, .y=0x2f, .sp=0x1d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbb5c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbb5d, .a=0x5c, .x=0x5c, .y=0x2f, .sp=0x1d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbb5c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbb5c, .value=0x5d, .type=IO_READ},
        {.addr=0xbb5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0049) {
    const struct CPU_State initial_cpu = {.pc=0xbf77, .a=0xf9, .x=0x64, .y=0xd6, .sp=0xce, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xbf77, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbf78, .a=0xf9, .x=0xf9, .y=0xd6, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xbf77, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbf77, .value=0x5d, .type=IO_READ},
        {.addr=0xbf78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_004A) {
    const struct CPU_State initial_cpu = {.pc=0x9061, .a=0x85, .x=0x48, .y=0x88, .sp=0xfe, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9061, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9062, .a=0x85, .x=0x85, .y=0x88, .sp=0xfe, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9061, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9061, .value=0x5d, .type=IO_READ},
        {.addr=0x9062, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_004B) {
    const struct CPU_State initial_cpu = {.pc=0xd5b7, .a=0xfd, .x=0x18, .y=0x9d, .sp=0x91, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd5b8, .a=0xfd, .x=0xfd, .y=0x9d, .sp=0x91, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd5b7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd5b7, .value=0x5d, .type=IO_READ},
        {.addr=0xd5b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x3cc1, .a=0x15, .x=0x0a, .y=0xf0, .sp=0xca, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3cc2, .a=0x15, .x=0x15, .y=0xf0, .sp=0xca, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3cc1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3cc1, .value=0x5d, .type=IO_READ},
        {.addr=0x3cc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x36e5, .a=0xd0, .x=0x7a, .y=0xe0, .sp=0x8f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x36e5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x36e6, .a=0xd0, .x=0xd0, .y=0xe0, .sp=0x8f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x36e5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x36e5, .value=0x5d, .type=IO_READ},
        {.addr=0x36e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x021b, .a=0x91, .x=0x3c, .y=0x3c, .sp=0x94, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x021b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x021c, .a=0x91, .x=0x91, .y=0x3c, .sp=0x94, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x021b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x021b, .value=0x5d, .type=IO_READ},
        {.addr=0x021c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_004F) {
    const struct CPU_State initial_cpu = {.pc=0xb080, .a=0xd1, .x=0x93, .y=0xd7, .sp=0xa0, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb080, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb081, .a=0xd1, .x=0xd1, .y=0xd7, .sp=0xa0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb080, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb080, .value=0x5d, .type=IO_READ},
        {.addr=0xb081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0050) {
    const struct CPU_State initial_cpu = {.pc=0x9c58, .a=0x45, .x=0xfa, .y=0x5d, .sp=0xa3, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x9c58, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9c59, .a=0x45, .x=0x45, .y=0x5d, .sp=0xa3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9c58, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9c58, .value=0x5d, .type=IO_READ},
        {.addr=0x9c59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x94dc, .a=0x06, .x=0x54, .y=0xac, .sp=0x19, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x94dc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x94dd, .a=0x06, .x=0x06, .y=0xac, .sp=0x19, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x94dc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x94dc, .value=0x5d, .type=IO_READ},
        {.addr=0x94dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0052) {
    const struct CPU_State initial_cpu = {.pc=0x03a7, .a=0x04, .x=0x21, .y=0xe5, .sp=0x1f, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x03a7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x03a8, .a=0x04, .x=0x04, .y=0xe5, .sp=0x1f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x03a7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x03a7, .value=0x5d, .type=IO_READ},
        {.addr=0x03a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x579a, .a=0xcb, .x=0x9e, .y=0xf3, .sp=0x28, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x579a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x579b, .a=0xcb, .x=0xcb, .y=0xf3, .sp=0x28, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x579a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x579a, .value=0x5d, .type=IO_READ},
        {.addr=0x579b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x5c0b, .a=0xb6, .x=0x18, .y=0x56, .sp=0xed, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c0b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5c0c, .a=0xb6, .x=0xb6, .y=0x56, .sp=0xed, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5c0b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5c0b, .value=0x5d, .type=IO_READ},
        {.addr=0x5c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0055) {
    const struct CPU_State initial_cpu = {.pc=0x7451, .a=0x51, .x=0x6e, .y=0x0e, .sp=0x55, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x7451, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7452, .a=0x51, .x=0x51, .y=0x0e, .sp=0x55, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7451, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7451, .value=0x5d, .type=IO_READ},
        {.addr=0x7452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x93cb, .a=0x7c, .x=0x0c, .y=0x82, .sp=0x7b, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x93cb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x93cc, .a=0x7c, .x=0x7c, .y=0x82, .sp=0x7b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x93cb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x93cb, .value=0x5d, .type=IO_READ},
        {.addr=0x93cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x917d, .a=0x6e, .x=0x94, .y=0x0c, .sp=0x96, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x917d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x917e, .a=0x6e, .x=0x6e, .y=0x0c, .sp=0x96, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x917d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x917d, .value=0x5d, .type=IO_READ},
        {.addr=0x917e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x4f37, .a=0x53, .x=0xd7, .y=0xa2, .sp=0xad, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4f37, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4f38, .a=0x53, .x=0x53, .y=0xa2, .sp=0xad, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4f37, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4f37, .value=0x5d, .type=IO_READ},
        {.addr=0x4f38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x5ba9, .a=0xc4, .x=0xd2, .y=0x6c, .sp=0xb0, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5baa, .a=0xc4, .x=0xc4, .y=0x6c, .sp=0xb0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5ba9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5ba9, .value=0x5d, .type=IO_READ},
        {.addr=0x5baa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf1d9, .a=0xb1, .x=0xa2, .y=0x31, .sp=0x5d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xf1d9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf1da, .a=0xb1, .x=0xb1, .y=0x31, .sp=0x5d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf1d9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf1d9, .value=0x5d, .type=IO_READ},
        {.addr=0xf1da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_005B) {
    const struct CPU_State initial_cpu = {.pc=0xe0cf, .a=0x91, .x=0x22, .y=0xd1, .sp=0xb3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe0cf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe0d0, .a=0x91, .x=0x91, .y=0xd1, .sp=0xb3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe0cf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe0cf, .value=0x5d, .type=IO_READ},
        {.addr=0xe0d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x4930, .a=0xc8, .x=0xc7, .y=0x62, .sp=0xcb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4930, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4931, .a=0xc8, .x=0xc8, .y=0x62, .sp=0xcb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4930, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4930, .value=0x5d, .type=IO_READ},
        {.addr=0x4931, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_005D) {
    const struct CPU_State initial_cpu = {.pc=0xc466, .a=0xcc, .x=0xae, .y=0xd6, .sp=0x31, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xc466, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc467, .a=0xcc, .x=0xcc, .y=0xd6, .sp=0x31, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc466, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc466, .value=0x5d, .type=IO_READ},
        {.addr=0xc467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x3d67, .a=0x9d, .x=0xa8, .y=0xac, .sp=0x64, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3d67, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3d68, .a=0x9d, .x=0x9d, .y=0xac, .sp=0x64, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3d67, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3d67, .value=0x5d, .type=IO_READ},
        {.addr=0x3d68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_005F) {
    const struct CPU_State initial_cpu = {.pc=0x02f0, .a=0xda, .x=0x95, .y=0x1d, .sp=0x9e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x02f0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x02f1, .a=0xda, .x=0xda, .y=0x1d, .sp=0x9e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x02f0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x02f0, .value=0x5d, .type=IO_READ},
        {.addr=0x02f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0060) {
    const struct CPU_State initial_cpu = {.pc=0xf2ad, .a=0xc7, .x=0x70, .y=0x6f, .sp=0x09, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf2ae, .a=0xc7, .x=0xc7, .y=0x6f, .sp=0x09, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf2ad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf2ad, .value=0x5d, .type=IO_READ},
        {.addr=0xf2ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0061) {
    const struct CPU_State initial_cpu = {.pc=0xf1d2, .a=0x9f, .x=0xb4, .y=0xc7, .sp=0xff, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf1d2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf1d3, .a=0x9f, .x=0x9f, .y=0xc7, .sp=0xff, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf1d2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf1d2, .value=0x5d, .type=IO_READ},
        {.addr=0xf1d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0062) {
    const struct CPU_State initial_cpu = {.pc=0xc1c3, .a=0x20, .x=0xc9, .y=0x59, .sp=0x02, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc1c4, .a=0x20, .x=0x20, .y=0x59, .sp=0x02, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc1c3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc1c3, .value=0x5d, .type=IO_READ},
        {.addr=0xc1c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0063) {
    const struct CPU_State initial_cpu = {.pc=0x8b8f, .a=0x43, .x=0x12, .y=0x48, .sp=0x27, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8b8f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8b90, .a=0x43, .x=0x43, .y=0x48, .sp=0x27, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8b8f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8b8f, .value=0x5d, .type=IO_READ},
        {.addr=0x8b90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x9a79, .a=0xc1, .x=0x83, .y=0xfd, .sp=0x14, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9a79, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9a7a, .a=0xc1, .x=0xc1, .y=0xfd, .sp=0x14, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9a79, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9a79, .value=0x5d, .type=IO_READ},
        {.addr=0x9a7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0065) {
    const struct CPU_State initial_cpu = {.pc=0xea7f, .a=0x60, .x=0x78, .y=0x70, .sp=0x8e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xea7f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xea80, .a=0x60, .x=0x60, .y=0x70, .sp=0x8e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xea7f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xea7f, .value=0x5d, .type=IO_READ},
        {.addr=0xea80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4be5, .a=0x7d, .x=0x61, .y=0xba, .sp=0x69, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4be5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4be6, .a=0x7d, .x=0x7d, .y=0xba, .sp=0x69, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4be5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4be5, .value=0x5d, .type=IO_READ},
        {.addr=0x4be6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0067) {
    const struct CPU_State initial_cpu = {.pc=0x73ff, .a=0xb4, .x=0xbc, .y=0xf8, .sp=0x11, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x73ff, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7400, .a=0xb4, .x=0xb4, .y=0xf8, .sp=0x11, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x73ff, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x73ff, .value=0x5d, .type=IO_READ},
        {.addr=0x7400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0068) {
    const struct CPU_State initial_cpu = {.pc=0xe6af, .a=0xc7, .x=0xa6, .y=0x0c, .sp=0x94, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe6af, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe6b0, .a=0xc7, .x=0xc7, .y=0x0c, .sp=0x94, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe6af, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe6af, .value=0x5d, .type=IO_READ},
        {.addr=0xe6b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0069) {
    const struct CPU_State initial_cpu = {.pc=0xf76a, .a=0xb7, .x=0x53, .y=0xda, .sp=0x18, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf76a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf76b, .a=0xb7, .x=0xb7, .y=0xda, .sp=0x18, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf76a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf76a, .value=0x5d, .type=IO_READ},
        {.addr=0xf76b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x33fd, .a=0x95, .x=0xac, .y=0x1b, .sp=0xeb, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x33fd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33fe, .a=0x95, .x=0x95, .y=0x1b, .sp=0xeb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x33fd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x33fd, .value=0x5d, .type=IO_READ},
        {.addr=0x33fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_006B) {
    const struct CPU_State initial_cpu = {.pc=0xb6c4, .a=0xc5, .x=0xfd, .y=0x52, .sp=0x9c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb6c5, .a=0xc5, .x=0xc5, .y=0x52, .sp=0x9c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb6c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb6c4, .value=0x5d, .type=IO_READ},
        {.addr=0xb6c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x7576, .a=0xba, .x=0x54, .y=0xff, .sp=0xb8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x7576, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7577, .a=0xba, .x=0xba, .y=0xff, .sp=0xb8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7576, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7576, .value=0x5d, .type=IO_READ},
        {.addr=0x7577, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_006D) {
    const struct CPU_State initial_cpu = {.pc=0xe5c4, .a=0x6f, .x=0xa8, .y=0x6b, .sp=0xc3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe5c5, .a=0x6f, .x=0x6f, .y=0x6b, .sp=0xc3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe5c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe5c4, .value=0x5d, .type=IO_READ},
        {.addr=0xe5c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_006E) {
    const struct CPU_State initial_cpu = {.pc=0xfc58, .a=0xce, .x=0x7d, .y=0x25, .sp=0x6f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xfc58, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfc59, .a=0xce, .x=0xce, .y=0x25, .sp=0x6f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xfc58, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfc58, .value=0x5d, .type=IO_READ},
        {.addr=0xfc59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x4a56, .a=0xa8, .x=0x4f, .y=0xcd, .sp=0x89, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x4a56, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a57, .a=0xa8, .x=0xa8, .y=0xcd, .sp=0x89, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4a56, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4a56, .value=0x5d, .type=IO_READ},
        {.addr=0x4a57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x9015, .a=0x6d, .x=0x00, .y=0x6e, .sp=0x43, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9015, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9016, .a=0x6d, .x=0x6d, .y=0x6e, .sp=0x43, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9015, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9015, .value=0x5d, .type=IO_READ},
        {.addr=0x9016, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x3c6d, .a=0x6b, .x=0x5d, .y=0xca, .sp=0xcb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3c6d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3c6e, .a=0x6b, .x=0x6b, .y=0xca, .sp=0xcb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3c6d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3c6d, .value=0x5d, .type=IO_READ},
        {.addr=0x3c6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0072) {
    const struct CPU_State initial_cpu = {.pc=0xb040, .a=0x00, .x=0xda, .y=0x92, .sp=0x07, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb040, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb041, .a=0x00, .x=0x00, .y=0x92, .sp=0x07, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xb040, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb040, .value=0x5d, .type=IO_READ},
        {.addr=0xb041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xbb7f, .a=0x25, .x=0x51, .y=0x3f, .sp=0x5f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbb7f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbb80, .a=0x25, .x=0x25, .y=0x3f, .sp=0x5f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbb7f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbb7f, .value=0x5d, .type=IO_READ},
        {.addr=0xbb80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe824, .a=0x29, .x=0xd0, .y=0xa9, .sp=0x4f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe824, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe825, .a=0x29, .x=0x29, .y=0xa9, .sp=0x4f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe824, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe824, .value=0x5d, .type=IO_READ},
        {.addr=0xe825, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xc98d, .a=0xec, .x=0x41, .y=0x07, .sp=0xf9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc98d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc98e, .a=0xec, .x=0xec, .y=0x07, .sp=0xf9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc98d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc98d, .value=0x5d, .type=IO_READ},
        {.addr=0xc98e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0076) {
    const struct CPU_State initial_cpu = {.pc=0xc4aa, .a=0xed, .x=0x19, .y=0xa0, .sp=0x7c, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc4aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc4ab, .a=0xed, .x=0xed, .y=0xa0, .sp=0x7c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc4aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc4aa, .value=0x5d, .type=IO_READ},
        {.addr=0xc4ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0077) {
    const struct CPU_State initial_cpu = {.pc=0x1863, .a=0x74, .x=0xe2, .y=0xf3, .sp=0xc1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1863, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1864, .a=0x74, .x=0x74, .y=0xf3, .sp=0xc1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1863, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1863, .value=0x5d, .type=IO_READ},
        {.addr=0x1864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x4311, .a=0x22, .x=0xf1, .y=0xe2, .sp=0xa1, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4311, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4312, .a=0x22, .x=0x22, .y=0xe2, .sp=0xa1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4311, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4311, .value=0x5d, .type=IO_READ},
        {.addr=0x4312, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0079) {
    const struct CPU_State initial_cpu = {.pc=0x454a, .a=0x5d, .x=0xbe, .y=0xa5, .sp=0x7f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x454a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x454b, .a=0x5d, .x=0x5d, .y=0xa5, .sp=0x7f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x454a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x454a, .value=0x5d, .type=IO_READ},
        {.addr=0x454b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_007A) {
    const struct CPU_State initial_cpu = {.pc=0x73f4, .a=0x2f, .x=0xcf, .y=0x2b, .sp=0xe4, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x73f4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x73f5, .a=0x2f, .x=0x2f, .y=0x2b, .sp=0xe4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x73f4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x73f4, .value=0x5d, .type=IO_READ},
        {.addr=0x73f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_007B) {
    const struct CPU_State initial_cpu = {.pc=0xa2bb, .a=0xe6, .x=0x13, .y=0xd9, .sp=0x6c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa2bb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa2bc, .a=0xe6, .x=0xe6, .y=0xd9, .sp=0x6c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa2bb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa2bb, .value=0x5d, .type=IO_READ},
        {.addr=0xa2bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x4383, .a=0x0d, .x=0x05, .y=0x37, .sp=0xe8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4383, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4384, .a=0x0d, .x=0x0d, .y=0x37, .sp=0xe8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4383, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4383, .value=0x5d, .type=IO_READ},
        {.addr=0x4384, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_007D) {
    const struct CPU_State initial_cpu = {.pc=0xde70, .a=0x26, .x=0x43, .y=0xe6, .sp=0xe8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xde70, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xde71, .a=0x26, .x=0x26, .y=0xe6, .sp=0xe8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xde70, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xde70, .value=0x5d, .type=IO_READ},
        {.addr=0xde71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_007E) {
    const struct CPU_State initial_cpu = {.pc=0xe116, .a=0x36, .x=0xf3, .y=0x30, .sp=0xcb, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe116, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe117, .a=0x36, .x=0x36, .y=0x30, .sp=0xcb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe116, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe116, .value=0x5d, .type=IO_READ},
        {.addr=0xe117, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4a90, .a=0xf2, .x=0x00, .y=0xc7, .sp=0x0f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4a90, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a91, .a=0xf2, .x=0xf2, .y=0xc7, .sp=0x0f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4a90, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4a90, .value=0x5d, .type=IO_READ},
        {.addr=0x4a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x0f73, .a=0x14, .x=0x72, .y=0xb6, .sp=0x9a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0f73, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0f74, .a=0x14, .x=0x14, .y=0xb6, .sp=0x9a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0f73, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0f73, .value=0x5d, .type=IO_READ},
        {.addr=0x0f74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0081) {
    const struct CPU_State initial_cpu = {.pc=0xd9d2, .a=0xae, .x=0x3d, .y=0x7b, .sp=0x21, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd9d3, .a=0xae, .x=0xae, .y=0x7b, .sp=0x21, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd9d2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd9d2, .value=0x5d, .type=IO_READ},
        {.addr=0xd9d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x2c70, .a=0xab, .x=0xd0, .y=0xfd, .sp=0xa9, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2c70, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2c71, .a=0xab, .x=0xab, .y=0xfd, .sp=0xa9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2c70, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2c70, .value=0x5d, .type=IO_READ},
        {.addr=0x2c71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x8056, .a=0x2f, .x=0x9f, .y=0x9b, .sp=0xb2, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8056, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8057, .a=0x2f, .x=0x2f, .y=0x9b, .sp=0xb2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8056, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8056, .value=0x5d, .type=IO_READ},
        {.addr=0x8057, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x8e71, .a=0xac, .x=0x2c, .y=0x28, .sp=0x8e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x8e71, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8e72, .a=0xac, .x=0xac, .y=0x28, .sp=0x8e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8e71, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8e71, .value=0x5d, .type=IO_READ},
        {.addr=0x8e72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0085) {
    const struct CPU_State initial_cpu = {.pc=0xb0b5, .a=0x6a, .x=0x03, .y=0x14, .sp=0xee, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb0b6, .a=0x6a, .x=0x6a, .y=0x14, .sp=0xee, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb0b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb0b5, .value=0x5d, .type=IO_READ},
        {.addr=0xb0b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x1ced, .a=0xdc, .x=0x1d, .y=0x4c, .sp=0xa1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x1ced, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1cee, .a=0xdc, .x=0xdc, .y=0x4c, .sp=0xa1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1ced, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1ced, .value=0x5d, .type=IO_READ},
        {.addr=0x1cee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0087) {
    const struct CPU_State initial_cpu = {.pc=0x586e, .a=0xb7, .x=0x15, .y=0x89, .sp=0xa2, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x586e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x586f, .a=0xb7, .x=0xb7, .y=0x89, .sp=0xa2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x586e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x586e, .value=0x5d, .type=IO_READ},
        {.addr=0x586f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0088) {
    const struct CPU_State initial_cpu = {.pc=0xaa62, .a=0x25, .x=0xad, .y=0xc8, .sp=0xfe, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xaa62, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaa63, .a=0x25, .x=0x25, .y=0xc8, .sp=0xfe, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xaa62, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaa62, .value=0x5d, .type=IO_READ},
        {.addr=0xaa63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0089) {
    const struct CPU_State initial_cpu = {.pc=0xcb1a, .a=0x0f, .x=0x1d, .y=0x54, .sp=0xc8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcb1b, .a=0x0f, .x=0x0f, .y=0x54, .sp=0xc8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xcb1a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcb1a, .value=0x5d, .type=IO_READ},
        {.addr=0xcb1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_008A) {
    const struct CPU_State initial_cpu = {.pc=0x9ffa, .a=0xdb, .x=0xfe, .y=0xc5, .sp=0x38, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9ffa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9ffb, .a=0xdb, .x=0xdb, .y=0xc5, .sp=0x38, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9ffa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9ffa, .value=0x5d, .type=IO_READ},
        {.addr=0x9ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xadcb, .a=0xbf, .x=0x3a, .y=0xde, .sp=0xd8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xadcb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xadcc, .a=0xbf, .x=0xbf, .y=0xde, .sp=0xd8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xadcb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xadcb, .value=0x5d, .type=IO_READ},
        {.addr=0xadcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_008C) {
    const struct CPU_State initial_cpu = {.pc=0xeb25, .a=0x50, .x=0xb2, .y=0xfb, .sp=0xd9, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xeb25, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeb26, .a=0x50, .x=0x50, .y=0xfb, .sp=0xd9, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xeb25, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeb25, .value=0x5d, .type=IO_READ},
        {.addr=0xeb26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_008D) {
    const struct CPU_State initial_cpu = {.pc=0x341b, .a=0x81, .x=0xd0, .y=0x82, .sp=0x54, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x341b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x341c, .a=0x81, .x=0x81, .y=0x82, .sp=0x54, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x341b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x341b, .value=0x5d, .type=IO_READ},
        {.addr=0x341c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x9d6c, .a=0x76, .x=0x3a, .y=0x79, .sp=0x5b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9d6c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9d6d, .a=0x76, .x=0x76, .y=0x79, .sp=0x5b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9d6c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9d6c, .value=0x5d, .type=IO_READ},
        {.addr=0x9d6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_008F) {
    const struct CPU_State initial_cpu = {.pc=0xd7ab, .a=0x0c, .x=0x6c, .y=0x58, .sp=0x80, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ab, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd7ac, .a=0x0c, .x=0x0c, .y=0x58, .sp=0x80, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd7ab, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd7ab, .value=0x5d, .type=IO_READ},
        {.addr=0xd7ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x46e7, .a=0x5a, .x=0x04, .y=0x9b, .sp=0x5a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x46e7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x46e8, .a=0x5a, .x=0x5a, .y=0x9b, .sp=0x5a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x46e7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x46e7, .value=0x5d, .type=IO_READ},
        {.addr=0x46e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0091) {
    const struct CPU_State initial_cpu = {.pc=0x9365, .a=0x2e, .x=0x09, .y=0x1c, .sp=0x55, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9365, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9366, .a=0x2e, .x=0x2e, .y=0x1c, .sp=0x55, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9365, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9365, .value=0x5d, .type=IO_READ},
        {.addr=0x9366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0092) {
    const struct CPU_State initial_cpu = {.pc=0x8bda, .a=0x4b, .x=0x4f, .y=0xd3, .sp=0x5a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8bda, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8bdb, .a=0x4b, .x=0x4b, .y=0xd3, .sp=0x5a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8bda, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8bda, .value=0x5d, .type=IO_READ},
        {.addr=0x8bdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x688a, .a=0x4e, .x=0x05, .y=0x7c, .sp=0x71, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x688a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x688b, .a=0x4e, .x=0x4e, .y=0x7c, .sp=0x71, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x688a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x688a, .value=0x5d, .type=IO_READ},
        {.addr=0x688b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0094) {
    const struct CPU_State initial_cpu = {.pc=0xcaa5, .a=0xfb, .x=0xaa, .y=0x5f, .sp=0x79, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcaa6, .a=0xfb, .x=0xfb, .y=0x5f, .sp=0x79, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xcaa5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcaa5, .value=0x5d, .type=IO_READ},
        {.addr=0xcaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc370, .a=0x1a, .x=0x40, .y=0xca, .sp=0x3d, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xc370, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc371, .a=0x1a, .x=0x1a, .y=0xca, .sp=0x3d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc370, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc370, .value=0x5d, .type=IO_READ},
        {.addr=0xc371, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0096) {
    const struct CPU_State initial_cpu = {.pc=0xeec5, .a=0x6e, .x=0x42, .y=0xcb, .sp=0xde, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xeec5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeec6, .a=0x6e, .x=0x6e, .y=0xcb, .sp=0xde, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xeec5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeec5, .value=0x5d, .type=IO_READ},
        {.addr=0xeec6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0097) {
    const struct CPU_State initial_cpu = {.pc=0xa4ac, .a=0xdb, .x=0x59, .y=0xe4, .sp=0xf2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xa4ac, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa4ad, .a=0xdb, .x=0xdb, .y=0xe4, .sp=0xf2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xa4ac, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa4ac, .value=0x5d, .type=IO_READ},
        {.addr=0xa4ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8b19, .a=0x34, .x=0x2e, .y=0x6d, .sp=0x4f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8b19, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8b1a, .a=0x34, .x=0x34, .y=0x6d, .sp=0x4f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8b19, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8b19, .value=0x5d, .type=IO_READ},
        {.addr=0x8b1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0099) {
    const struct CPU_State initial_cpu = {.pc=0xcc70, .a=0x8f, .x=0xb9, .y=0x5a, .sp=0x8e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcc70, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcc71, .a=0x8f, .x=0x8f, .y=0x5a, .sp=0x8e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcc70, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcc70, .value=0x5d, .type=IO_READ},
        {.addr=0xcc71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_009A) {
    const struct CPU_State initial_cpu = {.pc=0x65fb, .a=0x84, .x=0x91, .y=0xf4, .sp=0x18, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x65fb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x65fc, .a=0x84, .x=0x84, .y=0xf4, .sp=0x18, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x65fb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x65fb, .value=0x5d, .type=IO_READ},
        {.addr=0x65fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_009B) {
    const struct CPU_State initial_cpu = {.pc=0xc7f4, .a=0xf3, .x=0x67, .y=0xb0, .sp=0xf6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc7f5, .a=0xf3, .x=0xf3, .y=0xb0, .sp=0xf6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc7f4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc7f4, .value=0x5d, .type=IO_READ},
        {.addr=0xc7f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x6666, .a=0xbc, .x=0xbc, .y=0xb4, .sp=0xf0, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6666, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6667, .a=0xbc, .x=0xbc, .y=0xb4, .sp=0xf0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6666, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6666, .value=0x5d, .type=IO_READ},
        {.addr=0x6667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x5273, .a=0xda, .x=0x1b, .y=0x43, .sp=0x14, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x5273, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5274, .a=0xda, .x=0xda, .y=0x43, .sp=0x14, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5273, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5273, .value=0x5d, .type=IO_READ},
        {.addr=0x5274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_009F) {
    const struct CPU_State initial_cpu = {.pc=0xa71a, .a=0x9b, .x=0x62, .y=0x56, .sp=0x78, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa71a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa71b, .a=0x9b, .x=0x9b, .y=0x56, .sp=0x78, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa71a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa71a, .value=0x5d, .type=IO_READ},
        {.addr=0xa71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd008, .a=0xf3, .x=0x93, .y=0x5b, .sp=0x71, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd008, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd009, .a=0xf3, .x=0xf3, .y=0x5b, .sp=0x71, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd008, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd008, .value=0x5d, .type=IO_READ},
        {.addr=0xd009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x6469, .a=0x92, .x=0x39, .y=0xf1, .sp=0x38, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6469, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x646a, .a=0x92, .x=0x92, .y=0xf1, .sp=0x38, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6469, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6469, .value=0x5d, .type=IO_READ},
        {.addr=0x646a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x6296, .a=0xf4, .x=0xc1, .y=0xbe, .sp=0x0e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6296, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6297, .a=0xf4, .x=0xf4, .y=0xbe, .sp=0x0e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x6296, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6296, .value=0x5d, .type=IO_READ},
        {.addr=0x6297, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x52d6, .a=0xac, .x=0x63, .y=0x53, .sp=0x8c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x52d6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x52d7, .a=0xac, .x=0xac, .y=0x53, .sp=0x8c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x52d6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x52d6, .value=0x5d, .type=IO_READ},
        {.addr=0x52d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x6cf7, .a=0x41, .x=0xb7, .y=0x2c, .sp=0x8e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6cf8, .a=0x41, .x=0x41, .y=0x2c, .sp=0x8e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6cf7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6cf7, .value=0x5d, .type=IO_READ},
        {.addr=0x6cf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xf244, .a=0x25, .x=0xe8, .y=0xa2, .sp=0x93, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf244, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf245, .a=0x25, .x=0x25, .y=0xa2, .sp=0x93, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf244, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf244, .value=0x5d, .type=IO_READ},
        {.addr=0xf245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xab57, .a=0xad, .x=0x8d, .y=0xec, .sp=0x33, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xab57, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xab58, .a=0xad, .x=0xad, .y=0xec, .sp=0x33, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xab57, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xab57, .value=0x5d, .type=IO_READ},
        {.addr=0xab58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xcac0, .a=0x52, .x=0x8b, .y=0x3a, .sp=0x55, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xcac0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcac1, .a=0x52, .x=0x52, .y=0x3a, .sp=0x55, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcac0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcac0, .value=0x5d, .type=IO_READ},
        {.addr=0xcac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xd92e, .a=0xab, .x=0xc9, .y=0x06, .sp=0x19, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd92e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd92f, .a=0xab, .x=0xab, .y=0x06, .sp=0x19, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd92e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd92e, .value=0x5d, .type=IO_READ},
        {.addr=0xd92f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x37c4, .a=0x78, .x=0xb2, .y=0xdb, .sp=0x2d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x37c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x37c5, .a=0x78, .x=0x78, .y=0xdb, .sp=0x2d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x37c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x37c4, .value=0x5d, .type=IO_READ},
        {.addr=0x37c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x58ee, .a=0x2b, .x=0x8a, .y=0xbb, .sp=0x2d, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x58ee, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x58ef, .a=0x2b, .x=0x2b, .y=0xbb, .sp=0x2d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x58ee, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x58ee, .value=0x5d, .type=IO_READ},
        {.addr=0x58ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3fa4, .a=0x95, .x=0x45, .y=0xec, .sp=0xaf, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3fa5, .a=0x95, .x=0x95, .y=0xec, .sp=0xaf, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3fa4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3fa4, .value=0x5d, .type=IO_READ},
        {.addr=0x3fa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x3722, .a=0x7f, .x=0xa2, .y=0xf1, .sp=0xf6, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3722, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3723, .a=0x7f, .x=0x7f, .y=0xf1, .sp=0xf6, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3722, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3722, .value=0x5d, .type=IO_READ},
        {.addr=0x3723, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xddc9, .a=0x16, .x=0xde, .y=0xb7, .sp=0xf1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xddc9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xddca, .a=0x16, .x=0x16, .y=0xb7, .sp=0xf1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xddc9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xddc9, .value=0x5d, .type=IO_READ},
        {.addr=0xddca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xb322, .a=0xc9, .x=0x76, .y=0x74, .sp=0xdf, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb322, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb323, .a=0xc9, .x=0xc9, .y=0x74, .sp=0xdf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb322, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb322, .value=0x5d, .type=IO_READ},
        {.addr=0xb323, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xec16, .a=0x29, .x=0x8c, .y=0xc4, .sp=0x22, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xec16, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xec17, .a=0x29, .x=0x29, .y=0xc4, .sp=0x22, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xec16, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xec16, .value=0x5d, .type=IO_READ},
        {.addr=0xec17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x36b9, .a=0xd7, .x=0xec, .y=0xa9, .sp=0xef, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x36b9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x36ba, .a=0xd7, .x=0xd7, .y=0xa9, .sp=0xef, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x36b9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x36b9, .value=0x5d, .type=IO_READ},
        {.addr=0x36ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x91ed, .a=0x4c, .x=0x8e, .y=0x94, .sp=0xc9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x91ed, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x91ee, .a=0x4c, .x=0x4c, .y=0x94, .sp=0xc9, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x91ed, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x91ed, .value=0x5d, .type=IO_READ},
        {.addr=0x91ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xd3a7, .a=0x2b, .x=0x35, .y=0x2e, .sp=0x1d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd3a7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd3a8, .a=0x2b, .x=0x2b, .y=0x2e, .sp=0x1d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd3a7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd3a7, .value=0x5d, .type=IO_READ},
        {.addr=0xd3a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7283, .a=0x12, .x=0x14, .y=0x1a, .sp=0x3a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7283, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7284, .a=0x12, .x=0x12, .y=0x1a, .sp=0x3a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7283, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7283, .value=0x5d, .type=IO_READ},
        {.addr=0x7284, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x7070, .a=0xf7, .x=0x45, .y=0xd3, .sp=0x87, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7070, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7071, .a=0xf7, .x=0xf7, .y=0xd3, .sp=0x87, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7070, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7070, .value=0x5d, .type=IO_READ},
        {.addr=0x7071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xe7b7, .a=0x9c, .x=0xa8, .y=0xf2, .sp=0xcd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe7b8, .a=0x9c, .x=0x9c, .y=0xf2, .sp=0xcd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe7b7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe7b7, .value=0x5d, .type=IO_READ},
        {.addr=0xe7b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x4def, .a=0xf7, .x=0xb8, .y=0xbb, .sp=0x73, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4def, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4df0, .a=0xf7, .x=0xf7, .y=0xbb, .sp=0x73, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4def, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4def, .value=0x5d, .type=IO_READ},
        {.addr=0x4df0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x8381, .a=0xfe, .x=0xb7, .y=0x53, .sp=0x7c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8381, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8382, .a=0xfe, .x=0xfe, .y=0x53, .sp=0x7c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8381, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8381, .value=0x5d, .type=IO_READ},
        {.addr=0x8382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xb757, .a=0x7e, .x=0xdf, .y=0xd8, .sp=0xa0, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xb757, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb758, .a=0x7e, .x=0x7e, .y=0xd8, .sp=0xa0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb757, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb757, .value=0x5d, .type=IO_READ},
        {.addr=0xb758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xa4a5, .a=0x8f, .x=0x78, .y=0xdc, .sp=0x42, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa4a5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa4a6, .a=0x8f, .x=0x8f, .y=0xdc, .sp=0x42, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa4a5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa4a5, .value=0x5d, .type=IO_READ},
        {.addr=0xa4a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x7b73, .a=0x97, .x=0x6e, .y=0xfe, .sp=0xb0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7b73, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7b74, .a=0x97, .x=0x97, .y=0xfe, .sp=0xb0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7b73, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7b73, .value=0x5d, .type=IO_READ},
        {.addr=0x7b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb883, .a=0x57, .x=0xed, .y=0xfe, .sp=0xd9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb883, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb884, .a=0x57, .x=0x57, .y=0xfe, .sp=0xd9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb883, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb883, .value=0x5d, .type=IO_READ},
        {.addr=0xb884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6975, .a=0x8e, .x=0xbc, .y=0xae, .sp=0xa7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6975, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6976, .a=0x8e, .x=0x8e, .y=0xae, .sp=0xa7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6975, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6975, .value=0x5d, .type=IO_READ},
        {.addr=0x6976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xe8ea, .a=0x87, .x=0x27, .y=0xc3, .sp=0x7b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ea, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe8eb, .a=0x87, .x=0x87, .y=0xc3, .sp=0x7b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe8ea, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe8ea, .value=0x5d, .type=IO_READ},
        {.addr=0xe8eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xb90b, .a=0xcb, .x=0x30, .y=0x16, .sp=0x51, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb90b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb90c, .a=0xcb, .x=0xcb, .y=0x16, .sp=0x51, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb90b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb90b, .value=0x5d, .type=IO_READ},
        {.addr=0xb90c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x2c39, .a=0xe5, .x=0xaf, .y=0xd4, .sp=0xcb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x2c39, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2c3a, .a=0xe5, .x=0xe5, .y=0xd4, .sp=0xcb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2c39, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2c39, .value=0x5d, .type=IO_READ},
        {.addr=0x2c3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x7e4e, .a=0xe1, .x=0x0a, .y=0x0b, .sp=0x59, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x7e4e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e4f, .a=0xe1, .x=0xe1, .y=0x0b, .sp=0x59, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7e4e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e4e, .value=0x5d, .type=IO_READ},
        {.addr=0x7e4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x181f, .a=0x42, .x=0x05, .y=0x18, .sp=0xb2, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x181f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1820, .a=0x42, .x=0x42, .y=0x18, .sp=0xb2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x181f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x181f, .value=0x5d, .type=IO_READ},
        {.addr=0x1820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x5d3f, .a=0xc2, .x=0x9b, .y=0x18, .sp=0x99, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5d3f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5d40, .a=0xc2, .x=0xc2, .y=0x18, .sp=0x99, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5d3f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5d3f, .value=0x5d, .type=IO_READ},
        {.addr=0x5d40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x76e8, .a=0x3f, .x=0xc7, .y=0xc8, .sp=0x0b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x76e8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x76e9, .a=0x3f, .x=0x3f, .y=0xc8, .sp=0x0b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x76e8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x76e8, .value=0x5d, .type=IO_READ},
        {.addr=0x76e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xb40e, .a=0x09, .x=0x1f, .y=0x80, .sp=0xd1, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb40e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb40f, .a=0x09, .x=0x09, .y=0x80, .sp=0xd1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb40e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb40e, .value=0x5d, .type=IO_READ},
        {.addr=0xb40f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x9da6, .a=0xed, .x=0x39, .y=0xa5, .sp=0x61, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x9da6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9da7, .a=0xed, .x=0xed, .y=0xa5, .sp=0x61, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9da6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9da6, .value=0x5d, .type=IO_READ},
        {.addr=0x9da7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xac09, .a=0x1a, .x=0x06, .y=0x1a, .sp=0x7c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xac09, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xac0a, .a=0x1a, .x=0x1a, .y=0x1a, .sp=0x7c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xac09, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xac09, .value=0x5d, .type=IO_READ},
        {.addr=0xac0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb11b, .a=0x02, .x=0xd0, .y=0x62, .sp=0x86, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xb11b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb11c, .a=0x02, .x=0x02, .y=0x62, .sp=0x86, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb11b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb11b, .value=0x5d, .type=IO_READ},
        {.addr=0xb11c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x394b, .a=0xaf, .x=0x4f, .y=0xe4, .sp=0xc8, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x394b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x394c, .a=0xaf, .x=0xaf, .y=0xe4, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x394b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x394b, .value=0x5d, .type=IO_READ},
        {.addr=0x394c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x882e, .a=0x7a, .x=0x71, .y=0x3f, .sp=0x83, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x882e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x882f, .a=0x7a, .x=0x7a, .y=0x3f, .sp=0x83, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x882e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x882e, .value=0x5d, .type=IO_READ},
        {.addr=0x882f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x3676, .a=0xc5, .x=0x10, .y=0xc9, .sp=0xf5, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3676, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3677, .a=0xc5, .x=0xc5, .y=0xc9, .sp=0xf5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3676, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3676, .value=0x5d, .type=IO_READ},
        {.addr=0x3677, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xea24, .a=0x2d, .x=0xa9, .y=0xf6, .sp=0xce, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xea24, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xea25, .a=0x2d, .x=0x2d, .y=0xf6, .sp=0xce, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xea24, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xea24, .value=0x5d, .type=IO_READ},
        {.addr=0xea25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x6453, .a=0x53, .x=0x5c, .y=0x52, .sp=0x2f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6453, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6454, .a=0x53, .x=0x53, .y=0x52, .sp=0x2f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6453, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6453, .value=0x5d, .type=IO_READ},
        {.addr=0x6454, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x7dd1, .a=0xcc, .x=0xe2, .y=0xd8, .sp=0xe0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7dd2, .a=0xcc, .x=0xcc, .y=0xd8, .sp=0xe0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7dd1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7dd1, .value=0x5d, .type=IO_READ},
        {.addr=0x7dd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x28aa, .a=0x99, .x=0xbd, .y=0xd6, .sp=0xe2, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x28aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x28ab, .a=0x99, .x=0x99, .y=0xd6, .sp=0xe2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x28aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x28aa, .value=0x5d, .type=IO_READ},
        {.addr=0x28ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xed8e, .a=0xb4, .x=0x41, .y=0x1a, .sp=0x94, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xed8e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xed8f, .a=0xb4, .x=0xb4, .y=0x1a, .sp=0x94, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xed8e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xed8e, .value=0x5d, .type=IO_READ},
        {.addr=0xed8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xe98b, .a=0xf1, .x=0x84, .y=0x1e, .sp=0x28, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xe98b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe98c, .a=0xf1, .x=0xf1, .y=0x1e, .sp=0x28, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe98b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe98b, .value=0x5d, .type=IO_READ},
        {.addr=0xe98c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x47f7, .a=0x4d, .x=0x68, .y=0xbc, .sp=0xe8, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x47f7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x47f8, .a=0x4d, .x=0x4d, .y=0xbc, .sp=0xe8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x47f7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x47f7, .value=0x5d, .type=IO_READ},
        {.addr=0x47f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xb776, .a=0xbb, .x=0x13, .y=0x88, .sp=0x83, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb776, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb777, .a=0xbb, .x=0xbb, .y=0x88, .sp=0x83, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb776, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb776, .value=0x5d, .type=IO_READ},
        {.addr=0xb777, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x64b5, .a=0x58, .x=0x60, .y=0x3c, .sp=0xa2, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x64b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x64b6, .a=0x58, .x=0x58, .y=0x3c, .sp=0xa2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x64b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x64b5, .value=0x5d, .type=IO_READ},
        {.addr=0x64b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x9977, .a=0xd1, .x=0x31, .y=0x0d, .sp=0x54, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9977, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9978, .a=0xd1, .x=0xd1, .y=0x0d, .sp=0x54, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9977, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9977, .value=0x5d, .type=IO_READ},
        {.addr=0x9978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xa9b6, .a=0x5e, .x=0x7a, .y=0x85, .sp=0x8c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa9b7, .a=0x5e, .x=0x5e, .y=0x85, .sp=0x8c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa9b6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa9b6, .value=0x5d, .type=IO_READ},
        {.addr=0xa9b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x4425, .a=0xe3, .x=0xca, .y=0xb4, .sp=0xac, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x4425, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4426, .a=0xe3, .x=0xe3, .y=0xb4, .sp=0xac, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4425, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4425, .value=0x5d, .type=IO_READ},
        {.addr=0x4426, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xa5aa, .a=0x9f, .x=0xe8, .y=0x90, .sp=0xba, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa5aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa5ab, .a=0x9f, .x=0x9f, .y=0x90, .sp=0xba, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa5aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa5aa, .value=0x5d, .type=IO_READ},
        {.addr=0xa5ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x38f3, .a=0x76, .x=0x45, .y=0x16, .sp=0xa7, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x38f3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x38f4, .a=0x76, .x=0x76, .y=0x16, .sp=0xa7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x38f3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x38f3, .value=0x5d, .type=IO_READ},
        {.addr=0x38f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xe520, .a=0xe3, .x=0x4f, .y=0xe9, .sp=0x85, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe520, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe521, .a=0xe3, .x=0xe3, .y=0xe9, .sp=0x85, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe520, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe520, .value=0x5d, .type=IO_READ},
        {.addr=0xe521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x4a81, .a=0x3f, .x=0xcc, .y=0x1d, .sp=0x8e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4a81, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a82, .a=0x3f, .x=0x3f, .y=0x1d, .sp=0x8e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4a81, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4a81, .value=0x5d, .type=IO_READ},
        {.addr=0x4a82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x1ff9, .a=0xe1, .x=0xb8, .y=0x9e, .sp=0xad, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1ffa, .a=0xe1, .x=0xe1, .y=0x9e, .sp=0xad, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1ff9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1ff9, .value=0x5d, .type=IO_READ},
        {.addr=0x1ffa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x26d1, .a=0xe8, .x=0xd5, .y=0x9b, .sp=0x26, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x26d1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x26d2, .a=0xe8, .x=0xe8, .y=0x9b, .sp=0x26, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x26d1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x26d1, .value=0x5d, .type=IO_READ},
        {.addr=0x26d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x7613, .a=0x6a, .x=0xde, .y=0x62, .sp=0xe8, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7613, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7614, .a=0x6a, .x=0x6a, .y=0x62, .sp=0xe8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7613, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7613, .value=0x5d, .type=IO_READ},
        {.addr=0x7614, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x37f0, .a=0x01, .x=0x53, .y=0x80, .sp=0x74, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x37f0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x37f1, .a=0x01, .x=0x01, .y=0x80, .sp=0x74, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x37f0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x37f0, .value=0x5d, .type=IO_READ},
        {.addr=0x37f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xa41c, .a=0x2f, .x=0x4b, .y=0xf1, .sp=0x58, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa41c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa41d, .a=0x2f, .x=0x2f, .y=0xf1, .sp=0x58, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa41c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa41c, .value=0x5d, .type=IO_READ},
        {.addr=0xa41d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc302, .a=0x7e, .x=0x7e, .y=0x6a, .sp=0xce, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc302, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc303, .a=0x7e, .x=0x7e, .y=0x6a, .sp=0xce, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc302, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc302, .value=0x5d, .type=IO_READ},
        {.addr=0xc303, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xf588, .a=0x25, .x=0xe4, .y=0x3c, .sp=0x8a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xf588, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf589, .a=0x25, .x=0x25, .y=0x3c, .sp=0x8a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf588, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf588, .value=0x5d, .type=IO_READ},
        {.addr=0xf589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x582f, .a=0xb4, .x=0x31, .y=0x2d, .sp=0x90, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x582f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5830, .a=0xb4, .x=0xb4, .y=0x2d, .sp=0x90, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x582f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x582f, .value=0x5d, .type=IO_READ},
        {.addr=0x5830, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xf3d4, .a=0xbf, .x=0x52, .y=0xd9, .sp=0x2c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf3d4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf3d5, .a=0xbf, .x=0xbf, .y=0xd9, .sp=0x2c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf3d4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf3d4, .value=0x5d, .type=IO_READ},
        {.addr=0xf3d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xfbc6, .a=0xb7, .x=0x10, .y=0xcc, .sp=0x4d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xfbc6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfbc7, .a=0xb7, .x=0xb7, .y=0xcc, .sp=0x4d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xfbc6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfbc6, .value=0x5d, .type=IO_READ},
        {.addr=0xfbc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x4549, .a=0x8c, .x=0xa1, .y=0xe7, .sp=0x96, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4549, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x454a, .a=0x8c, .x=0x8c, .y=0xe7, .sp=0x96, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4549, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4549, .value=0x5d, .type=IO_READ},
        {.addr=0x454a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x68d2, .a=0xf5, .x=0x18, .y=0x23, .sp=0xfb, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x68d2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x68d3, .a=0xf5, .x=0xf5, .y=0x23, .sp=0xfb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x68d2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x68d2, .value=0x5d, .type=IO_READ},
        {.addr=0x68d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x1d10, .a=0xcb, .x=0x29, .y=0xf0, .sp=0xc8, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1d10, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1d11, .a=0xcb, .x=0xcb, .y=0xf0, .sp=0xc8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1d10, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1d10, .value=0x5d, .type=IO_READ},
        {.addr=0x1d11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xea7e, .a=0x60, .x=0xbe, .y=0x81, .sp=0x94, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xea7e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xea7f, .a=0x60, .x=0x60, .y=0x81, .sp=0x94, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xea7e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xea7e, .value=0x5d, .type=IO_READ},
        {.addr=0xea7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0xc0, .x=0x21, .y=0xe8, .sp=0x88, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x996c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0xc0, .x=0xc0, .y=0xe8, .sp=0x88, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x996c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0x5d, .type=IO_READ},
        {.addr=0x996d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x62cf, .a=0xba, .x=0xf9, .y=0x2a, .sp=0x88, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x62cf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x62d0, .a=0xba, .x=0xba, .y=0x2a, .sp=0x88, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x62cf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x62cf, .value=0x5d, .type=IO_READ},
        {.addr=0x62d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xe02a, .a=0xba, .x=0x88, .y=0x53, .sp=0x1f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xe02a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe02b, .a=0xba, .x=0xba, .y=0x53, .sp=0x1f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe02a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe02a, .value=0x5d, .type=IO_READ},
        {.addr=0xe02b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xec54, .a=0x73, .x=0x0c, .y=0x55, .sp=0x29, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xec54, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xec55, .a=0x73, .x=0x73, .y=0x55, .sp=0x29, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xec54, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xec54, .value=0x5d, .type=IO_READ},
        {.addr=0xec55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x7b0c, .a=0x1b, .x=0x37, .y=0xfd, .sp=0x44, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7b0c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7b0d, .a=0x1b, .x=0x1b, .y=0xfd, .sp=0x44, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7b0c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7b0c, .value=0x5d, .type=IO_READ},
        {.addr=0x7b0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x1713, .a=0x63, .x=0x44, .y=0x7d, .sp=0x60, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1713, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1714, .a=0x63, .x=0x63, .y=0x7d, .sp=0x60, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1713, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1713, .value=0x5d, .type=IO_READ},
        {.addr=0x1714, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xbd35, .a=0xb8, .x=0x39, .y=0x7a, .sp=0x24, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xbd35, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbd36, .a=0xb8, .x=0xb8, .y=0x7a, .sp=0x24, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xbd35, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbd35, .value=0x5d, .type=IO_READ},
        {.addr=0xbd36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x699a, .a=0xcf, .x=0x97, .y=0x3e, .sp=0x63, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x699a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x699b, .a=0xcf, .x=0xcf, .y=0x3e, .sp=0x63, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x699a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x699a, .value=0x5d, .type=IO_READ},
        {.addr=0x699b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x91fe, .a=0xb3, .x=0x95, .y=0x04, .sp=0x4c, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x91fe, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x91ff, .a=0xb3, .x=0xb3, .y=0x04, .sp=0x4c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x91fe, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x91fe, .value=0x5d, .type=IO_READ},
        {.addr=0x91ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x6e34, .a=0x05, .x=0xb9, .y=0xee, .sp=0x3e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6e34, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6e35, .a=0x05, .x=0x05, .y=0xee, .sp=0x3e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6e34, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6e34, .value=0x5d, .type=IO_READ},
        {.addr=0x6e35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x1ad1, .a=0xfd, .x=0xcd, .y=0x60, .sp=0x8a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x1ad1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1ad2, .a=0xfd, .x=0xfd, .y=0x60, .sp=0x8a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1ad1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1ad1, .value=0x5d, .type=IO_READ},
        {.addr=0x1ad2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x3a6f, .a=0x37, .x=0xc5, .y=0x8f, .sp=0x92, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3a6f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3a70, .a=0x37, .x=0x37, .y=0x8f, .sp=0x92, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3a6f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3a6f, .value=0x5d, .type=IO_READ},
        {.addr=0x3a70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xf988, .a=0x78, .x=0xa0, .y=0xec, .sp=0xe7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf988, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf989, .a=0x78, .x=0x78, .y=0xec, .sp=0xe7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf988, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf988, .value=0x5d, .type=IO_READ},
        {.addr=0xf989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xf57b, .a=0x47, .x=0xcd, .y=0x03, .sp=0x60, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xf57b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf57c, .a=0x47, .x=0x47, .y=0x03, .sp=0x60, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf57b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf57b, .value=0x5d, .type=IO_READ},
        {.addr=0xf57c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xbd74, .a=0x2e, .x=0x5a, .y=0x22, .sp=0xcd, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xbd74, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbd75, .a=0x2e, .x=0x2e, .y=0x22, .sp=0xcd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xbd74, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbd74, .value=0x5d, .type=IO_READ},
        {.addr=0xbd75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc965, .a=0x7f, .x=0xc7, .y=0xe4, .sp=0x35, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc965, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc966, .a=0x7f, .x=0x7f, .y=0xe4, .sp=0x35, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc965, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc965, .value=0x5d, .type=IO_READ},
        {.addr=0xc966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x4f58, .a=0x94, .x=0xc5, .y=0x84, .sp=0x98, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x4f58, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4f59, .a=0x94, .x=0x94, .y=0x84, .sp=0x98, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4f58, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4f58, .value=0x5d, .type=IO_READ},
        {.addr=0x4f59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xd161, .a=0xcb, .x=0xe4, .y=0x2e, .sp=0x98, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd161, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd162, .a=0xcb, .x=0xcb, .y=0x2e, .sp=0x98, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd161, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd161, .value=0x5d, .type=IO_READ},
        {.addr=0xd162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x579c, .a=0x9f, .x=0x4f, .y=0xf7, .sp=0x82, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x579c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x579d, .a=0x9f, .x=0x9f, .y=0xf7, .sp=0x82, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x579c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x579c, .value=0x5d, .type=IO_READ},
        {.addr=0x579d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x61d7, .a=0x04, .x=0xfb, .y=0x02, .sp=0xde, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x61d7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x61d8, .a=0x04, .x=0x04, .y=0x02, .sp=0xde, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x61d7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x61d7, .value=0x5d, .type=IO_READ},
        {.addr=0x61d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb276, .a=0x39, .x=0x22, .y=0x3d, .sp=0x42, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb276, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb277, .a=0x39, .x=0x39, .y=0x3d, .sp=0x42, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb276, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb276, .value=0x5d, .type=IO_READ},
        {.addr=0xb277, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x4ca0, .a=0x97, .x=0x6e, .y=0xc6, .sp=0xaa, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4ca1, .a=0x97, .x=0x97, .y=0xc6, .sp=0xaa, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4ca0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca0, .value=0x5d, .type=IO_READ},
        {.addr=0x4ca1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xa225, .a=0xa2, .x=0xd3, .y=0x2f, .sp=0xda, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xa225, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa226, .a=0xa2, .x=0xa2, .y=0x2f, .sp=0xda, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa225, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa225, .value=0x5d, .type=IO_READ},
        {.addr=0xa226, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x04e0, .a=0x09, .x=0x01, .y=0x3b, .sp=0xb7, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x04e0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x04e1, .a=0x09, .x=0x09, .y=0x3b, .sp=0xb7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x04e0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x04e0, .value=0x5d, .type=IO_READ},
        {.addr=0x04e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0101) {
    const struct CPU_State initial_cpu = {.pc=0x1918, .a=0x1c, .x=0xa1, .y=0x84, .sp=0xca, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1918, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1919, .a=0x1c, .x=0x1c, .y=0x84, .sp=0xca, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1918, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1918, .value=0x5d, .type=IO_READ},
        {.addr=0x1919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0102) {
    const struct CPU_State initial_cpu = {.pc=0x6a7c, .a=0xaf, .x=0xfe, .y=0x57, .sp=0x8c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6a7d, .a=0xaf, .x=0xaf, .y=0x57, .sp=0x8c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6a7c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6a7c, .value=0x5d, .type=IO_READ},
        {.addr=0x6a7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0103) {
    const struct CPU_State initial_cpu = {.pc=0x8223, .a=0xc5, .x=0x0f, .y=0xde, .sp=0x94, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x8223, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8224, .a=0xc5, .x=0xc5, .y=0xde, .sp=0x94, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8223, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8223, .value=0x5d, .type=IO_READ},
        {.addr=0x8224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0104) {
    const struct CPU_State initial_cpu = {.pc=0xb540, .a=0xef, .x=0x46, .y=0x80, .sp=0x8e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb540, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb541, .a=0xef, .x=0xef, .y=0x80, .sp=0x8e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb540, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb540, .value=0x5d, .type=IO_READ},
        {.addr=0xb541, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x94b5, .a=0xa5, .x=0xb6, .y=0x04, .sp=0xbe, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x94b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x94b6, .a=0xa5, .x=0xa5, .y=0x04, .sp=0xbe, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x94b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x94b5, .value=0x5d, .type=IO_READ},
        {.addr=0x94b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0106) {
    const struct CPU_State initial_cpu = {.pc=0x84e4, .a=0x26, .x=0x74, .y=0x4f, .sp=0xfb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x84e4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x84e5, .a=0x26, .x=0x26, .y=0x4f, .sp=0xfb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x84e4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x84e4, .value=0x5d, .type=IO_READ},
        {.addr=0x84e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x3709, .a=0xcc, .x=0x77, .y=0x88, .sp=0x15, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3709, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x370a, .a=0xcc, .x=0xcc, .y=0x88, .sp=0x15, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3709, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3709, .value=0x5d, .type=IO_READ},
        {.addr=0x370a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xcd15, .a=0xef, .x=0xb7, .y=0x1d, .sp=0xd0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xcd15, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcd16, .a=0xef, .x=0xef, .y=0x1d, .sp=0xd0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcd15, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcd15, .value=0x5d, .type=IO_READ},
        {.addr=0xcd16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0109) {
    const struct CPU_State initial_cpu = {.pc=0xc472, .a=0xb4, .x=0xcc, .y=0x0c, .sp=0x0c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xc472, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc473, .a=0xb4, .x=0xb4, .y=0x0c, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc472, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc472, .value=0x5d, .type=IO_READ},
        {.addr=0xc473, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_010A) {
    const struct CPU_State initial_cpu = {.pc=0xbe26, .a=0x50, .x=0x84, .y=0x09, .sp=0x17, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xbe26, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbe27, .a=0x50, .x=0x50, .y=0x09, .sp=0x17, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbe26, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbe26, .value=0x5d, .type=IO_READ},
        {.addr=0xbe27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_010B) {
    const struct CPU_State initial_cpu = {.pc=0xa659, .a=0xaf, .x=0x58, .y=0x14, .sp=0x71, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa659, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa65a, .a=0xaf, .x=0xaf, .y=0x14, .sp=0x71, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xa659, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa659, .value=0x5d, .type=IO_READ},
        {.addr=0xa65a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x1065, .a=0xfa, .x=0x71, .y=0x6c, .sp=0xd2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x1065, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1066, .a=0xfa, .x=0xfa, .y=0x6c, .sp=0xd2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1065, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1065, .value=0x5d, .type=IO_READ},
        {.addr=0x1066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_010D) {
    const struct CPU_State initial_cpu = {.pc=0xeb58, .a=0x3f, .x=0x46, .y=0x45, .sp=0x84, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xeb58, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeb59, .a=0x3f, .x=0x3f, .y=0x45, .sp=0x84, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xeb58, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeb58, .value=0x5d, .type=IO_READ},
        {.addr=0xeb59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_010E) {
    const struct CPU_State initial_cpu = {.pc=0xfdd1, .a=0x0c, .x=0x45, .y=0x7c, .sp=0x2a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfdd2, .a=0x0c, .x=0x0c, .y=0x7c, .sp=0x2a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xfdd1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfdd1, .value=0x5d, .type=IO_READ},
        {.addr=0xfdd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_010F) {
    const struct CPU_State initial_cpu = {.pc=0xbfaf, .a=0xfc, .x=0x15, .y=0x1d, .sp=0x50, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xbfaf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbfb0, .a=0xfc, .x=0xfc, .y=0x1d, .sp=0x50, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbfaf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbfaf, .value=0x5d, .type=IO_READ},
        {.addr=0xbfb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x0975, .a=0x36, .x=0x48, .y=0xb9, .sp=0xaf, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0975, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0976, .a=0x36, .x=0x36, .y=0xb9, .sp=0xaf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0975, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0975, .value=0x5d, .type=IO_READ},
        {.addr=0x0976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x5663, .a=0xd1, .x=0x93, .y=0xa6, .sp=0xda, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x5663, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5664, .a=0xd1, .x=0xd1, .y=0xa6, .sp=0xda, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5663, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5663, .value=0x5d, .type=IO_READ},
        {.addr=0x5664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x03b6, .a=0x0c, .x=0xdf, .y=0xd8, .sp=0xcd, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x03b6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x03b7, .a=0x0c, .x=0x0c, .y=0xd8, .sp=0xcd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x03b6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x03b6, .value=0x5d, .type=IO_READ},
        {.addr=0x03b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0113) {
    const struct CPU_State initial_cpu = {.pc=0xd175, .a=0xe1, .x=0xe8, .y=0xb7, .sp=0xcb, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd175, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd176, .a=0xe1, .x=0xe1, .y=0xb7, .sp=0xcb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd175, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd175, .value=0x5d, .type=IO_READ},
        {.addr=0xd176, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0114) {
    const struct CPU_State initial_cpu = {.pc=0xa1af, .a=0x3d, .x=0x0f, .y=0xcb, .sp=0xf0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa1af, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa1b0, .a=0x3d, .x=0x3d, .y=0xcb, .sp=0xf0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa1af, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa1af, .value=0x5d, .type=IO_READ},
        {.addr=0xa1b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0115) {
    const struct CPU_State initial_cpu = {.pc=0x098c, .a=0x66, .x=0x29, .y=0x19, .sp=0x38, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x098c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x098d, .a=0x66, .x=0x66, .y=0x19, .sp=0x38, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x098c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x098c, .value=0x5d, .type=IO_READ},
        {.addr=0x098d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0116) {
    const struct CPU_State initial_cpu = {.pc=0xfa48, .a=0x8a, .x=0xa5, .y=0x2d, .sp=0x43, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xfa48, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfa49, .a=0x8a, .x=0x8a, .y=0x2d, .sp=0x43, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xfa48, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfa48, .value=0x5d, .type=IO_READ},
        {.addr=0xfa49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0117) {
    const struct CPU_State initial_cpu = {.pc=0x699c, .a=0xf9, .x=0xb8, .y=0xd0, .sp=0x9e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x699c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x699d, .a=0xf9, .x=0xf9, .y=0xd0, .sp=0x9e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x699c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x699c, .value=0x5d, .type=IO_READ},
        {.addr=0x699d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0118) {
    const struct CPU_State initial_cpu = {.pc=0xbfa1, .a=0x0b, .x=0x4b, .y=0x8b, .sp=0xa2, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbfa2, .a=0x0b, .x=0x0b, .y=0x8b, .sp=0xa2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbfa1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbfa1, .value=0x5d, .type=IO_READ},
        {.addr=0xbfa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x3789, .a=0xad, .x=0x80, .y=0x5c, .sp=0xe4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3789, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x378a, .a=0xad, .x=0xad, .y=0x5c, .sp=0xe4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3789, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3789, .value=0x5d, .type=IO_READ},
        {.addr=0x378a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x398e, .a=0xd8, .x=0xea, .y=0xea, .sp=0xa4, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x398e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x398f, .a=0xd8, .x=0xd8, .y=0xea, .sp=0xa4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x398e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x398e, .value=0x5d, .type=IO_READ},
        {.addr=0x398f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x7513, .a=0xbf, .x=0x07, .y=0x10, .sp=0xca, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7513, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7514, .a=0xbf, .x=0xbf, .y=0x10, .sp=0xca, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7513, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7513, .value=0x5d, .type=IO_READ},
        {.addr=0x7514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x2613, .a=0xfe, .x=0x93, .y=0xf0, .sp=0x9c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2613, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2614, .a=0xfe, .x=0xfe, .y=0xf0, .sp=0x9c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2613, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2613, .value=0x5d, .type=IO_READ},
        {.addr=0x2614, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_011D) {
    const struct CPU_State initial_cpu = {.pc=0xcbad, .a=0xf3, .x=0x3f, .y=0xfe, .sp=0x41, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xcbad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcbae, .a=0xf3, .x=0xf3, .y=0xfe, .sp=0x41, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xcbad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcbad, .value=0x5d, .type=IO_READ},
        {.addr=0xcbae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_011E) {
    const struct CPU_State initial_cpu = {.pc=0xf25e, .a=0xab, .x=0xef, .y=0xad, .sp=0x74, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xf25e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf25f, .a=0xab, .x=0xab, .y=0xad, .sp=0x74, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf25e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf25e, .value=0x5d, .type=IO_READ},
        {.addr=0xf25f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_011F) {
    const struct CPU_State initial_cpu = {.pc=0x28b6, .a=0xdc, .x=0x09, .y=0x97, .sp=0x19, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x28b6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x28b7, .a=0xdc, .x=0xdc, .y=0x97, .sp=0x19, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x28b6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x28b6, .value=0x5d, .type=IO_READ},
        {.addr=0x28b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf05e, .a=0x64, .x=0x3d, .y=0x02, .sp=0x2c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf05e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf05f, .a=0x64, .x=0x64, .y=0x02, .sp=0x2c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf05e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf05e, .value=0x5d, .type=IO_READ},
        {.addr=0xf05f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x817f, .a=0x1d, .x=0xa8, .y=0xa3, .sp=0x17, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x817f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8180, .a=0x1d, .x=0x1d, .y=0xa3, .sp=0x17, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x817f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x817f, .value=0x5d, .type=IO_READ},
        {.addr=0x8180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x97a2, .a=0x6d, .x=0xdb, .y=0x81, .sp=0xbf, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x97a2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x97a3, .a=0x6d, .x=0x6d, .y=0x81, .sp=0xbf, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x97a2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x97a2, .value=0x5d, .type=IO_READ},
        {.addr=0x97a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0123) {
    const struct CPU_State initial_cpu = {.pc=0xaab4, .a=0x93, .x=0xd5, .y=0x07, .sp=0xe8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xaab4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaab5, .a=0x93, .x=0x93, .y=0x07, .sp=0xe8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xaab4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaab4, .value=0x5d, .type=IO_READ},
        {.addr=0xaab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1389, .a=0x0c, .x=0x26, .y=0x7e, .sp=0x58, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1389, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x138a, .a=0x0c, .x=0x0c, .y=0x7e, .sp=0x58, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1389, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1389, .value=0x5d, .type=IO_READ},
        {.addr=0x138a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0125) {
    const struct CPU_State initial_cpu = {.pc=0x9ed2, .a=0x1a, .x=0x26, .y=0x81, .sp=0xfd, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9ed2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9ed3, .a=0x1a, .x=0x1a, .y=0x81, .sp=0xfd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9ed2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9ed2, .value=0x5d, .type=IO_READ},
        {.addr=0x9ed3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0126) {
    const struct CPU_State initial_cpu = {.pc=0xcddb, .a=0xbb, .x=0x4f, .y=0xde, .sp=0x07, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xcddb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcddc, .a=0xbb, .x=0xbb, .y=0xde, .sp=0x07, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xcddb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcddb, .value=0x5d, .type=IO_READ},
        {.addr=0xcddc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0127) {
    const struct CPU_State initial_cpu = {.pc=0x49b4, .a=0x69, .x=0x07, .y=0x31, .sp=0xad, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x49b4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x49b5, .a=0x69, .x=0x69, .y=0x31, .sp=0xad, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x49b4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x49b4, .value=0x5d, .type=IO_READ},
        {.addr=0x49b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0128) {
    const struct CPU_State initial_cpu = {.pc=0xb3f4, .a=0x0c, .x=0x53, .y=0x6e, .sp=0x5e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb3f5, .a=0x0c, .x=0x0c, .y=0x6e, .sp=0x5e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb3f4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb3f4, .value=0x5d, .type=IO_READ},
        {.addr=0xb3f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0129) {
    const struct CPU_State initial_cpu = {.pc=0xd1a4, .a=0x3d, .x=0x6c, .y=0x0d, .sp=0x9d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd1a5, .a=0x3d, .x=0x3d, .y=0x0d, .sp=0x9d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd1a4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd1a4, .value=0x5d, .type=IO_READ},
        {.addr=0xd1a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_012A) {
    const struct CPU_State initial_cpu = {.pc=0xba3e, .a=0x45, .x=0x66, .y=0x23, .sp=0x50, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xba3e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xba3f, .a=0x45, .x=0x45, .y=0x23, .sp=0x50, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xba3e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xba3e, .value=0x5d, .type=IO_READ},
        {.addr=0xba3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_012B) {
    const struct CPU_State initial_cpu = {.pc=0xca0c, .a=0x30, .x=0x5e, .y=0xf6, .sp=0xb1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xca0c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xca0d, .a=0x30, .x=0x30, .y=0xf6, .sp=0xb1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xca0c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xca0c, .value=0x5d, .type=IO_READ},
        {.addr=0xca0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_012C) {
    const struct CPU_State initial_cpu = {.pc=0xb8c1, .a=0xde, .x=0x37, .y=0xb1, .sp=0x4f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb8c2, .a=0xde, .x=0xde, .y=0xb1, .sp=0x4f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb8c1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb8c1, .value=0x5d, .type=IO_READ},
        {.addr=0xb8c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_012D) {
    const struct CPU_State initial_cpu = {.pc=0xbc4f, .a=0x35, .x=0xd4, .y=0x9a, .sp=0xf6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc4f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbc50, .a=0x35, .x=0x35, .y=0x9a, .sp=0xf6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xbc4f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbc4f, .value=0x5d, .type=IO_READ},
        {.addr=0xbc50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_012E) {
    const struct CPU_State initial_cpu = {.pc=0x9c3d, .a=0x75, .x=0x87, .y=0x44, .sp=0xec, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c3d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9c3e, .a=0x75, .x=0x75, .y=0x44, .sp=0xec, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9c3d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9c3d, .value=0x5d, .type=IO_READ},
        {.addr=0x9c3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_012F) {
    const struct CPU_State initial_cpu = {.pc=0x93ea, .a=0x3b, .x=0x00, .y=0x32, .sp=0x52, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x93ea, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x93eb, .a=0x3b, .x=0x3b, .y=0x32, .sp=0x52, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x93ea, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x93ea, .value=0x5d, .type=IO_READ},
        {.addr=0x93eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x288c, .a=0x76, .x=0x13, .y=0x62, .sp=0x98, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x288c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x288d, .a=0x76, .x=0x76, .y=0x62, .sp=0x98, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x288c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x288c, .value=0x5d, .type=IO_READ},
        {.addr=0x288d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0131) {
    const struct CPU_State initial_cpu = {.pc=0x90aa, .a=0xe5, .x=0x16, .y=0x45, .sp=0x9d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x90aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x90ab, .a=0xe5, .x=0xe5, .y=0x45, .sp=0x9d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x90aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x90aa, .value=0x5d, .type=IO_READ},
        {.addr=0x90ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x494f, .a=0xe6, .x=0x17, .y=0x72, .sp=0xcb, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x494f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4950, .a=0xe6, .x=0xe6, .y=0x72, .sp=0xcb, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x494f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x494f, .value=0x5d, .type=IO_READ},
        {.addr=0x4950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0133) {
    const struct CPU_State initial_cpu = {.pc=0x16fd, .a=0xd4, .x=0xfe, .y=0xed, .sp=0x16, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x16fd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x16fe, .a=0xd4, .x=0xd4, .y=0xed, .sp=0x16, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x16fd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x16fd, .value=0x5d, .type=IO_READ},
        {.addr=0x16fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0134) {
    const struct CPU_State initial_cpu = {.pc=0x6804, .a=0x76, .x=0x2c, .y=0x3c, .sp=0xd3, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6804, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6805, .a=0x76, .x=0x76, .y=0x3c, .sp=0xd3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6804, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6804, .value=0x5d, .type=IO_READ},
        {.addr=0x6805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0135) {
    const struct CPU_State initial_cpu = {.pc=0x8a33, .a=0x6d, .x=0xf4, .y=0xa5, .sp=0x80, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8a33, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8a34, .a=0x6d, .x=0x6d, .y=0xa5, .sp=0x80, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8a33, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8a33, .value=0x5d, .type=IO_READ},
        {.addr=0x8a34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xca9b, .a=0x1f, .x=0x7f, .y=0x99, .sp=0xce, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xca9b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xca9c, .a=0x1f, .x=0x1f, .y=0x99, .sp=0xce, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xca9b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xca9b, .value=0x5d, .type=IO_READ},
        {.addr=0xca9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x328a, .a=0xe4, .x=0x06, .y=0x88, .sp=0x4a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x328a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x328b, .a=0xe4, .x=0xe4, .y=0x88, .sp=0x4a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x328a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x328a, .value=0x5d, .type=IO_READ},
        {.addr=0x328b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0138) {
    const struct CPU_State initial_cpu = {.pc=0xc585, .a=0xf5, .x=0xf7, .y=0xfc, .sp=0xc0, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc585, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc586, .a=0xf5, .x=0xf5, .y=0xfc, .sp=0xc0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc585, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc585, .value=0x5d, .type=IO_READ},
        {.addr=0xc586, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0139) {
    const struct CPU_State initial_cpu = {.pc=0xc0af, .a=0x68, .x=0xe9, .y=0x93, .sp=0xc9, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc0af, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc0b0, .a=0x68, .x=0x68, .y=0x93, .sp=0xc9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc0af, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc0af, .value=0x5d, .type=IO_READ},
        {.addr=0xc0b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_013A) {
    const struct CPU_State initial_cpu = {.pc=0x952e, .a=0x4d, .x=0xc1, .y=0x03, .sp=0x5a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x952e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x952f, .a=0x4d, .x=0x4d, .y=0x03, .sp=0x5a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x952e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x952e, .value=0x5d, .type=IO_READ},
        {.addr=0x952f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_013B) {
    const struct CPU_State initial_cpu = {.pc=0x0a7b, .a=0xf9, .x=0xc1, .y=0x41, .sp=0x8c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0a7b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0a7c, .a=0xf9, .x=0xf9, .y=0x41, .sp=0x8c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0a7b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0a7b, .value=0x5d, .type=IO_READ},
        {.addr=0x0a7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x9b25, .a=0x00, .x=0x8b, .y=0x2d, .sp=0x89, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9b25, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9b26, .a=0x00, .x=0x00, .y=0x2d, .sp=0x89, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x9b25, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9b25, .value=0x5d, .type=IO_READ},
        {.addr=0x9b26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_013D) {
    const struct CPU_State initial_cpu = {.pc=0xab46, .a=0x6b, .x=0x0f, .y=0xe5, .sp=0x72, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xab46, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xab47, .a=0x6b, .x=0x6b, .y=0xe5, .sp=0x72, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xab46, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xab46, .value=0x5d, .type=IO_READ},
        {.addr=0xab47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xd36a, .a=0x80, .x=0xd0, .y=0x55, .sp=0xfd, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd36a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd36b, .a=0x80, .x=0x80, .y=0x55, .sp=0xfd, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd36a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd36a, .value=0x5d, .type=IO_READ},
        {.addr=0xd36b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x1041, .a=0xb8, .x=0xb6, .y=0x4f, .sp=0xc4, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x1041, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1042, .a=0xb8, .x=0xb8, .y=0x4f, .sp=0xc4, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x1041, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1041, .value=0x5d, .type=IO_READ},
        {.addr=0x1042, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0140) {
    const struct CPU_State initial_cpu = {.pc=0xf13a, .a=0x3f, .x=0xd0, .y=0x30, .sp=0xbb, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf13a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf13b, .a=0x3f, .x=0x3f, .y=0x30, .sp=0xbb, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf13a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf13a, .value=0x5d, .type=IO_READ},
        {.addr=0xf13b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0141) {
    const struct CPU_State initial_cpu = {.pc=0x28b5, .a=0xc0, .x=0xd3, .y=0x55, .sp=0x3b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x28b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x28b6, .a=0xc0, .x=0xc0, .y=0x55, .sp=0x3b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x28b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x28b5, .value=0x5d, .type=IO_READ},
        {.addr=0x28b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0142) {
    const struct CPU_State initial_cpu = {.pc=0x134e, .a=0xbe, .x=0x40, .y=0x62, .sp=0x89, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x134e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x134f, .a=0xbe, .x=0xbe, .y=0x62, .sp=0x89, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x134e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x134e, .value=0x5d, .type=IO_READ},
        {.addr=0x134f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf7bc, .a=0x31, .x=0xfe, .y=0x82, .sp=0xf8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf7bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf7bd, .a=0x31, .x=0x31, .y=0x82, .sp=0xf8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf7bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf7bc, .value=0x5d, .type=IO_READ},
        {.addr=0xf7bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5a57, .a=0x88, .x=0x1b, .y=0xbc, .sp=0x8a, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5a57, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5a58, .a=0x88, .x=0x88, .y=0xbc, .sp=0x8a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5a57, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5a57, .value=0x5d, .type=IO_READ},
        {.addr=0x5a58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x35fc, .a=0x85, .x=0x24, .y=0xaf, .sp=0xf4, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x35fc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x35fd, .a=0x85, .x=0x85, .y=0xaf, .sp=0xf4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x35fc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x35fc, .value=0x5d, .type=IO_READ},
        {.addr=0x35fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x4b8f, .a=0x05, .x=0x74, .y=0x9d, .sp=0x2a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x4b8f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4b90, .a=0x05, .x=0x05, .y=0x9d, .sp=0x2a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4b8f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4b8f, .value=0x5d, .type=IO_READ},
        {.addr=0x4b90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x33ee, .a=0xae, .x=0xeb, .y=0xa7, .sp=0xa4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x33ee, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33ef, .a=0xae, .x=0xae, .y=0xa7, .sp=0xa4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x33ee, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x33ee, .value=0x5d, .type=IO_READ},
        {.addr=0x33ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x2d0e, .a=0x3d, .x=0x87, .y=0x0b, .sp=0x77, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2d0e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2d0f, .a=0x3d, .x=0x3d, .y=0x0b, .sp=0x77, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2d0e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2d0e, .value=0x5d, .type=IO_READ},
        {.addr=0x2d0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x265d, .a=0x6c, .x=0xa6, .y=0x0f, .sp=0x7e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x265d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x265e, .a=0x6c, .x=0x6c, .y=0x0f, .sp=0x7e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x265d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x265d, .value=0x5d, .type=IO_READ},
        {.addr=0x265e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x731b, .a=0xae, .x=0x28, .y=0x0d, .sp=0xe9, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x731b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x731c, .a=0xae, .x=0xae, .y=0x0d, .sp=0xe9, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x731b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x731b, .value=0x5d, .type=IO_READ},
        {.addr=0x731c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xc3b1, .a=0x28, .x=0xf1, .y=0x3c, .sp=0x9d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc3b2, .a=0x28, .x=0x28, .y=0x3c, .sp=0x9d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc3b1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc3b1, .value=0x5d, .type=IO_READ},
        {.addr=0xc3b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_014C) {
    const struct CPU_State initial_cpu = {.pc=0xadf8, .a=0x32, .x=0xa2, .y=0x09, .sp=0x8c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xadf8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xadf9, .a=0x32, .x=0x32, .y=0x09, .sp=0x8c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xadf8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xadf8, .value=0x5d, .type=IO_READ},
        {.addr=0xadf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_014D) {
    const struct CPU_State initial_cpu = {.pc=0xe1d4, .a=0x2d, .x=0xfe, .y=0x17, .sp=0x74, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe1d5, .a=0x2d, .x=0x2d, .y=0x17, .sp=0x74, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe1d4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe1d4, .value=0x5d, .type=IO_READ},
        {.addr=0xe1d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_014E) {
    const struct CPU_State initial_cpu = {.pc=0x1e60, .a=0x52, .x=0x6c, .y=0x5e, .sp=0x4b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1e60, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1e61, .a=0x52, .x=0x52, .y=0x5e, .sp=0x4b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1e60, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1e60, .value=0x5d, .type=IO_READ},
        {.addr=0x1e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x8071, .a=0x71, .x=0x9a, .y=0xd9, .sp=0x30, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8071, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8072, .a=0x71, .x=0x71, .y=0xd9, .sp=0x30, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8071, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8071, .value=0x5d, .type=IO_READ},
        {.addr=0x8072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x557e, .a=0x69, .x=0x3d, .y=0x50, .sp=0x9a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x557e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x557f, .a=0x69, .x=0x69, .y=0x50, .sp=0x9a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x557e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x557e, .value=0x5d, .type=IO_READ},
        {.addr=0x557f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0151) {
    const struct CPU_State initial_cpu = {.pc=0x44c4, .a=0x49, .x=0xf5, .y=0xfd, .sp=0x23, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x44c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x44c5, .a=0x49, .x=0x49, .y=0xfd, .sp=0x23, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x44c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x44c4, .value=0x5d, .type=IO_READ},
        {.addr=0x44c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0152) {
    const struct CPU_State initial_cpu = {.pc=0xc33f, .a=0x8e, .x=0x59, .y=0x97, .sp=0xea, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc33f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc340, .a=0x8e, .x=0x8e, .y=0x97, .sp=0xea, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc33f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc33f, .value=0x5d, .type=IO_READ},
        {.addr=0xc340, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0153) {
    const struct CPU_State initial_cpu = {.pc=0xc30f, .a=0x1c, .x=0x83, .y=0xea, .sp=0x36, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc30f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc310, .a=0x1c, .x=0x1c, .y=0xea, .sp=0x36, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc30f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc30f, .value=0x5d, .type=IO_READ},
        {.addr=0xc310, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0154) {
    const struct CPU_State initial_cpu = {.pc=0xd019, .a=0x52, .x=0x48, .y=0x11, .sp=0xdd, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xd019, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd01a, .a=0x52, .x=0x52, .y=0x11, .sp=0xdd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd019, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd019, .value=0x5d, .type=IO_READ},
        {.addr=0xd01a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0155) {
    const struct CPU_State initial_cpu = {.pc=0xf069, .a=0x70, .x=0x67, .y=0x7e, .sp=0xcd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xf069, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf06a, .a=0x70, .x=0x70, .y=0x7e, .sp=0xcd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf069, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf069, .value=0x5d, .type=IO_READ},
        {.addr=0xf06a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0156) {
    const struct CPU_State initial_cpu = {.pc=0xd829, .a=0x24, .x=0xf1, .y=0xf5, .sp=0xf5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd829, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd82a, .a=0x24, .x=0x24, .y=0xf5, .sp=0xf5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd829, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd829, .value=0x5d, .type=IO_READ},
        {.addr=0xd82a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0157) {
    const struct CPU_State initial_cpu = {.pc=0xa0f5, .a=0xf7, .x=0x71, .y=0xae, .sp=0x93, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa0f6, .a=0xf7, .x=0xf7, .y=0xae, .sp=0x93, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa0f5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa0f5, .value=0x5d, .type=IO_READ},
        {.addr=0xa0f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0158) {
    const struct CPU_State initial_cpu = {.pc=0xaef6, .a=0xab, .x=0xe0, .y=0x95, .sp=0xdd, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xaef6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaef7, .a=0xab, .x=0xab, .y=0x95, .sp=0xdd, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xaef6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaef6, .value=0x5d, .type=IO_READ},
        {.addr=0xaef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x25bc, .a=0x11, .x=0x8f, .y=0xa8, .sp=0x8e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x25bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x25bd, .a=0x11, .x=0x11, .y=0xa8, .sp=0x8e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x25bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x25bc, .value=0x5d, .type=IO_READ},
        {.addr=0x25bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x6374, .a=0xea, .x=0x10, .y=0xa0, .sp=0x94, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6374, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6375, .a=0xea, .x=0xea, .y=0xa0, .sp=0x94, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6374, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6374, .value=0x5d, .type=IO_READ},
        {.addr=0x6375, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_015B) {
    const struct CPU_State initial_cpu = {.pc=0x5905, .a=0x93, .x=0xae, .y=0xf1, .sp=0x97, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x5905, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5906, .a=0x93, .x=0x93, .y=0xf1, .sp=0x97, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5905, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5905, .value=0x5d, .type=IO_READ},
        {.addr=0x5906, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x89da, .a=0x1d, .x=0x94, .y=0x39, .sp=0x30, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x89da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x89db, .a=0x1d, .x=0x1d, .y=0x39, .sp=0x30, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x89da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x89da, .value=0x5d, .type=IO_READ},
        {.addr=0x89db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_015D) {
    const struct CPU_State initial_cpu = {.pc=0x5756, .a=0xad, .x=0x9e, .y=0x4d, .sp=0xa7, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x5756, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5757, .a=0xad, .x=0xad, .y=0x4d, .sp=0xa7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5756, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5756, .value=0x5d, .type=IO_READ},
        {.addr=0x5757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_015E) {
    const struct CPU_State initial_cpu = {.pc=0x8bbc, .a=0xf8, .x=0x2d, .y=0x97, .sp=0xdb, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8bbc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8bbd, .a=0xf8, .x=0xf8, .y=0x97, .sp=0xdb, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8bbc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8bbc, .value=0x5d, .type=IO_READ},
        {.addr=0x8bbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_015F) {
    const struct CPU_State initial_cpu = {.pc=0xde40, .a=0x2b, .x=0xd0, .y=0x21, .sp=0x0b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xde40, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xde41, .a=0x2b, .x=0x2b, .y=0x21, .sp=0x0b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xde40, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xde40, .value=0x5d, .type=IO_READ},
        {.addr=0xde41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0160) {
    const struct CPU_State initial_cpu = {.pc=0x82f3, .a=0x20, .x=0x35, .y=0xc0, .sp=0x5b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x82f3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x82f4, .a=0x20, .x=0x20, .y=0xc0, .sp=0x5b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x82f3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x82f3, .value=0x5d, .type=IO_READ},
        {.addr=0x82f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xafab, .a=0x24, .x=0xa0, .y=0xa2, .sp=0x8f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xafab, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xafac, .a=0x24, .x=0x24, .y=0xa2, .sp=0x8f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xafab, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xafab, .value=0x5d, .type=IO_READ},
        {.addr=0xafac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x69b2, .a=0x79, .x=0xf2, .y=0x79, .sp=0x20, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x69b2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x69b3, .a=0x79, .x=0x79, .y=0x79, .sp=0x20, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x69b2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x69b2, .value=0x5d, .type=IO_READ},
        {.addr=0x69b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0163) {
    const struct CPU_State initial_cpu = {.pc=0x0634, .a=0x49, .x=0xd4, .y=0x68, .sp=0x7e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0634, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0635, .a=0x49, .x=0x49, .y=0x68, .sp=0x7e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0634, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0634, .value=0x5d, .type=IO_READ},
        {.addr=0x0635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0164) {
    const struct CPU_State initial_cpu = {.pc=0x51bc, .a=0xb2, .x=0x69, .y=0x2e, .sp=0xd0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x51bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x51bd, .a=0xb2, .x=0xb2, .y=0x2e, .sp=0xd0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x51bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x51bc, .value=0x5d, .type=IO_READ},
        {.addr=0x51bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x78ab, .a=0x24, .x=0x21, .y=0xe7, .sp=0x97, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x78ab, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x78ac, .a=0x24, .x=0x24, .y=0xe7, .sp=0x97, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x78ab, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x78ab, .value=0x5d, .type=IO_READ},
        {.addr=0x78ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x713d, .a=0x01, .x=0x15, .y=0xcd, .sp=0xe0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x713d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x713e, .a=0x01, .x=0x01, .y=0xcd, .sp=0xe0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x713d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x713d, .value=0x5d, .type=IO_READ},
        {.addr=0x713e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0167) {
    const struct CPU_State initial_cpu = {.pc=0x5cdc, .a=0xa9, .x=0xce, .y=0x3f, .sp=0x87, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5cdc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5cdd, .a=0xa9, .x=0xa9, .y=0x3f, .sp=0x87, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5cdc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5cdc, .value=0x5d, .type=IO_READ},
        {.addr=0x5cdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0168) {
    const struct CPU_State initial_cpu = {.pc=0xf997, .a=0x95, .x=0x93, .y=0x4f, .sp=0x9d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xf997, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf998, .a=0x95, .x=0x95, .y=0x4f, .sp=0x9d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf997, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf997, .value=0x5d, .type=IO_READ},
        {.addr=0xf998, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0169) {
    const struct CPU_State initial_cpu = {.pc=0x2a60, .a=0x25, .x=0x65, .y=0x31, .sp=0x19, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2a60, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2a61, .a=0x25, .x=0x25, .y=0x31, .sp=0x19, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2a60, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2a60, .value=0x5d, .type=IO_READ},
        {.addr=0x2a61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_016A) {
    const struct CPU_State initial_cpu = {.pc=0xf797, .a=0xde, .x=0xa7, .y=0x45, .sp=0x42, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf797, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf798, .a=0xde, .x=0xde, .y=0x45, .sp=0x42, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf797, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf797, .value=0x5d, .type=IO_READ},
        {.addr=0xf798, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x5df6, .a=0x26, .x=0xfa, .y=0x99, .sp=0xdf, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5df6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5df7, .a=0x26, .x=0x26, .y=0x99, .sp=0xdf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5df6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5df6, .value=0x5d, .type=IO_READ},
        {.addr=0x5df7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x468c, .a=0x54, .x=0x18, .y=0x4c, .sp=0xf4, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x468c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x468d, .a=0x54, .x=0x54, .y=0x4c, .sp=0xf4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x468c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x468c, .value=0x5d, .type=IO_READ},
        {.addr=0x468d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_016D) {
    const struct CPU_State initial_cpu = {.pc=0x495d, .a=0xe1, .x=0x10, .y=0x17, .sp=0xff, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x495d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x495e, .a=0xe1, .x=0xe1, .y=0x17, .sp=0xff, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x495d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x495d, .value=0x5d, .type=IO_READ},
        {.addr=0x495e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_016E) {
    const struct CPU_State initial_cpu = {.pc=0xd98b, .a=0x51, .x=0x68, .y=0xee, .sp=0xbc, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd98b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd98c, .a=0x51, .x=0x51, .y=0xee, .sp=0xbc, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd98b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd98b, .value=0x5d, .type=IO_READ},
        {.addr=0xd98c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_016F) {
    const struct CPU_State initial_cpu = {.pc=0xd957, .a=0xf4, .x=0xd8, .y=0x19, .sp=0xb7, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd957, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd958, .a=0xf4, .x=0xf4, .y=0x19, .sp=0xb7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd957, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd957, .value=0x5d, .type=IO_READ},
        {.addr=0xd958, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x91da, .a=0x34, .x=0xa3, .y=0x45, .sp=0x86, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x91da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x91db, .a=0x34, .x=0x34, .y=0x45, .sp=0x86, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x91da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x91da, .value=0x5d, .type=IO_READ},
        {.addr=0x91db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0171) {
    const struct CPU_State initial_cpu = {.pc=0x2beb, .a=0x08, .x=0x1b, .y=0xa9, .sp=0x0b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x2beb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2bec, .a=0x08, .x=0x08, .y=0xa9, .sp=0x0b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2beb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2beb, .value=0x5d, .type=IO_READ},
        {.addr=0x2bec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0172) {
    const struct CPU_State initial_cpu = {.pc=0xc91e, .a=0xb5, .x=0x94, .y=0x38, .sp=0xe8, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc91e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc91f, .a=0xb5, .x=0xb5, .y=0x38, .sp=0xe8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc91e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc91e, .value=0x5d, .type=IO_READ},
        {.addr=0xc91f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0173) {
    const struct CPU_State initial_cpu = {.pc=0xd3f1, .a=0xf6, .x=0x8c, .y=0x5d, .sp=0xff, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd3f2, .a=0xf6, .x=0xf6, .y=0x5d, .sp=0xff, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd3f1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd3f1, .value=0x5d, .type=IO_READ},
        {.addr=0xd3f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0174) {
    const struct CPU_State initial_cpu = {.pc=0xf450, .a=0xcb, .x=0xd1, .y=0x6b, .sp=0x15, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf450, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf451, .a=0xcb, .x=0xcb, .y=0x6b, .sp=0x15, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf450, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf450, .value=0x5d, .type=IO_READ},
        {.addr=0xf451, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0175) {
    const struct CPU_State initial_cpu = {.pc=0xb7fd, .a=0xea, .x=0x6d, .y=0xd8, .sp=0x7b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb7fe, .a=0xea, .x=0xea, .y=0xd8, .sp=0x7b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb7fd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb7fd, .value=0x5d, .type=IO_READ},
        {.addr=0xb7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x65f4, .a=0x07, .x=0xd8, .y=0x17, .sp=0x80, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x65f4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x65f5, .a=0x07, .x=0x07, .y=0x17, .sp=0x80, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x65f4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x65f4, .value=0x5d, .type=IO_READ},
        {.addr=0x65f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xeb58, .a=0x27, .x=0x94, .y=0xdc, .sp=0xca, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xeb58, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeb59, .a=0x27, .x=0x27, .y=0xdc, .sp=0xca, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xeb58, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeb58, .value=0x5d, .type=IO_READ},
        {.addr=0xeb59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0178) {
    const struct CPU_State initial_cpu = {.pc=0x2245, .a=0x7c, .x=0xae, .y=0x41, .sp=0x27, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x2245, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2246, .a=0x7c, .x=0x7c, .y=0x41, .sp=0x27, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2245, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2245, .value=0x5d, .type=IO_READ},
        {.addr=0x2246, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0179) {
    const struct CPU_State initial_cpu = {.pc=0xc48e, .a=0x28, .x=0xef, .y=0x4a, .sp=0x89, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xc48e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc48f, .a=0x28, .x=0x28, .y=0x4a, .sp=0x89, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc48e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc48e, .value=0x5d, .type=IO_READ},
        {.addr=0xc48f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x68fc, .a=0xe8, .x=0x35, .y=0xab, .sp=0xdb, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x68fc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x68fd, .a=0xe8, .x=0xe8, .y=0xab, .sp=0xdb, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x68fc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x68fc, .value=0x5d, .type=IO_READ},
        {.addr=0x68fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_017B) {
    const struct CPU_State initial_cpu = {.pc=0xc5eb, .a=0x1d, .x=0xba, .y=0x19, .sp=0xb8, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc5eb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc5ec, .a=0x1d, .x=0x1d, .y=0x19, .sp=0xb8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc5eb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc5eb, .value=0x5d, .type=IO_READ},
        {.addr=0xc5ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_017C) {
    const struct CPU_State initial_cpu = {.pc=0x04ed, .a=0x36, .x=0x4f, .y=0x60, .sp=0xed, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x04ed, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x04ee, .a=0x36, .x=0x36, .y=0x60, .sp=0xed, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x04ed, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x04ed, .value=0x5d, .type=IO_READ},
        {.addr=0x04ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x02cd, .a=0xec, .x=0xe3, .y=0xa5, .sp=0x24, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x02cd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x02ce, .a=0xec, .x=0xec, .y=0xa5, .sp=0x24, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x02cd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x02cd, .value=0x5d, .type=IO_READ},
        {.addr=0x02ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_017E) {
    const struct CPU_State initial_cpu = {.pc=0x4a50, .a=0x35, .x=0x63, .y=0xb2, .sp=0xd5, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4a50, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a51, .a=0x35, .x=0x35, .y=0xb2, .sp=0xd5, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4a50, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4a50, .value=0x5d, .type=IO_READ},
        {.addr=0x4a51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x7235, .a=0xfe, .x=0x99, .y=0x48, .sp=0x76, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7235, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7236, .a=0xfe, .x=0xfe, .y=0x48, .sp=0x76, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7235, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7235, .value=0x5d, .type=IO_READ},
        {.addr=0x7236, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0180) {
    const struct CPU_State initial_cpu = {.pc=0xec81, .a=0x26, .x=0x3f, .y=0x3b, .sp=0xce, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xec81, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xec82, .a=0x26, .x=0x26, .y=0x3b, .sp=0xce, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xec81, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xec81, .value=0x5d, .type=IO_READ},
        {.addr=0xec82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0181) {
    const struct CPU_State initial_cpu = {.pc=0xe18f, .a=0x8f, .x=0x85, .y=0x9a, .sp=0xa3, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xe18f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe190, .a=0x8f, .x=0x8f, .y=0x9a, .sp=0xa3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe18f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe18f, .value=0x5d, .type=IO_READ},
        {.addr=0xe190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x012d, .a=0x88, .x=0x8e, .y=0xdc, .sp=0xdd, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x012e, .a=0x88, .x=0x88, .y=0xdc, .sp=0xdd, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x012d, .value=0x5d, .type=IO_READ},
        {.addr=0x012e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0183) {
    const struct CPU_State initial_cpu = {.pc=0xa72a, .a=0xc1, .x=0x94, .y=0x34, .sp=0x52, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa72a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa72b, .a=0xc1, .x=0xc1, .y=0x34, .sp=0x52, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa72a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa72a, .value=0x5d, .type=IO_READ},
        {.addr=0xa72b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0184) {
    const struct CPU_State initial_cpu = {.pc=0x9ad5, .a=0x75, .x=0xce, .y=0x54, .sp=0x11, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9ad6, .a=0x75, .x=0x75, .y=0x54, .sp=0x11, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9ad5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9ad5, .value=0x5d, .type=IO_READ},
        {.addr=0x9ad6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x95e8, .a=0x85, .x=0xcd, .y=0xc6, .sp=0xaf, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x95e8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x95e9, .a=0x85, .x=0x85, .y=0xc6, .sp=0xaf, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x95e8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x95e8, .value=0x5d, .type=IO_READ},
        {.addr=0x95e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0186) {
    const struct CPU_State initial_cpu = {.pc=0xa158, .a=0x74, .x=0xdb, .y=0x0e, .sp=0xcd, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa158, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa159, .a=0x74, .x=0x74, .y=0x0e, .sp=0xcd, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa158, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa158, .value=0x5d, .type=IO_READ},
        {.addr=0xa159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0187) {
    const struct CPU_State initial_cpu = {.pc=0x20c1, .a=0xf3, .x=0xc4, .y=0xb9, .sp=0x88, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x20c1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x20c2, .a=0xf3, .x=0xf3, .y=0xb9, .sp=0x88, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x20c1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x20c1, .value=0x5d, .type=IO_READ},
        {.addr=0x20c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x716e, .a=0x9e, .x=0xda, .y=0x0d, .sp=0x8f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x716e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x716f, .a=0x9e, .x=0x9e, .y=0x0d, .sp=0x8f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x716e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x716e, .value=0x5d, .type=IO_READ},
        {.addr=0x716f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x7096, .a=0xbf, .x=0x8d, .y=0xd8, .sp=0x53, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x7096, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7097, .a=0xbf, .x=0xbf, .y=0xd8, .sp=0x53, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x7096, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7096, .value=0x5d, .type=IO_READ},
        {.addr=0x7097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_018A) {
    const struct CPU_State initial_cpu = {.pc=0xe750, .a=0x8a, .x=0x84, .y=0x41, .sp=0x4d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe750, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe751, .a=0x8a, .x=0x8a, .y=0x41, .sp=0x4d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe750, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe750, .value=0x5d, .type=IO_READ},
        {.addr=0xe751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_018B) {
    const struct CPU_State initial_cpu = {.pc=0xb6c7, .a=0x9f, .x=0x0f, .y=0x38, .sp=0x0d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb6c8, .a=0x9f, .x=0x9f, .y=0x38, .sp=0x0d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb6c7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb6c7, .value=0x5d, .type=IO_READ},
        {.addr=0xb6c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x79f5, .a=0xd6, .x=0x6b, .y=0x28, .sp=0x26, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x79f5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x79f6, .a=0xd6, .x=0xd6, .y=0x28, .sp=0x26, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x79f5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x79f5, .value=0x5d, .type=IO_READ},
        {.addr=0x79f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x464f, .a=0xd2, .x=0xc8, .y=0x86, .sp=0x3b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x464f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4650, .a=0xd2, .x=0xd2, .y=0x86, .sp=0x3b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x464f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x464f, .value=0x5d, .type=IO_READ},
        {.addr=0x4650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_018E) {
    const struct CPU_State initial_cpu = {.pc=0xcaf8, .a=0x5f, .x=0x59, .y=0xb3, .sp=0x94, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcaf9, .a=0x5f, .x=0x5f, .y=0xb3, .sp=0x94, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xcaf8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcaf8, .value=0x5d, .type=IO_READ},
        {.addr=0xcaf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_018F) {
    const struct CPU_State initial_cpu = {.pc=0xce1a, .a=0x6d, .x=0x99, .y=0x0e, .sp=0x68, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xce1a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xce1b, .a=0x6d, .x=0x6d, .y=0x0e, .sp=0x68, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xce1a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xce1a, .value=0x5d, .type=IO_READ},
        {.addr=0xce1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xcda3, .a=0x36, .x=0xeb, .y=0x38, .sp=0x14, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xcda3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcda4, .a=0x36, .x=0x36, .y=0x38, .sp=0x14, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xcda3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcda3, .value=0x5d, .type=IO_READ},
        {.addr=0xcda4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0191) {
    const struct CPU_State initial_cpu = {.pc=0xbe62, .a=0xcc, .x=0x9c, .y=0x10, .sp=0x64, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xbe62, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbe63, .a=0xcc, .x=0xcc, .y=0x10, .sp=0x64, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xbe62, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbe62, .value=0x5d, .type=IO_READ},
        {.addr=0xbe63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0192) {
    const struct CPU_State initial_cpu = {.pc=0xd38c, .a=0x17, .x=0x83, .y=0xfa, .sp=0xaf, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xd38c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd38d, .a=0x17, .x=0x17, .y=0xfa, .sp=0xaf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd38c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd38c, .value=0x5d, .type=IO_READ},
        {.addr=0xd38d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0193) {
    const struct CPU_State initial_cpu = {.pc=0x0e19, .a=0x71, .x=0x19, .y=0x36, .sp=0x82, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0e19, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0e1a, .a=0x71, .x=0x71, .y=0x36, .sp=0x82, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0e19, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0e19, .value=0x5d, .type=IO_READ},
        {.addr=0x0e1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0194) {
    const struct CPU_State initial_cpu = {.pc=0xe89b, .a=0x2f, .x=0x1a, .y=0x13, .sp=0x79, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xe89b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe89c, .a=0x2f, .x=0x2f, .y=0x13, .sp=0x79, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe89b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe89b, .value=0x5d, .type=IO_READ},
        {.addr=0xe89c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0195) {
    const struct CPU_State initial_cpu = {.pc=0xd7df, .a=0xc5, .x=0xba, .y=0xc4, .sp=0x5b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd7df, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd7e0, .a=0xc5, .x=0xc5, .y=0xc4, .sp=0x5b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd7df, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd7df, .value=0x5d, .type=IO_READ},
        {.addr=0xd7e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x1954, .a=0x8a, .x=0xa4, .y=0x9b, .sp=0x23, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x1954, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1955, .a=0x8a, .x=0x8a, .y=0x9b, .sp=0x23, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1954, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1954, .value=0x5d, .type=IO_READ},
        {.addr=0x1955, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x2900, .a=0x74, .x=0x41, .y=0x3a, .sp=0x67, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x2900, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2901, .a=0x74, .x=0x74, .y=0x3a, .sp=0x67, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2900, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2900, .value=0x5d, .type=IO_READ},
        {.addr=0x2901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x63ef, .a=0x64, .x=0x74, .y=0xb2, .sp=0xde, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x63ef, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x63f0, .a=0x64, .x=0x64, .y=0xb2, .sp=0xde, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x63ef, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x63ef, .value=0x5d, .type=IO_READ},
        {.addr=0x63f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0199) {
    const struct CPU_State initial_cpu = {.pc=0xc0aa, .a=0xd3, .x=0xe6, .y=0xd3, .sp=0x6a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc0aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc0ab, .a=0xd3, .x=0xd3, .y=0xd3, .sp=0x6a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc0aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc0aa, .value=0x5d, .type=IO_READ},
        {.addr=0xc0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x3981, .a=0x68, .x=0xa8, .y=0x70, .sp=0x28, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3981, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3982, .a=0x68, .x=0x68, .y=0x70, .sp=0x28, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3981, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3981, .value=0x5d, .type=IO_READ},
        {.addr=0x3982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_019B) {
    const struct CPU_State initial_cpu = {.pc=0xdc18, .a=0x46, .x=0x1b, .y=0x4e, .sp=0xac, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xdc18, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdc19, .a=0x46, .x=0x46, .y=0x4e, .sp=0xac, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xdc18, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdc18, .value=0x5d, .type=IO_READ},
        {.addr=0xdc19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_019C) {
    const struct CPU_State initial_cpu = {.pc=0xaf00, .a=0xe2, .x=0xbc, .y=0xad, .sp=0x22, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xaf00, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaf01, .a=0xe2, .x=0xe2, .y=0xad, .sp=0x22, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xaf00, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaf00, .value=0x5d, .type=IO_READ},
        {.addr=0xaf01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_019D) {
    const struct CPU_State initial_cpu = {.pc=0xdfef, .a=0x14, .x=0x1d, .y=0x4f, .sp=0xbc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xdfef, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdff0, .a=0x14, .x=0x14, .y=0x4f, .sp=0xbc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xdfef, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdfef, .value=0x5d, .type=IO_READ},
        {.addr=0xdff0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_019E) {
    const struct CPU_State initial_cpu = {.pc=0xc935, .a=0xcd, .x=0xdc, .y=0xc9, .sp=0xaa, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xc935, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc936, .a=0xcd, .x=0xcd, .y=0xc9, .sp=0xaa, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc935, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc935, .value=0x5d, .type=IO_READ},
        {.addr=0xc936, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_019F) {
    const struct CPU_State initial_cpu = {.pc=0xc6dd, .a=0xca, .x=0x24, .y=0x4d, .sp=0x54, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc6dd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc6de, .a=0xca, .x=0xca, .y=0x4d, .sp=0x54, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc6dd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc6dd, .value=0x5d, .type=IO_READ},
        {.addr=0xc6de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x6580, .a=0x1a, .x=0x60, .y=0x87, .sp=0xf4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x6580, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6581, .a=0x1a, .x=0x1a, .y=0x87, .sp=0xf4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6580, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6580, .value=0x5d, .type=IO_READ},
        {.addr=0x6581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xf71a, .a=0x13, .x=0x7d, .y=0x07, .sp=0x9b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xf71a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf71b, .a=0x13, .x=0x13, .y=0x07, .sp=0x9b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf71a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf71a, .value=0x5d, .type=IO_READ},
        {.addr=0xf71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x2bb6, .a=0xd6, .x=0xb6, .y=0x40, .sp=0xb3, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x2bb6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2bb7, .a=0xd6, .x=0xd6, .y=0x40, .sp=0xb3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2bb6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2bb6, .value=0x5d, .type=IO_READ},
        {.addr=0x2bb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xb62d, .a=0x45, .x=0x51, .y=0xb4, .sp=0xb1, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xb62d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb62e, .a=0x45, .x=0x45, .y=0xb4, .sp=0xb1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb62d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb62d, .value=0x5d, .type=IO_READ},
        {.addr=0xb62e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x5acc, .a=0x3a, .x=0xa6, .y=0x55, .sp=0x66, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5acc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5acd, .a=0x3a, .x=0x3a, .y=0x55, .sp=0x66, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5acc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5acc, .value=0x5d, .type=IO_READ},
        {.addr=0x5acd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x20b2, .a=0xd7, .x=0x71, .y=0xc9, .sp=0x82, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x20b2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x20b3, .a=0xd7, .x=0xd7, .y=0xc9, .sp=0x82, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x20b2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x20b2, .value=0x5d, .type=IO_READ},
        {.addr=0x20b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x1f53, .a=0x7a, .x=0x4b, .y=0xa3, .sp=0x83, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x1f53, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1f54, .a=0x7a, .x=0x7a, .y=0xa3, .sp=0x83, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1f53, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1f53, .value=0x5d, .type=IO_READ},
        {.addr=0x1f54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x11e4, .a=0x0f, .x=0xa2, .y=0x98, .sp=0x25, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x11e4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x11e5, .a=0x0f, .x=0x0f, .y=0x98, .sp=0x25, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x11e4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x11e4, .value=0x5d, .type=IO_READ},
        {.addr=0x11e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x23f8, .a=0xdd, .x=0xbd, .y=0x14, .sp=0x51, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x23f8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x23f9, .a=0xdd, .x=0xdd, .y=0x14, .sp=0x51, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x23f8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x23f8, .value=0x5d, .type=IO_READ},
        {.addr=0x23f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x3d8f, .a=0x81, .x=0x25, .y=0xe0, .sp=0x33, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3d90, .a=0x81, .x=0x81, .y=0xe0, .sp=0x33, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x3d8f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3d8f, .value=0x5d, .type=IO_READ},
        {.addr=0x3d90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xbd2e, .a=0xfe, .x=0x78, .y=0xbc, .sp=0x20, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xbd2e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbd2f, .a=0xfe, .x=0xfe, .y=0xbc, .sp=0x20, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbd2e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbd2e, .value=0x5d, .type=IO_READ},
        {.addr=0xbd2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xc975, .a=0x9b, .x=0x03, .y=0xdd, .sp=0xa1, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc975, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc976, .a=0x9b, .x=0x9b, .y=0xdd, .sp=0xa1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc975, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc975, .value=0x5d, .type=IO_READ},
        {.addr=0xc976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x4096, .a=0x69, .x=0xcd, .y=0x16, .sp=0xe8, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4096, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4097, .a=0x69, .x=0x69, .y=0x16, .sp=0xe8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4096, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4096, .value=0x5d, .type=IO_READ},
        {.addr=0x4097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xc36d, .a=0xf3, .x=0xbb, .y=0x04, .sp=0x73, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc36d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc36e, .a=0xf3, .x=0xf3, .y=0x04, .sp=0x73, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc36d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc36d, .value=0x5d, .type=IO_READ},
        {.addr=0xc36e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x6e79, .a=0x6f, .x=0x39, .y=0x4b, .sp=0x56, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6e79, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6e7a, .a=0x6f, .x=0x6f, .y=0x4b, .sp=0x56, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6e79, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6e79, .value=0x5d, .type=IO_READ},
        {.addr=0x6e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x46a6, .a=0x65, .x=0xcc, .y=0x95, .sp=0x79, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x46a6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x46a7, .a=0x65, .x=0x65, .y=0x95, .sp=0x79, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x46a6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x46a6, .value=0x5d, .type=IO_READ},
        {.addr=0x46a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x26fd, .a=0x9f, .x=0x9f, .y=0xbb, .sp=0xe4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x26fd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x26fe, .a=0x9f, .x=0x9f, .y=0xbb, .sp=0xe4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x26fd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x26fd, .value=0x5d, .type=IO_READ},
        {.addr=0x26fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xb6de, .a=0x2f, .x=0xb0, .y=0xf6, .sp=0xa6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xb6de, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb6df, .a=0x2f, .x=0x2f, .y=0xf6, .sp=0xa6, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb6de, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb6de, .value=0x5d, .type=IO_READ},
        {.addr=0xb6df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x7b90, .a=0xa4, .x=0x0d, .y=0xaf, .sp=0x5d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7b90, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7b91, .a=0xa4, .x=0xa4, .y=0xaf, .sp=0x5d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7b90, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7b90, .value=0x5d, .type=IO_READ},
        {.addr=0x7b91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xd6d4, .a=0xd8, .x=0x88, .y=0xba, .sp=0x1f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd6d5, .a=0xd8, .x=0xd8, .y=0xba, .sp=0x1f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd6d4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd6d4, .value=0x5d, .type=IO_READ},
        {.addr=0xd6d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xa020, .a=0xa7, .x=0x01, .y=0xde, .sp=0x16, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa020, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa021, .a=0xa7, .x=0xa7, .y=0xde, .sp=0x16, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa020, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa020, .value=0x5d, .type=IO_READ},
        {.addr=0xa021, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x43de, .a=0x69, .x=0xbf, .y=0x80, .sp=0x8b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x43de, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x43df, .a=0x69, .x=0x69, .y=0x80, .sp=0x8b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x43de, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x43de, .value=0x5d, .type=IO_READ},
        {.addr=0x43df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x5744, .a=0x2e, .x=0x39, .y=0x9e, .sp=0x36, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x5744, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5745, .a=0x2e, .x=0x2e, .y=0x9e, .sp=0x36, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5744, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5744, .value=0x5d, .type=IO_READ},
        {.addr=0x5745, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xabd4, .a=0xda, .x=0x6f, .y=0x70, .sp=0x93, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xabd4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xabd5, .a=0xda, .x=0xda, .y=0x70, .sp=0x93, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xabd4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xabd4, .value=0x5d, .type=IO_READ},
        {.addr=0xabd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x9e5d, .a=0x68, .x=0xac, .y=0x6e, .sp=0xcc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9e5e, .a=0x68, .x=0x68, .y=0x6e, .sp=0xcc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9e5d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9e5d, .value=0x5d, .type=IO_READ},
        {.addr=0x9e5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x9759, .a=0x8f, .x=0xe0, .y=0x32, .sp=0xa4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9759, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x975a, .a=0x8f, .x=0x8f, .y=0x32, .sp=0xa4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9759, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9759, .value=0x5d, .type=IO_READ},
        {.addr=0x975a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x5931, .a=0x23, .x=0xf4, .y=0xe6, .sp=0x36, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5931, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5932, .a=0x23, .x=0x23, .y=0xe6, .sp=0x36, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5931, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5931, .value=0x5d, .type=IO_READ},
        {.addr=0x5932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xb822, .a=0xfc, .x=0x13, .y=0x09, .sp=0x69, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb822, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb823, .a=0xfc, .x=0xfc, .y=0x09, .sp=0x69, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb822, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb822, .value=0x5d, .type=IO_READ},
        {.addr=0xb823, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xebb5, .a=0x7d, .x=0x81, .y=0xf8, .sp=0xd1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xebb5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xebb6, .a=0x7d, .x=0x7d, .y=0xf8, .sp=0xd1, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xebb5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xebb5, .value=0x5d, .type=IO_READ},
        {.addr=0xebb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x2db1, .a=0x58, .x=0x77, .y=0xbd, .sp=0xdd, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2db1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2db2, .a=0x58, .x=0x58, .y=0xbd, .sp=0xdd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2db1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2db1, .value=0x5d, .type=IO_READ},
        {.addr=0x2db2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xe37b, .a=0x06, .x=0x98, .y=0x66, .sp=0x23, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xe37b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe37c, .a=0x06, .x=0x06, .y=0x66, .sp=0x23, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe37b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe37b, .value=0x5d, .type=IO_READ},
        {.addr=0xe37c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x7e1b, .a=0xdf, .x=0x2d, .y=0xd4, .sp=0xf0, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7e1b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e1c, .a=0xdf, .x=0xdf, .y=0xd4, .sp=0xf0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7e1b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e1b, .value=0x5d, .type=IO_READ},
        {.addr=0x7e1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x8603, .a=0xa7, .x=0xcd, .y=0x7d, .sp=0x0b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8603, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8604, .a=0xa7, .x=0xa7, .y=0x7d, .sp=0x0b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8603, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8603, .value=0x5d, .type=IO_READ},
        {.addr=0x8604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x2889, .a=0x19, .x=0xe3, .y=0x68, .sp=0x15, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2889, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x288a, .a=0x19, .x=0x19, .y=0x68, .sp=0x15, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2889, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2889, .value=0x5d, .type=IO_READ},
        {.addr=0x288a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x088b, .a=0xcd, .x=0x8a, .y=0xde, .sp=0xb7, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x088b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x088c, .a=0xcd, .x=0xcd, .y=0xde, .sp=0xb7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x088b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x088b, .value=0x5d, .type=IO_READ},
        {.addr=0x088c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xa380, .a=0x1c, .x=0x43, .y=0xff, .sp=0xf7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa380, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa381, .a=0x1c, .x=0x1c, .y=0xff, .sp=0xf7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xa380, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa380, .value=0x5d, .type=IO_READ},
        {.addr=0xa381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x4344, .a=0xc2, .x=0xc4, .y=0xc6, .sp=0xf2, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4344, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4345, .a=0xc2, .x=0xc2, .y=0xc6, .sp=0xf2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4344, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4344, .value=0x5d, .type=IO_READ},
        {.addr=0x4345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x602f, .a=0x34, .x=0x7e, .y=0xd9, .sp=0xa1, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x602f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6030, .a=0x34, .x=0x34, .y=0xd9, .sp=0xa1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x602f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x602f, .value=0x5d, .type=IO_READ},
        {.addr=0x6030, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xdd65, .a=0xa6, .x=0xb6, .y=0xa7, .sp=0x35, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdd65, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdd66, .a=0xa6, .x=0xa6, .y=0xa7, .sp=0x35, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xdd65, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdd65, .value=0x5d, .type=IO_READ},
        {.addr=0xdd66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x3fe0, .a=0x3e, .x=0x95, .y=0x0a, .sp=0x07, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3fe1, .a=0x3e, .x=0x3e, .y=0x0a, .sp=0x07, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3fe0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3fe0, .value=0x5d, .type=IO_READ},
        {.addr=0x3fe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x8828, .a=0x7e, .x=0xf9, .y=0x79, .sp=0x11, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8828, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8829, .a=0x7e, .x=0x7e, .y=0x79, .sp=0x11, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8828, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8828, .value=0x5d, .type=IO_READ},
        {.addr=0x8829, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xd3df, .a=0xae, .x=0xa5, .y=0x6d, .sp=0xa3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xd3df, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd3e0, .a=0xae, .x=0xae, .y=0x6d, .sp=0xa3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd3df, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd3df, .value=0x5d, .type=IO_READ},
        {.addr=0xd3e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xbbd9, .a=0xa4, .x=0xd4, .y=0x5a, .sp=0x4e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbbd9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbbda, .a=0xa4, .x=0xa4, .y=0x5a, .sp=0x4e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbbd9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbbd9, .value=0x5d, .type=IO_READ},
        {.addr=0xbbda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xfc07, .a=0x2a, .x=0x40, .y=0x2d, .sp=0x26, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xfc07, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfc08, .a=0x2a, .x=0x2a, .y=0x2d, .sp=0x26, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfc07, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfc07, .value=0x5d, .type=IO_READ},
        {.addr=0xfc08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x569b, .a=0x44, .x=0xd7, .y=0xf6, .sp=0x2d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x569b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x569c, .a=0x44, .x=0x44, .y=0xf6, .sp=0x2d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x569b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x569b, .value=0x5d, .type=IO_READ},
        {.addr=0x569c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4b74, .a=0x90, .x=0x75, .y=0x51, .sp=0x37, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4b74, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4b75, .a=0x90, .x=0x90, .y=0x51, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4b74, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4b74, .value=0x5d, .type=IO_READ},
        {.addr=0x4b75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xabfa, .a=0x5e, .x=0xbe, .y=0x8c, .sp=0x29, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xabfa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xabfb, .a=0x5e, .x=0x5e, .y=0x8c, .sp=0x29, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xabfa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xabfa, .value=0x5d, .type=IO_READ},
        {.addr=0xabfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x3b04, .a=0x0f, .x=0xd7, .y=0xdf, .sp=0xd8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3b04, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3b05, .a=0x0f, .x=0x0f, .y=0xdf, .sp=0xd8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3b04, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3b04, .value=0x5d, .type=IO_READ},
        {.addr=0x3b05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xbb01, .a=0x75, .x=0x75, .y=0xf7, .sp=0xfd, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xbb01, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbb02, .a=0x75, .x=0x75, .y=0xf7, .sp=0xfd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xbb01, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbb01, .value=0x5d, .type=IO_READ},
        {.addr=0xbb02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x597e, .a=0x3b, .x=0xee, .y=0x37, .sp=0x8b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x597e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x597f, .a=0x3b, .x=0x3b, .y=0x37, .sp=0x8b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x597e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x597e, .value=0x5d, .type=IO_READ},
        {.addr=0x597f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x78c4, .a=0x7a, .x=0x7c, .y=0xe3, .sp=0x88, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x78c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x78c5, .a=0x7a, .x=0x7a, .y=0xe3, .sp=0x88, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x78c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x78c4, .value=0x5d, .type=IO_READ},
        {.addr=0x78c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xd2bc, .a=0x3b, .x=0xc5, .y=0x31, .sp=0xdd, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd2bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd2bd, .a=0x3b, .x=0x3b, .y=0x31, .sp=0xdd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd2bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd2bc, .value=0x5d, .type=IO_READ},
        {.addr=0xd2bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x5b5c, .a=0x79, .x=0x82, .y=0x13, .sp=0x94, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5b5c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5b5d, .a=0x79, .x=0x79, .y=0x13, .sp=0x94, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5b5c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5b5c, .value=0x5d, .type=IO_READ},
        {.addr=0x5b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x0f1a, .a=0x9b, .x=0x63, .y=0xc1, .sp=0x1b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0f1a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0f1b, .a=0x9b, .x=0x9b, .y=0xc1, .sp=0x1b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0f1a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0f1a, .value=0x5d, .type=IO_READ},
        {.addr=0x0f1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x7374, .a=0xab, .x=0xcb, .y=0x00, .sp=0xd6, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7374, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7375, .a=0xab, .x=0xab, .y=0x00, .sp=0xd6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7374, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7374, .value=0x5d, .type=IO_READ},
        {.addr=0x7375, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xc3fb, .a=0x7d, .x=0x86, .y=0x18, .sp=0xaa, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc3fb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc3fc, .a=0x7d, .x=0x7d, .y=0x18, .sp=0xaa, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc3fb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc3fb, .value=0x5d, .type=IO_READ},
        {.addr=0xc3fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x85fb, .a=0x97, .x=0xf0, .y=0x34, .sp=0x6e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x85fb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x85fc, .a=0x97, .x=0x97, .y=0x34, .sp=0x6e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x85fb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x85fb, .value=0x5d, .type=IO_READ},
        {.addr=0x85fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x9173, .a=0x48, .x=0xdf, .y=0xdd, .sp=0xcd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9173, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9174, .a=0x48, .x=0x48, .y=0xdd, .sp=0xcd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9173, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9173, .value=0x5d, .type=IO_READ},
        {.addr=0x9174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x0f4a, .a=0x79, .x=0xec, .y=0xa5, .sp=0xfc, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0f4a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0f4b, .a=0x79, .x=0x79, .y=0xa5, .sp=0xfc, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0f4a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0f4a, .value=0x5d, .type=IO_READ},
        {.addr=0x0f4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x39d6, .a=0x8e, .x=0xdc, .y=0xc7, .sp=0x15, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x39d6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x39d7, .a=0x8e, .x=0x8e, .y=0xc7, .sp=0x15, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x39d6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x39d6, .value=0x5d, .type=IO_READ},
        {.addr=0x39d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xadcc, .a=0x1e, .x=0x1b, .y=0xe4, .sp=0xfa, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xadcc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xadcd, .a=0x1e, .x=0x1e, .y=0xe4, .sp=0xfa, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xadcc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xadcc, .value=0x5d, .type=IO_READ},
        {.addr=0xadcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x3cd0, .a=0xbc, .x=0x60, .y=0xa1, .sp=0xbd, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3cd1, .a=0xbc, .x=0xbc, .y=0xa1, .sp=0xbd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3cd0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3cd0, .value=0x5d, .type=IO_READ},
        {.addr=0x3cd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xcb94, .a=0x64, .x=0x39, .y=0x58, .sp=0x7a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xcb94, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcb95, .a=0x64, .x=0x64, .y=0x58, .sp=0x7a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xcb94, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcb94, .value=0x5d, .type=IO_READ},
        {.addr=0xcb95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xb0df, .a=0x79, .x=0x57, .y=0x27, .sp=0x98, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb0df, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb0e0, .a=0x79, .x=0x79, .y=0x27, .sp=0x98, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb0df, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb0df, .value=0x5d, .type=IO_READ},
        {.addr=0xb0e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x68f3, .a=0xac, .x=0x9c, .y=0x18, .sp=0x66, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x68f3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x68f4, .a=0xac, .x=0xac, .y=0x18, .sp=0x66, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x68f3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x68f3, .value=0x5d, .type=IO_READ},
        {.addr=0x68f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x64f9, .a=0xbb, .x=0x3e, .y=0x8c, .sp=0x10, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x64f9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x64fa, .a=0xbb, .x=0xbb, .y=0x8c, .sp=0x10, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x64f9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x64f9, .value=0x5d, .type=IO_READ},
        {.addr=0x64fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x65da, .a=0xc0, .x=0x1f, .y=0xa6, .sp=0x22, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x65da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x65db, .a=0xc0, .x=0xc0, .y=0xa6, .sp=0x22, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x65da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x65da, .value=0x5d, .type=IO_READ},
        {.addr=0x65db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x8786, .a=0xf4, .x=0x22, .y=0x2b, .sp=0xa8, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8786, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8787, .a=0xf4, .x=0xf4, .y=0x2b, .sp=0xa8, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8786, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8786, .value=0x5d, .type=IO_READ},
        {.addr=0x8787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x46f4, .a=0x05, .x=0x66, .y=0x18, .sp=0xc9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x46f4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x46f5, .a=0x05, .x=0x05, .y=0x18, .sp=0xc9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x46f4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x46f4, .value=0x5d, .type=IO_READ},
        {.addr=0x46f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xd7cc, .a=0xe2, .x=0x65, .y=0x5b, .sp=0x7d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd7cc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd7cd, .a=0xe2, .x=0xe2, .y=0x5b, .sp=0x7d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd7cc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd7cc, .value=0x5d, .type=IO_READ},
        {.addr=0xd7cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x936f, .a=0x9f, .x=0xed, .y=0x3b, .sp=0x5b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x936f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9370, .a=0x9f, .x=0x9f, .y=0x3b, .sp=0x5b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x936f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x936f, .value=0x5d, .type=IO_READ},
        {.addr=0x9370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xd032, .a=0xae, .x=0x57, .y=0xbd, .sp=0xef, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd032, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd033, .a=0xae, .x=0xae, .y=0xbd, .sp=0xef, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd032, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd032, .value=0x5d, .type=IO_READ},
        {.addr=0xd033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x1758, .a=0x29, .x=0xc6, .y=0x6e, .sp=0x85, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1758, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1759, .a=0x29, .x=0x29, .y=0x6e, .sp=0x85, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1758, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1758, .value=0x5d, .type=IO_READ},
        {.addr=0x1759, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x91b0, .a=0x1e, .x=0xab, .y=0xc3, .sp=0xef, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x91b0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x91b1, .a=0x1e, .x=0x1e, .y=0xc3, .sp=0xef, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x91b0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x91b0, .value=0x5d, .type=IO_READ},
        {.addr=0x91b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x31e3, .a=0x9d, .x=0x63, .y=0xb4, .sp=0x60, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x31e3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x31e4, .a=0x9d, .x=0x9d, .y=0xb4, .sp=0x60, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x31e3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x31e3, .value=0x5d, .type=IO_READ},
        {.addr=0x31e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x9f74, .a=0xc0, .x=0x17, .y=0x37, .sp=0x37, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9f74, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9f75, .a=0xc0, .x=0xc0, .y=0x37, .sp=0x37, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9f74, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9f74, .value=0x5d, .type=IO_READ},
        {.addr=0x9f75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x8fa8, .a=0xfc, .x=0x91, .y=0xe8, .sp=0x36, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8fa9, .a=0xfc, .x=0xfc, .y=0xe8, .sp=0x36, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8fa8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8fa8, .value=0x5d, .type=IO_READ},
        {.addr=0x8fa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x6c52, .a=0xf6, .x=0xbe, .y=0xa2, .sp=0x7d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6c52, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6c53, .a=0xf6, .x=0xf6, .y=0xa2, .sp=0x7d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6c52, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6c52, .value=0x5d, .type=IO_READ},
        {.addr=0x6c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x490c, .a=0xfd, .x=0x77, .y=0xe2, .sp=0xce, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x490c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x490d, .a=0xfd, .x=0xfd, .y=0xe2, .sp=0xce, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x490c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x490c, .value=0x5d, .type=IO_READ},
        {.addr=0x490d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x1473, .a=0x95, .x=0x1c, .y=0x42, .sp=0x46, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1473, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1474, .a=0x95, .x=0x95, .y=0x42, .sp=0x46, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1473, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1473, .value=0x5d, .type=IO_READ},
        {.addr=0x1474, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x13a5, .a=0xd3, .x=0xc5, .y=0x65, .sp=0x6e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x13a5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x13a6, .a=0xd3, .x=0xd3, .y=0x65, .sp=0x6e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x13a5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x13a5, .value=0x5d, .type=IO_READ},
        {.addr=0x13a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x1e80, .a=0x83, .x=0x75, .y=0x60, .sp=0xb5, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1e80, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1e81, .a=0x83, .x=0x83, .y=0x60, .sp=0xb5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x1e80, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1e80, .value=0x5d, .type=IO_READ},
        {.addr=0x1e81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xab1b, .a=0x9a, .x=0xa6, .y=0x94, .sp=0x31, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xab1b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xab1c, .a=0x9a, .x=0x9a, .y=0x94, .sp=0x31, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xab1b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xab1b, .value=0x5d, .type=IO_READ},
        {.addr=0xab1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x2b85, .a=0xd1, .x=0x5f, .y=0x85, .sp=0xb2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x2b85, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2b86, .a=0xd1, .x=0xd1, .y=0x85, .sp=0xb2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2b85, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2b85, .value=0x5d, .type=IO_READ},
        {.addr=0x2b86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x2e41, .a=0x1c, .x=0xf9, .y=0x07, .sp=0x71, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2e41, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2e42, .a=0x1c, .x=0x1c, .y=0x07, .sp=0x71, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2e41, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2e41, .value=0x5d, .type=IO_READ},
        {.addr=0x2e42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xdeb2, .a=0xf2, .x=0x22, .y=0x87, .sp=0xf1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xdeb2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdeb3, .a=0xf2, .x=0xf2, .y=0x87, .sp=0xf1, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xdeb2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdeb2, .value=0x5d, .type=IO_READ},
        {.addr=0xdeb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xf489, .a=0xd8, .x=0x9e, .y=0xc0, .sp=0x7e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf489, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf48a, .a=0xd8, .x=0xd8, .y=0xc0, .sp=0x7e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf489, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf489, .value=0x5d, .type=IO_READ},
        {.addr=0xf48a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xe680, .a=0x66, .x=0xd1, .y=0x37, .sp=0x6a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xe680, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe681, .a=0x66, .x=0x66, .y=0x37, .sp=0x6a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe680, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe680, .value=0x5d, .type=IO_READ},
        {.addr=0xe681, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x5c03, .a=0x0e, .x=0x72, .y=0x3c, .sp=0xcd, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5c03, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5c04, .a=0x0e, .x=0x0e, .y=0x3c, .sp=0xcd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5c03, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5c03, .value=0x5d, .type=IO_READ},
        {.addr=0x5c04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x0db2, .a=0x2b, .x=0x00, .y=0x85, .sp=0xf9, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0db2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0db3, .a=0x2b, .x=0x2b, .y=0x85, .sp=0xf9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0db2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0db2, .value=0x5d, .type=IO_READ},
        {.addr=0x0db3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x57b8, .a=0x1e, .x=0xe7, .y=0x9f, .sp=0x28, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x57b8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x57b9, .a=0x1e, .x=0x1e, .y=0x9f, .sp=0x28, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x57b8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x57b8, .value=0x5d, .type=IO_READ},
        {.addr=0x57b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x021b, .a=0xc7, .x=0x0e, .y=0x8b, .sp=0x44, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x021b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x021c, .a=0xc7, .x=0xc7, .y=0x8b, .sp=0x44, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x021b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x021b, .value=0x5d, .type=IO_READ},
        {.addr=0x021c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xc26a, .a=0x53, .x=0x30, .y=0x2a, .sp=0xae, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xc26a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc26b, .a=0x53, .x=0x53, .y=0x2a, .sp=0xae, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc26a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc26a, .value=0x5d, .type=IO_READ},
        {.addr=0xc26b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x8190, .a=0xdc, .x=0x25, .y=0xf6, .sp=0x0a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8190, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8191, .a=0xdc, .x=0xdc, .y=0xf6, .sp=0x0a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8190, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8190, .value=0x5d, .type=IO_READ},
        {.addr=0x8191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x7e60, .a=0x06, .x=0x87, .y=0x29, .sp=0xc7, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7e60, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e61, .a=0x06, .x=0x06, .y=0x29, .sp=0xc7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7e60, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e60, .value=0x5d, .type=IO_READ},
        {.addr=0x7e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x120b, .a=0x05, .x=0x8c, .y=0xf3, .sp=0x45, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x120b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x120c, .a=0x05, .x=0x05, .y=0xf3, .sp=0x45, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x120b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x120b, .value=0x5d, .type=IO_READ},
        {.addr=0x120c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x77ac, .a=0x63, .x=0x33, .y=0x4a, .sp=0x13, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x77ac, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x77ad, .a=0x63, .x=0x63, .y=0x4a, .sp=0x13, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x77ac, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x77ac, .value=0x5d, .type=IO_READ},
        {.addr=0x77ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0201) {
    const struct CPU_State initial_cpu = {.pc=0x4b32, .a=0xc5, .x=0xae, .y=0x1d, .sp=0x61, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4b32, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4b33, .a=0xc5, .x=0xc5, .y=0x1d, .sp=0x61, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4b32, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4b32, .value=0x5d, .type=IO_READ},
        {.addr=0x4b33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0202) {
    const struct CPU_State initial_cpu = {.pc=0x24b3, .a=0x0f, .x=0xbf, .y=0x33, .sp=0x70, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x24b3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x24b4, .a=0x0f, .x=0x0f, .y=0x33, .sp=0x70, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x24b3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x24b3, .value=0x5d, .type=IO_READ},
        {.addr=0x24b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0203) {
    const struct CPU_State initial_cpu = {.pc=0xc1e8, .a=0x4c, .x=0xe8, .y=0xa7, .sp=0x4b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc1e9, .a=0x4c, .x=0x4c, .y=0xa7, .sp=0x4b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc1e8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc1e8, .value=0x5d, .type=IO_READ},
        {.addr=0xc1e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x582a, .a=0xde, .x=0xc4, .y=0xf6, .sp=0xea, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x582a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x582b, .a=0xde, .x=0xde, .y=0xf6, .sp=0xea, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x582a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x582a, .value=0x5d, .type=IO_READ},
        {.addr=0x582b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0205) {
    const struct CPU_State initial_cpu = {.pc=0x1d76, .a=0x0a, .x=0x47, .y=0x68, .sp=0xc0, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x1d76, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1d77, .a=0x0a, .x=0x0a, .y=0x68, .sp=0xc0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1d76, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1d76, .value=0x5d, .type=IO_READ},
        {.addr=0x1d77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x0e45, .a=0xa1, .x=0xf9, .y=0xa5, .sp=0xf5, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0e45, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0e46, .a=0xa1, .x=0xa1, .y=0xa5, .sp=0xf5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0e45, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0e45, .value=0x5d, .type=IO_READ},
        {.addr=0x0e46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x5d65, .a=0xc2, .x=0x4a, .y=0xdb, .sp=0xa3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5d65, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5d66, .a=0xc2, .x=0xc2, .y=0xdb, .sp=0xa3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5d65, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5d65, .value=0x5d, .type=IO_READ},
        {.addr=0x5d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0208) {
    const struct CPU_State initial_cpu = {.pc=0x6993, .a=0x09, .x=0x5c, .y=0x95, .sp=0x88, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6993, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6994, .a=0x09, .x=0x09, .y=0x95, .sp=0x88, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6993, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6993, .value=0x5d, .type=IO_READ},
        {.addr=0x6994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0209) {
    const struct CPU_State initial_cpu = {.pc=0xf700, .a=0xa0, .x=0xbf, .y=0xc2, .sp=0xc7, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xf700, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf701, .a=0xa0, .x=0xa0, .y=0xc2, .sp=0xc7, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf700, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf700, .value=0x5d, .type=IO_READ},
        {.addr=0xf701, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xbf54, .a=0xcd, .x=0x81, .y=0x9a, .sp=0x70, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xbf54, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbf55, .a=0xcd, .x=0xcd, .y=0x9a, .sp=0x70, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xbf54, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbf54, .value=0x5d, .type=IO_READ},
        {.addr=0xbf55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_020B) {
    const struct CPU_State initial_cpu = {.pc=0xf3a6, .a=0x43, .x=0xae, .y=0xdd, .sp=0x03, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf3a7, .a=0x43, .x=0x43, .y=0xdd, .sp=0x03, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf3a6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf3a6, .value=0x5d, .type=IO_READ},
        {.addr=0xf3a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_020C) {
    const struct CPU_State initial_cpu = {.pc=0xf983, .a=0x4d, .x=0x9a, .y=0xea, .sp=0xaf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf983, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf984, .a=0x4d, .x=0x4d, .y=0xea, .sp=0xaf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf983, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf983, .value=0x5d, .type=IO_READ},
        {.addr=0xf984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_020D) {
    const struct CPU_State initial_cpu = {.pc=0xdd70, .a=0x58, .x=0x0c, .y=0x31, .sp=0xbf, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xdd70, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdd71, .a=0x58, .x=0x58, .y=0x31, .sp=0xbf, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xdd70, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdd70, .value=0x5d, .type=IO_READ},
        {.addr=0xdd71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x3ae9, .a=0xad, .x=0x49, .y=0x38, .sp=0x17, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3aea, .a=0xad, .x=0xad, .y=0x38, .sp=0x17, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3ae9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3ae9, .value=0x5d, .type=IO_READ},
        {.addr=0x3aea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x6cf2, .a=0x5f, .x=0x1d, .y=0xd4, .sp=0xbc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6cf3, .a=0x5f, .x=0x5f, .y=0xd4, .sp=0xbc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6cf2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6cf2, .value=0x5d, .type=IO_READ},
        {.addr=0x6cf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0210) {
    const struct CPU_State initial_cpu = {.pc=0x0227, .a=0x59, .x=0x14, .y=0xbc, .sp=0xa2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0227, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0228, .a=0x59, .x=0x59, .y=0xbc, .sp=0xa2, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0227, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0227, .value=0x5d, .type=IO_READ},
        {.addr=0x0228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0211) {
    const struct CPU_State initial_cpu = {.pc=0x1ce3, .a=0x43, .x=0x96, .y=0xf8, .sp=0xfb, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x1ce3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1ce4, .a=0x43, .x=0x43, .y=0xf8, .sp=0xfb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1ce3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1ce3, .value=0x5d, .type=IO_READ},
        {.addr=0x1ce4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0212) {
    const struct CPU_State initial_cpu = {.pc=0xba32, .a=0x29, .x=0x80, .y=0x14, .sp=0x90, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xba32, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xba33, .a=0x29, .x=0x29, .y=0x14, .sp=0x90, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xba32, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xba32, .value=0x5d, .type=IO_READ},
        {.addr=0xba33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0213) {
    const struct CPU_State initial_cpu = {.pc=0xc667, .a=0x01, .x=0xf3, .y=0x46, .sp=0x91, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc667, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc668, .a=0x01, .x=0x01, .y=0x46, .sp=0x91, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc667, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc667, .value=0x5d, .type=IO_READ},
        {.addr=0xc668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0214) {
    const struct CPU_State initial_cpu = {.pc=0xe236, .a=0x64, .x=0x28, .y=0x5e, .sp=0x17, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe236, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe237, .a=0x64, .x=0x64, .y=0x5e, .sp=0x17, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe236, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe236, .value=0x5d, .type=IO_READ},
        {.addr=0xe237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0215) {
    const struct CPU_State initial_cpu = {.pc=0xe6d0, .a=0x6a, .x=0x64, .y=0xf6, .sp=0xd7, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe6d1, .a=0x6a, .x=0x6a, .y=0xf6, .sp=0xd7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe6d0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe6d0, .value=0x5d, .type=IO_READ},
        {.addr=0xe6d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x153c, .a=0x6f, .x=0x51, .y=0xd8, .sp=0xbd, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x153c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x153d, .a=0x6f, .x=0x6f, .y=0xd8, .sp=0xbd, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x153c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x153c, .value=0x5d, .type=IO_READ},
        {.addr=0x153d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0217) {
    const struct CPU_State initial_cpu = {.pc=0x3d8b, .a=0xd2, .x=0x35, .y=0xd7, .sp=0x37, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3d8c, .a=0xd2, .x=0xd2, .y=0xd7, .sp=0x37, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3d8b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3d8b, .value=0x5d, .type=IO_READ},
        {.addr=0x3d8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0218) {
    const struct CPU_State initial_cpu = {.pc=0xd8c3, .a=0x40, .x=0x8c, .y=0x6d, .sp=0xd1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd8c4, .a=0x40, .x=0x40, .y=0x6d, .sp=0xd1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd8c3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd8c3, .value=0x5d, .type=IO_READ},
        {.addr=0xd8c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7e75, .a=0x67, .x=0xfb, .y=0x5f, .sp=0x13, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7e75, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e76, .a=0x67, .x=0x67, .y=0x5f, .sp=0x13, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7e75, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e75, .value=0x5d, .type=IO_READ},
        {.addr=0x7e76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_021A) {
    const struct CPU_State initial_cpu = {.pc=0x6c9d, .a=0xb7, .x=0x9f, .y=0xd5, .sp=0xf2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6c9d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6c9e, .a=0xb7, .x=0xb7, .y=0xd5, .sp=0xf2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6c9d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6c9d, .value=0x5d, .type=IO_READ},
        {.addr=0x6c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_021B) {
    const struct CPU_State initial_cpu = {.pc=0xbab3, .a=0xc4, .x=0xcd, .y=0xa4, .sp=0x5c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xbab3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbab4, .a=0xc4, .x=0xc4, .y=0xa4, .sp=0x5c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xbab3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbab3, .value=0x5d, .type=IO_READ},
        {.addr=0xbab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_021C) {
    const struct CPU_State initial_cpu = {.pc=0xc4bd, .a=0x51, .x=0xfc, .y=0xe3, .sp=0xea, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc4be, .a=0x51, .x=0x51, .y=0xe3, .sp=0xea, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc4bd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc4bd, .value=0x5d, .type=IO_READ},
        {.addr=0xc4be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_021D) {
    const struct CPU_State initial_cpu = {.pc=0xc2a4, .a=0xd7, .x=0xda, .y=0x18, .sp=0x27, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc2a5, .a=0xd7, .x=0xd7, .y=0x18, .sp=0x27, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc2a4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc2a4, .value=0x5d, .type=IO_READ},
        {.addr=0xc2a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_021E) {
    const struct CPU_State initial_cpu = {.pc=0xb79b, .a=0xa4, .x=0xac, .y=0xb6, .sp=0xcb, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xb79b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb79c, .a=0xa4, .x=0xa4, .y=0xb6, .sp=0xcb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb79b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb79b, .value=0x5d, .type=IO_READ},
        {.addr=0xb79c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd8bb, .a=0x98, .x=0x18, .y=0xdd, .sp=0xcf, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd8bb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd8bc, .a=0x98, .x=0x98, .y=0xdd, .sp=0xcf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd8bb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd8bb, .value=0x5d, .type=IO_READ},
        {.addr=0xd8bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0220) {
    const struct CPU_State initial_cpu = {.pc=0x5522, .a=0xea, .x=0x30, .y=0x8b, .sp=0xda, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5522, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5523, .a=0xea, .x=0xea, .y=0x8b, .sp=0xda, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5522, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5522, .value=0x5d, .type=IO_READ},
        {.addr=0x5523, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0221) {
    const struct CPU_State initial_cpu = {.pc=0xf287, .a=0x83, .x=0xed, .y=0x7d, .sp=0x5e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xf287, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf288, .a=0x83, .x=0x83, .y=0x7d, .sp=0x5e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf287, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf287, .value=0x5d, .type=IO_READ},
        {.addr=0xf288, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0222) {
    const struct CPU_State initial_cpu = {.pc=0xf93f, .a=0x11, .x=0x19, .y=0xf9, .sp=0xcf, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf93f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf940, .a=0x11, .x=0x11, .y=0xf9, .sp=0xcf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf93f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf93f, .value=0x5d, .type=IO_READ},
        {.addr=0xf940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0223) {
    const struct CPU_State initial_cpu = {.pc=0x8a42, .a=0xa2, .x=0x44, .y=0xb9, .sp=0x79, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8a42, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8a43, .a=0xa2, .x=0xa2, .y=0xb9, .sp=0x79, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8a42, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8a42, .value=0x5d, .type=IO_READ},
        {.addr=0x8a43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0224) {
    const struct CPU_State initial_cpu = {.pc=0x78b5, .a=0xb3, .x=0x1e, .y=0x32, .sp=0xaa, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x78b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x78b6, .a=0xb3, .x=0xb3, .y=0x32, .sp=0xaa, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x78b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x78b5, .value=0x5d, .type=IO_READ},
        {.addr=0x78b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0225) {
    const struct CPU_State initial_cpu = {.pc=0xe7b9, .a=0x15, .x=0xcd, .y=0x54, .sp=0x3f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe7ba, .a=0x15, .x=0x15, .y=0x54, .sp=0x3f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe7b9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe7b9, .value=0x5d, .type=IO_READ},
        {.addr=0xe7ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0226) {
    const struct CPU_State initial_cpu = {.pc=0x75aa, .a=0x62, .x=0xe3, .y=0xe2, .sp=0x03, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x75aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x75ab, .a=0x62, .x=0x62, .y=0xe2, .sp=0x03, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x75aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x75aa, .value=0x5d, .type=IO_READ},
        {.addr=0x75ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0227) {
    const struct CPU_State initial_cpu = {.pc=0x84d2, .a=0x91, .x=0xaa, .y=0xd9, .sp=0x85, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x84d2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x84d3, .a=0x91, .x=0x91, .y=0xd9, .sp=0x85, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x84d2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x84d2, .value=0x5d, .type=IO_READ},
        {.addr=0x84d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0228) {
    const struct CPU_State initial_cpu = {.pc=0xa80d, .a=0xdb, .x=0x4b, .y=0x8a, .sp=0x1d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xa80d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa80e, .a=0xdb, .x=0xdb, .y=0x8a, .sp=0x1d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa80d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa80d, .value=0x5d, .type=IO_READ},
        {.addr=0xa80e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x9acd, .a=0xd8, .x=0x42, .y=0xd2, .sp=0xe7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x9acd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9ace, .a=0xd8, .x=0xd8, .y=0xd2, .sp=0xe7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9acd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9acd, .value=0x5d, .type=IO_READ},
        {.addr=0x9ace, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x68ad, .a=0x54, .x=0xba, .y=0xaf, .sp=0xce, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x68ad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x68ae, .a=0x54, .x=0x54, .y=0xaf, .sp=0xce, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x68ad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x68ad, .value=0x5d, .type=IO_READ},
        {.addr=0x68ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x886a, .a=0x67, .x=0xd7, .y=0xe8, .sp=0xee, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x886a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x886b, .a=0x67, .x=0x67, .y=0xe8, .sp=0xee, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x886a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x886a, .value=0x5d, .type=IO_READ},
        {.addr=0x886b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7943, .a=0x62, .x=0x25, .y=0xdd, .sp=0x5b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7943, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7944, .a=0x62, .x=0x62, .y=0xdd, .sp=0x5b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7943, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7943, .value=0x5d, .type=IO_READ},
        {.addr=0x7944, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_022D) {
    const struct CPU_State initial_cpu = {.pc=0xffdb, .a=0x10, .x=0xf5, .y=0x6b, .sp=0xe2, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xffdb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xffdc, .a=0x10, .x=0x10, .y=0x6b, .sp=0xe2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xffdb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xffdb, .value=0x5d, .type=IO_READ},
        {.addr=0xffdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_022E) {
    const struct CPU_State initial_cpu = {.pc=0xda4b, .a=0x0f, .x=0x7d, .y=0xd8, .sp=0x91, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xda4b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xda4c, .a=0x0f, .x=0x0f, .y=0xd8, .sp=0x91, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xda4b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xda4b, .value=0x5d, .type=IO_READ},
        {.addr=0xda4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x168a, .a=0x8d, .x=0xa9, .y=0x94, .sp=0xfb, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x168a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x168b, .a=0x8d, .x=0x8d, .y=0x94, .sp=0xfb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x168a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x168a, .value=0x5d, .type=IO_READ},
        {.addr=0x168b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0230) {
    const struct CPU_State initial_cpu = {.pc=0xc7b6, .a=0x1b, .x=0x6d, .y=0x4b, .sp=0x4c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xc7b6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc7b7, .a=0x1b, .x=0x1b, .y=0x4b, .sp=0x4c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xc7b6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc7b6, .value=0x5d, .type=IO_READ},
        {.addr=0xc7b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0231) {
    const struct CPU_State initial_cpu = {.pc=0xa121, .a=0x1a, .x=0x92, .y=0xc3, .sp=0x42, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xa121, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa122, .a=0x1a, .x=0x1a, .y=0xc3, .sp=0x42, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa121, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa121, .value=0x5d, .type=IO_READ},
        {.addr=0xa122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6fbb, .a=0xcd, .x=0xf2, .y=0xd4, .sp=0xcb, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6fbc, .a=0xcd, .x=0xcd, .y=0xd4, .sp=0xcb, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6fbb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6fbb, .value=0x5d, .type=IO_READ},
        {.addr=0x6fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0233) {
    const struct CPU_State initial_cpu = {.pc=0x94c9, .a=0x55, .x=0xed, .y=0xe9, .sp=0x82, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x94c9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x94ca, .a=0x55, .x=0x55, .y=0xe9, .sp=0x82, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x94c9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x94c9, .value=0x5d, .type=IO_READ},
        {.addr=0x94ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x6c5c, .a=0xe7, .x=0x72, .y=0xa6, .sp=0xf9, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6c5d, .a=0xe7, .x=0xe7, .y=0xa6, .sp=0xf9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6c5c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6c5c, .value=0x5d, .type=IO_READ},
        {.addr=0x6c5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0235) {
    const struct CPU_State initial_cpu = {.pc=0xab24, .a=0xcc, .x=0x3b, .y=0xfd, .sp=0x5e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xab24, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xab25, .a=0xcc, .x=0xcc, .y=0xfd, .sp=0x5e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xab24, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xab24, .value=0x5d, .type=IO_READ},
        {.addr=0xab25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0236) {
    const struct CPU_State initial_cpu = {.pc=0xdcca, .a=0xe4, .x=0x29, .y=0xce, .sp=0xf3, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xdcca, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdccb, .a=0xe4, .x=0xe4, .y=0xce, .sp=0xf3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xdcca, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdcca, .value=0x5d, .type=IO_READ},
        {.addr=0xdccb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0237) {
    const struct CPU_State initial_cpu = {.pc=0xa9fd, .a=0x8f, .x=0x97, .y=0xdd, .sp=0x8d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa9fd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa9fe, .a=0x8f, .x=0x8f, .y=0xdd, .sp=0x8d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa9fd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa9fd, .value=0x5d, .type=IO_READ},
        {.addr=0xa9fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x02ba, .a=0x62, .x=0xae, .y=0x77, .sp=0x97, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x02ba, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x02bb, .a=0x62, .x=0x62, .y=0x77, .sp=0x97, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x02ba, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x02ba, .value=0x5d, .type=IO_READ},
        {.addr=0x02bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0239) {
    const struct CPU_State initial_cpu = {.pc=0xed03, .a=0xba, .x=0x65, .y=0x72, .sp=0x97, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xed03, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xed04, .a=0xba, .x=0xba, .y=0x72, .sp=0x97, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xed03, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xed03, .value=0x5d, .type=IO_READ},
        {.addr=0xed04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x50bc, .a=0x0b, .x=0x94, .y=0xb5, .sp=0x53, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x50bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x50bd, .a=0x0b, .x=0x0b, .y=0xb5, .sp=0x53, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x50bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x50bc, .value=0x5d, .type=IO_READ},
        {.addr=0x50bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_023B) {
    const struct CPU_State initial_cpu = {.pc=0xda44, .a=0x5a, .x=0x86, .y=0xe0, .sp=0x9f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xda44, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xda45, .a=0x5a, .x=0x5a, .y=0xe0, .sp=0x9f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xda44, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xda44, .value=0x5d, .type=IO_READ},
        {.addr=0xda45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_023C) {
    const struct CPU_State initial_cpu = {.pc=0x7d76, .a=0xa3, .x=0x3b, .y=0x18, .sp=0xa0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7d76, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7d77, .a=0xa3, .x=0xa3, .y=0x18, .sp=0xa0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x7d76, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7d76, .value=0x5d, .type=IO_READ},
        {.addr=0x7d77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x70e4, .a=0xc1, .x=0x74, .y=0x36, .sp=0xe0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x70e4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x70e5, .a=0xc1, .x=0xc1, .y=0x36, .sp=0xe0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x70e4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x70e4, .value=0x5d, .type=IO_READ},
        {.addr=0x70e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_023E) {
    const struct CPU_State initial_cpu = {.pc=0x5bf9, .a=0x74, .x=0x32, .y=0xf6, .sp=0xf1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x5bf9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5bfa, .a=0x74, .x=0x74, .y=0xf6, .sp=0xf1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5bf9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5bf9, .value=0x5d, .type=IO_READ},
        {.addr=0x5bfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_023F) {
    const struct CPU_State initial_cpu = {.pc=0x42f5, .a=0x37, .x=0x4c, .y=0x8b, .sp=0x26, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x42f5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x42f6, .a=0x37, .x=0x37, .y=0x8b, .sp=0x26, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x42f5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x42f5, .value=0x5d, .type=IO_READ},
        {.addr=0x42f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0240) {
    const struct CPU_State initial_cpu = {.pc=0x7aad, .a=0x5a, .x=0x59, .y=0x3b, .sp=0xd5, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x7aad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7aae, .a=0x5a, .x=0x5a, .y=0x3b, .sp=0xd5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7aad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7aad, .value=0x5d, .type=IO_READ},
        {.addr=0x7aae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x6fb1, .a=0x2c, .x=0x9c, .y=0xe4, .sp=0x33, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6fb2, .a=0x2c, .x=0x2c, .y=0xe4, .sp=0x33, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6fb1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6fb1, .value=0x5d, .type=IO_READ},
        {.addr=0x6fb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x4734, .a=0x68, .x=0xc9, .y=0x72, .sp=0x36, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4734, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4735, .a=0x68, .x=0x68, .y=0x72, .sp=0x36, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4734, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4734, .value=0x5d, .type=IO_READ},
        {.addr=0x4735, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1a6c, .a=0x88, .x=0xac, .y=0xf9, .sp=0x67, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1a6c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1a6d, .a=0x88, .x=0x88, .y=0xf9, .sp=0x67, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1a6c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1a6c, .value=0x5d, .type=IO_READ},
        {.addr=0x1a6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x3d0d, .a=0xd8, .x=0x36, .y=0x38, .sp=0x0a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3d0d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3d0e, .a=0xd8, .x=0xd8, .y=0x38, .sp=0x0a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3d0d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3d0d, .value=0x5d, .type=IO_READ},
        {.addr=0x3d0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x5af5, .a=0x1d, .x=0x3d, .y=0x0e, .sp=0x34, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5af5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5af6, .a=0x1d, .x=0x1d, .y=0x0e, .sp=0x34, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5af5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5af5, .value=0x5d, .type=IO_READ},
        {.addr=0x5af6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x1d93, .a=0x48, .x=0x46, .y=0x26, .sp=0x24, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1d93, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1d94, .a=0x48, .x=0x48, .y=0x26, .sp=0x24, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1d93, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1d93, .value=0x5d, .type=IO_READ},
        {.addr=0x1d94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x560d, .a=0xfc, .x=0x8c, .y=0xfe, .sp=0xc7, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x560d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x560e, .a=0xfc, .x=0xfc, .y=0xfe, .sp=0xc7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x560d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x560d, .value=0x5d, .type=IO_READ},
        {.addr=0x560e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0248) {
    const struct CPU_State initial_cpu = {.pc=0xb4b9, .a=0x6c, .x=0x26, .y=0xbb, .sp=0x45, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb4ba, .a=0x6c, .x=0x6c, .y=0xbb, .sp=0x45, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb4b9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb4b9, .value=0x5d, .type=IO_READ},
        {.addr=0xb4ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0249) {
    const struct CPU_State initial_cpu = {.pc=0x5ca9, .a=0xbe, .x=0x3d, .y=0x83, .sp=0xba, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5caa, .a=0xbe, .x=0xbe, .y=0x83, .sp=0xba, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5ca9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5ca9, .value=0x5d, .type=IO_READ},
        {.addr=0x5caa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_024A) {
    const struct CPU_State initial_cpu = {.pc=0x44ce, .a=0x03, .x=0x39, .y=0xa0, .sp=0xf2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x44ce, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x44cf, .a=0x03, .x=0x03, .y=0xa0, .sp=0xf2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x44ce, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x44ce, .value=0x5d, .type=IO_READ},
        {.addr=0x44cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_024B) {
    const struct CPU_State initial_cpu = {.pc=0xf5fe, .a=0xbd, .x=0xef, .y=0x99, .sp=0x38, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf5fe, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf5ff, .a=0xbd, .x=0xbd, .y=0x99, .sp=0x38, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf5fe, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf5fe, .value=0x5d, .type=IO_READ},
        {.addr=0xf5ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_024C) {
    const struct CPU_State initial_cpu = {.pc=0xf881, .a=0x0e, .x=0xb1, .y=0xe8, .sp=0x9c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xf881, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf882, .a=0x0e, .x=0x0e, .y=0xe8, .sp=0x9c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf881, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf881, .value=0x5d, .type=IO_READ},
        {.addr=0xf882, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x86ff, .a=0x76, .x=0x7a, .y=0x9c, .sp=0x32, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x86ff, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8700, .a=0x76, .x=0x76, .y=0x9c, .sp=0x32, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x86ff, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x86ff, .value=0x5d, .type=IO_READ},
        {.addr=0x8700, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x2989, .a=0x95, .x=0x5a, .y=0x7e, .sp=0x8d, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2989, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x298a, .a=0x95, .x=0x95, .y=0x7e, .sp=0x8d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2989, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2989, .value=0x5d, .type=IO_READ},
        {.addr=0x298a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x601d, .a=0x81, .x=0xf6, .y=0xab, .sp=0xa6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x601d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x601e, .a=0x81, .x=0x81, .y=0xab, .sp=0xa6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x601d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x601d, .value=0x5d, .type=IO_READ},
        {.addr=0x601e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xc705, .a=0x55, .x=0x85, .y=0x4a, .sp=0x52, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc705, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc706, .a=0x55, .x=0x55, .y=0x4a, .sp=0x52, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc705, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc705, .value=0x5d, .type=IO_READ},
        {.addr=0xc706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x7abc, .a=0xa1, .x=0x56, .y=0xb2, .sp=0xa3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7abc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7abd, .a=0xa1, .x=0xa1, .y=0xb2, .sp=0xa3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7abc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7abc, .value=0x5d, .type=IO_READ},
        {.addr=0x7abd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0252) {
    const struct CPU_State initial_cpu = {.pc=0xbd31, .a=0x0e, .x=0x4d, .y=0x50, .sp=0xff, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbd31, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbd32, .a=0x0e, .x=0x0e, .y=0x50, .sp=0xff, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xbd31, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbd31, .value=0x5d, .type=IO_READ},
        {.addr=0xbd32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0253) {
    const struct CPU_State initial_cpu = {.pc=0x6f54, .a=0x42, .x=0x2d, .y=0xf9, .sp=0xd9, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x6f54, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6f55, .a=0x42, .x=0x42, .y=0xf9, .sp=0xd9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6f54, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6f54, .value=0x5d, .type=IO_READ},
        {.addr=0x6f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x33d4, .a=0x47, .x=0x52, .y=0xd5, .sp=0x9f, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x33d4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33d5, .a=0x47, .x=0x47, .y=0xd5, .sp=0x9f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x33d4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x33d4, .value=0x5d, .type=IO_READ},
        {.addr=0x33d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0255) {
    const struct CPU_State initial_cpu = {.pc=0x1436, .a=0xfe, .x=0x16, .y=0x39, .sp=0x16, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x1436, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1437, .a=0xfe, .x=0xfe, .y=0x39, .sp=0x16, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1436, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1436, .value=0x5d, .type=IO_READ},
        {.addr=0x1437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xe33f, .a=0x09, .x=0xb6, .y=0x1e, .sp=0xbb, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xe33f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe340, .a=0x09, .x=0x09, .y=0x1e, .sp=0xbb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe33f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe33f, .value=0x5d, .type=IO_READ},
        {.addr=0xe340, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0257) {
    const struct CPU_State initial_cpu = {.pc=0xe0e2, .a=0x5c, .x=0xb2, .y=0xc8, .sp=0xfb, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe0e2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe0e3, .a=0x5c, .x=0x5c, .y=0xc8, .sp=0xfb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe0e2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe0e2, .value=0x5d, .type=IO_READ},
        {.addr=0xe0e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x9f9a, .a=0x59, .x=0x32, .y=0x08, .sp=0x03, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x9f9a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9f9b, .a=0x59, .x=0x59, .y=0x08, .sp=0x03, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9f9a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9f9a, .value=0x5d, .type=IO_READ},
        {.addr=0x9f9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0259) {
    const struct CPU_State initial_cpu = {.pc=0xc5a2, .a=0x16, .x=0x34, .y=0xa0, .sp=0x3c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc5a3, .a=0x16, .x=0x16, .y=0xa0, .sp=0x3c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc5a2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc5a2, .value=0x5d, .type=IO_READ},
        {.addr=0xc5a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_025A) {
    const struct CPU_State initial_cpu = {.pc=0x46a6, .a=0x1b, .x=0x5a, .y=0xf7, .sp=0xba, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x46a6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x46a7, .a=0x1b, .x=0x1b, .y=0xf7, .sp=0xba, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x46a6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x46a6, .value=0x5d, .type=IO_READ},
        {.addr=0x46a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_025B) {
    const struct CPU_State initial_cpu = {.pc=0xb8a2, .a=0x85, .x=0xee, .y=0x08, .sp=0x41, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xb8a2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb8a3, .a=0x85, .x=0x85, .y=0x08, .sp=0x41, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xb8a2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb8a2, .value=0x5d, .type=IO_READ},
        {.addr=0xb8a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_025C) {
    const struct CPU_State initial_cpu = {.pc=0xb36f, .a=0x58, .x=0x59, .y=0x55, .sp=0xbf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb36f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb370, .a=0x58, .x=0x58, .y=0x55, .sp=0xbf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb36f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb36f, .value=0x5d, .type=IO_READ},
        {.addr=0xb370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_025D) {
    const struct CPU_State initial_cpu = {.pc=0x56aa, .a=0xd6, .x=0x3b, .y=0x26, .sp=0x51, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x56aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x56ab, .a=0xd6, .x=0xd6, .y=0x26, .sp=0x51, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x56aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x56aa, .value=0x5d, .type=IO_READ},
        {.addr=0x56ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_025E) {
    const struct CPU_State initial_cpu = {.pc=0xb674, .a=0x4d, .x=0x05, .y=0x98, .sp=0xe4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb674, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb675, .a=0x4d, .x=0x4d, .y=0x98, .sp=0xe4, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb674, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb674, .value=0x5d, .type=IO_READ},
        {.addr=0xb675, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x2f48, .a=0xd7, .x=0x8a, .y=0x2d, .sp=0xd6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2f48, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2f49, .a=0xd7, .x=0xd7, .y=0x2d, .sp=0xd6, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2f48, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2f48, .value=0x5d, .type=IO_READ},
        {.addr=0x2f49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0260) {
    const struct CPU_State initial_cpu = {.pc=0xa2df, .a=0x0f, .x=0xa7, .y=0xfc, .sp=0xd5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa2df, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa2e0, .a=0x0f, .x=0x0f, .y=0xfc, .sp=0xd5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa2df, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa2df, .value=0x5d, .type=IO_READ},
        {.addr=0xa2e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0261) {
    const struct CPU_State initial_cpu = {.pc=0xcd1a, .a=0x66, .x=0xe4, .y=0x1b, .sp=0x79, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcd1b, .a=0x66, .x=0x66, .y=0x1b, .sp=0x79, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcd1a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcd1a, .value=0x5d, .type=IO_READ},
        {.addr=0xcd1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0262) {
    const struct CPU_State initial_cpu = {.pc=0x5c9d, .a=0x7f, .x=0x79, .y=0x56, .sp=0xf9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5c9d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5c9e, .a=0x7f, .x=0x7f, .y=0x56, .sp=0xf9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5c9d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5c9d, .value=0x5d, .type=IO_READ},
        {.addr=0x5c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x3814, .a=0xaf, .x=0x95, .y=0xea, .sp=0x2c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3814, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3815, .a=0xaf, .x=0xaf, .y=0xea, .sp=0x2c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3814, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3814, .value=0x5d, .type=IO_READ},
        {.addr=0x3815, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0264) {
    const struct CPU_State initial_cpu = {.pc=0xeb57, .a=0x0e, .x=0x0e, .y=0xc2, .sp=0x5b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb57, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeb58, .a=0x0e, .x=0x0e, .y=0xc2, .sp=0x5b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xeb57, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeb57, .value=0x5d, .type=IO_READ},
        {.addr=0xeb58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0265) {
    const struct CPU_State initial_cpu = {.pc=0x242d, .a=0x45, .x=0xa3, .y=0x24, .sp=0x8f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x242d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x242e, .a=0x45, .x=0x45, .y=0x24, .sp=0x8f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x242d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x242d, .value=0x5d, .type=IO_READ},
        {.addr=0x242e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0266) {
    const struct CPU_State initial_cpu = {.pc=0x9aba, .a=0x8e, .x=0x12, .y=0x20, .sp=0xcc, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x9aba, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9abb, .a=0x8e, .x=0x8e, .y=0x20, .sp=0xcc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9aba, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9aba, .value=0x5d, .type=IO_READ},
        {.addr=0x9abb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0267) {
    const struct CPU_State initial_cpu = {.pc=0x6157, .a=0x37, .x=0xcc, .y=0xb2, .sp=0x8c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6157, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6158, .a=0x37, .x=0x37, .y=0xb2, .sp=0x8c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6157, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6157, .value=0x5d, .type=IO_READ},
        {.addr=0x6158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0268) {
    const struct CPU_State initial_cpu = {.pc=0xb31e, .a=0x67, .x=0xbf, .y=0x39, .sp=0x15, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb31e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb31f, .a=0x67, .x=0x67, .y=0x39, .sp=0x15, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb31e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb31e, .value=0x5d, .type=IO_READ},
        {.addr=0xb31f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0269) {
    const struct CPU_State initial_cpu = {.pc=0x1950, .a=0xa3, .x=0xe5, .y=0x70, .sp=0x6c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1950, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1951, .a=0xa3, .x=0xa3, .y=0x70, .sp=0x6c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1950, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1950, .value=0x5d, .type=IO_READ},
        {.addr=0x1951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_026A) {
    const struct CPU_State initial_cpu = {.pc=0xbf59, .a=0x40, .x=0x1e, .y=0xf0, .sp=0xbf, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xbf59, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbf5a, .a=0x40, .x=0x40, .y=0xf0, .sp=0xbf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xbf59, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbf59, .value=0x5d, .type=IO_READ},
        {.addr=0xbf5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_026B) {
    const struct CPU_State initial_cpu = {.pc=0xe99d, .a=0x08, .x=0x0a, .y=0xd9, .sp=0x1d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe99d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe99e, .a=0x08, .x=0x08, .y=0xd9, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe99d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe99d, .value=0x5d, .type=IO_READ},
        {.addr=0xe99e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_026C) {
    const struct CPU_State initial_cpu = {.pc=0x5458, .a=0x7a, .x=0x1f, .y=0x95, .sp=0x74, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x5458, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5459, .a=0x7a, .x=0x7a, .y=0x95, .sp=0x74, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5458, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5458, .value=0x5d, .type=IO_READ},
        {.addr=0x5459, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x5e63, .a=0x65, .x=0x0e, .y=0x29, .sp=0x9c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x5e63, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5e64, .a=0x65, .x=0x65, .y=0x29, .sp=0x9c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5e63, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5e63, .value=0x5d, .type=IO_READ},
        {.addr=0x5e64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x4942, .a=0x7b, .x=0x8c, .y=0x7e, .sp=0x14, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4942, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4943, .a=0x7b, .x=0x7b, .y=0x7e, .sp=0x14, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4942, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4942, .value=0x5d, .type=IO_READ},
        {.addr=0x4943, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_026F) {
    const struct CPU_State initial_cpu = {.pc=0xcc0f, .a=0xe3, .x=0xa6, .y=0x6e, .sp=0x7d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcc0f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcc10, .a=0xe3, .x=0xe3, .y=0x6e, .sp=0x7d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xcc0f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcc0f, .value=0x5d, .type=IO_READ},
        {.addr=0xcc10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x756b, .a=0x80, .x=0xe1, .y=0xd3, .sp=0xc6, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x756b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x756c, .a=0x80, .x=0x80, .y=0xd3, .sp=0xc6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x756b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x756b, .value=0x5d, .type=IO_READ},
        {.addr=0x756c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x2fe4, .a=0xf6, .x=0x8e, .y=0xb9, .sp=0x7e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2fe5, .a=0xf6, .x=0xf6, .y=0xb9, .sp=0x7e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2fe4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2fe4, .value=0x5d, .type=IO_READ},
        {.addr=0x2fe5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0272) {
    const struct CPU_State initial_cpu = {.pc=0x54f3, .a=0xd1, .x=0xaf, .y=0xad, .sp=0x18, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x54f3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x54f4, .a=0xd1, .x=0xd1, .y=0xad, .sp=0x18, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x54f3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x54f3, .value=0x5d, .type=IO_READ},
        {.addr=0x54f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1501, .a=0x41, .x=0x1c, .y=0x0c, .sp=0x1f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1501, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1502, .a=0x41, .x=0x41, .y=0x0c, .sp=0x1f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1501, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1501, .value=0x5d, .type=IO_READ},
        {.addr=0x1502, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0274) {
    const struct CPU_State initial_cpu = {.pc=0xd2d3, .a=0xf6, .x=0xa3, .y=0x4d, .sp=0xb7, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd2d4, .a=0xf6, .x=0xf6, .y=0x4d, .sp=0xb7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd2d3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd2d3, .value=0x5d, .type=IO_READ},
        {.addr=0xd2d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x16a0, .a=0x1b, .x=0x29, .y=0x54, .sp=0xe3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x16a0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x16a1, .a=0x1b, .x=0x1b, .y=0x54, .sp=0xe3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x16a0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x16a0, .value=0x5d, .type=IO_READ},
        {.addr=0x16a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x61cc, .a=0x33, .x=0x20, .y=0x88, .sp=0x76, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x61cc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x61cd, .a=0x33, .x=0x33, .y=0x88, .sp=0x76, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x61cc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x61cc, .value=0x5d, .type=IO_READ},
        {.addr=0x61cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x1c03, .a=0xf9, .x=0xf1, .y=0x4d, .sp=0xd6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x1c03, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1c04, .a=0xf9, .x=0xf9, .y=0x4d, .sp=0xd6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1c03, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1c03, .value=0x5d, .type=IO_READ},
        {.addr=0x1c04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0278) {
    const struct CPU_State initial_cpu = {.pc=0x52bd, .a=0xdc, .x=0xbc, .y=0xc7, .sp=0x9c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x52bd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x52be, .a=0xdc, .x=0xdc, .y=0xc7, .sp=0x9c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x52bd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x52bd, .value=0x5d, .type=IO_READ},
        {.addr=0x52be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0279) {
    const struct CPU_State initial_cpu = {.pc=0xa1f0, .a=0x68, .x=0x68, .y=0x56, .sp=0x2b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa1f1, .a=0x68, .x=0x68, .y=0x56, .sp=0x2b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa1f0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa1f0, .value=0x5d, .type=IO_READ},
        {.addr=0xa1f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x3332, .a=0xf9, .x=0x8f, .y=0xb0, .sp=0x62, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x3332, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3333, .a=0xf9, .x=0xf9, .y=0xb0, .sp=0x62, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3332, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3332, .value=0x5d, .type=IO_READ},
        {.addr=0x3333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_027B) {
    const struct CPU_State initial_cpu = {.pc=0x6646, .a=0x72, .x=0xa1, .y=0x58, .sp=0xf1, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x6646, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6647, .a=0x72, .x=0x72, .y=0x58, .sp=0xf1, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6646, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6646, .value=0x5d, .type=IO_READ},
        {.addr=0x6647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_027C) {
    const struct CPU_State initial_cpu = {.pc=0xc067, .a=0x6c, .x=0x42, .y=0x6d, .sp=0xe3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc067, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc068, .a=0x6c, .x=0x6c, .y=0x6d, .sp=0xe3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc067, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc067, .value=0x5d, .type=IO_READ},
        {.addr=0xc068, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x1f52, .a=0xf2, .x=0x63, .y=0xe3, .sp=0xb8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1f52, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1f53, .a=0xf2, .x=0xf2, .y=0xe3, .sp=0xb8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1f52, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1f52, .value=0x5d, .type=IO_READ},
        {.addr=0x1f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x892e, .a=0x78, .x=0x08, .y=0x15, .sp=0x7a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x892e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x892f, .a=0x78, .x=0x78, .y=0x15, .sp=0x7a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x892e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x892e, .value=0x5d, .type=IO_READ},
        {.addr=0x892f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_027F) {
    const struct CPU_State initial_cpu = {.pc=0xf5bb, .a=0xdd, .x=0x80, .y=0x88, .sp=0xcd, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf5bb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf5bc, .a=0xdd, .x=0xdd, .y=0x88, .sp=0xcd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf5bb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf5bb, .value=0x5d, .type=IO_READ},
        {.addr=0xf5bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0280) {
    const struct CPU_State initial_cpu = {.pc=0x5c42, .a=0x9e, .x=0xae, .y=0x8e, .sp=0x32, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x5c42, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5c43, .a=0x9e, .x=0x9e, .y=0x8e, .sp=0x32, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5c42, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5c42, .value=0x5d, .type=IO_READ},
        {.addr=0x5c43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x7199, .a=0x6a, .x=0xde, .y=0xc6, .sp=0x02, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7199, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x719a, .a=0x6a, .x=0x6a, .y=0xc6, .sp=0x02, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7199, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7199, .value=0x5d, .type=IO_READ},
        {.addr=0x719a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x2a0a, .a=0x76, .x=0x32, .y=0x84, .sp=0x80, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x2a0a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2a0b, .a=0x76, .x=0x76, .y=0x84, .sp=0x80, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2a0a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2a0a, .value=0x5d, .type=IO_READ},
        {.addr=0x2a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1267, .a=0x07, .x=0xcf, .y=0x28, .sp=0xae, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1267, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1268, .a=0x07, .x=0x07, .y=0x28, .sp=0xae, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1267, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1267, .value=0x5d, .type=IO_READ},
        {.addr=0x1268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0284) {
    const struct CPU_State initial_cpu = {.pc=0x3733, .a=0x62, .x=0xda, .y=0xa9, .sp=0x3a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3733, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3734, .a=0x62, .x=0x62, .y=0xa9, .sp=0x3a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3733, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3733, .value=0x5d, .type=IO_READ},
        {.addr=0x3734, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0285) {
    const struct CPU_State initial_cpu = {.pc=0x8459, .a=0xb0, .x=0xb7, .y=0xcd, .sp=0x8f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8459, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x845a, .a=0xb0, .x=0xb0, .y=0xcd, .sp=0x8f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8459, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8459, .value=0x5d, .type=IO_READ},
        {.addr=0x845a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0286) {
    const struct CPU_State initial_cpu = {.pc=0x2419, .a=0xab, .x=0xf4, .y=0xf8, .sp=0x07, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x2419, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x241a, .a=0xab, .x=0xab, .y=0xf8, .sp=0x07, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2419, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2419, .value=0x5d, .type=IO_READ},
        {.addr=0x241a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0287) {
    const struct CPU_State initial_cpu = {.pc=0xf320, .a=0xbb, .x=0xba, .y=0x83, .sp=0xf0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf320, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf321, .a=0xbb, .x=0xbb, .y=0x83, .sp=0xf0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xf320, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf320, .value=0x5d, .type=IO_READ},
        {.addr=0xf321, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xa6b4, .a=0x99, .x=0x0a, .y=0xa9, .sp=0x4e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa6b5, .a=0x99, .x=0x99, .y=0xa9, .sp=0x4e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa6b4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa6b4, .value=0x5d, .type=IO_READ},
        {.addr=0xa6b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3bf9, .a=0xc7, .x=0x27, .y=0x72, .sp=0xaa, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3bfa, .a=0xc7, .x=0xc7, .y=0x72, .sp=0xaa, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3bf9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3bf9, .value=0x5d, .type=IO_READ},
        {.addr=0x3bfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_028A) {
    const struct CPU_State initial_cpu = {.pc=0x3963, .a=0x91, .x=0xe7, .y=0xbb, .sp=0x53, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3963, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3964, .a=0x91, .x=0x91, .y=0xbb, .sp=0x53, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3963, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3963, .value=0x5d, .type=IO_READ},
        {.addr=0x3964, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x69be, .a=0x2d, .x=0x43, .y=0xc7, .sp=0xad, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x69be, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x69bf, .a=0x2d, .x=0x2d, .y=0xc7, .sp=0xad, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x69be, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x69be, .value=0x5d, .type=IO_READ},
        {.addr=0x69bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x7c20, .a=0xd8, .x=0x17, .y=0x85, .sp=0x1d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7c20, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7c21, .a=0xd8, .x=0xd8, .y=0x85, .sp=0x1d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7c20, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7c20, .value=0x5d, .type=IO_READ},
        {.addr=0x7c21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_028D) {
    const struct CPU_State initial_cpu = {.pc=0xddaf, .a=0xea, .x=0x92, .y=0x85, .sp=0x5e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xddaf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xddb0, .a=0xea, .x=0xea, .y=0x85, .sp=0x5e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xddaf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xddaf, .value=0x5d, .type=IO_READ},
        {.addr=0xddb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_028E) {
    const struct CPU_State initial_cpu = {.pc=0x6964, .a=0xfc, .x=0x9b, .y=0xff, .sp=0x34, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x6964, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6965, .a=0xfc, .x=0xfc, .y=0xff, .sp=0x34, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x6964, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6964, .value=0x5d, .type=IO_READ},
        {.addr=0x6965, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_028F) {
    const struct CPU_State initial_cpu = {.pc=0xa8ad, .a=0xea, .x=0x03, .y=0x8d, .sp=0x0a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa8ae, .a=0xea, .x=0xea, .y=0x8d, .sp=0x0a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa8ad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa8ad, .value=0x5d, .type=IO_READ},
        {.addr=0xa8ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0290) {
    const struct CPU_State initial_cpu = {.pc=0xe7f6, .a=0xf5, .x=0xc4, .y=0x68, .sp=0xfb, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe7f7, .a=0xf5, .x=0xf5, .y=0x68, .sp=0xfb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe7f6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe7f6, .value=0x5d, .type=IO_READ},
        {.addr=0xe7f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x72fb, .a=0x93, .x=0x48, .y=0x94, .sp=0x8c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x72fb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x72fc, .a=0x93, .x=0x93, .y=0x94, .sp=0x8c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x72fb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x72fb, .value=0x5d, .type=IO_READ},
        {.addr=0x72fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x9001, .a=0xf0, .x=0xdd, .y=0x12, .sp=0x7c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9001, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9002, .a=0xf0, .x=0xf0, .y=0x12, .sp=0x7c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9001, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9001, .value=0x5d, .type=IO_READ},
        {.addr=0x9002, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0293) {
    const struct CPU_State initial_cpu = {.pc=0xcfb6, .a=0x2b, .x=0x92, .y=0x36, .sp=0xbf, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcfb7, .a=0x2b, .x=0x2b, .y=0x36, .sp=0xbf, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xcfb6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcfb6, .value=0x5d, .type=IO_READ},
        {.addr=0xcfb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0294) {
    const struct CPU_State initial_cpu = {.pc=0x092f, .a=0xd1, .x=0x81, .y=0x65, .sp=0x0f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x092f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0930, .a=0xd1, .x=0xd1, .y=0x65, .sp=0x0f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x092f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x092f, .value=0x5d, .type=IO_READ},
        {.addr=0x0930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x7833, .a=0x0f, .x=0xb6, .y=0x6a, .sp=0xd6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7833, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7834, .a=0x0f, .x=0x0f, .y=0x6a, .sp=0xd6, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7833, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7833, .value=0x5d, .type=IO_READ},
        {.addr=0x7834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0296) {
    const struct CPU_State initial_cpu = {.pc=0x7e13, .a=0x93, .x=0x2a, .y=0x37, .sp=0xab, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7e13, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e14, .a=0x93, .x=0x93, .y=0x37, .sp=0xab, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7e13, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e13, .value=0x5d, .type=IO_READ},
        {.addr=0x7e14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x306f, .a=0xf7, .x=0x21, .y=0x3d, .sp=0xbb, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x306f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3070, .a=0xf7, .x=0xf7, .y=0x3d, .sp=0xbb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x306f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x306f, .value=0x5d, .type=IO_READ},
        {.addr=0x3070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x7f2c, .a=0x42, .x=0x51, .y=0x64, .sp=0xc3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7f2c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7f2d, .a=0x42, .x=0x42, .y=0x64, .sp=0xc3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7f2c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7f2c, .value=0x5d, .type=IO_READ},
        {.addr=0x7f2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x9814, .a=0x02, .x=0xaf, .y=0xb9, .sp=0x3e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x9814, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9815, .a=0x02, .x=0x02, .y=0xb9, .sp=0x3e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9814, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9814, .value=0x5d, .type=IO_READ},
        {.addr=0x9815, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_029A) {
    const struct CPU_State initial_cpu = {.pc=0x29fc, .a=0x5d, .x=0x9f, .y=0xd3, .sp=0x8c, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x29fc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x29fd, .a=0x5d, .x=0x5d, .y=0xd3, .sp=0x8c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x29fc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x29fc, .value=0x5d, .type=IO_READ},
        {.addr=0x29fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_029B) {
    const struct CPU_State initial_cpu = {.pc=0xfbee, .a=0x1e, .x=0xdd, .y=0xff, .sp=0x1f, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xfbee, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfbef, .a=0x1e, .x=0x1e, .y=0xff, .sp=0x1f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfbee, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfbee, .value=0x5d, .type=IO_READ},
        {.addr=0xfbef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_029C) {
    const struct CPU_State initial_cpu = {.pc=0xec4f, .a=0xe2, .x=0x14, .y=0x3e, .sp=0x08, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xec4f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xec50, .a=0xe2, .x=0xe2, .y=0x3e, .sp=0x08, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xec4f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xec4f, .value=0x5d, .type=IO_READ},
        {.addr=0xec50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_029D) {
    const struct CPU_State initial_cpu = {.pc=0xabaf, .a=0xbf, .x=0x43, .y=0xa7, .sp=0x66, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xabaf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xabb0, .a=0xbf, .x=0xbf, .y=0xa7, .sp=0x66, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xabaf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xabaf, .value=0x5d, .type=IO_READ},
        {.addr=0xabb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_029E) {
    const struct CPU_State initial_cpu = {.pc=0xd2d8, .a=0xea, .x=0x41, .y=0x99, .sp=0x06, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd2d9, .a=0xea, .x=0xea, .y=0x99, .sp=0x06, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd2d8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd2d8, .value=0x5d, .type=IO_READ},
        {.addr=0xd2d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_029F) {
    const struct CPU_State initial_cpu = {.pc=0xcff0, .a=0x39, .x=0x9d, .y=0xc6, .sp=0xe7, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xcff0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcff1, .a=0x39, .x=0x39, .y=0xc6, .sp=0xe7, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xcff0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcff0, .value=0x5d, .type=IO_READ},
        {.addr=0xcff1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x5c5a, .a=0xd8, .x=0x65, .y=0x85, .sp=0x2c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5c5a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5c5b, .a=0xd8, .x=0xd8, .y=0x85, .sp=0x2c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5c5a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5c5a, .value=0x5d, .type=IO_READ},
        {.addr=0x5c5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xec9e, .a=0xa9, .x=0x5e, .y=0x62, .sp=0x19, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xec9e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xec9f, .a=0xa9, .x=0xa9, .y=0x62, .sp=0x19, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xec9e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xec9e, .value=0x5d, .type=IO_READ},
        {.addr=0xec9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xebc7, .a=0x20, .x=0x3f, .y=0x39, .sp=0x4f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xebc7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xebc8, .a=0x20, .x=0x20, .y=0x39, .sp=0x4f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xebc7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xebc7, .value=0x5d, .type=IO_READ},
        {.addr=0xebc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xa961, .a=0x71, .x=0xc6, .y=0xa2, .sp=0x9a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa961, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa962, .a=0x71, .x=0x71, .y=0xa2, .sp=0x9a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa961, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa961, .value=0x5d, .type=IO_READ},
        {.addr=0xa962, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x8cff, .a=0x12, .x=0x52, .y=0xa7, .sp=0x5a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8cff, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8d00, .a=0x12, .x=0x12, .y=0xa7, .sp=0x5a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8cff, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8cff, .value=0x5d, .type=IO_READ},
        {.addr=0x8d00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xace1, .a=0x60, .x=0xc2, .y=0x14, .sp=0x45, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xace1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xace2, .a=0x60, .x=0x60, .y=0x14, .sp=0x45, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xace1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xace1, .value=0x5d, .type=IO_READ},
        {.addr=0xace2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x2ef9, .a=0xef, .x=0x94, .y=0xf0, .sp=0xe0, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2efa, .a=0xef, .x=0xef, .y=0xf0, .sp=0xe0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2ef9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2ef9, .value=0x5d, .type=IO_READ},
        {.addr=0x2efa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x4361, .a=0x73, .x=0x4a, .y=0x11, .sp=0x77, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4361, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4362, .a=0x73, .x=0x73, .y=0x11, .sp=0x77, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4361, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4361, .value=0x5d, .type=IO_READ},
        {.addr=0x4362, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x33a3, .a=0x6f, .x=0x3d, .y=0xca, .sp=0x5f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x33a3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x33a4, .a=0x6f, .x=0x6f, .y=0xca, .sp=0x5f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x33a3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x33a3, .value=0x5d, .type=IO_READ},
        {.addr=0x33a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x729d, .a=0x40, .x=0xaf, .y=0xd5, .sp=0x2e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x729d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x729e, .a=0x40, .x=0x40, .y=0xd5, .sp=0x2e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x729d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x729d, .value=0x5d, .type=IO_READ},
        {.addr=0x729e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xd8f6, .a=0xee, .x=0x5a, .y=0x29, .sp=0x22, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd8f7, .a=0xee, .x=0xee, .y=0x29, .sp=0x22, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd8f6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd8f6, .value=0x5d, .type=IO_READ},
        {.addr=0xd8f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x769e, .a=0xf9, .x=0x78, .y=0xa2, .sp=0x06, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x769e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x769f, .a=0xf9, .x=0xf9, .y=0xa2, .sp=0x06, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x769e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x769e, .value=0x5d, .type=IO_READ},
        {.addr=0x769f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x7edd, .a=0x15, .x=0x99, .y=0x43, .sp=0xe9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7edd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7ede, .a=0x15, .x=0x15, .y=0x43, .sp=0xe9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7edd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7edd, .value=0x5d, .type=IO_READ},
        {.addr=0x7ede, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x7127, .a=0xd6, .x=0xab, .y=0x88, .sp=0xe6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x7127, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7128, .a=0xd6, .x=0xd6, .y=0x88, .sp=0xe6, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7127, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7127, .value=0x5d, .type=IO_READ},
        {.addr=0x7128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xa94f, .a=0xb5, .x=0x1c, .y=0x3b, .sp=0xe6, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xa94f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa950, .a=0xb5, .x=0xb5, .y=0x3b, .sp=0xe6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa94f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa94f, .value=0x5d, .type=IO_READ},
        {.addr=0xa950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x1f4f, .a=0x93, .x=0x56, .y=0x6c, .sp=0x25, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x1f4f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1f50, .a=0x93, .x=0x93, .y=0x6c, .sp=0x25, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1f4f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1f4f, .value=0x5d, .type=IO_READ},
        {.addr=0x1f50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x6c1d, .a=0xb6, .x=0xe5, .y=0x92, .sp=0xc8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6c1e, .a=0xb6, .x=0xb6, .y=0x92, .sp=0xc8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6c1d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6c1d, .value=0x5d, .type=IO_READ},
        {.addr=0x6c1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x9e84, .a=0x2e, .x=0x0a, .y=0xd2, .sp=0xaf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9e84, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9e85, .a=0x2e, .x=0x2e, .y=0xd2, .sp=0xaf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9e84, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9e84, .value=0x5d, .type=IO_READ},
        {.addr=0x9e85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xcecb, .a=0xeb, .x=0xfd, .y=0xc3, .sp=0xc7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xcecb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcecc, .a=0xeb, .x=0xeb, .y=0xc3, .sp=0xc7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xcecb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcecb, .value=0x5d, .type=IO_READ},
        {.addr=0xcecc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x00a0, .a=0xcd, .x=0x7d, .y=0xd2, .sp=0x32, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x00a1, .a=0xcd, .x=0xcd, .y=0xd2, .sp=0x32, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x00a0, .value=0x5d, .type=IO_READ},
        {.addr=0x00a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xb227, .a=0x76, .x=0xb9, .y=0xdd, .sp=0xf9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb227, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb228, .a=0x76, .x=0x76, .y=0xdd, .sp=0xf9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb227, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb227, .value=0x5d, .type=IO_READ},
        {.addr=0xb228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x425b, .a=0x6d, .x=0xbc, .y=0xfe, .sp=0xe6, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x425b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x425c, .a=0x6d, .x=0x6d, .y=0xfe, .sp=0xe6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x425b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x425b, .value=0x5d, .type=IO_READ},
        {.addr=0x425c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xce87, .a=0xc0, .x=0x53, .y=0xeb, .sp=0xcb, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xce87, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xce88, .a=0xc0, .x=0xc0, .y=0xeb, .sp=0xcb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xce87, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xce87, .value=0x5d, .type=IO_READ},
        {.addr=0xce88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xe939, .a=0xae, .x=0xe4, .y=0xbc, .sp=0x93, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe939, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe93a, .a=0xae, .x=0xae, .y=0xbc, .sp=0x93, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe939, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe939, .value=0x5d, .type=IO_READ},
        {.addr=0xe93a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x302a, .a=0xf7, .x=0x07, .y=0xfd, .sp=0x1d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x302a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x302b, .a=0xf7, .x=0xf7, .y=0xfd, .sp=0x1d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x302a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x302a, .value=0x5d, .type=IO_READ},
        {.addr=0x302b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x5a7d, .a=0x46, .x=0x6e, .y=0x36, .sp=0x9b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5a7d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5a7e, .a=0x46, .x=0x46, .y=0x36, .sp=0x9b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5a7d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5a7d, .value=0x5d, .type=IO_READ},
        {.addr=0x5a7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x8e6b, .a=0x94, .x=0x4c, .y=0xa9, .sp=0x36, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8e6b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8e6c, .a=0x94, .x=0x94, .y=0xa9, .sp=0x36, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8e6b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8e6b, .value=0x5d, .type=IO_READ},
        {.addr=0x8e6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x7571, .a=0x97, .x=0x9f, .y=0xf2, .sp=0x79, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x7571, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7572, .a=0x97, .x=0x97, .y=0xf2, .sp=0x79, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7571, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7571, .value=0x5d, .type=IO_READ},
        {.addr=0x7572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xe3e5, .a=0x0a, .x=0x7e, .y=0xaf, .sp=0xa9, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe3e6, .a=0x0a, .x=0x0a, .y=0xaf, .sp=0xa9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe3e5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe3e5, .value=0x5d, .type=IO_READ},
        {.addr=0xe3e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x2019, .a=0xb3, .x=0x6c, .y=0xb9, .sp=0xb7, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2019, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x201a, .a=0xb3, .x=0xb3, .y=0xb9, .sp=0xb7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2019, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2019, .value=0x5d, .type=IO_READ},
        {.addr=0x201a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x2beb, .a=0xaf, .x=0x18, .y=0xc8, .sp=0x9a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2beb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2bec, .a=0xaf, .x=0xaf, .y=0xc8, .sp=0x9a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2beb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2beb, .value=0x5d, .type=IO_READ},
        {.addr=0x2bec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xfc23, .a=0x75, .x=0x33, .y=0xda, .sp=0xa7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xfc23, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfc24, .a=0x75, .x=0x75, .y=0xda, .sp=0xa7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfc23, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfc23, .value=0x5d, .type=IO_READ},
        {.addr=0xfc24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x407b, .a=0x6d, .x=0xdd, .y=0x53, .sp=0x57, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x407b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x407c, .a=0x6d, .x=0x6d, .y=0x53, .sp=0x57, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x407b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x407b, .value=0x5d, .type=IO_READ},
        {.addr=0x407c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xd2c2, .a=0x87, .x=0x1f, .y=0xa8, .sp=0xe9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd2c3, .a=0x87, .x=0x87, .y=0xa8, .sp=0xe9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd2c2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd2c2, .value=0x5d, .type=IO_READ},
        {.addr=0xd2c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x2d09, .a=0xa1, .x=0x95, .y=0x4c, .sp=0xd4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2d09, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2d0a, .a=0xa1, .x=0xa1, .y=0x4c, .sp=0xd4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2d09, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2d09, .value=0x5d, .type=IO_READ},
        {.addr=0x2d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xaf74, .a=0xbe, .x=0x42, .y=0x8c, .sp=0x64, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xaf74, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaf75, .a=0xbe, .x=0xbe, .y=0x8c, .sp=0x64, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xaf74, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaf74, .value=0x5d, .type=IO_READ},
        {.addr=0xaf75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x4267, .a=0xf8, .x=0xe3, .y=0x63, .sp=0x77, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4267, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4268, .a=0xf8, .x=0xf8, .y=0x63, .sp=0x77, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4267, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4267, .value=0x5d, .type=IO_READ},
        {.addr=0x4268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x249c, .a=0xf6, .x=0x37, .y=0x25, .sp=0x5f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x249c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x249d, .a=0xf6, .x=0xf6, .y=0x25, .sp=0x5f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x249c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x249c, .value=0x5d, .type=IO_READ},
        {.addr=0x249d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x9f18, .a=0xa3, .x=0xf2, .y=0x53, .sp=0x56, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9f18, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9f19, .a=0xa3, .x=0xa3, .y=0x53, .sp=0x56, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9f18, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9f18, .value=0x5d, .type=IO_READ},
        {.addr=0x9f19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x2a5c, .a=0xe8, .x=0xa2, .y=0xfe, .sp=0x84, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x2a5c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2a5d, .a=0xe8, .x=0xe8, .y=0xfe, .sp=0x84, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2a5c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2a5c, .value=0x5d, .type=IO_READ},
        {.addr=0x2a5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xf6a9, .a=0x54, .x=0x5f, .y=0x2a, .sp=0x3e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf6aa, .a=0x54, .x=0x54, .y=0x2a, .sp=0x3e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf6a9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf6a9, .value=0x5d, .type=IO_READ},
        {.addr=0xf6aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xd677, .a=0x4f, .x=0x42, .y=0xb7, .sp=0x4d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd677, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd678, .a=0x4f, .x=0x4f, .y=0xb7, .sp=0x4d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd677, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd677, .value=0x5d, .type=IO_READ},
        {.addr=0xd678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xa133, .a=0x8e, .x=0x13, .y=0x25, .sp=0xa4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa133, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa134, .a=0x8e, .x=0x8e, .y=0x25, .sp=0xa4, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa133, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa133, .value=0x5d, .type=IO_READ},
        {.addr=0xa134, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x4767, .a=0xe6, .x=0x8a, .y=0x52, .sp=0x3c, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4767, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4768, .a=0xe6, .x=0xe6, .y=0x52, .sp=0x3c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4767, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4767, .value=0x5d, .type=IO_READ},
        {.addr=0x4768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x127d, .a=0x64, .x=0x02, .y=0xaa, .sp=0xd1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x127d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x127e, .a=0x64, .x=0x64, .y=0xaa, .sp=0xd1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x127d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x127d, .value=0x5d, .type=IO_READ},
        {.addr=0x127e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x7f5f, .a=0xa5, .x=0xed, .y=0xfd, .sp=0xb4, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7f60, .a=0xa5, .x=0xa5, .y=0xfd, .sp=0xb4, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x7f5f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7f5f, .value=0x5d, .type=IO_READ},
        {.addr=0x7f60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x8682, .a=0x5a, .x=0x99, .y=0x82, .sp=0x8f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8682, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8683, .a=0x5a, .x=0x5a, .y=0x82, .sp=0x8f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8682, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8682, .value=0x5d, .type=IO_READ},
        {.addr=0x8683, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x7b2b, .a=0x14, .x=0x40, .y=0x5a, .sp=0xed, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7b2b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7b2c, .a=0x14, .x=0x14, .y=0x5a, .sp=0xed, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7b2b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7b2b, .value=0x5d, .type=IO_READ},
        {.addr=0x7b2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x5a5f, .a=0xd3, .x=0xe7, .y=0x1b, .sp=0xd8, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5a5f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5a60, .a=0xd3, .x=0xd3, .y=0x1b, .sp=0xd8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x5a5f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5a5f, .value=0x5d, .type=IO_READ},
        {.addr=0x5a60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x4a6a, .a=0x60, .x=0x51, .y=0xc0, .sp=0xe5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4a6a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a6b, .a=0x60, .x=0x60, .y=0xc0, .sp=0xe5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4a6a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4a6a, .value=0x5d, .type=IO_READ},
        {.addr=0x4a6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xc402, .a=0xa2, .x=0xb1, .y=0xf2, .sp=0x9e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc402, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc403, .a=0xa2, .x=0xa2, .y=0xf2, .sp=0x9e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc402, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc402, .value=0x5d, .type=IO_READ},
        {.addr=0xc403, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xb5e2, .a=0x07, .x=0x5c, .y=0x88, .sp=0xcc, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb5e3, .a=0x07, .x=0x07, .y=0x88, .sp=0xcc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb5e2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb5e2, .value=0x5d, .type=IO_READ},
        {.addr=0xb5e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xe32b, .a=0x9f, .x=0xc7, .y=0x80, .sp=0x35, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe32b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe32c, .a=0x9f, .x=0x9f, .y=0x80, .sp=0x35, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe32b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe32b, .value=0x5d, .type=IO_READ},
        {.addr=0xe32c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xc92a, .a=0x9e, .x=0x06, .y=0x8a, .sp=0x8e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc92a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc92b, .a=0x9e, .x=0x9e, .y=0x8a, .sp=0x8e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc92a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc92a, .value=0x5d, .type=IO_READ},
        {.addr=0xc92b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xef48, .a=0x02, .x=0x91, .y=0x0c, .sp=0xcf, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xef48, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xef49, .a=0x02, .x=0x02, .y=0x0c, .sp=0xcf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xef48, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xef48, .value=0x5d, .type=IO_READ},
        {.addr=0xef49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x5131, .a=0xb1, .x=0xc2, .y=0xd2, .sp=0xd2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x5131, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5132, .a=0xb1, .x=0xb1, .y=0xd2, .sp=0xd2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5131, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5131, .value=0x5d, .type=IO_READ},
        {.addr=0x5132, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xd32b, .a=0xad, .x=0x2e, .y=0x20, .sp=0x6c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd32b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd32c, .a=0xad, .x=0xad, .y=0x20, .sp=0x6c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd32b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd32b, .value=0x5d, .type=IO_READ},
        {.addr=0xd32c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xaab7, .a=0x2f, .x=0x9f, .y=0x09, .sp=0x21, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xaab7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaab8, .a=0x2f, .x=0x2f, .y=0x09, .sp=0x21, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xaab7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaab7, .value=0x5d, .type=IO_READ},
        {.addr=0xaab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xc83a, .a=0x29, .x=0x54, .y=0x3c, .sp=0xed, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc83a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc83b, .a=0x29, .x=0x29, .y=0x3c, .sp=0xed, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc83a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc83a, .value=0x5d, .type=IO_READ},
        {.addr=0xc83b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xe438, .a=0x0c, .x=0xc7, .y=0x3b, .sp=0x4e, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xe438, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe439, .a=0x0c, .x=0x0c, .y=0x3b, .sp=0x4e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe438, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe438, .value=0x5d, .type=IO_READ},
        {.addr=0xe439, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xd20b, .a=0xdf, .x=0xb3, .y=0x82, .sp=0x20, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd20b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd20c, .a=0xdf, .x=0xdf, .y=0x82, .sp=0x20, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd20b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd20b, .value=0x5d, .type=IO_READ},
        {.addr=0xd20c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x7729, .a=0xdf, .x=0xf8, .y=0xff, .sp=0x3a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7729, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x772a, .a=0xdf, .x=0xdf, .y=0xff, .sp=0x3a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7729, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7729, .value=0x5d, .type=IO_READ},
        {.addr=0x772a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x5199, .a=0x30, .x=0x56, .y=0x97, .sp=0x19, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5199, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x519a, .a=0x30, .x=0x30, .y=0x97, .sp=0x19, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5199, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5199, .value=0x5d, .type=IO_READ},
        {.addr=0x519a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xff0c, .a=0xd7, .x=0xf3, .y=0x75, .sp=0xee, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xff0c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xff0d, .a=0xd7, .x=0xd7, .y=0x75, .sp=0xee, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xff0c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xff0c, .value=0x5d, .type=IO_READ},
        {.addr=0xff0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x98f7, .a=0x3f, .x=0xde, .y=0xf3, .sp=0x24, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x98f7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x98f8, .a=0x3f, .x=0x3f, .y=0xf3, .sp=0x24, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x98f7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x98f7, .value=0x5d, .type=IO_READ},
        {.addr=0x98f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x0d78, .a=0x5e, .x=0xe4, .y=0xeb, .sp=0x48, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d78, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0d79, .a=0x5e, .x=0x5e, .y=0xeb, .sp=0x48, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0d78, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0d78, .value=0x5d, .type=IO_READ},
        {.addr=0x0d79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xe1b1, .a=0xaf, .x=0x3e, .y=0xf6, .sp=0x3d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe1b2, .a=0xaf, .x=0xaf, .y=0xf6, .sp=0x3d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe1b1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe1b1, .value=0x5d, .type=IO_READ},
        {.addr=0xe1b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xcc5a, .a=0xf9, .x=0xd7, .y=0x55, .sp=0xa4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xcc5a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcc5b, .a=0xf9, .x=0xf9, .y=0x55, .sp=0xa4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xcc5a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcc5a, .value=0x5d, .type=IO_READ},
        {.addr=0xcc5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xf964, .a=0xc8, .x=0xff, .y=0x13, .sp=0x96, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xf964, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf965, .a=0xc8, .x=0xc8, .y=0x13, .sp=0x96, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf964, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf964, .value=0x5d, .type=IO_READ},
        {.addr=0xf965, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x09d6, .a=0x1d, .x=0xae, .y=0x54, .sp=0xec, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x09d6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x09d7, .a=0x1d, .x=0x1d, .y=0x54, .sp=0xec, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x09d6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x09d6, .value=0x5d, .type=IO_READ},
        {.addr=0x09d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xbb75, .a=0xd5, .x=0xad, .y=0x4a, .sp=0x28, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xbb75, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbb76, .a=0xd5, .x=0xd5, .y=0x4a, .sp=0x28, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbb75, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbb75, .value=0x5d, .type=IO_READ},
        {.addr=0xbb76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xeb38, .a=0x2b, .x=0xd2, .y=0x24, .sp=0x89, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xeb38, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xeb39, .a=0x2b, .x=0x2b, .y=0x24, .sp=0x89, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xeb38, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xeb38, .value=0x5d, .type=IO_READ},
        {.addr=0xeb39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x9e1f, .a=0x4e, .x=0xfc, .y=0xff, .sp=0x0e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9e1f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9e20, .a=0x4e, .x=0x4e, .y=0xff, .sp=0x0e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9e1f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9e1f, .value=0x5d, .type=IO_READ},
        {.addr=0x9e20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4152, .a=0xa4, .x=0xef, .y=0x25, .sp=0x85, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4152, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4153, .a=0xa4, .x=0xa4, .y=0x25, .sp=0x85, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4152, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4152, .value=0x5d, .type=IO_READ},
        {.addr=0x4153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x36c9, .a=0x42, .x=0xa5, .y=0xae, .sp=0x76, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x36c9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x36ca, .a=0x42, .x=0x42, .y=0xae, .sp=0x76, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x36c9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x36c9, .value=0x5d, .type=IO_READ},
        {.addr=0x36ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x6ae9, .a=0x3a, .x=0x3d, .y=0x6a, .sp=0x39, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6aea, .a=0x3a, .x=0x3a, .y=0x6a, .sp=0x39, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6ae9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6ae9, .value=0x5d, .type=IO_READ},
        {.addr=0x6aea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x114f, .a=0xad, .x=0x79, .y=0x6a, .sp=0x51, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x114f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1150, .a=0xad, .x=0xad, .y=0x6a, .sp=0x51, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x114f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x114f, .value=0x5d, .type=IO_READ},
        {.addr=0x1150, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x97a8, .a=0x46, .x=0x87, .y=0x71, .sp=0x25, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x97a8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x97a9, .a=0x46, .x=0x46, .y=0x71, .sp=0x25, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x97a8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x97a8, .value=0x5d, .type=IO_READ},
        {.addr=0x97a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x4b96, .a=0x80, .x=0x6b, .y=0x51, .sp=0x19, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4b96, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4b97, .a=0x80, .x=0x80, .y=0x51, .sp=0x19, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4b96, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4b96, .value=0x5d, .type=IO_READ},
        {.addr=0x4b97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x6ead, .a=0x61, .x=0x11, .y=0x97, .sp=0x4f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6ead, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6eae, .a=0x61, .x=0x61, .y=0x97, .sp=0x4f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6ead, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6ead, .value=0x5d, .type=IO_READ},
        {.addr=0x6eae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xfc56, .a=0x41, .x=0x76, .y=0x2d, .sp=0x23, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xfc56, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfc57, .a=0x41, .x=0x41, .y=0x2d, .sp=0x23, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xfc56, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfc56, .value=0x5d, .type=IO_READ},
        {.addr=0xfc57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x79b5, .a=0x00, .x=0x98, .y=0xb2, .sp=0xa2, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x79b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x79b6, .a=0x00, .x=0x00, .y=0xb2, .sp=0xa2, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x79b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x79b5, .value=0x5d, .type=IO_READ},
        {.addr=0x79b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x8236, .a=0x98, .x=0x15, .y=0xc8, .sp=0xb8, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8236, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8237, .a=0x98, .x=0x98, .y=0xc8, .sp=0xb8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8236, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8236, .value=0x5d, .type=IO_READ},
        {.addr=0x8237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x83cb, .a=0x3a, .x=0xb4, .y=0x0e, .sp=0x53, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x83cb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x83cc, .a=0x3a, .x=0x3a, .y=0x0e, .sp=0x53, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x83cb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x83cb, .value=0x5d, .type=IO_READ},
        {.addr=0x83cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x0463, .a=0xfc, .x=0x42, .y=0x06, .sp=0xb0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0463, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0464, .a=0xfc, .x=0xfc, .y=0x06, .sp=0xb0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0463, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0463, .value=0x5d, .type=IO_READ},
        {.addr=0x0464, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x698d, .a=0xf2, .x=0x3b, .y=0x1c, .sp=0xa7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x698d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x698e, .a=0xf2, .x=0xf2, .y=0x1c, .sp=0xa7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x698d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x698d, .value=0x5d, .type=IO_READ},
        {.addr=0x698e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x1191, .a=0x9e, .x=0x4b, .y=0xa1, .sp=0x04, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1191, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1192, .a=0x9e, .x=0x9e, .y=0xa1, .sp=0x04, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1191, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1191, .value=0x5d, .type=IO_READ},
        {.addr=0x1192, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x6924, .a=0x6f, .x=0xb2, .y=0xe7, .sp=0x12, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6924, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6925, .a=0x6f, .x=0x6f, .y=0xe7, .sp=0x12, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6924, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6924, .value=0x5d, .type=IO_READ},
        {.addr=0x6925, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xbf4f, .a=0x7c, .x=0xcc, .y=0x44, .sp=0xd1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbf50, .a=0x7c, .x=0x7c, .y=0x44, .sp=0xd1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbf4f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbf4f, .value=0x5d, .type=IO_READ},
        {.addr=0xbf50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x8832, .a=0x8c, .x=0xc5, .y=0x87, .sp=0xe0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8832, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8833, .a=0x8c, .x=0x8c, .y=0x87, .sp=0xe0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8832, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8832, .value=0x5d, .type=IO_READ},
        {.addr=0x8833, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x983c, .a=0x9f, .x=0x10, .y=0x9e, .sp=0xfc, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x983c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x983d, .a=0x9f, .x=0x9f, .y=0x9e, .sp=0xfc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x983c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x983c, .value=0x5d, .type=IO_READ},
        {.addr=0x983d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xd5ae, .a=0xa2, .x=0x46, .y=0xdf, .sp=0xa4, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd5ae, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd5af, .a=0xa2, .x=0xa2, .y=0xdf, .sp=0xa4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd5ae, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd5ae, .value=0x5d, .type=IO_READ},
        {.addr=0xd5af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x6c05, .a=0x45, .x=0xa2, .y=0xf0, .sp=0x89, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6c05, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6c06, .a=0x45, .x=0x45, .y=0xf0, .sp=0x89, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6c05, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6c05, .value=0x5d, .type=IO_READ},
        {.addr=0x6c06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x22e4, .a=0x05, .x=0x47, .y=0x78, .sp=0xb8, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x22e4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x22e5, .a=0x05, .x=0x05, .y=0x78, .sp=0xb8, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x22e4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x22e4, .value=0x5d, .type=IO_READ},
        {.addr=0x22e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x6fab, .a=0x6e, .x=0x84, .y=0xf4, .sp=0x88, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6fab, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6fac, .a=0x6e, .x=0x6e, .y=0xf4, .sp=0x88, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6fab, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6fab, .value=0x5d, .type=IO_READ},
        {.addr=0x6fac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x04a0, .a=0xf1, .x=0x4e, .y=0x5e, .sp=0xde, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x04a0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x04a1, .a=0xf1, .x=0xf1, .y=0x5e, .sp=0xde, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x04a0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x04a0, .value=0x5d, .type=IO_READ},
        {.addr=0x04a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xb4eb, .a=0xdb, .x=0x5d, .y=0x9c, .sp=0x74, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb4eb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb4ec, .a=0xdb, .x=0xdb, .y=0x9c, .sp=0x74, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb4eb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb4eb, .value=0x5d, .type=IO_READ},
        {.addr=0xb4ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0301) {
    const struct CPU_State initial_cpu = {.pc=0xa2e5, .a=0xc3, .x=0x13, .y=0x6a, .sp=0x26, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa2e6, .a=0xc3, .x=0xc3, .y=0x6a, .sp=0x26, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa2e5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa2e5, .value=0x5d, .type=IO_READ},
        {.addr=0xa2e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x315d, .a=0x82, .x=0x85, .y=0x4a, .sp=0x5f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x315d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x315e, .a=0x82, .x=0x82, .y=0x4a, .sp=0x5f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x315d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x315d, .value=0x5d, .type=IO_READ},
        {.addr=0x315e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x84cc, .a=0xb1, .x=0xd3, .y=0xde, .sp=0xc3, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x84cc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x84cd, .a=0xb1, .x=0xb1, .y=0xde, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x84cc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x84cc, .value=0x5d, .type=IO_READ},
        {.addr=0x84cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0304) {
    const struct CPU_State initial_cpu = {.pc=0x3ba0, .a=0x83, .x=0x4b, .y=0x75, .sp=0x2a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x3ba0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3ba1, .a=0x83, .x=0x83, .y=0x75, .sp=0x2a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3ba0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3ba0, .value=0x5d, .type=IO_READ},
        {.addr=0x3ba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x7ecf, .a=0xfc, .x=0x1d, .y=0xfb, .sp=0xcb, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x7ecf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7ed0, .a=0xfc, .x=0xfc, .y=0xfb, .sp=0xcb, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7ecf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7ecf, .value=0x5d, .type=IO_READ},
        {.addr=0x7ed0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0306) {
    const struct CPU_State initial_cpu = {.pc=0x51ab, .a=0x60, .x=0xb5, .y=0xad, .sp=0xc2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x51ab, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x51ac, .a=0x60, .x=0x60, .y=0xad, .sp=0xc2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x51ab, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x51ab, .value=0x5d, .type=IO_READ},
        {.addr=0x51ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0307) {
    const struct CPU_State initial_cpu = {.pc=0xec0c, .a=0x5e, .x=0xb5, .y=0x46, .sp=0x27, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xec0c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xec0d, .a=0x5e, .x=0x5e, .y=0x46, .sp=0x27, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xec0c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xec0c, .value=0x5d, .type=IO_READ},
        {.addr=0xec0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0308) {
    const struct CPU_State initial_cpu = {.pc=0xbc53, .a=0x8e, .x=0xc5, .y=0x68, .sp=0xb7, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xbc53, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbc54, .a=0x8e, .x=0x8e, .y=0x68, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbc53, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbc53, .value=0x5d, .type=IO_READ},
        {.addr=0xbc54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0309) {
    const struct CPU_State initial_cpu = {.pc=0xe804, .a=0xe5, .x=0xb7, .y=0x40, .sp=0x1f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe804, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe805, .a=0xe5, .x=0xe5, .y=0x40, .sp=0x1f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe804, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe804, .value=0x5d, .type=IO_READ},
        {.addr=0xe805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_030A) {
    const struct CPU_State initial_cpu = {.pc=0x93b6, .a=0x0c, .x=0xd9, .y=0xd4, .sp=0xe3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x93b6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x93b7, .a=0x0c, .x=0x0c, .y=0xd4, .sp=0xe3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x93b6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x93b6, .value=0x5d, .type=IO_READ},
        {.addr=0x93b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_030B) {
    const struct CPU_State initial_cpu = {.pc=0xca51, .a=0xe0, .x=0x81, .y=0xe2, .sp=0x2d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xca51, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xca52, .a=0xe0, .x=0xe0, .y=0xe2, .sp=0x2d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xca51, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xca51, .value=0x5d, .type=IO_READ},
        {.addr=0xca52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x0f52, .a=0x68, .x=0x3a, .y=0xb7, .sp=0x01, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0f52, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0f53, .a=0x68, .x=0x68, .y=0xb7, .sp=0x01, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0f52, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0f52, .value=0x5d, .type=IO_READ},
        {.addr=0x0f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_030D) {
    const struct CPU_State initial_cpu = {.pc=0xc970, .a=0x01, .x=0xea, .y=0x1b, .sp=0x67, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc970, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc971, .a=0x01, .x=0x01, .y=0x1b, .sp=0x67, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc970, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc970, .value=0x5d, .type=IO_READ},
        {.addr=0xc971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_030E) {
    const struct CPU_State initial_cpu = {.pc=0xba45, .a=0xeb, .x=0x73, .y=0x99, .sp=0x79, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xba45, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xba46, .a=0xeb, .x=0xeb, .y=0x99, .sp=0x79, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xba45, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xba45, .value=0x5d, .type=IO_READ},
        {.addr=0xba46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0683, .a=0xcb, .x=0xbd, .y=0x15, .sp=0x65, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0683, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0684, .a=0xcb, .x=0xcb, .y=0x15, .sp=0x65, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0683, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0683, .value=0x5d, .type=IO_READ},
        {.addr=0x0684, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x0b89, .a=0x92, .x=0x16, .y=0xf4, .sp=0xaa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0b89, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0b8a, .a=0x92, .x=0x92, .y=0xf4, .sp=0xaa, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0b89, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0b89, .value=0x5d, .type=IO_READ},
        {.addr=0x0b8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0311) {
    const struct CPU_State initial_cpu = {.pc=0x8855, .a=0x2f, .x=0x52, .y=0x60, .sp=0x1c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8855, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8856, .a=0x2f, .x=0x2f, .y=0x60, .sp=0x1c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8855, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8855, .value=0x5d, .type=IO_READ},
        {.addr=0x8856, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0312) {
    const struct CPU_State initial_cpu = {.pc=0xf13d, .a=0x9e, .x=0xe9, .y=0x12, .sp=0x38, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf13d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf13e, .a=0x9e, .x=0x9e, .y=0x12, .sp=0x38, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf13d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf13d, .value=0x5d, .type=IO_READ},
        {.addr=0xf13e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0313) {
    const struct CPU_State initial_cpu = {.pc=0xd65c, .a=0x54, .x=0x5e, .y=0x24, .sp=0x0c, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd65c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd65d, .a=0x54, .x=0x54, .y=0x24, .sp=0x0c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd65c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd65c, .value=0x5d, .type=IO_READ},
        {.addr=0xd65d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0314) {
    const struct CPU_State initial_cpu = {.pc=0xacf9, .a=0x2a, .x=0xab, .y=0x01, .sp=0x72, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xacf9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xacfa, .a=0x2a, .x=0x2a, .y=0x01, .sp=0x72, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xacf9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xacf9, .value=0x5d, .type=IO_READ},
        {.addr=0xacfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x054e, .a=0x28, .x=0xdc, .y=0x4f, .sp=0x0d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x054e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x054f, .a=0x28, .x=0x28, .y=0x4f, .sp=0x0d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x054e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x054e, .value=0x5d, .type=IO_READ},
        {.addr=0x054f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0316) {
    const struct CPU_State initial_cpu = {.pc=0x57cd, .a=0xf8, .x=0xf8, .y=0xc3, .sp=0x23, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x57cd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x57ce, .a=0xf8, .x=0xf8, .y=0xc3, .sp=0x23, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x57cd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x57cd, .value=0x5d, .type=IO_READ},
        {.addr=0x57ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x28e8, .a=0x58, .x=0x48, .y=0xe3, .sp=0x76, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x28e8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x28e9, .a=0x58, .x=0x58, .y=0xe3, .sp=0x76, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x28e8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x28e8, .value=0x5d, .type=IO_READ},
        {.addr=0x28e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0318) {
    const struct CPU_State initial_cpu = {.pc=0x6282, .a=0x0e, .x=0xb0, .y=0x99, .sp=0x28, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x6282, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6283, .a=0x0e, .x=0x0e, .y=0x99, .sp=0x28, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6282, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6282, .value=0x5d, .type=IO_READ},
        {.addr=0x6283, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd699, .a=0xb5, .x=0xdf, .y=0xad, .sp=0xdd, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd699, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd69a, .a=0xb5, .x=0xb5, .y=0xad, .sp=0xdd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd699, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd699, .value=0x5d, .type=IO_READ},
        {.addr=0xd69a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_031A) {
    const struct CPU_State initial_cpu = {.pc=0xcc22, .a=0xd3, .x=0x23, .y=0x2c, .sp=0xf2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xcc22, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcc23, .a=0xd3, .x=0xd3, .y=0x2c, .sp=0xf2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xcc22, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcc22, .value=0x5d, .type=IO_READ},
        {.addr=0xcc23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_031B) {
    const struct CPU_State initial_cpu = {.pc=0xf2da, .a=0x28, .x=0x3f, .y=0x56, .sp=0x80, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xf2da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf2db, .a=0x28, .x=0x28, .y=0x56, .sp=0x80, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf2da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf2da, .value=0x5d, .type=IO_READ},
        {.addr=0xf2db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_031C) {
    const struct CPU_State initial_cpu = {.pc=0xbbc6, .a=0xe5, .x=0xa6, .y=0xd1, .sp=0xa9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xbbc6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbbc7, .a=0xe5, .x=0xe5, .y=0xd1, .sp=0xa9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbbc6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbbc6, .value=0x5d, .type=IO_READ},
        {.addr=0xbbc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_031D) {
    const struct CPU_State initial_cpu = {.pc=0x9e67, .a=0xbd, .x=0x57, .y=0x40, .sp=0xfe, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e67, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9e68, .a=0xbd, .x=0xbd, .y=0x40, .sp=0xfe, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x9e67, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9e67, .value=0x5d, .type=IO_READ},
        {.addr=0x9e68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_031E) {
    const struct CPU_State initial_cpu = {.pc=0xc232, .a=0x98, .x=0x4b, .y=0x31, .sp=0xc1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc232, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc233, .a=0x98, .x=0x98, .y=0x31, .sp=0xc1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc232, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc232, .value=0x5d, .type=IO_READ},
        {.addr=0xc233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x6802, .a=0x0e, .x=0x23, .y=0x3d, .sp=0x97, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6802, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6803, .a=0x0e, .x=0x0e, .y=0x3d, .sp=0x97, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6802, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6802, .value=0x5d, .type=IO_READ},
        {.addr=0x6803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x47ee, .a=0x41, .x=0x9a, .y=0x7c, .sp=0x85, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x47ee, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x47ef, .a=0x41, .x=0x41, .y=0x7c, .sp=0x85, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x47ee, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x47ee, .value=0x5d, .type=IO_READ},
        {.addr=0x47ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0321) {
    const struct CPU_State initial_cpu = {.pc=0xcaa6, .a=0xdb, .x=0xd0, .y=0x5f, .sp=0x2a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcaa7, .a=0xdb, .x=0xdb, .y=0x5f, .sp=0x2a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xcaa6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcaa6, .value=0x5d, .type=IO_READ},
        {.addr=0xcaa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0322) {
    const struct CPU_State initial_cpu = {.pc=0xf127, .a=0x0f, .x=0x31, .y=0x8a, .sp=0xae, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf127, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf128, .a=0x0f, .x=0x0f, .y=0x8a, .sp=0xae, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf127, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf127, .value=0x5d, .type=IO_READ},
        {.addr=0xf128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0323) {
    const struct CPU_State initial_cpu = {.pc=0x955d, .a=0x31, .x=0xe5, .y=0xfb, .sp=0x05, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x955d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x955e, .a=0x31, .x=0x31, .y=0xfb, .sp=0x05, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x955d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x955d, .value=0x5d, .type=IO_READ},
        {.addr=0x955e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0324) {
    const struct CPU_State initial_cpu = {.pc=0x7a0e, .a=0x62, .x=0x06, .y=0x4a, .sp=0x39, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7a0e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7a0f, .a=0x62, .x=0x62, .y=0x4a, .sp=0x39, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7a0e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7a0e, .value=0x5d, .type=IO_READ},
        {.addr=0x7a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x367f, .a=0x1b, .x=0xe2, .y=0x66, .sp=0x4b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x367f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3680, .a=0x1b, .x=0x1b, .y=0x66, .sp=0x4b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x367f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x367f, .value=0x5d, .type=IO_READ},
        {.addr=0x3680, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0326) {
    const struct CPU_State initial_cpu = {.pc=0xf048, .a=0xa0, .x=0xff, .y=0x2d, .sp=0xe3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xf048, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf049, .a=0xa0, .x=0xa0, .y=0x2d, .sp=0xe3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xf048, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf048, .value=0x5d, .type=IO_READ},
        {.addr=0xf049, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x2a1a, .a=0x98, .x=0x5d, .y=0x79, .sp=0x6b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2a1a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2a1b, .a=0x98, .x=0x98, .y=0x79, .sp=0x6b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2a1a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2a1a, .value=0x5d, .type=IO_READ},
        {.addr=0x2a1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0328) {
    const struct CPU_State initial_cpu = {.pc=0x7ca2, .a=0xc9, .x=0x87, .y=0x80, .sp=0x7c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7ca3, .a=0xc9, .x=0xc9, .y=0x80, .sp=0x7c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7ca2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7ca2, .value=0x5d, .type=IO_READ},
        {.addr=0x7ca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x7050, .a=0x58, .x=0xf2, .y=0x6b, .sp=0x05, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7050, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7051, .a=0x58, .x=0x58, .y=0x6b, .sp=0x05, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7050, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7050, .value=0x5d, .type=IO_READ},
        {.addr=0x7051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x641c, .a=0x96, .x=0x73, .y=0xf0, .sp=0x14, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x641c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x641d, .a=0x96, .x=0x96, .y=0xf0, .sp=0x14, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x641c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x641c, .value=0x5d, .type=IO_READ},
        {.addr=0x641d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_032B) {
    const struct CPU_State initial_cpu = {.pc=0x75dd, .a=0xb5, .x=0x1c, .y=0x8f, .sp=0x06, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x75dd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x75de, .a=0xb5, .x=0xb5, .y=0x8f, .sp=0x06, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x75dd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x75dd, .value=0x5d, .type=IO_READ},
        {.addr=0x75de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_032C) {
    const struct CPU_State initial_cpu = {.pc=0xd604, .a=0x37, .x=0xc1, .y=0x8a, .sp=0xac, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd604, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd605, .a=0x37, .x=0x37, .y=0x8a, .sp=0xac, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd604, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd604, .value=0x5d, .type=IO_READ},
        {.addr=0xd605, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_032D) {
    const struct CPU_State initial_cpu = {.pc=0xca62, .a=0x9f, .x=0xcd, .y=0x16, .sp=0x39, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xca62, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xca63, .a=0x9f, .x=0x9f, .y=0x16, .sp=0x39, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xca62, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xca62, .value=0x5d, .type=IO_READ},
        {.addr=0xca63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_032E) {
    const struct CPU_State initial_cpu = {.pc=0x039c, .a=0x7e, .x=0x9e, .y=0x79, .sp=0xb3, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x039c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x039d, .a=0x7e, .x=0x7e, .y=0x79, .sp=0xb3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x039c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x039c, .value=0x5d, .type=IO_READ},
        {.addr=0x039d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_032F) {
    const struct CPU_State initial_cpu = {.pc=0x8c69, .a=0x87, .x=0xc5, .y=0x10, .sp=0x9e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8c69, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8c6a, .a=0x87, .x=0x87, .y=0x10, .sp=0x9e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8c69, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8c69, .value=0x5d, .type=IO_READ},
        {.addr=0x8c6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x32cf, .a=0x2a, .x=0x1d, .y=0x63, .sp=0x38, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x32cf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x32d0, .a=0x2a, .x=0x2a, .y=0x63, .sp=0x38, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x32cf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x32cf, .value=0x5d, .type=IO_READ},
        {.addr=0x32d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x5e3a, .a=0x06, .x=0x8f, .y=0x48, .sp=0x6c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5e3a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5e3b, .a=0x06, .x=0x06, .y=0x48, .sp=0x6c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5e3a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5e3a, .value=0x5d, .type=IO_READ},
        {.addr=0x5e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0332) {
    const struct CPU_State initial_cpu = {.pc=0xac30, .a=0x3d, .x=0x8f, .y=0x55, .sp=0xdb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xac30, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xac31, .a=0x3d, .x=0x3d, .y=0x55, .sp=0xdb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xac30, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xac30, .value=0x5d, .type=IO_READ},
        {.addr=0xac31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0333) {
    const struct CPU_State initial_cpu = {.pc=0x24be, .a=0x26, .x=0xc4, .y=0x55, .sp=0xf8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x24be, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x24bf, .a=0x26, .x=0x26, .y=0x55, .sp=0xf8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x24be, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x24be, .value=0x5d, .type=IO_READ},
        {.addr=0x24bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0334) {
    const struct CPU_State initial_cpu = {.pc=0x87e4, .a=0x60, .x=0x22, .y=0x39, .sp=0xe1, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x87e4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x87e5, .a=0x60, .x=0x60, .y=0x39, .sp=0xe1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x87e4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x87e4, .value=0x5d, .type=IO_READ},
        {.addr=0x87e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0335) {
    const struct CPU_State initial_cpu = {.pc=0xdde5, .a=0xac, .x=0xa2, .y=0x24, .sp=0x29, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xdde5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdde6, .a=0xac, .x=0xac, .y=0x24, .sp=0x29, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdde5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdde5, .value=0x5d, .type=IO_READ},
        {.addr=0xdde6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3f04, .a=0xea, .x=0x6b, .y=0x6b, .sp=0xc7, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3f04, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3f05, .a=0xea, .x=0xea, .y=0x6b, .sp=0xc7, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3f04, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3f04, .value=0x5d, .type=IO_READ},
        {.addr=0x3f05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0337) {
    const struct CPU_State initial_cpu = {.pc=0x3d38, .a=0xce, .x=0xe1, .y=0x91, .sp=0x26, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3d38, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3d39, .a=0xce, .x=0xce, .y=0x91, .sp=0x26, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3d38, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3d38, .value=0x5d, .type=IO_READ},
        {.addr=0x3d39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4e0f, .a=0xd5, .x=0xbb, .y=0xe5, .sp=0x94, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4e0f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4e10, .a=0xd5, .x=0xd5, .y=0xe5, .sp=0x94, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4e0f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4e0f, .value=0x5d, .type=IO_READ},
        {.addr=0x4e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0339) {
    const struct CPU_State initial_cpu = {.pc=0x90dd, .a=0x5c, .x=0x30, .y=0xc7, .sp=0x6b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x90dd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x90de, .a=0x5c, .x=0x5c, .y=0xc7, .sp=0x6b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x90dd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x90dd, .value=0x5d, .type=IO_READ},
        {.addr=0x90de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_033A) {
    const struct CPU_State initial_cpu = {.pc=0xbc91, .a=0x0b, .x=0x1a, .y=0x0e, .sp=0xfb, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbc91, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbc92, .a=0x0b, .x=0x0b, .y=0x0e, .sp=0xfb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbc91, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbc91, .value=0x5d, .type=IO_READ},
        {.addr=0xbc92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_033B) {
    const struct CPU_State initial_cpu = {.pc=0xd5bb, .a=0x9c, .x=0x66, .y=0x73, .sp=0xe4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd5bb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd5bc, .a=0x9c, .x=0x9c, .y=0x73, .sp=0xe4, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd5bb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd5bb, .value=0x5d, .type=IO_READ},
        {.addr=0xd5bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x71ee, .a=0xbe, .x=0xd4, .y=0x58, .sp=0x31, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x71ee, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x71ef, .a=0xbe, .x=0xbe, .y=0x58, .sp=0x31, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x71ee, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x71ee, .value=0x5d, .type=IO_READ},
        {.addr=0x71ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_033D) {
    const struct CPU_State initial_cpu = {.pc=0x4777, .a=0x24, .x=0x51, .y=0x36, .sp=0x20, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x4777, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4778, .a=0x24, .x=0x24, .y=0x36, .sp=0x20, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4777, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4777, .value=0x5d, .type=IO_READ},
        {.addr=0x4778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_033E) {
    const struct CPU_State initial_cpu = {.pc=0xb284, .a=0x1b, .x=0xe2, .y=0x6b, .sp=0x0d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb284, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb285, .a=0x1b, .x=0x1b, .y=0x6b, .sp=0x0d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb284, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb284, .value=0x5d, .type=IO_READ},
        {.addr=0xb285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_033F) {
    const struct CPU_State initial_cpu = {.pc=0x8376, .a=0x6c, .x=0xd1, .y=0x33, .sp=0x92, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8376, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8377, .a=0x6c, .x=0x6c, .y=0x33, .sp=0x92, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8376, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8376, .value=0x5d, .type=IO_READ},
        {.addr=0x8377, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0340) {
    const struct CPU_State initial_cpu = {.pc=0xbaba, .a=0xae, .x=0x6f, .y=0x6d, .sp=0x0d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbaba, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbabb, .a=0xae, .x=0xae, .y=0x6d, .sp=0x0d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xbaba, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbaba, .value=0x5d, .type=IO_READ},
        {.addr=0xbabb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0341) {
    const struct CPU_State initial_cpu = {.pc=0x428e, .a=0xbb, .x=0xa1, .y=0xe2, .sp=0xe8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x428e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x428f, .a=0xbb, .x=0xbb, .y=0xe2, .sp=0xe8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x428e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x428e, .value=0x5d, .type=IO_READ},
        {.addr=0x428f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0342) {
    const struct CPU_State initial_cpu = {.pc=0xe006, .a=0x09, .x=0x57, .y=0x42, .sp=0xa8, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe006, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe007, .a=0x09, .x=0x09, .y=0x42, .sp=0xa8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe006, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe006, .value=0x5d, .type=IO_READ},
        {.addr=0xe007, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0343) {
    const struct CPU_State initial_cpu = {.pc=0x98b0, .a=0x50, .x=0xa4, .y=0xd4, .sp=0x9d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x98b0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x98b1, .a=0x50, .x=0x50, .y=0xd4, .sp=0x9d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x98b0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x98b0, .value=0x5d, .type=IO_READ},
        {.addr=0x98b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0344) {
    const struct CPU_State initial_cpu = {.pc=0xe7f5, .a=0x5e, .x=0xfd, .y=0xfe, .sp=0x79, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe7f6, .a=0x5e, .x=0x5e, .y=0xfe, .sp=0x79, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe7f5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe7f5, .value=0x5d, .type=IO_READ},
        {.addr=0xe7f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x76c3, .a=0xe5, .x=0x46, .y=0x13, .sp=0xd3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x76c3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x76c4, .a=0xe5, .x=0xe5, .y=0x13, .sp=0xd3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x76c3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x76c3, .value=0x5d, .type=IO_READ},
        {.addr=0x76c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0346) {
    const struct CPU_State initial_cpu = {.pc=0xc7aa, .a=0x2b, .x=0x80, .y=0x14, .sp=0x67, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xc7aa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc7ab, .a=0x2b, .x=0x2b, .y=0x14, .sp=0x67, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc7aa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc7aa, .value=0x5d, .type=IO_READ},
        {.addr=0xc7ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0347) {
    const struct CPU_State initial_cpu = {.pc=0xbace, .a=0xa9, .x=0xab, .y=0x70, .sp=0x21, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xbace, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbacf, .a=0xa9, .x=0xa9, .y=0x70, .sp=0x21, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xbace, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbace, .value=0x5d, .type=IO_READ},
        {.addr=0xbacf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0348) {
    const struct CPU_State initial_cpu = {.pc=0xbb20, .a=0x14, .x=0xff, .y=0x80, .sp=0x83, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xbb20, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbb21, .a=0x14, .x=0x14, .y=0x80, .sp=0x83, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbb20, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbb20, .value=0x5d, .type=IO_READ},
        {.addr=0xbb21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0349) {
    const struct CPU_State initial_cpu = {.pc=0xef43, .a=0xee, .x=0x98, .y=0x6e, .sp=0x69, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xef43, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xef44, .a=0xee, .x=0xee, .y=0x6e, .sp=0x69, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xef43, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xef43, .value=0x5d, .type=IO_READ},
        {.addr=0xef44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x937b, .a=0x10, .x=0xeb, .y=0x12, .sp=0x44, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x937b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x937c, .a=0x10, .x=0x10, .y=0x12, .sp=0x44, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x937b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x937b, .value=0x5d, .type=IO_READ},
        {.addr=0x937c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8c9f, .a=0x35, .x=0xc1, .y=0x91, .sp=0x77, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8ca0, .a=0x35, .x=0x35, .y=0x91, .sp=0x77, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8c9f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8c9f, .value=0x5d, .type=IO_READ},
        {.addr=0x8ca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x4629, .a=0x01, .x=0x09, .y=0x5e, .sp=0x71, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4629, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x462a, .a=0x01, .x=0x01, .y=0x5e, .sp=0x71, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4629, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4629, .value=0x5d, .type=IO_READ},
        {.addr=0x462a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x13e2, .a=0xc0, .x=0xc1, .y=0x42, .sp=0x84, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x13e2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x13e3, .a=0xc0, .x=0xc0, .y=0x42, .sp=0x84, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x13e2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x13e2, .value=0x5d, .type=IO_READ},
        {.addr=0x13e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x1ef0, .a=0xa6, .x=0xf6, .y=0xed, .sp=0xed, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1ef1, .a=0xa6, .x=0xa6, .y=0xed, .sp=0xed, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1ef0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1ef0, .value=0x5d, .type=IO_READ},
        {.addr=0x1ef1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x005c, .a=0xac, .x=0xb4, .y=0xff, .sp=0xa9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x005d, .a=0xac, .x=0xac, .y=0xff, .sp=0xa9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x005c, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0350) {
    const struct CPU_State initial_cpu = {.pc=0x5e59, .a=0x76, .x=0x4f, .y=0x64, .sp=0x7e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5e59, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5e5a, .a=0x76, .x=0x76, .y=0x64, .sp=0x7e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5e59, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5e59, .value=0x5d, .type=IO_READ},
        {.addr=0x5e5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x23b1, .a=0x55, .x=0x9a, .y=0x51, .sp=0x7a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x23b1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x23b2, .a=0x55, .x=0x55, .y=0x51, .sp=0x7a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x23b1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x23b1, .value=0x5d, .type=IO_READ},
        {.addr=0x23b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0352) {
    const struct CPU_State initial_cpu = {.pc=0x18e1, .a=0xcc, .x=0x13, .y=0x7d, .sp=0x82, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x18e1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x18e2, .a=0xcc, .x=0xcc, .y=0x7d, .sp=0x82, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x18e1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x18e1, .value=0x5d, .type=IO_READ},
        {.addr=0x18e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0353) {
    const struct CPU_State initial_cpu = {.pc=0xf578, .a=0x38, .x=0xeb, .y=0xd6, .sp=0x48, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xf578, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf579, .a=0x38, .x=0x38, .y=0xd6, .sp=0x48, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf578, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf578, .value=0x5d, .type=IO_READ},
        {.addr=0xf579, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0354) {
    const struct CPU_State initial_cpu = {.pc=0x9e9c, .a=0x41, .x=0x8f, .y=0x5e, .sp=0x22, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9e9d, .a=0x41, .x=0x41, .y=0x5e, .sp=0x22, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9e9c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9e9c, .value=0x5d, .type=IO_READ},
        {.addr=0x9e9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x7ca4, .a=0xd5, .x=0x12, .y=0x0f, .sp=0x94, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7ca5, .a=0xd5, .x=0xd5, .y=0x0f, .sp=0x94, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7ca4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7ca4, .value=0x5d, .type=IO_READ},
        {.addr=0x7ca5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0356) {
    const struct CPU_State initial_cpu = {.pc=0xc7d9, .a=0x6d, .x=0xd5, .y=0x05, .sp=0xf9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc7da, .a=0x6d, .x=0x6d, .y=0x05, .sp=0xf9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc7d9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc7d9, .value=0x5d, .type=IO_READ},
        {.addr=0xc7da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0357) {
    const struct CPU_State initial_cpu = {.pc=0xb503, .a=0xb2, .x=0xbc, .y=0xf6, .sp=0x95, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb503, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb504, .a=0xb2, .x=0xb2, .y=0xf6, .sp=0x95, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb503, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb503, .value=0x5d, .type=IO_READ},
        {.addr=0xb504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x1076, .a=0x2f, .x=0x1b, .y=0x30, .sp=0xff, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x1076, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1077, .a=0x2f, .x=0x2f, .y=0x30, .sp=0xff, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1076, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1076, .value=0x5d, .type=IO_READ},
        {.addr=0x1077, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0359) {
    const struct CPU_State initial_cpu = {.pc=0xe6cc, .a=0xfa, .x=0x31, .y=0x57, .sp=0xbf, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe6cc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe6cd, .a=0xfa, .x=0xfa, .y=0x57, .sp=0xbf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe6cc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe6cc, .value=0x5d, .type=IO_READ},
        {.addr=0xe6cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x06a7, .a=0xcb, .x=0x98, .y=0x35, .sp=0xed, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x06a7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x06a8, .a=0xcb, .x=0xcb, .y=0x35, .sp=0xed, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x06a7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x06a7, .value=0x5d, .type=IO_READ},
        {.addr=0x06a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_035B) {
    const struct CPU_State initial_cpu = {.pc=0x5150, .a=0x44, .x=0x26, .y=0x9a, .sp=0xba, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5150, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0x44, .x=0x44, .y=0x9a, .sp=0xba, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5150, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5150, .value=0x5d, .type=IO_READ},
        {.addr=0x5151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x0231, .a=0x74, .x=0x61, .y=0x29, .sp=0xd5, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0231, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0232, .a=0x74, .x=0x74, .y=0x29, .sp=0xd5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0231, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0231, .value=0x5d, .type=IO_READ},
        {.addr=0x0232, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x77bd, .a=0xb3, .x=0xdb, .y=0x63, .sp=0xda, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x77bd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x77be, .a=0xb3, .x=0xb3, .y=0x63, .sp=0xda, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x77bd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x77bd, .value=0x5d, .type=IO_READ},
        {.addr=0x77be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_035E) {
    const struct CPU_State initial_cpu = {.pc=0x8799, .a=0x1c, .x=0x02, .y=0xf8, .sp=0xbe, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8799, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x879a, .a=0x1c, .x=0x1c, .y=0xf8, .sp=0xbe, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8799, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8799, .value=0x5d, .type=IO_READ},
        {.addr=0x879a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_035F) {
    const struct CPU_State initial_cpu = {.pc=0xd8f7, .a=0x6f, .x=0xc8, .y=0xf7, .sp=0x7a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd8f8, .a=0x6f, .x=0x6f, .y=0xf7, .sp=0x7a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd8f7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd8f7, .value=0x5d, .type=IO_READ},
        {.addr=0xd8f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0360) {
    const struct CPU_State initial_cpu = {.pc=0x0459, .a=0x14, .x=0xa5, .y=0x7d, .sp=0x10, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0459, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x045a, .a=0x14, .x=0x14, .y=0x7d, .sp=0x10, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0459, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0459, .value=0x5d, .type=IO_READ},
        {.addr=0x045a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0361) {
    const struct CPU_State initial_cpu = {.pc=0x92f5, .a=0xb9, .x=0x2b, .y=0x5e, .sp=0xfe, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x92f5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x92f6, .a=0xb9, .x=0xb9, .y=0x5e, .sp=0xfe, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x92f5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x92f5, .value=0x5d, .type=IO_READ},
        {.addr=0x92f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x6fbb, .a=0xd2, .x=0xd1, .y=0x6e, .sp=0xfb, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6fbc, .a=0xd2, .x=0xd2, .y=0x6e, .sp=0xfb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6fbb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6fbb, .value=0x5d, .type=IO_READ},
        {.addr=0x6fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x0ce3, .a=0x3e, .x=0x17, .y=0x13, .sp=0x15, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0ce3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0ce4, .a=0x3e, .x=0x3e, .y=0x13, .sp=0x15, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0ce3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0ce3, .value=0x5d, .type=IO_READ},
        {.addr=0x0ce4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x91e2, .a=0x3b, .x=0xa7, .y=0x3e, .sp=0x5b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x91e2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x91e3, .a=0x3b, .x=0x3b, .y=0x3e, .sp=0x5b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x91e2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x91e2, .value=0x5d, .type=IO_READ},
        {.addr=0x91e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x65a7, .a=0xd9, .x=0xa7, .y=0x9b, .sp=0x50, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x65a7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x65a8, .a=0xd9, .x=0xd9, .y=0x9b, .sp=0x50, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x65a7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x65a7, .value=0x5d, .type=IO_READ},
        {.addr=0x65a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x016e, .a=0xed, .x=0xbc, .y=0x6b, .sp=0x08, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x016f, .a=0xed, .x=0xed, .y=0x6b, .sp=0x08, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x016e, .value=0x5d, .type=IO_READ},
        {.addr=0x016f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0367) {
    const struct CPU_State initial_cpu = {.pc=0xe58f, .a=0x10, .x=0x49, .y=0x6a, .sp=0xdf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe58f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe590, .a=0x10, .x=0x10, .y=0x6a, .sp=0xdf, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe58f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe58f, .value=0x5d, .type=IO_READ},
        {.addr=0xe590, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8274, .a=0x8b, .x=0x37, .y=0xce, .sp=0xc1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x8274, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8275, .a=0x8b, .x=0x8b, .y=0xce, .sp=0xc1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8274, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8274, .value=0x5d, .type=IO_READ},
        {.addr=0x8275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x7979, .a=0x54, .x=0x24, .y=0xd1, .sp=0x65, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7979, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x797a, .a=0x54, .x=0x54, .y=0xd1, .sp=0x65, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7979, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7979, .value=0x5d, .type=IO_READ},
        {.addr=0x797a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x64bc, .a=0xcf, .x=0xd2, .y=0x3c, .sp=0x5f, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x64bc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x64bd, .a=0xcf, .x=0xcf, .y=0x3c, .sp=0x5f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x64bc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x64bc, .value=0x5d, .type=IO_READ},
        {.addr=0x64bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_036B) {
    const struct CPU_State initial_cpu = {.pc=0xc730, .a=0x08, .x=0xfa, .y=0x7e, .sp=0xe0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc730, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc731, .a=0x08, .x=0x08, .y=0x7e, .sp=0xe0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc730, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc730, .value=0x5d, .type=IO_READ},
        {.addr=0xc731, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_036C) {
    const struct CPU_State initial_cpu = {.pc=0xea2d, .a=0x0d, .x=0xf8, .y=0x97, .sp=0xe5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xea2d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xea2e, .a=0x0d, .x=0x0d, .y=0x97, .sp=0xe5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xea2d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xea2d, .value=0x5d, .type=IO_READ},
        {.addr=0xea2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_036D) {
    const struct CPU_State initial_cpu = {.pc=0xedc6, .a=0x69, .x=0xc2, .y=0xe8, .sp=0x64, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xedc6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xedc7, .a=0x69, .x=0x69, .y=0xe8, .sp=0x64, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xedc6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xedc6, .value=0x5d, .type=IO_READ},
        {.addr=0xedc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1dfa, .a=0x0a, .x=0x2e, .y=0xd9, .sp=0x2a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1dfa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1dfb, .a=0x0a, .x=0x0a, .y=0xd9, .sp=0x2a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1dfa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1dfa, .value=0x5d, .type=IO_READ},
        {.addr=0x1dfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_036F) {
    const struct CPU_State initial_cpu = {.pc=0x1109, .a=0x40, .x=0x66, .y=0xbc, .sp=0x63, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x1109, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x110a, .a=0x40, .x=0x40, .y=0xbc, .sp=0x63, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1109, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1109, .value=0x5d, .type=IO_READ},
        {.addr=0x110a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0370) {
    const struct CPU_State initial_cpu = {.pc=0xfbec, .a=0xb6, .x=0xfc, .y=0x68, .sp=0xe6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xfbec, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfbed, .a=0xb6, .x=0xb6, .y=0x68, .sp=0xe6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xfbec, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfbec, .value=0x5d, .type=IO_READ},
        {.addr=0xfbed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0371) {
    const struct CPU_State initial_cpu = {.pc=0x312f, .a=0x7c, .x=0x63, .y=0xca, .sp=0x7e, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x312f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3130, .a=0x7c, .x=0x7c, .y=0xca, .sp=0x7e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x312f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x312f, .value=0x5d, .type=IO_READ},
        {.addr=0x3130, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0372) {
    const struct CPU_State initial_cpu = {.pc=0x5467, .a=0x98, .x=0x90, .y=0x4b, .sp=0xbc, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5467, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5468, .a=0x98, .x=0x98, .y=0x4b, .sp=0xbc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5467, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5467, .value=0x5d, .type=IO_READ},
        {.addr=0x5468, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0373) {
    const struct CPU_State initial_cpu = {.pc=0x97e2, .a=0x35, .x=0x80, .y=0x9e, .sp=0x54, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x97e2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x97e3, .a=0x35, .x=0x35, .y=0x9e, .sp=0x54, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x97e2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x97e2, .value=0x5d, .type=IO_READ},
        {.addr=0x97e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x0ebe, .a=0x60, .x=0x50, .y=0xf6, .sp=0x9d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0ebe, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0ebf, .a=0x60, .x=0x60, .y=0xf6, .sp=0x9d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0ebe, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0ebe, .value=0x5d, .type=IO_READ},
        {.addr=0x0ebf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0375) {
    const struct CPU_State initial_cpu = {.pc=0xe891, .a=0xa1, .x=0x26, .y=0xf1, .sp=0x57, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe891, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe892, .a=0xa1, .x=0xa1, .y=0xf1, .sp=0x57, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe891, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe891, .value=0x5d, .type=IO_READ},
        {.addr=0xe892, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0376) {
    const struct CPU_State initial_cpu = {.pc=0x1adf, .a=0x19, .x=0x23, .y=0x31, .sp=0xfd, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x1adf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1ae0, .a=0x19, .x=0x19, .y=0x31, .sp=0xfd, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x1adf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1adf, .value=0x5d, .type=IO_READ},
        {.addr=0x1ae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0377) {
    const struct CPU_State initial_cpu = {.pc=0xbbed, .a=0xbb, .x=0x07, .y=0x0c, .sp=0x35, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xbbed, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbbee, .a=0xbb, .x=0xbb, .y=0x0c, .sp=0x35, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbbed, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbbed, .value=0x5d, .type=IO_READ},
        {.addr=0xbbee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x289e, .a=0x16, .x=0xe4, .y=0xf7, .sp=0xbb, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x289e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x289f, .a=0x16, .x=0x16, .y=0xf7, .sp=0xbb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x289e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x289e, .value=0x5d, .type=IO_READ},
        {.addr=0x289f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0379) {
    const struct CPU_State initial_cpu = {.pc=0x80a6, .a=0xb1, .x=0x57, .y=0x00, .sp=0x70, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x80a6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x80a7, .a=0xb1, .x=0xb1, .y=0x00, .sp=0x70, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x80a6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x80a6, .value=0x5d, .type=IO_READ},
        {.addr=0x80a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_037A) {
    const struct CPU_State initial_cpu = {.pc=0x19da, .a=0xfa, .x=0x6f, .y=0x49, .sp=0x59, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x19da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x19db, .a=0xfa, .x=0xfa, .y=0x49, .sp=0x59, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x19da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x19da, .value=0x5d, .type=IO_READ},
        {.addr=0x19db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_037B) {
    const struct CPU_State initial_cpu = {.pc=0xd713, .a=0xcc, .x=0x31, .y=0x70, .sp=0xfa, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xd713, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd714, .a=0xcc, .x=0xcc, .y=0x70, .sp=0xfa, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd713, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd713, .value=0x5d, .type=IO_READ},
        {.addr=0xd714, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x98c3, .a=0x28, .x=0xfb, .y=0x58, .sp=0x7b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x98c3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x98c4, .a=0x28, .x=0x28, .y=0x58, .sp=0x7b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x98c3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x98c3, .value=0x5d, .type=IO_READ},
        {.addr=0x98c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_037D) {
    const struct CPU_State initial_cpu = {.pc=0x5bd8, .a=0x36, .x=0xa2, .y=0xce, .sp=0x29, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd8, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5bd9, .a=0x36, .x=0x36, .y=0xce, .sp=0x29, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5bd8, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5bd8, .value=0x5d, .type=IO_READ},
        {.addr=0x5bd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_037E) {
    const struct CPU_State initial_cpu = {.pc=0xc689, .a=0x23, .x=0x2e, .y=0x9a, .sp=0x64, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc689, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc68a, .a=0x23, .x=0x23, .y=0x9a, .sp=0x64, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc689, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc689, .value=0x5d, .type=IO_READ},
        {.addr=0xc68a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_037F) {
    const struct CPU_State initial_cpu = {.pc=0xd2c5, .a=0x3f, .x=0x0d, .y=0x79, .sp=0xac, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0x3f, .x=0x3f, .y=0x79, .sp=0xac, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd2c5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd2c5, .value=0x5d, .type=IO_READ},
        {.addr=0xd2c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3ede, .a=0xe1, .x=0x6c, .y=0xdf, .sp=0x9a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3ede, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3edf, .a=0xe1, .x=0xe1, .y=0xdf, .sp=0x9a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3ede, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3ede, .value=0x5d, .type=IO_READ},
        {.addr=0x3edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0381) {
    const struct CPU_State initial_cpu = {.pc=0xed49, .a=0xde, .x=0x9e, .y=0xdd, .sp=0x2a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xed49, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xed4a, .a=0xde, .x=0xde, .y=0xdd, .sp=0x2a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xed49, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xed49, .value=0x5d, .type=IO_READ},
        {.addr=0xed4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0382) {
    const struct CPU_State initial_cpu = {.pc=0x531f, .a=0x40, .x=0x21, .y=0x07, .sp=0xeb, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x531f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5320, .a=0x40, .x=0x40, .y=0x07, .sp=0xeb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x531f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x531f, .value=0x5d, .type=IO_READ},
        {.addr=0x5320, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0383) {
    const struct CPU_State initial_cpu = {.pc=0x30d9, .a=0x92, .x=0xbc, .y=0x7a, .sp=0xdb, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x30d9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x30da, .a=0x92, .x=0x92, .y=0x7a, .sp=0xdb, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x30d9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x30d9, .value=0x5d, .type=IO_READ},
        {.addr=0x30da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0384) {
    const struct CPU_State initial_cpu = {.pc=0x1510, .a=0xe3, .x=0xcd, .y=0x63, .sp=0xbf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1510, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1511, .a=0xe3, .x=0xe3, .y=0x63, .sp=0xbf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1510, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1510, .value=0x5d, .type=IO_READ},
        {.addr=0x1511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0385) {
    const struct CPU_State initial_cpu = {.pc=0xaf0e, .a=0x7f, .x=0xf1, .y=0x68, .sp=0xfe, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xaf0e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xaf0f, .a=0x7f, .x=0x7f, .y=0x68, .sp=0xfe, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xaf0e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xaf0e, .value=0x5d, .type=IO_READ},
        {.addr=0xaf0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x70a7, .a=0x3c, .x=0x8b, .y=0xf0, .sp=0x2b, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x70a7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x70a8, .a=0x3c, .x=0x3c, .y=0xf0, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x70a7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x70a7, .value=0x5d, .type=IO_READ},
        {.addr=0x70a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0387) {
    const struct CPU_State initial_cpu = {.pc=0x1fde, .a=0x15, .x=0x31, .y=0x79, .sp=0x37, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1fde, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1fdf, .a=0x15, .x=0x15, .y=0x79, .sp=0x37, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1fde, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1fde, .value=0x5d, .type=IO_READ},
        {.addr=0x1fdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0388) {
    const struct CPU_State initial_cpu = {.pc=0x26f5, .a=0x2f, .x=0x13, .y=0x23, .sp=0x90, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x26f5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x26f6, .a=0x2f, .x=0x2f, .y=0x23, .sp=0x90, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x26f5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x26f5, .value=0x5d, .type=IO_READ},
        {.addr=0x26f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x2979, .a=0x5b, .x=0xf6, .y=0x9e, .sp=0x6f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2979, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x297a, .a=0x5b, .x=0x5b, .y=0x9e, .sp=0x6f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2979, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2979, .value=0x5d, .type=IO_READ},
        {.addr=0x297a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_038A) {
    const struct CPU_State initial_cpu = {.pc=0xf813, .a=0xe5, .x=0x2e, .y=0xa0, .sp=0xcc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf813, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf814, .a=0xe5, .x=0xe5, .y=0xa0, .sp=0xcc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf813, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf813, .value=0x5d, .type=IO_READ},
        {.addr=0xf814, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7eaf, .a=0xa6, .x=0x30, .y=0xef, .sp=0xe3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7eaf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7eb0, .a=0xa6, .x=0xa6, .y=0xef, .sp=0xe3, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7eaf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7eaf, .value=0x5d, .type=IO_READ},
        {.addr=0x7eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x1337, .a=0x84, .x=0x66, .y=0xe7, .sp=0xc5, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1337, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1338, .a=0x84, .x=0x84, .y=0xe7, .sp=0xc5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1337, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1337, .value=0x5d, .type=IO_READ},
        {.addr=0x1338, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_038D) {
    const struct CPU_State initial_cpu = {.pc=0xf6e9, .a=0xf3, .x=0x50, .y=0x5c, .sp=0x0c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e9, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf6ea, .a=0xf3, .x=0xf3, .y=0x5c, .sp=0x0c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf6e9, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf6e9, .value=0x5d, .type=IO_READ},
        {.addr=0xf6ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_038E) {
    const struct CPU_State initial_cpu = {.pc=0xae64, .a=0x45, .x=0x75, .y=0x9d, .sp=0x5c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xae64, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xae65, .a=0x45, .x=0x45, .y=0x9d, .sp=0x5c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xae64, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xae64, .value=0x5d, .type=IO_READ},
        {.addr=0xae65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_038F) {
    const struct CPU_State initial_cpu = {.pc=0xe801, .a=0x8f, .x=0x1f, .y=0xdc, .sp=0x77, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xe801, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe802, .a=0x8f, .x=0x8f, .y=0xdc, .sp=0x77, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe801, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe801, .value=0x5d, .type=IO_READ},
        {.addr=0xe802, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0390) {
    const struct CPU_State initial_cpu = {.pc=0xd689, .a=0xfb, .x=0x9b, .y=0x5d, .sp=0x01, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd689, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd68a, .a=0xfb, .x=0xfb, .y=0x5d, .sp=0x01, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd689, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd689, .value=0x5d, .type=IO_READ},
        {.addr=0xd68a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x838b, .a=0x16, .x=0xa6, .y=0xe5, .sp=0x5f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x838b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x838c, .a=0x16, .x=0x16, .y=0xe5, .sp=0x5f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x838b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x838b, .value=0x5d, .type=IO_READ},
        {.addr=0x838c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0392) {
    const struct CPU_State initial_cpu = {.pc=0x44a1, .a=0xa6, .x=0x33, .y=0x53, .sp=0x5a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x44a1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x44a2, .a=0xa6, .x=0xa6, .y=0x53, .sp=0x5a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x44a1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x44a1, .value=0x5d, .type=IO_READ},
        {.addr=0x44a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0393) {
    const struct CPU_State initial_cpu = {.pc=0x0d98, .a=0xe8, .x=0xd2, .y=0xb1, .sp=0x67, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0d98, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0d99, .a=0xe8, .x=0xe8, .y=0xb1, .sp=0x67, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0d98, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0d98, .value=0x5d, .type=IO_READ},
        {.addr=0x0d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0394) {
    const struct CPU_State initial_cpu = {.pc=0x2e4c, .a=0x7c, .x=0x89, .y=0xc6, .sp=0x20, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2e4c, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2e4d, .a=0x7c, .x=0x7c, .y=0xc6, .sp=0x20, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2e4c, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2e4c, .value=0x5d, .type=IO_READ},
        {.addr=0x2e4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6a85, .a=0x14, .x=0x8e, .y=0x0d, .sp=0x06, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x6a85, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6a86, .a=0x14, .x=0x14, .y=0x0d, .sp=0x06, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6a85, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6a85, .value=0x5d, .type=IO_READ},
        {.addr=0x6a86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x276e, .a=0x12, .x=0xaf, .y=0xd6, .sp=0xc5, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x276e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x276f, .a=0x12, .x=0x12, .y=0xd6, .sp=0xc5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x276e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x276e, .value=0x5d, .type=IO_READ},
        {.addr=0x276f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4288, .a=0x01, .x=0xed, .y=0x1a, .sp=0x7f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4288, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4289, .a=0x01, .x=0x01, .y=0x1a, .sp=0x7f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4288, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4288, .value=0x5d, .type=IO_READ},
        {.addr=0x4289, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x232d, .a=0x49, .x=0x6a, .y=0x4a, .sp=0xdd, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x232d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x232e, .a=0x49, .x=0x49, .y=0x4a, .sp=0xdd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x232d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x232d, .value=0x5d, .type=IO_READ},
        {.addr=0x232e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x96da, .a=0x88, .x=0x8d, .y=0xb8, .sp=0x45, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x96da, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x96db, .a=0x88, .x=0x88, .y=0xb8, .sp=0x45, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x96da, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x96da, .value=0x5d, .type=IO_READ},
        {.addr=0x96db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x0811, .a=0xec, .x=0xbc, .y=0xc3, .sp=0x43, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0811, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0812, .a=0xec, .x=0xec, .y=0xc3, .sp=0x43, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0811, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0811, .value=0x5d, .type=IO_READ},
        {.addr=0x0812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x1de6, .a=0xeb, .x=0xd2, .y=0xb3, .sp=0x92, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1de6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1de7, .a=0xeb, .x=0xeb, .y=0xb3, .sp=0x92, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1de6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1de6, .value=0x5d, .type=IO_READ},
        {.addr=0x1de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_039C) {
    const struct CPU_State initial_cpu = {.pc=0xe443, .a=0x0f, .x=0xf1, .y=0x8e, .sp=0x91, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe443, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe444, .a=0x0f, .x=0x0f, .y=0x8e, .sp=0x91, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe443, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe443, .value=0x5d, .type=IO_READ},
        {.addr=0xe444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_039D) {
    const struct CPU_State initial_cpu = {.pc=0x8be1, .a=0x1d, .x=0x45, .y=0x81, .sp=0xea, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8be1, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8be2, .a=0x1d, .x=0x1d, .y=0x81, .sp=0xea, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8be1, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8be1, .value=0x5d, .type=IO_READ},
        {.addr=0x8be2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_039E) {
    const struct CPU_State initial_cpu = {.pc=0xb729, .a=0x61, .x=0x8e, .y=0x3d, .sp=0xa3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb729, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb72a, .a=0x61, .x=0x61, .y=0x3d, .sp=0xa3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb729, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb729, .value=0x5d, .type=IO_READ},
        {.addr=0xb72a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x2bd2, .a=0xde, .x=0x27, .y=0x24, .sp=0x92, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2bd3, .a=0xde, .x=0xde, .y=0x24, .sp=0x92, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2bd2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2bd2, .value=0x5d, .type=IO_READ},
        {.addr=0x2bd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x7358, .a=0xe7, .x=0x3f, .y=0x65, .sp=0xd6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x7358, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7359, .a=0xe7, .x=0xe7, .y=0x65, .sp=0xd6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7358, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7358, .value=0x5d, .type=IO_READ},
        {.addr=0x7359, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x4e87, .a=0xb6, .x=0x83, .y=0x2b, .sp=0x3c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4e87, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4e88, .a=0xb6, .x=0xb6, .y=0x2b, .sp=0x3c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4e87, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4e87, .value=0x5d, .type=IO_READ},
        {.addr=0x4e88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xd810, .a=0xdb, .x=0xee, .y=0xc9, .sp=0x31, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd810, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd811, .a=0xdb, .x=0xdb, .y=0xc9, .sp=0x31, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd810, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd810, .value=0x5d, .type=IO_READ},
        {.addr=0xd811, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xcb5e, .a=0xf0, .x=0x9a, .y=0x11, .sp=0x38, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xcb5e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcb5f, .a=0xf0, .x=0xf0, .y=0x11, .sp=0x38, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xcb5e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcb5e, .value=0x5d, .type=IO_READ},
        {.addr=0xcb5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x051a, .a=0xf4, .x=0x00, .y=0x45, .sp=0xb0, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x051a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x051b, .a=0xf4, .x=0xf4, .y=0x45, .sp=0xb0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x051a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x051a, .value=0x5d, .type=IO_READ},
        {.addr=0x051b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x53b7, .a=0xcb, .x=0x05, .y=0x88, .sp=0xdf, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x53b7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x53b8, .a=0xcb, .x=0xcb, .y=0x88, .sp=0xdf, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x53b7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x53b7, .value=0x5d, .type=IO_READ},
        {.addr=0x53b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xb668, .a=0x49, .x=0x8a, .y=0xe6, .sp=0x8a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb668, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb669, .a=0x49, .x=0x49, .y=0xe6, .sp=0x8a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb668, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb668, .value=0x5d, .type=IO_READ},
        {.addr=0xb669, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x6851, .a=0x33, .x=0xb8, .y=0xe6, .sp=0x65, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6851, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6852, .a=0x33, .x=0x33, .y=0xe6, .sp=0x65, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6851, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6851, .value=0x5d, .type=IO_READ},
        {.addr=0x6852, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x8dd4, .a=0x2e, .x=0x3f, .y=0x92, .sp=0xc1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8dd5, .a=0x2e, .x=0x2e, .y=0x92, .sp=0xc1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8dd4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8dd4, .value=0x5d, .type=IO_READ},
        {.addr=0x8dd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x39ea, .a=0x8b, .x=0xd6, .y=0xc4, .sp=0xf2, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x39ea, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x39eb, .a=0x8b, .x=0x8b, .y=0xc4, .sp=0xf2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x39ea, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x39ea, .value=0x5d, .type=IO_READ},
        {.addr=0x39eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x5d0f, .a=0x23, .x=0x71, .y=0x80, .sp=0x2c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5d10, .a=0x23, .x=0x23, .y=0x80, .sp=0x2c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5d0f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5d0f, .value=0x5d, .type=IO_READ},
        {.addr=0x5d10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x34af, .a=0x9d, .x=0x1f, .y=0xc9, .sp=0xd6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x34af, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x34b0, .a=0x9d, .x=0x9d, .y=0xc9, .sp=0xd6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x34af, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x34af, .value=0x5d, .type=IO_READ},
        {.addr=0x34b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x6640, .a=0x10, .x=0xf4, .y=0xf3, .sp=0x02, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6640, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6641, .a=0x10, .x=0x10, .y=0xf3, .sp=0x02, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6640, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6640, .value=0x5d, .type=IO_READ},
        {.addr=0x6641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x54bb, .a=0x57, .x=0x00, .y=0xe5, .sp=0xb5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x54bb, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x54bc, .a=0x57, .x=0x57, .y=0xe5, .sp=0xb5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x54bb, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x54bb, .value=0x5d, .type=IO_READ},
        {.addr=0x54bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x646f, .a=0x5f, .x=0x83, .y=0xed, .sp=0x7d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x646f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6470, .a=0x5f, .x=0x5f, .y=0xed, .sp=0x7d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x646f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x646f, .value=0x5d, .type=IO_READ},
        {.addr=0x6470, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x9196, .a=0x2d, .x=0xd5, .y=0x34, .sp=0xcb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9196, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9197, .a=0x2d, .x=0x2d, .y=0x34, .sp=0xcb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9196, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9196, .value=0x5d, .type=IO_READ},
        {.addr=0x9197, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x91cf, .a=0xfd, .x=0x77, .y=0x40, .sp=0x2c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x91cf, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x91d0, .a=0xfd, .x=0xfd, .y=0x40, .sp=0x2c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x91cf, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x91cf, .value=0x5d, .type=IO_READ},
        {.addr=0x91d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x1585, .a=0x3c, .x=0xc6, .y=0xe2, .sp=0x26, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1585, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1586, .a=0x3c, .x=0x3c, .y=0xe2, .sp=0x26, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1585, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1585, .value=0x5d, .type=IO_READ},
        {.addr=0x1586, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xe7e6, .a=0x0a, .x=0x7f, .y=0x64, .sp=0x12, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe7e7, .a=0x0a, .x=0x0a, .y=0x64, .sp=0x12, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe7e6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe7e6, .value=0x5d, .type=IO_READ},
        {.addr=0xe7e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x8466, .a=0xe6, .x=0x5e, .y=0xcf, .sp=0x15, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8466, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8467, .a=0xe6, .x=0xe6, .y=0xcf, .sp=0x15, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8466, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8466, .value=0x5d, .type=IO_READ},
        {.addr=0x8467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x4f12, .a=0xeb, .x=0xeb, .y=0xe2, .sp=0x57, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4f12, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4f13, .a=0xeb, .x=0xeb, .y=0xe2, .sp=0x57, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4f12, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4f12, .value=0x5d, .type=IO_READ},
        {.addr=0x4f13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xbdca, .a=0x0a, .x=0x15, .y=0x89, .sp=0x2e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xbdca, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbdcb, .a=0x0a, .x=0x0a, .y=0x89, .sp=0x2e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbdca, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbdca, .value=0x5d, .type=IO_READ},
        {.addr=0xbdcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x762e, .a=0xf5, .x=0x14, .y=0x01, .sp=0xfb, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x762e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x762f, .a=0xf5, .x=0xf5, .y=0x01, .sp=0xfb, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x762e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x762e, .value=0x5d, .type=IO_READ},
        {.addr=0x762f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xc4d2, .a=0x56, .x=0xf1, .y=0xc1, .sp=0x61, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d2, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc4d3, .a=0x56, .x=0x56, .y=0xc1, .sp=0x61, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc4d2, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc4d2, .value=0x5d, .type=IO_READ},
        {.addr=0xc4d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x75ca, .a=0x41, .x=0xed, .y=0x92, .sp=0x28, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x75ca, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x75cb, .a=0x41, .x=0x41, .y=0x92, .sp=0x28, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x75ca, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x75ca, .value=0x5d, .type=IO_READ},
        {.addr=0x75cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x9c6b, .a=0xc8, .x=0xbb, .y=0x45, .sp=0xe4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x9c6b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9c6c, .a=0xc8, .x=0xc8, .y=0x45, .sp=0xe4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9c6b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9c6b, .value=0x5d, .type=IO_READ},
        {.addr=0x9c6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xf2b5, .a=0xf3, .x=0x50, .y=0x78, .sp=0x27, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf2b6, .a=0xf3, .x=0xf3, .y=0x78, .sp=0x27, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf2b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf2b5, .value=0x5d, .type=IO_READ},
        {.addr=0xf2b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x8543, .a=0x1f, .x=0x6b, .y=0x26, .sp=0x65, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8543, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8544, .a=0x1f, .x=0x1f, .y=0x26, .sp=0x65, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8543, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8543, .value=0x5d, .type=IO_READ},
        {.addr=0x8544, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x3957, .a=0x29, .x=0x29, .y=0xf7, .sp=0x1a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3957, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3958, .a=0x29, .x=0x29, .y=0xf7, .sp=0x1a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3957, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3957, .value=0x5d, .type=IO_READ},
        {.addr=0x3958, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xdd56, .a=0x8c, .x=0x1b, .y=0x81, .sp=0xa0, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xdd56, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdd57, .a=0x8c, .x=0x8c, .y=0x81, .sp=0xa0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdd56, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdd56, .value=0x5d, .type=IO_READ},
        {.addr=0xdd57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x4dcd, .a=0xba, .x=0xd9, .y=0xc9, .sp=0xa7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x4dcd, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4dce, .a=0xba, .x=0xba, .y=0xc9, .sp=0xa7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4dcd, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4dcd, .value=0x5d, .type=IO_READ},
        {.addr=0x4dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x3043, .a=0x10, .x=0xfd, .y=0xf0, .sp=0x43, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x3043, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3044, .a=0x10, .x=0x10, .y=0xf0, .sp=0x43, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3043, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3043, .value=0x5d, .type=IO_READ},
        {.addr=0x3044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xdada, .a=0x51, .x=0xf1, .y=0x15, .sp=0x00, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xdada, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdadb, .a=0x51, .x=0x51, .y=0x15, .sp=0x00, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xdada, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdada, .value=0x5d, .type=IO_READ},
        {.addr=0xdadb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xb707, .a=0x16, .x=0x1b, .y=0x71, .sp=0x4c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb707, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb708, .a=0x16, .x=0x16, .y=0x71, .sp=0x4c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb707, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb707, .value=0x5d, .type=IO_READ},
        {.addr=0xb708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xc16b, .a=0x94, .x=0x32, .y=0x9d, .sp=0x8e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc16b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc16c, .a=0x94, .x=0x94, .y=0x9d, .sp=0x8e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc16b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc16b, .value=0x5d, .type=IO_READ},
        {.addr=0xc16c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xfd2f, .a=0xe9, .x=0xb2, .y=0xb2, .sp=0x62, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xfd2f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfd30, .a=0xe9, .x=0xe9, .y=0xb2, .sp=0x62, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xfd2f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfd2f, .value=0x5d, .type=IO_READ},
        {.addr=0xfd30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x1457, .a=0x31, .x=0xc3, .y=0x8c, .sp=0xee, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x1457, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1458, .a=0x31, .x=0x31, .y=0x8c, .sp=0xee, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1457, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1457, .value=0x5d, .type=IO_READ},
        {.addr=0x1458, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x1065, .a=0x51, .x=0x5f, .y=0x04, .sp=0xb0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x1065, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1066, .a=0x51, .x=0x51, .y=0x04, .sp=0xb0, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x1065, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1065, .value=0x5d, .type=IO_READ},
        {.addr=0x1066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x97ce, .a=0x7c, .x=0xa5, .y=0x24, .sp=0x92, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x97ce, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x97cf, .a=0x7c, .x=0x7c, .y=0x24, .sp=0x92, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x97ce, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x97ce, .value=0x5d, .type=IO_READ},
        {.addr=0x97cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x5cfa, .a=0x1c, .x=0x46, .y=0x6d, .sp=0x50, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5cfa, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5cfb, .a=0x1c, .x=0x1c, .y=0x6d, .sp=0x50, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5cfa, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5cfa, .value=0x5d, .type=IO_READ},
        {.addr=0x5cfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x8064, .a=0x3d, .x=0x72, .y=0xdd, .sp=0x37, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8064, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8065, .a=0x3d, .x=0x3d, .y=0xdd, .sp=0x37, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8064, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8064, .value=0x5d, .type=IO_READ},
        {.addr=0x8065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xde5f, .a=0x27, .x=0xc7, .y=0xbd, .sp=0x31, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xde5f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xde60, .a=0x27, .x=0x27, .y=0xbd, .sp=0x31, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xde5f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xde5f, .value=0x5d, .type=IO_READ},
        {.addr=0xde60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x4de4, .a=0x4b, .x=0x1c, .y=0x62, .sp=0x2a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4de4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4de5, .a=0x4b, .x=0x4b, .y=0x62, .sp=0x2a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4de4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4de4, .value=0x5d, .type=IO_READ},
        {.addr=0x4de5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xcd64, .a=0xfe, .x=0xcf, .y=0xa2, .sp=0xfe, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xcd64, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcd65, .a=0xfe, .x=0xfe, .y=0xa2, .sp=0xfe, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcd64, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcd64, .value=0x5d, .type=IO_READ},
        {.addr=0xcd65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xbf81, .a=0x58, .x=0x00, .y=0x83, .sp=0x18, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xbf81, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbf82, .a=0x58, .x=0x58, .y=0x83, .sp=0x18, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xbf81, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbf81, .value=0x5d, .type=IO_READ},
        {.addr=0xbf82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x4226, .a=0x86, .x=0x9c, .y=0x19, .sp=0xdb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4226, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4227, .a=0x86, .x=0x86, .y=0x19, .sp=0xdb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4226, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4226, .value=0x5d, .type=IO_READ},
        {.addr=0x4227, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x52b4, .a=0xe5, .x=0x4a, .y=0xc7, .sp=0xed, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x52b4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x52b5, .a=0xe5, .x=0xe5, .y=0xc7, .sp=0xed, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x52b4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x52b4, .value=0x5d, .type=IO_READ},
        {.addr=0x52b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xf03d, .a=0x17, .x=0x19, .y=0x57, .sp=0x3f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf03d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xf03e, .a=0x17, .x=0x17, .y=0x57, .sp=0x3f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf03d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xf03d, .value=0x5d, .type=IO_READ},
        {.addr=0xf03e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x6f81, .a=0x2f, .x=0x30, .y=0x66, .sp=0x93, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6f81, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6f82, .a=0x2f, .x=0x2f, .y=0x66, .sp=0x93, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6f81, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6f81, .value=0x5d, .type=IO_READ},
        {.addr=0x6f82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xba36, .a=0x71, .x=0xd2, .y=0xf8, .sp=0xe6, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xba36, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xba37, .a=0x71, .x=0x71, .y=0xf8, .sp=0xe6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xba36, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xba36, .value=0x5d, .type=IO_READ},
        {.addr=0xba37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x169b, .a=0x63, .x=0xf8, .y=0x52, .sp=0xf0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x169b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x169c, .a=0x63, .x=0x63, .y=0x52, .sp=0xf0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x169b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x169b, .value=0x5d, .type=IO_READ},
        {.addr=0x169c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xd579, .a=0x95, .x=0xc8, .y=0x4b, .sp=0xe3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd579, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd57a, .a=0x95, .x=0x95, .y=0x4b, .sp=0xe3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd579, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd579, .value=0x5d, .type=IO_READ},
        {.addr=0xd57a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xa21f, .a=0x1a, .x=0xa0, .y=0x98, .sp=0x58, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa21f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa220, .a=0x1a, .x=0x1a, .y=0x98, .sp=0x58, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa21f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa21f, .value=0x5d, .type=IO_READ},
        {.addr=0xa220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x37c6, .a=0x63, .x=0xfb, .y=0x8a, .sp=0xfc, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x37c6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x37c7, .a=0x63, .x=0x63, .y=0x8a, .sp=0xfc, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x37c6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x37c6, .value=0x5d, .type=IO_READ},
        {.addr=0x37c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x0821, .a=0xeb, .x=0xc7, .y=0x34, .sp=0xb7, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0821, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0822, .a=0xeb, .x=0xeb, .y=0x34, .sp=0xb7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0821, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0821, .value=0x5d, .type=IO_READ},
        {.addr=0x0822, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x6321, .a=0x87, .x=0xbc, .y=0x18, .sp=0xa3, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x6321, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x6322, .a=0x87, .x=0x87, .y=0x18, .sp=0xa3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6321, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6321, .value=0x5d, .type=IO_READ},
        {.addr=0x6322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x8ce7, .a=0xa5, .x=0xbb, .y=0xd4, .sp=0x6a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce7, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x8ce8, .a=0xa5, .x=0xa5, .y=0xd4, .sp=0x6a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8ce7, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce7, .value=0x5d, .type=IO_READ},
        {.addr=0x8ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x5c3a, .a=0x6c, .x=0x02, .y=0xf1, .sp=0x59, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5c3a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5c3b, .a=0x6c, .x=0x6c, .y=0xf1, .sp=0x59, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5c3a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5c3a, .value=0x5d, .type=IO_READ},
        {.addr=0x5c3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x4d62, .a=0xf3, .x=0xc4, .y=0xf6, .sp=0xe6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4d62, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4d63, .a=0xf3, .x=0xf3, .y=0xf6, .sp=0xe6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4d62, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4d62, .value=0x5d, .type=IO_READ},
        {.addr=0x4d63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xd145, .a=0x2d, .x=0xfc, .y=0x5e, .sp=0x08, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd145, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd146, .a=0x2d, .x=0x2d, .y=0x5e, .sp=0x08, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd145, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd145, .value=0x5d, .type=IO_READ},
        {.addr=0xd146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x99ac, .a=0x12, .x=0x14, .y=0xab, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x99ac, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x99ad, .a=0x12, .x=0x12, .y=0xab, .sp=0x9e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x99ac, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x99ac, .value=0x5d, .type=IO_READ},
        {.addr=0x99ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xbcad, .a=0xbc, .x=0x1f, .y=0xa4, .sp=0xe6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xbcad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbcae, .a=0xbc, .x=0xbc, .y=0xa4, .sp=0xe6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbcad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbcad, .value=0x5d, .type=IO_READ},
        {.addr=0xbcae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x0890, .a=0x2a, .x=0xde, .y=0x54, .sp=0x0b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0890, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0891, .a=0x2a, .x=0x2a, .y=0x54, .sp=0x0b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0890, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0890, .value=0x5d, .type=IO_READ},
        {.addr=0x0891, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x4705, .a=0x01, .x=0x73, .y=0xd1, .sp=0xbf, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4705, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4706, .a=0x01, .x=0x01, .y=0xd1, .sp=0xbf, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4705, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4705, .value=0x5d, .type=IO_READ},
        {.addr=0x4706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x3505, .a=0xb1, .x=0x38, .y=0x9a, .sp=0x8d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3505, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x3506, .a=0xb1, .x=0xb1, .y=0x9a, .sp=0x8d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3505, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x3505, .value=0x5d, .type=IO_READ},
        {.addr=0x3506, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x793f, .a=0x0f, .x=0xbf, .y=0x4c, .sp=0x93, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x793f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7940, .a=0x0f, .x=0x0f, .y=0x4c, .sp=0x93, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x793f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x793f, .value=0x5d, .type=IO_READ},
        {.addr=0x7940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xbcce, .a=0xb3, .x=0x9a, .y=0xd6, .sp=0x5a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xbcce, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbccf, .a=0xb3, .x=0xb3, .y=0xd6, .sp=0x5a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xbcce, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbcce, .value=0x5d, .type=IO_READ},
        {.addr=0xbccf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7e67, .a=0x8e, .x=0xa0, .y=0x5b, .sp=0x6d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x7e67, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7e68, .a=0x8e, .x=0x8e, .y=0x5b, .sp=0x6d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7e67, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7e67, .value=0x5d, .type=IO_READ},
        {.addr=0x7e68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xb505, .a=0xa2, .x=0xea, .y=0x45, .sp=0xc3, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xb505, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb506, .a=0xa2, .x=0xa2, .y=0x45, .sp=0xc3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb505, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb505, .value=0x5d, .type=IO_READ},
        {.addr=0xb506, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x1114, .a=0xec, .x=0x72, .y=0x24, .sp=0x3b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1114, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x1115, .a=0xec, .x=0xec, .y=0x24, .sp=0x3b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1114, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x1114, .value=0x5d, .type=IO_READ},
        {.addr=0x1115, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xc535, .a=0xe3, .x=0x32, .y=0x44, .sp=0x3a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc535, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc536, .a=0xe3, .x=0xe3, .y=0x44, .sp=0x3a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc535, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc535, .value=0x5d, .type=IO_READ},
        {.addr=0xc536, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5D, _5D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xc368, .a=0x48, .x=0x01, .y=0xaa, .sp=0xf2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc368, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc369, .a=0x48, .x=0x48, .y=0xaa, .sp=0xf2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc368, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc368, .value=0x5d, .type=IO_READ},
        {.addr=0xc369, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
