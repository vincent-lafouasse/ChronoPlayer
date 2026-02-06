#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_2D, _2D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x9d04, .a=0xb3, .x=0xd9, .y=0xee, .sp=0x4d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x9d04, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9d05, .a=0xb3, .x=0xd9, .y=0xee, .sp=0x4c, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xb3}, {.addr=0x9d04, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9d04, .value=0x2d, .type=IO_READ},
        {.addr=0x9d05, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x0197, .a=0xe6, .x=0xf7, .y=0x05, .sp=0x1d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x0197, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0198, .a=0xe6, .x=0xf7, .y=0x05, .sp=0x1c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xe6}, {.addr=0x0197, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0197, .value=0x2d, .type=IO_READ},
        {.addr=0x0198, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0002) {
    const struct CPU_State initial_cpu = {.pc=0x8791, .a=0x7b, .x=0x81, .y=0x15, .sp=0x91, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x8791, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8792, .a=0x7b, .x=0x81, .y=0x15, .sp=0x90, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x7b}, {.addr=0x8791, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8791, .value=0x2d, .type=IO_READ},
        {.addr=0x8792, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x0acc, .a=0x46, .x=0x08, .y=0xcb, .sp=0x99, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x0acc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0acd, .a=0x46, .x=0x08, .y=0xcb, .sp=0x98, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x46}, {.addr=0x0acc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0acc, .value=0x2d, .type=IO_READ},
        {.addr=0x0acd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0004) {
    const struct CPU_State initial_cpu = {.pc=0xcebe, .a=0x92, .x=0x24, .y=0x15, .sp=0x7c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0xcebe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcebf, .a=0x92, .x=0x24, .y=0x15, .sp=0x7b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x92}, {.addr=0xcebe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcebe, .value=0x2d, .type=IO_READ},
        {.addr=0xcebf, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0005) {
    const struct CPU_State initial_cpu = {.pc=0xbe56, .a=0x2e, .x=0xcd, .y=0xb8, .sp=0xe7, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xbe56, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbe57, .a=0x2e, .x=0xcd, .y=0xb8, .sp=0xe6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x2e}, {.addr=0xbe56, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbe56, .value=0x2d, .type=IO_READ},
        {.addr=0xbe57, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0006) {
    const struct CPU_State initial_cpu = {.pc=0xe9fb, .a=0x7a, .x=0x38, .y=0xec, .sp=0x48, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xe9fb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe9fc, .a=0x7a, .x=0x38, .y=0xec, .sp=0x47, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x7a}, {.addr=0xe9fb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe9fb, .value=0x2d, .type=IO_READ},
        {.addr=0xe9fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x8da8, .a=0x3d, .x=0xcd, .y=0x3b, .sp=0x88, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x8da8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8da9, .a=0x3d, .x=0xcd, .y=0x3b, .sp=0x87, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x3d}, {.addr=0x8da8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8da8, .value=0x2d, .type=IO_READ},
        {.addr=0x8da9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0008) {
    const struct CPU_State initial_cpu = {.pc=0xb8cb, .a=0xfa, .x=0xee, .y=0x2a, .sp=0x67, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xb8cb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb8cc, .a=0xfa, .x=0xee, .y=0x2a, .sp=0x66, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xfa}, {.addr=0xb8cb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb8cb, .value=0x2d, .type=IO_READ},
        {.addr=0xb8cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xc841, .a=0xf5, .x=0xcd, .y=0xe9, .sp=0x84, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xc841, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc842, .a=0xf5, .x=0xcd, .y=0xe9, .sp=0x83, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xf5}, {.addr=0xc841, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc841, .value=0x2d, .type=IO_READ},
        {.addr=0xc842, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_000A) {
    const struct CPU_State initial_cpu = {.pc=0x6757, .a=0x05, .x=0xcf, .y=0xf6, .sp=0x98, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x6757, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6758, .a=0x05, .x=0xcf, .y=0xf6, .sp=0x97, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x05}, {.addr=0x6757, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6757, .value=0x2d, .type=IO_READ},
        {.addr=0x6758, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_000B) {
    const struct CPU_State initial_cpu = {.pc=0x3cde, .a=0x86, .x=0xe0, .y=0x81, .sp=0x1c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x3cde, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3cdf, .a=0x86, .x=0xe0, .y=0x81, .sp=0x1b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x86}, {.addr=0x3cde, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3cde, .value=0x2d, .type=IO_READ},
        {.addr=0x3cdf, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_000C) {
    const struct CPU_State initial_cpu = {.pc=0xa36d, .a=0x1e, .x=0x0e, .y=0x33, .sp=0xa4, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xa36d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa36e, .a=0x1e, .x=0x0e, .y=0x33, .sp=0xa3, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x1e}, {.addr=0xa36d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa36d, .value=0x2d, .type=IO_READ},
        {.addr=0xa36e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x400d, .a=0xd5, .x=0x1d, .y=0x15, .sp=0x27, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x400d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x400e, .a=0xd5, .x=0x1d, .y=0x15, .sp=0x26, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xd5}, {.addr=0x400d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x400d, .value=0x2d, .type=IO_READ},
        {.addr=0x400e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_000E) {
    const struct CPU_State initial_cpu = {.pc=0x5ea5, .a=0x64, .x=0x98, .y=0x55, .sp=0x18, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x5ea5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5ea6, .a=0x64, .x=0x98, .y=0x55, .sp=0x17, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x64}, {.addr=0x5ea5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5ea5, .value=0x2d, .type=IO_READ},
        {.addr=0x5ea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_000F) {
    const struct CPU_State initial_cpu = {.pc=0xaef6, .a=0x10, .x=0x8b, .y=0x34, .sp=0x5a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0xaef6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaef7, .a=0x10, .x=0x8b, .y=0x34, .sp=0x59, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x10}, {.addr=0xaef6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaef6, .value=0x2d, .type=IO_READ},
        {.addr=0xaef7, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x2ec7, .a=0x54, .x=0xa4, .y=0xcf, .sp=0xf3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x2ec7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2ec8, .a=0x54, .x=0xa4, .y=0xcf, .sp=0xf2, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x54}, {.addr=0x2ec7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2ec7, .value=0x2d, .type=IO_READ},
        {.addr=0x2ec8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0011) {
    const struct CPU_State initial_cpu = {.pc=0x84e3, .a=0x69, .x=0xd7, .y=0x00, .sp=0x72, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x84e3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x84e4, .a=0x69, .x=0xd7, .y=0x00, .sp=0x71, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x69}, {.addr=0x84e3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x84e3, .value=0x2d, .type=IO_READ},
        {.addr=0x84e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x9ba2, .a=0xfd, .x=0x13, .y=0x14, .sp=0x38, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x9ba2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9ba3, .a=0xfd, .x=0x13, .y=0x14, .sp=0x37, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xfd}, {.addr=0x9ba2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9ba2, .value=0x2d, .type=IO_READ},
        {.addr=0x9ba3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0013) {
    const struct CPU_State initial_cpu = {.pc=0xc89c, .a=0xcb, .x=0xa1, .y=0x91, .sp=0xe7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xc89c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc89d, .a=0xcb, .x=0xa1, .y=0x91, .sp=0xe6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xcb}, {.addr=0xc89c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc89c, .value=0x2d, .type=IO_READ},
        {.addr=0xc89d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0014) {
    const struct CPU_State initial_cpu = {.pc=0xfca6, .a=0x68, .x=0x54, .y=0x68, .sp=0x62, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xfca6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfca7, .a=0x68, .x=0x54, .y=0x68, .sp=0x61, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x68}, {.addr=0xfca6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfca6, .value=0x2d, .type=IO_READ},
        {.addr=0xfca7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0015) {
    const struct CPU_State initial_cpu = {.pc=0x1c18, .a=0x01, .x=0xa7, .y=0x6c, .sp=0x7d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x1c18, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1c19, .a=0x01, .x=0xa7, .y=0x6c, .sp=0x7c, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x01}, {.addr=0x1c18, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1c18, .value=0x2d, .type=IO_READ},
        {.addr=0x1c19, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0016) {
    const struct CPU_State initial_cpu = {.pc=0xed5a, .a=0x36, .x=0xa4, .y=0x6f, .sp=0xb1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xed5a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xed5b, .a=0x36, .x=0xa4, .y=0x6f, .sp=0xb0, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x36}, {.addr=0xed5a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xed5a, .value=0x2d, .type=IO_READ},
        {.addr=0xed5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0017) {
    const struct CPU_State initial_cpu = {.pc=0xd31f, .a=0x37, .x=0x53, .y=0xc4, .sp=0xf2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xd31f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd320, .a=0x37, .x=0x53, .y=0xc4, .sp=0xf1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x37}, {.addr=0xd31f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd31f, .value=0x2d, .type=IO_READ},
        {.addr=0xd320, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0018) {
    const struct CPU_State initial_cpu = {.pc=0xf9ae, .a=0xe9, .x=0xb5, .y=0xc7, .sp=0xf5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xf9ae, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf9af, .a=0xe9, .x=0xb5, .y=0xc7, .sp=0xf4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe9}, {.addr=0xf9ae, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf9ae, .value=0x2d, .type=IO_READ},
        {.addr=0xf9af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1245, .a=0x7c, .x=0xb9, .y=0xed, .sp=0x92, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x1245, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1246, .a=0x7c, .x=0xb9, .y=0xed, .sp=0x91, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x7c}, {.addr=0x1245, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1245, .value=0x2d, .type=IO_READ},
        {.addr=0x1246, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_001A) {
    const struct CPU_State initial_cpu = {.pc=0xa082, .a=0x90, .x=0x6a, .y=0xa0, .sp=0x80, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xa082, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa083, .a=0x90, .x=0x6a, .y=0xa0, .sp=0x7f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x90}, {.addr=0xa082, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa082, .value=0x2d, .type=IO_READ},
        {.addr=0xa083, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_001B) {
    const struct CPU_State initial_cpu = {.pc=0xa21d, .a=0xbf, .x=0x41, .y=0xfc, .sp=0x04, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xa21d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa21e, .a=0xbf, .x=0x41, .y=0xfc, .sp=0x03, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xbf}, {.addr=0xa21d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa21d, .value=0x2d, .type=IO_READ},
        {.addr=0xa21e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_001C) {
    const struct CPU_State initial_cpu = {.pc=0x11f6, .a=0xd0, .x=0x04, .y=0x9a, .sp=0x26, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x11f6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x11f7, .a=0xd0, .x=0x04, .y=0x9a, .sp=0x25, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xd0}, {.addr=0x11f6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x11f6, .value=0x2d, .type=IO_READ},
        {.addr=0x11f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5585, .a=0x97, .x=0xfb, .y=0x91, .sp=0xac, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x5585, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5586, .a=0x97, .x=0xfb, .y=0x91, .sp=0xab, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x97}, {.addr=0x5585, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5585, .value=0x2d, .type=IO_READ},
        {.addr=0x5586, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x2f40, .a=0xf2, .x=0x62, .y=0xa5, .sp=0xc0, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x2f40, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2f41, .a=0xf2, .x=0x62, .y=0xa5, .sp=0xbf, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xf2}, {.addr=0x2f40, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2f40, .value=0x2d, .type=IO_READ},
        {.addr=0x2f41, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_001F) {
    const struct CPU_State initial_cpu = {.pc=0x1892, .a=0xce, .x=0x23, .y=0xaa, .sp=0xa1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x1892, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1893, .a=0xce, .x=0x23, .y=0xaa, .sp=0xa0, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xce}, {.addr=0x1892, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1892, .value=0x2d, .type=IO_READ},
        {.addr=0x1893, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0020) {
    const struct CPU_State initial_cpu = {.pc=0xf572, .a=0x22, .x=0xf4, .y=0x1f, .sp=0x84, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xf572, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf573, .a=0x22, .x=0xf4, .y=0x1f, .sp=0x83, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x22}, {.addr=0xf572, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf572, .value=0x2d, .type=IO_READ},
        {.addr=0xf573, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x4c5f, .a=0xdc, .x=0x9c, .y=0xc8, .sp=0xeb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x4c5f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4c60, .a=0xdc, .x=0x9c, .y=0xc8, .sp=0xea, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xdc}, {.addr=0x4c5f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4c5f, .value=0x2d, .type=IO_READ},
        {.addr=0x4c60, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0022) {
    const struct CPU_State initial_cpu = {.pc=0xd5ce, .a=0x2b, .x=0x64, .y=0x08, .sp=0x94, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0xd5ce, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd5cf, .a=0x2b, .x=0x64, .y=0x08, .sp=0x93, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x2b}, {.addr=0xd5ce, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd5ce, .value=0x2d, .type=IO_READ},
        {.addr=0xd5cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0023) {
    const struct CPU_State initial_cpu = {.pc=0xa175, .a=0xfa, .x=0x4a, .y=0xc7, .sp=0x5c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0xa175, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa176, .a=0xfa, .x=0x4a, .y=0xc7, .sp=0x5b, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xfa}, {.addr=0xa175, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa175, .value=0x2d, .type=IO_READ},
        {.addr=0xa176, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0024) {
    const struct CPU_State initial_cpu = {.pc=0x11f4, .a=0x3e, .x=0xe1, .y=0x13, .sp=0x8b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x11f4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x11f5, .a=0x3e, .x=0xe1, .y=0x13, .sp=0x8a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x3e}, {.addr=0x11f4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x11f4, .value=0x2d, .type=IO_READ},
        {.addr=0x11f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x74a7, .a=0x08, .x=0x4d, .y=0x01, .sp=0xee, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x74a7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x74a8, .a=0x08, .x=0x4d, .y=0x01, .sp=0xed, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x08}, {.addr=0x74a7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x74a7, .value=0x2d, .type=IO_READ},
        {.addr=0x74a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0026) {
    const struct CPU_State initial_cpu = {.pc=0x869d, .a=0xe9, .x=0x2a, .y=0x26, .sp=0x5b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x869d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x869e, .a=0xe9, .x=0x2a, .y=0x26, .sp=0x5a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xe9}, {.addr=0x869d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x869d, .value=0x2d, .type=IO_READ},
        {.addr=0x869e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x763d, .a=0x30, .x=0x02, .y=0xcf, .sp=0x32, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x763d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x763e, .a=0x30, .x=0x02, .y=0xcf, .sp=0x31, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x30}, {.addr=0x763d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x763d, .value=0x2d, .type=IO_READ},
        {.addr=0x763e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xdae7, .a=0x5d, .x=0xfa, .y=0xa5, .sp=0x22, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xdae7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdae8, .a=0x5d, .x=0xfa, .y=0xa5, .sp=0x21, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x5d}, {.addr=0xdae7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdae7, .value=0x2d, .type=IO_READ},
        {.addr=0xdae8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0029) {
    const struct CPU_State initial_cpu = {.pc=0xa57e, .a=0xe1, .x=0x6b, .y=0x35, .sp=0x8f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xa57e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa57f, .a=0xe1, .x=0x6b, .y=0x35, .sp=0x8e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xe1}, {.addr=0xa57e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa57e, .value=0x2d, .type=IO_READ},
        {.addr=0xa57f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_002A) {
    const struct CPU_State initial_cpu = {.pc=0xb932, .a=0xb1, .x=0x86, .y=0x35, .sp=0xbb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0xb932, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb933, .a=0xb1, .x=0x86, .y=0x35, .sp=0xba, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xb1}, {.addr=0xb932, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb932, .value=0x2d, .type=IO_READ},
        {.addr=0xb933, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xffe7, .a=0x6c, .x=0x0e, .y=0x8e, .sp=0xe0, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0xffe7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xffe8, .a=0x6c, .x=0x0e, .y=0x8e, .sp=0xdf, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x6c}, {.addr=0xffe7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xffe7, .value=0x2d, .type=IO_READ},
        {.addr=0xffe8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_002C) {
    const struct CPU_State initial_cpu = {.pc=0xb5e8, .a=0x3f, .x=0xc2, .y=0x6f, .sp=0x53, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xb5e8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb5e9, .a=0x3f, .x=0xc2, .y=0x6f, .sp=0x52, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x3f}, {.addr=0xb5e8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb5e8, .value=0x2d, .type=IO_READ},
        {.addr=0xb5e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_002D) {
    const struct CPU_State initial_cpu = {.pc=0x09fd, .a=0xff, .x=0xc4, .y=0x67, .sp=0xe8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x09fd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x09fe, .a=0xff, .x=0xc4, .y=0x67, .sp=0xe7, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xff}, {.addr=0x09fd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x09fd, .value=0x2d, .type=IO_READ},
        {.addr=0x09fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x67d4, .a=0xd5, .x=0xe2, .y=0x23, .sp=0x63, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x67d4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x67d5, .a=0xd5, .x=0xe2, .y=0x23, .sp=0x62, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xd5}, {.addr=0x67d4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x67d4, .value=0x2d, .type=IO_READ},
        {.addr=0x67d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8b1e, .a=0x92, .x=0x87, .y=0xc1, .sp=0x86, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x8b1e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8b1f, .a=0x92, .x=0x87, .y=0xc1, .sp=0x85, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x92}, {.addr=0x8b1e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8b1e, .value=0x2d, .type=IO_READ},
        {.addr=0x8b1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0030) {
    const struct CPU_State initial_cpu = {.pc=0xc843, .a=0x74, .x=0x2b, .y=0x0c, .sp=0x1d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xc843, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc844, .a=0x74, .x=0x2b, .y=0x0c, .sp=0x1c, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x74}, {.addr=0xc843, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc843, .value=0x2d, .type=IO_READ},
        {.addr=0xc844, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x2974, .a=0xc5, .x=0x04, .y=0x4e, .sp=0xb2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x2974, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2975, .a=0xc5, .x=0x04, .y=0x4e, .sp=0xb1, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xc5}, {.addr=0x2974, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2974, .value=0x2d, .type=IO_READ},
        {.addr=0x2975, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0032) {
    const struct CPU_State initial_cpu = {.pc=0x7477, .a=0x53, .x=0x79, .y=0x29, .sp=0x0d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0x7477, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7478, .a=0x53, .x=0x79, .y=0x29, .sp=0x0c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x53}, {.addr=0x7477, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7477, .value=0x2d, .type=IO_READ},
        {.addr=0x7478, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0033) {
    const struct CPU_State initial_cpu = {.pc=0xd9cb, .a=0x29, .x=0x82, .y=0x3a, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xd9cb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd9cc, .a=0x29, .x=0x82, .y=0x3a, .sp=0x11, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x29}, {.addr=0xd9cb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd9cb, .value=0x2d, .type=IO_READ},
        {.addr=0xd9cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0034) {
    const struct CPU_State initial_cpu = {.pc=0x1411, .a=0xe1, .x=0xe7, .y=0x57, .sp=0x52, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x1411, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1412, .a=0xe1, .x=0xe7, .y=0x57, .sp=0x51, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xe1}, {.addr=0x1411, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1411, .value=0x2d, .type=IO_READ},
        {.addr=0x1412, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x6a03, .a=0xf8, .x=0xef, .y=0xbf, .sp=0xd1, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x6a03, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6a04, .a=0xf8, .x=0xef, .y=0xbf, .sp=0xd0, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xf8}, {.addr=0x6a03, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6a03, .value=0x2d, .type=IO_READ},
        {.addr=0x6a04, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0036) {
    const struct CPU_State initial_cpu = {.pc=0x4a73, .a=0x67, .x=0xc7, .y=0xfd, .sp=0xf0, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x4a73, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4a74, .a=0x67, .x=0xc7, .y=0xfd, .sp=0xef, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x67}, {.addr=0x4a73, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4a73, .value=0x2d, .type=IO_READ},
        {.addr=0x4a74, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0037) {
    const struct CPU_State initial_cpu = {.pc=0x0b61, .a=0x94, .x=0x28, .y=0x5a, .sp=0x10, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x0b61, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0b62, .a=0x94, .x=0x28, .y=0x5a, .sp=0x0f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x94}, {.addr=0x0b61, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0b61, .value=0x2d, .type=IO_READ},
        {.addr=0x0b62, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0038) {
    const struct CPU_State initial_cpu = {.pc=0xa7d7, .a=0x62, .x=0xcf, .y=0xbb, .sp=0xa3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xa7d7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa7d8, .a=0x62, .x=0xcf, .y=0xbb, .sp=0xa2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x62}, {.addr=0xa7d7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa7d7, .value=0x2d, .type=IO_READ},
        {.addr=0xa7d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x4232, .a=0xf4, .x=0x5c, .y=0xa2, .sp=0x16, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x4232, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4233, .a=0xf4, .x=0x5c, .y=0xa2, .sp=0x15, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xf4}, {.addr=0x4232, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4232, .value=0x2d, .type=IO_READ},
        {.addr=0x4233, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_003A) {
    const struct CPU_State initial_cpu = {.pc=0xcd43, .a=0xe1, .x=0xe2, .y=0x8a, .sp=0xbe, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xcd43, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcd44, .a=0xe1, .x=0xe2, .y=0x8a, .sp=0xbd, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xe1}, {.addr=0xcd43, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcd43, .value=0x2d, .type=IO_READ},
        {.addr=0xcd44, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x83cd, .a=0x89, .x=0x38, .y=0xf8, .sp=0x4f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x83cd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x83ce, .a=0x89, .x=0x38, .y=0xf8, .sp=0x4e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x89}, {.addr=0x83cd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x83cd, .value=0x2d, .type=IO_READ},
        {.addr=0x83ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x25ff, .a=0xf0, .x=0xa4, .y=0x6f, .sp=0x73, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x25ff, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2600, .a=0xf0, .x=0xa4, .y=0x6f, .sp=0x72, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xf0}, {.addr=0x25ff, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x25ff, .value=0x2d, .type=IO_READ},
        {.addr=0x2600, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_003D) {
    const struct CPU_State initial_cpu = {.pc=0xee1b, .a=0x73, .x=0x71, .y=0x63, .sp=0x28, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0xee1b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xee1c, .a=0x73, .x=0x71, .y=0x63, .sp=0x27, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x73}, {.addr=0xee1b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xee1b, .value=0x2d, .type=IO_READ},
        {.addr=0xee1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x76a0, .a=0x59, .x=0x27, .y=0xfa, .sp=0x52, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x76a0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x76a1, .a=0x59, .x=0x27, .y=0xfa, .sp=0x51, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x59}, {.addr=0x76a0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x76a0, .value=0x2d, .type=IO_READ},
        {.addr=0x76a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_003F) {
    const struct CPU_State initial_cpu = {.pc=0xb504, .a=0x0c, .x=0x46, .y=0xce, .sp=0x9a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xb504, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb505, .a=0x0c, .x=0x46, .y=0xce, .sp=0x99, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x0c}, {.addr=0xb504, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb504, .value=0x2d, .type=IO_READ},
        {.addr=0xb505, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0040) {
    const struct CPU_State initial_cpu = {.pc=0xfeb5, .a=0xed, .x=0xaa, .y=0xfd, .sp=0x14, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xfeb5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfeb6, .a=0xed, .x=0xaa, .y=0xfd, .sp=0x13, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xed}, {.addr=0xfeb5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfeb5, .value=0x2d, .type=IO_READ},
        {.addr=0xfeb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0041) {
    const struct CPU_State initial_cpu = {.pc=0xd69d, .a=0x26, .x=0x18, .y=0x6a, .sp=0x42, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xd69d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd69e, .a=0x26, .x=0x18, .y=0x6a, .sp=0x41, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x26}, {.addr=0xd69d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd69d, .value=0x2d, .type=IO_READ},
        {.addr=0xd69e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0042) {
    const struct CPU_State initial_cpu = {.pc=0xe81f, .a=0x83, .x=0x0b, .y=0xa0, .sp=0xd0, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xe81f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe820, .a=0x83, .x=0x0b, .y=0xa0, .sp=0xcf, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x83}, {.addr=0xe81f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe81f, .value=0x2d, .type=IO_READ},
        {.addr=0xe820, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0043) {
    const struct CPU_State initial_cpu = {.pc=0x9079, .a=0xad, .x=0xcd, .y=0x2c, .sp=0xea, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x9079, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x907a, .a=0xad, .x=0xcd, .y=0x2c, .sp=0xe9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xad}, {.addr=0x9079, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9079, .value=0x2d, .type=IO_READ},
        {.addr=0x907a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0e81, .a=0xaf, .x=0x4d, .y=0x90, .sp=0xae, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x0e81, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0e82, .a=0xaf, .x=0x4d, .y=0x90, .sp=0xad, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xaf}, {.addr=0x0e81, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0e81, .value=0x2d, .type=IO_READ},
        {.addr=0x0e82, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x508e, .a=0x81, .x=0xcf, .y=0x26, .sp=0xea, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x508e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x508f, .a=0x81, .x=0xcf, .y=0x26, .sp=0xe9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x81}, {.addr=0x508e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x508e, .value=0x2d, .type=IO_READ},
        {.addr=0x508f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0046) {
    const struct CPU_State initial_cpu = {.pc=0xad55, .a=0x01, .x=0x94, .y=0xbb, .sp=0x28, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0xad55, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xad56, .a=0x01, .x=0x94, .y=0xbb, .sp=0x27, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x01}, {.addr=0xad55, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xad55, .value=0x2d, .type=IO_READ},
        {.addr=0xad56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0047) {
    const struct CPU_State initial_cpu = {.pc=0x994b, .a=0x79, .x=0xe3, .y=0xb1, .sp=0x48, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x994b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x994c, .a=0x79, .x=0xe3, .y=0xb1, .sp=0x47, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x79}, {.addr=0x994b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x994b, .value=0x2d, .type=IO_READ},
        {.addr=0x994c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x9955, .a=0x9b, .x=0xe1, .y=0x8c, .sp=0xcc, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x9955, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9956, .a=0x9b, .x=0xe1, .y=0x8c, .sp=0xcb, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x9b}, {.addr=0x9955, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9955, .value=0x2d, .type=IO_READ},
        {.addr=0x9956, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0049) {
    const struct CPU_State initial_cpu = {.pc=0x5426, .a=0x35, .x=0x7d, .y=0x7d, .sp=0xc1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x5426, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5427, .a=0x35, .x=0x7d, .y=0x7d, .sp=0xc0, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x35}, {.addr=0x5426, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5426, .value=0x2d, .type=IO_READ},
        {.addr=0x5427, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_004A) {
    const struct CPU_State initial_cpu = {.pc=0xbb6e, .a=0xdd, .x=0x46, .y=0xa4, .sp=0x6c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xbb6e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbb6f, .a=0xdd, .x=0x46, .y=0xa4, .sp=0x6b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xdd}, {.addr=0xbb6e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbb6e, .value=0x2d, .type=IO_READ},
        {.addr=0xbb6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_004B) {
    const struct CPU_State initial_cpu = {.pc=0x3b8f, .a=0xb8, .x=0x7a, .y=0x1c, .sp=0x42, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x3b8f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3b90, .a=0xb8, .x=0x7a, .y=0x1c, .sp=0x41, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xb8}, {.addr=0x3b8f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3b8f, .value=0x2d, .type=IO_READ},
        {.addr=0x3b90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x429a, .a=0x17, .x=0xcd, .y=0xd3, .sp=0x32, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x429a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x429b, .a=0x17, .x=0xcd, .y=0xd3, .sp=0x31, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x17}, {.addr=0x429a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x429a, .value=0x2d, .type=IO_READ},
        {.addr=0x429b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x5bbd, .a=0x91, .x=0xb8, .y=0xda, .sp=0x4e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x5bbd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5bbe, .a=0x91, .x=0xb8, .y=0xda, .sp=0x4d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x91}, {.addr=0x5bbd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5bbd, .value=0x2d, .type=IO_READ},
        {.addr=0x5bbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x6c04, .a=0x0d, .x=0xa8, .y=0x86, .sp=0x79, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x6c04, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6c05, .a=0x0d, .x=0xa8, .y=0x86, .sp=0x78, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x0d}, {.addr=0x6c04, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6c04, .value=0x2d, .type=IO_READ},
        {.addr=0x6c05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x2ce0, .a=0x97, .x=0x1e, .y=0x04, .sp=0xa9, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x2ce0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2ce1, .a=0x97, .x=0x1e, .y=0x04, .sp=0xa8, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x97}, {.addr=0x2ce0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2ce0, .value=0x2d, .type=IO_READ},
        {.addr=0x2ce1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0050) {
    const struct CPU_State initial_cpu = {.pc=0x89fe, .a=0xe6, .x=0x2c, .y=0x7a, .sp=0x15, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x89fe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x89ff, .a=0xe6, .x=0x2c, .y=0x7a, .sp=0x14, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xe6}, {.addr=0x89fe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x89fe, .value=0x2d, .type=IO_READ},
        {.addr=0x89ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8479, .a=0x91, .x=0xe2, .y=0xda, .sp=0x6e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x8479, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x847a, .a=0x91, .x=0xe2, .y=0xda, .sp=0x6d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x91}, {.addr=0x8479, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8479, .value=0x2d, .type=IO_READ},
        {.addr=0x847a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0052) {
    const struct CPU_State initial_cpu = {.pc=0xdf76, .a=0x6c, .x=0xd8, .y=0x90, .sp=0x0d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0xdf76, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdf77, .a=0x6c, .x=0xd8, .y=0x90, .sp=0x0c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x6c}, {.addr=0xdf76, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdf76, .value=0x2d, .type=IO_READ},
        {.addr=0xdf77, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x118e, .a=0x00, .x=0x5b, .y=0xb0, .sp=0x09, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x118e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x118f, .a=0x00, .x=0x5b, .y=0xb0, .sp=0x08, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x118e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x118e, .value=0x2d, .type=IO_READ},
        {.addr=0x118f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x7189, .a=0x86, .x=0x49, .y=0xff, .sp=0xc8, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0x7189, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x718a, .a=0x86, .x=0x49, .y=0xff, .sp=0xc7, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x86}, {.addr=0x7189, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7189, .value=0x2d, .type=IO_READ},
        {.addr=0x718a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0055) {
    const struct CPU_State initial_cpu = {.pc=0x115a, .a=0xed, .x=0xce, .y=0xf3, .sp=0x8e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x115a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x115b, .a=0xed, .x=0xce, .y=0xf3, .sp=0x8d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xed}, {.addr=0x115a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x115a, .value=0x2d, .type=IO_READ},
        {.addr=0x115b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x18f4, .a=0x9b, .x=0xb5, .y=0x27, .sp=0x17, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x18f4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x18f5, .a=0x9b, .x=0xb5, .y=0x27, .sp=0x16, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x9b}, {.addr=0x18f4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x18f4, .value=0x2d, .type=IO_READ},
        {.addr=0x18f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0057) {
    const struct CPU_State initial_cpu = {.pc=0xa1f6, .a=0xc8, .x=0xf0, .y=0x6d, .sp=0x17, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xa1f6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa1f7, .a=0xc8, .x=0xf0, .y=0x6d, .sp=0x16, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xc8}, {.addr=0xa1f6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa1f6, .value=0x2d, .type=IO_READ},
        {.addr=0xa1f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x2287, .a=0x86, .x=0xb2, .y=0xbf, .sp=0x5c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x2287, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2288, .a=0x86, .x=0xb2, .y=0xbf, .sp=0x5b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x86}, {.addr=0x2287, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2287, .value=0x2d, .type=IO_READ},
        {.addr=0x2288, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x5bcb, .a=0x76, .x=0x3f, .y=0x1e, .sp=0x5a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x5bcb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5bcc, .a=0x76, .x=0x3f, .y=0x1e, .sp=0x59, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x76}, {.addr=0x5bcb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5bcb, .value=0x2d, .type=IO_READ},
        {.addr=0x5bcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_005A) {
    const struct CPU_State initial_cpu = {.pc=0xb6f2, .a=0x27, .x=0x92, .y=0x5c, .sp=0x76, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0xb6f2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb6f3, .a=0x27, .x=0x92, .y=0x5c, .sp=0x75, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x27}, {.addr=0xb6f2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb6f2, .value=0x2d, .type=IO_READ},
        {.addr=0xb6f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_005B) {
    const struct CPU_State initial_cpu = {.pc=0xb63f, .a=0xce, .x=0x5a, .y=0x0d, .sp=0xa2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0xb63f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb640, .a=0xce, .x=0x5a, .y=0x0d, .sp=0xa1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xce}, {.addr=0xb63f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb63f, .value=0x2d, .type=IO_READ},
        {.addr=0xb640, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x96cc, .a=0x35, .x=0xe8, .y=0xf9, .sp=0xba, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x96cc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x96cd, .a=0x35, .x=0xe8, .y=0xf9, .sp=0xb9, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x35}, {.addr=0x96cc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x96cc, .value=0x2d, .type=IO_READ},
        {.addr=0x96cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_005D) {
    const struct CPU_State initial_cpu = {.pc=0xc271, .a=0x3f, .x=0x11, .y=0x9c, .sp=0xbd, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0xc271, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc272, .a=0x3f, .x=0x11, .y=0x9c, .sp=0xbc, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x3f}, {.addr=0xc271, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc271, .value=0x2d, .type=IO_READ},
        {.addr=0xc272, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_005E) {
    const struct CPU_State initial_cpu = {.pc=0xeebb, .a=0xf3, .x=0x6c, .y=0x78, .sp=0x40, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0xeebb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeebc, .a=0xf3, .x=0x6c, .y=0x78, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xf3}, {.addr=0xeebb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeebb, .value=0x2d, .type=IO_READ},
        {.addr=0xeebc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_005F) {
    const struct CPU_State initial_cpu = {.pc=0x075d, .a=0x02, .x=0x61, .y=0x5c, .sp=0x9f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0x075d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x075e, .a=0x02, .x=0x61, .y=0x5c, .sp=0x9e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x02}, {.addr=0x075d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x075d, .value=0x2d, .type=IO_READ},
        {.addr=0x075e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0060) {
    const struct CPU_State initial_cpu = {.pc=0xa9a7, .a=0x16, .x=0x87, .y=0x63, .sp=0x5d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0xa9a7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa9a8, .a=0x16, .x=0x87, .y=0x63, .sp=0x5c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x16}, {.addr=0xa9a7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa9a7, .value=0x2d, .type=IO_READ},
        {.addr=0xa9a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x146a, .a=0xd8, .x=0x19, .y=0x01, .sp=0x80, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x146a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x146b, .a=0xd8, .x=0x19, .y=0x01, .sp=0x7f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xd8}, {.addr=0x146a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x146a, .value=0x2d, .type=IO_READ},
        {.addr=0x146b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0062) {
    const struct CPU_State initial_cpu = {.pc=0xb896, .a=0xda, .x=0x8f, .y=0x40, .sp=0x86, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xb896, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb897, .a=0xda, .x=0x8f, .y=0x40, .sp=0x85, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xda}, {.addr=0xb896, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb896, .value=0x2d, .type=IO_READ},
        {.addr=0xb897, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0063) {
    const struct CPU_State initial_cpu = {.pc=0x82eb, .a=0x6f, .x=0x89, .y=0x81, .sp=0x19, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x82eb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x82ec, .a=0x6f, .x=0x89, .y=0x81, .sp=0x18, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x6f}, {.addr=0x82eb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x82eb, .value=0x2d, .type=IO_READ},
        {.addr=0x82ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x168d, .a=0x93, .x=0xfd, .y=0x87, .sp=0xb8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x168d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x168e, .a=0x93, .x=0xfd, .y=0x87, .sp=0xb7, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x93}, {.addr=0x168d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x168d, .value=0x2d, .type=IO_READ},
        {.addr=0x168e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0065) {
    const struct CPU_State initial_cpu = {.pc=0x48b8, .a=0x55, .x=0x92, .y=0x93, .sp=0x92, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x48b8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x48b9, .a=0x55, .x=0x92, .y=0x93, .sp=0x91, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x55}, {.addr=0x48b8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x48b8, .value=0x2d, .type=IO_READ},
        {.addr=0x48b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x5553, .a=0xb5, .x=0xbe, .y=0x4b, .sp=0x82, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x5553, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5554, .a=0xb5, .x=0xbe, .y=0x4b, .sp=0x81, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xb5}, {.addr=0x5553, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5553, .value=0x2d, .type=IO_READ},
        {.addr=0x5554, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0067) {
    const struct CPU_State initial_cpu = {.pc=0x253a, .a=0x6b, .x=0x63, .y=0x68, .sp=0x7f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x253a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x253b, .a=0x6b, .x=0x63, .y=0x68, .sp=0x7e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x6b}, {.addr=0x253a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x253a, .value=0x2d, .type=IO_READ},
        {.addr=0x253b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x4ce6, .a=0xa2, .x=0xc9, .y=0x3c, .sp=0xef, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x4ce6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4ce7, .a=0xa2, .x=0xc9, .y=0x3c, .sp=0xee, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xa2}, {.addr=0x4ce6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4ce6, .value=0x2d, .type=IO_READ},
        {.addr=0x4ce7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0069) {
    const struct CPU_State initial_cpu = {.pc=0xbed8, .a=0x6b, .x=0x37, .y=0x6f, .sp=0x46, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xbed8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbed9, .a=0x6b, .x=0x37, .y=0x6f, .sp=0x45, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x6b}, {.addr=0xbed8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbed8, .value=0x2d, .type=IO_READ},
        {.addr=0xbed9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x9b61, .a=0xd1, .x=0x0a, .y=0xfc, .sp=0xbb, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x9b61, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9b62, .a=0xd1, .x=0x0a, .y=0xfc, .sp=0xba, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xd1}, {.addr=0x9b61, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9b61, .value=0x2d, .type=IO_READ},
        {.addr=0x9b62, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_006B) {
    const struct CPU_State initial_cpu = {.pc=0x9dba, .a=0x33, .x=0x62, .y=0x6c, .sp=0xed, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x9dba, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9dbb, .a=0x33, .x=0x62, .y=0x6c, .sp=0xec, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x33}, {.addr=0x9dba, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9dba, .value=0x2d, .type=IO_READ},
        {.addr=0x9dbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x838c, .a=0xca, .x=0x5b, .y=0x7d, .sp=0x14, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x838c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x838d, .a=0xca, .x=0x5b, .y=0x7d, .sp=0x13, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xca}, {.addr=0x838c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x838c, .value=0x2d, .type=IO_READ},
        {.addr=0x838d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x2d4d, .a=0xc3, .x=0xdc, .y=0x58, .sp=0x0b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x2d4d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2d4e, .a=0xc3, .x=0xdc, .y=0x58, .sp=0x0a, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xc3}, {.addr=0x2d4d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2d4d, .value=0x2d, .type=IO_READ},
        {.addr=0x2d4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_006E) {
    const struct CPU_State initial_cpu = {.pc=0xacf4, .a=0x91, .x=0x32, .y=0x5f, .sp=0x50, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0xacf4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xacf5, .a=0x91, .x=0x32, .y=0x5f, .sp=0x4f, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x91}, {.addr=0xacf4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xacf4, .value=0x2d, .type=IO_READ},
        {.addr=0xacf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x54d8, .a=0x24, .x=0xea, .y=0xbc, .sp=0xee, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x54d8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x54d9, .a=0x24, .x=0xea, .y=0xbc, .sp=0xed, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x24}, {.addr=0x54d8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x54d8, .value=0x2d, .type=IO_READ},
        {.addr=0x54d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x8e3b, .a=0xa2, .x=0xb8, .y=0xff, .sp=0x61, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x8e3b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8e3c, .a=0xa2, .x=0xb8, .y=0xff, .sp=0x60, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xa2}, {.addr=0x8e3b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8e3b, .value=0x2d, .type=IO_READ},
        {.addr=0x8e3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x2d0c, .a=0x28, .x=0xf7, .y=0xcd, .sp=0x94, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x2d0c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2d0d, .a=0x28, .x=0xf7, .y=0xcd, .sp=0x93, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x28}, {.addr=0x2d0c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2d0c, .value=0x2d, .type=IO_READ},
        {.addr=0x2d0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0072) {
    const struct CPU_State initial_cpu = {.pc=0xc2b5, .a=0x03, .x=0x91, .y=0x70, .sp=0xdb, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0xc2b5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc2b6, .a=0x03, .x=0x91, .y=0x70, .sp=0xda, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x03}, {.addr=0xc2b5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc2b5, .value=0x2d, .type=IO_READ},
        {.addr=0xc2b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xff67, .a=0x2c, .x=0x1a, .y=0x8c, .sp=0x4c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0xff67, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xff68, .a=0x2c, .x=0x1a, .y=0x8c, .sp=0x4b, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x2c}, {.addr=0xff67, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xff67, .value=0x2d, .type=IO_READ},
        {.addr=0xff68, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0074) {
    const struct CPU_State initial_cpu = {.pc=0x439f, .a=0x7b, .x=0xe2, .y=0x76, .sp=0xe4, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x439f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x43a0, .a=0x7b, .x=0xe2, .y=0x76, .sp=0xe3, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x7b}, {.addr=0x439f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x439f, .value=0x2d, .type=IO_READ},
        {.addr=0x43a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xdc84, .a=0xac, .x=0x61, .y=0x88, .sp=0x01, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xdc84, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdc85, .a=0xac, .x=0x61, .y=0x88, .sp=0x00, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xac}, {.addr=0xdc84, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdc84, .value=0x2d, .type=IO_READ},
        {.addr=0xdc85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0076) {
    const struct CPU_State initial_cpu = {.pc=0x245e, .a=0x2a, .x=0x9a, .y=0x2e, .sp=0xab, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x245e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x245f, .a=0x2a, .x=0x9a, .y=0x2e, .sp=0xaa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x2a}, {.addr=0x245e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x245e, .value=0x2d, .type=IO_READ},
        {.addr=0x245f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0077) {
    const struct CPU_State initial_cpu = {.pc=0x6e73, .a=0xb2, .x=0xd0, .y=0xe1, .sp=0x56, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x6e73, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6e74, .a=0xb2, .x=0xd0, .y=0xe1, .sp=0x55, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xb2}, {.addr=0x6e73, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6e73, .value=0x2d, .type=IO_READ},
        {.addr=0x6e74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x16dc, .a=0xc5, .x=0x8c, .y=0xa7, .sp=0xa7, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x16dc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x16dd, .a=0xc5, .x=0x8c, .y=0xa7, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xc5}, {.addr=0x16dc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x16dc, .value=0x2d, .type=IO_READ},
        {.addr=0x16dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0079) {
    const struct CPU_State initial_cpu = {.pc=0xeb3d, .a=0x20, .x=0xd0, .y=0x7d, .sp=0xdc, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0xeb3d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeb3e, .a=0x20, .x=0xd0, .y=0x7d, .sp=0xdb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x20}, {.addr=0xeb3d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeb3d, .value=0x2d, .type=IO_READ},
        {.addr=0xeb3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_007A) {
    const struct CPU_State initial_cpu = {.pc=0xf6af, .a=0xef, .x=0x65, .y=0xcc, .sp=0xb7, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xf6af, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf6b0, .a=0xef, .x=0x65, .y=0xcc, .sp=0xb6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xef}, {.addr=0xf6af, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf6af, .value=0x2d, .type=IO_READ},
        {.addr=0xf6b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_007B) {
    const struct CPU_State initial_cpu = {.pc=0xf068, .a=0xfb, .x=0xfb, .y=0xe4, .sp=0x72, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xf068, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf069, .a=0xfb, .x=0xfb, .y=0xe4, .sp=0x71, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xfb}, {.addr=0xf068, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf068, .value=0x2d, .type=IO_READ},
        {.addr=0xf069, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x289e, .a=0x08, .x=0xee, .y=0x26, .sp=0xb4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x289e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x289f, .a=0x08, .x=0xee, .y=0x26, .sp=0xb3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x08}, {.addr=0x289e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x289e, .value=0x2d, .type=IO_READ},
        {.addr=0x289f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_007D) {
    const struct CPU_State initial_cpu = {.pc=0x5b56, .a=0x59, .x=0xf1, .y=0xb4, .sp=0xb7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x5b56, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5b57, .a=0x59, .x=0xf1, .y=0xb4, .sp=0xb6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x59}, {.addr=0x5b56, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5b56, .value=0x2d, .type=IO_READ},
        {.addr=0x5b57, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x8abe, .a=0x80, .x=0x47, .y=0xa1, .sp=0xbc, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x8abe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8abf, .a=0x80, .x=0x47, .y=0xa1, .sp=0xbb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x80}, {.addr=0x8abe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8abe, .value=0x2d, .type=IO_READ},
        {.addr=0x8abf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1651, .a=0xb3, .x=0x53, .y=0xd6, .sp=0xf8, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x1651, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1652, .a=0xb3, .x=0x53, .y=0xd6, .sp=0xf7, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xb3}, {.addr=0x1651, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1651, .value=0x2d, .type=IO_READ},
        {.addr=0x1652, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x888e, .a=0x68, .x=0x74, .y=0x88, .sp=0x60, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x888e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x888f, .a=0x68, .x=0x74, .y=0x88, .sp=0x5f, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x68}, {.addr=0x888e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x888e, .value=0x2d, .type=IO_READ},
        {.addr=0x888f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0081) {
    const struct CPU_State initial_cpu = {.pc=0xd20c, .a=0x20, .x=0xe5, .y=0xe7, .sp=0xbe, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xd20c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd20d, .a=0x20, .x=0xe5, .y=0xe7, .sp=0xbd, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x20}, {.addr=0xd20c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd20c, .value=0x2d, .type=IO_READ},
        {.addr=0xd20d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x50ac, .a=0xd6, .x=0x49, .y=0x1b, .sp=0xdf, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x50ac, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x50ad, .a=0xd6, .x=0x49, .y=0x1b, .sp=0xde, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xd6}, {.addr=0x50ac, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x50ac, .value=0x2d, .type=IO_READ},
        {.addr=0x50ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4013, .a=0x69, .x=0x65, .y=0xd7, .sp=0xa1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x4013, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4014, .a=0x69, .x=0x65, .y=0xd7, .sp=0xa0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x69}, {.addr=0x4013, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4013, .value=0x2d, .type=IO_READ},
        {.addr=0x4014, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x3668, .a=0xd1, .x=0xad, .y=0x0c, .sp=0xdf, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x3668, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3669, .a=0xd1, .x=0xad, .y=0x0c, .sp=0xde, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xd1}, {.addr=0x3668, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3668, .value=0x2d, .type=IO_READ},
        {.addr=0x3669, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x6d9d, .a=0xc1, .x=0xad, .y=0xd7, .sp=0x75, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x6d9d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6d9e, .a=0xc1, .x=0xad, .y=0xd7, .sp=0x74, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xc1}, {.addr=0x6d9d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6d9d, .value=0x2d, .type=IO_READ},
        {.addr=0x6d9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x2716, .a=0x0c, .x=0x7b, .y=0xe6, .sp=0xf0, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x2716, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2717, .a=0x0c, .x=0x7b, .y=0xe6, .sp=0xef, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x0c}, {.addr=0x2716, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2716, .value=0x2d, .type=IO_READ},
        {.addr=0x2717, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0087) {
    const struct CPU_State initial_cpu = {.pc=0xc3f2, .a=0xe4, .x=0x00, .y=0x9e, .sp=0xb6, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xc3f2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc3f3, .a=0xe4, .x=0x00, .y=0x9e, .sp=0xb5, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xe4}, {.addr=0xc3f2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc3f2, .value=0x2d, .type=IO_READ},
        {.addr=0xc3f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x258b, .a=0x5d, .x=0xdc, .y=0x64, .sp=0x2a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x258b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x258c, .a=0x5d, .x=0xdc, .y=0x64, .sp=0x29, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x5d}, {.addr=0x258b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x258b, .value=0x2d, .type=IO_READ},
        {.addr=0x258c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe736, .a=0x3b, .x=0xd6, .y=0x60, .sp=0x05, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0xe736, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe737, .a=0x3b, .x=0xd6, .y=0x60, .sp=0x04, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x3b}, {.addr=0xe736, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe736, .value=0x2d, .type=IO_READ},
        {.addr=0xe737, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_008A) {
    const struct CPU_State initial_cpu = {.pc=0x1fac, .a=0xa7, .x=0x33, .y=0xb4, .sp=0x31, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x1fac, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1fad, .a=0xa7, .x=0x33, .y=0xb4, .sp=0x30, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xa7}, {.addr=0x1fac, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1fac, .value=0x2d, .type=IO_READ},
        {.addr=0x1fad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xd3f2, .a=0x18, .x=0x2a, .y=0xfa, .sp=0x8b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0xd3f2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd3f3, .a=0x18, .x=0x2a, .y=0xfa, .sp=0x8a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x18}, {.addr=0xd3f2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd3f2, .value=0x2d, .type=IO_READ},
        {.addr=0xd3f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_008C) {
    const struct CPU_State initial_cpu = {.pc=0xfe49, .a=0x9d, .x=0x5d, .y=0x60, .sp=0xc3, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xfe49, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfe4a, .a=0x9d, .x=0x5d, .y=0x60, .sp=0xc2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x9d}, {.addr=0xfe49, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfe49, .value=0x2d, .type=IO_READ},
        {.addr=0xfe4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8d7b, .a=0x58, .x=0x98, .y=0xc1, .sp=0x6e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x8d7b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8d7c, .a=0x58, .x=0x98, .y=0xc1, .sp=0x6d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x58}, {.addr=0x8d7b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8d7b, .value=0x2d, .type=IO_READ},
        {.addr=0x8d7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x4932, .a=0xa7, .x=0x03, .y=0x29, .sp=0x7a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x4932, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4933, .a=0xa7, .x=0x03, .y=0x29, .sp=0x79, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xa7}, {.addr=0x4932, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4932, .value=0x2d, .type=IO_READ},
        {.addr=0x4933, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_008F) {
    const struct CPU_State initial_cpu = {.pc=0x5c5b, .a=0x74, .x=0xf3, .y=0x47, .sp=0x80, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x5c5b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5c5c, .a=0x74, .x=0xf3, .y=0x47, .sp=0x7f, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x74}, {.addr=0x5c5b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5c5b, .value=0x2d, .type=IO_READ},
        {.addr=0x5c5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0090) {
    const struct CPU_State initial_cpu = {.pc=0xfd6e, .a=0x7a, .x=0x7a, .y=0x85, .sp=0x61, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xfd6e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfd6f, .a=0x7a, .x=0x7a, .y=0x85, .sp=0x60, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x7a}, {.addr=0xfd6e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfd6e, .value=0x2d, .type=IO_READ},
        {.addr=0xfd6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0091) {
    const struct CPU_State initial_cpu = {.pc=0xf404, .a=0x3e, .x=0xff, .y=0x96, .sp=0x49, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0xf404, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf405, .a=0x3e, .x=0xff, .y=0x96, .sp=0x48, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x3e}, {.addr=0xf404, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf404, .value=0x2d, .type=IO_READ},
        {.addr=0xf405, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0092) {
    const struct CPU_State initial_cpu = {.pc=0xb02d, .a=0x46, .x=0xd9, .y=0x74, .sp=0xed, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xb02d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb02e, .a=0x46, .x=0xd9, .y=0x74, .sp=0xec, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x46}, {.addr=0xb02d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb02d, .value=0x2d, .type=IO_READ},
        {.addr=0xb02e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x5ecc, .a=0xc6, .x=0x90, .y=0xd3, .sp=0x72, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x5ecc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5ecd, .a=0xc6, .x=0x90, .y=0xd3, .sp=0x71, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xc6}, {.addr=0x5ecc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5ecc, .value=0x2d, .type=IO_READ},
        {.addr=0x5ecd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0094) {
    const struct CPU_State initial_cpu = {.pc=0xde2e, .a=0x6c, .x=0x97, .y=0x5f, .sp=0xaa, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0xde2e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xde2f, .a=0x6c, .x=0x97, .y=0x5f, .sp=0xa9, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x6c}, {.addr=0xde2e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xde2e, .value=0x2d, .type=IO_READ},
        {.addr=0xde2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0095) {
    const struct CPU_State initial_cpu = {.pc=0xe776, .a=0x85, .x=0xdf, .y=0xd6, .sp=0xa4, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xe776, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe777, .a=0x85, .x=0xdf, .y=0xd6, .sp=0xa3, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x85}, {.addr=0xe776, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe776, .value=0x2d, .type=IO_READ},
        {.addr=0xe777, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0096) {
    const struct CPU_State initial_cpu = {.pc=0xca14, .a=0x3e, .x=0xc8, .y=0xf0, .sp=0x15, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0xca14, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xca15, .a=0x3e, .x=0xc8, .y=0xf0, .sp=0x14, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x3e}, {.addr=0xca14, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xca14, .value=0x2d, .type=IO_READ},
        {.addr=0xca15, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0097) {
    const struct CPU_State initial_cpu = {.pc=0x170f, .a=0x13, .x=0x3a, .y=0x7f, .sp=0xed, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x170f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1710, .a=0x13, .x=0x3a, .y=0x7f, .sp=0xec, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x13}, {.addr=0x170f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x170f, .value=0x2d, .type=IO_READ},
        {.addr=0x1710, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0098) {
    const struct CPU_State initial_cpu = {.pc=0xa51a, .a=0x2f, .x=0xc6, .y=0x5c, .sp=0xa1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0xa51a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa51b, .a=0x2f, .x=0xc6, .y=0x5c, .sp=0xa0, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x2f}, {.addr=0xa51a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa51a, .value=0x2d, .type=IO_READ},
        {.addr=0xa51b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0099) {
    const struct CPU_State initial_cpu = {.pc=0xa58f, .a=0xe7, .x=0xa8, .y=0x55, .sp=0x5b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xa58f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa590, .a=0xe7, .x=0xa8, .y=0x55, .sp=0x5a, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xe7}, {.addr=0xa58f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa58f, .value=0x2d, .type=IO_READ},
        {.addr=0xa590, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_009A) {
    const struct CPU_State initial_cpu = {.pc=0x5d05, .a=0x04, .x=0xb4, .y=0x34, .sp=0x7b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x5d05, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5d06, .a=0x04, .x=0xb4, .y=0x34, .sp=0x7a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x04}, {.addr=0x5d05, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5d05, .value=0x2d, .type=IO_READ},
        {.addr=0x5d06, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_009B) {
    const struct CPU_State initial_cpu = {.pc=0xb574, .a=0xd5, .x=0xf1, .y=0x09, .sp=0x92, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xb574, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb575, .a=0xd5, .x=0xf1, .y=0x09, .sp=0x91, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xd5}, {.addr=0xb574, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb574, .value=0x2d, .type=IO_READ},
        {.addr=0xb575, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_009C) {
    const struct CPU_State initial_cpu = {.pc=0xc2a3, .a=0xe4, .x=0x36, .y=0x2b, .sp=0xb6, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xc2a3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc2a4, .a=0xe4, .x=0x36, .y=0x2b, .sp=0xb5, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xe4}, {.addr=0xc2a3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc2a3, .value=0x2d, .type=IO_READ},
        {.addr=0xc2a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_009D) {
    const struct CPU_State initial_cpu = {.pc=0x4390, .a=0xa3, .x=0xc2, .y=0x64, .sp=0x5f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x4390, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4391, .a=0xa3, .x=0xc2, .y=0x64, .sp=0x5e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xa3}, {.addr=0x4390, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4390, .value=0x2d, .type=IO_READ},
        {.addr=0x4391, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x9158, .a=0x95, .x=0xb0, .y=0x78, .sp=0x17, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x9158, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9159, .a=0x95, .x=0xb0, .y=0x78, .sp=0x16, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x95}, {.addr=0x9158, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9158, .value=0x2d, .type=IO_READ},
        {.addr=0x9159, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x24fd, .a=0x5b, .x=0x50, .y=0x75, .sp=0xb0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x24fd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x24fe, .a=0x5b, .x=0x50, .y=0x75, .sp=0xaf, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x5b}, {.addr=0x24fd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x24fd, .value=0x2d, .type=IO_READ},
        {.addr=0x24fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xa469, .a=0x31, .x=0x3e, .y=0xff, .sp=0xd2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xa469, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa46a, .a=0x31, .x=0x3e, .y=0xff, .sp=0xd1, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x31}, {.addr=0xa469, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa469, .value=0x2d, .type=IO_READ},
        {.addr=0xa46a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x5e6a, .a=0x57, .x=0x81, .y=0xd2, .sp=0x59, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x5e6a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5e6b, .a=0x57, .x=0x81, .y=0xd2, .sp=0x58, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x57}, {.addr=0x5e6a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5e6a, .value=0x2d, .type=IO_READ},
        {.addr=0x5e6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x9512, .a=0xdd, .x=0x0b, .y=0x18, .sp=0xba, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x9512, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9513, .a=0xdd, .x=0x0b, .y=0x18, .sp=0xb9, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xdd}, {.addr=0x9512, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9512, .value=0x2d, .type=IO_READ},
        {.addr=0x9513, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xb0f0, .a=0xf4, .x=0xca, .y=0x30, .sp=0x2a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xb0f0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb0f1, .a=0xf4, .x=0xca, .y=0x30, .sp=0x29, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xf4}, {.addr=0xb0f0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb0f0, .value=0x2d, .type=IO_READ},
        {.addr=0xb0f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x9104, .a=0x7f, .x=0xe3, .y=0xa5, .sp=0x95, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x9104, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9105, .a=0x7f, .x=0xe3, .y=0xa5, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x7f}, {.addr=0x9104, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9104, .value=0x2d, .type=IO_READ},
        {.addr=0x9105, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x01eb, .a=0x23, .x=0x7b, .y=0x3f, .sp=0x06, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x01eb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x01ec, .a=0x23, .x=0x7b, .y=0x3f, .sp=0x05, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x23}, {.addr=0x01eb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x01eb, .value=0x2d, .type=IO_READ},
        {.addr=0x01ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xdd8f, .a=0x90, .x=0x71, .y=0x12, .sp=0xf8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xdd8f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdd90, .a=0x90, .x=0x71, .y=0x12, .sp=0xf7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x90}, {.addr=0xdd8f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdd8f, .value=0x2d, .type=IO_READ},
        {.addr=0xdd90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xbb91, .a=0xd8, .x=0x62, .y=0x85, .sp=0x0d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0xbb91, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbb92, .a=0xd8, .x=0x62, .y=0x85, .sp=0x0c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xd8}, {.addr=0xbb91, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbb91, .value=0x2d, .type=IO_READ},
        {.addr=0xbb92, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x2fae, .a=0x04, .x=0xd5, .y=0x7e, .sp=0xf3, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x2fae, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2faf, .a=0x04, .x=0xd5, .y=0x7e, .sp=0xf2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x04}, {.addr=0x2fae, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2fae, .value=0x2d, .type=IO_READ},
        {.addr=0x2faf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xd9b6, .a=0x18, .x=0x55, .y=0x3a, .sp=0x6d, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xd9b6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd9b7, .a=0x18, .x=0x55, .y=0x3a, .sp=0x6c, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x18}, {.addr=0xd9b6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd9b6, .value=0x2d, .type=IO_READ},
        {.addr=0xd9b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xdb3a, .a=0xd7, .x=0x68, .y=0xeb, .sp=0xdc, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0xdb3a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdb3b, .a=0xd7, .x=0x68, .y=0xeb, .sp=0xdb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xd7}, {.addr=0xdb3a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdb3a, .value=0x2d, .type=IO_READ},
        {.addr=0xdb3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x51d1, .a=0xe0, .x=0xbd, .y=0x18, .sp=0x6b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x51d1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x51d2, .a=0xe0, .x=0xbd, .y=0x18, .sp=0x6a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xe0}, {.addr=0x51d1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x51d1, .value=0x2d, .type=IO_READ},
        {.addr=0x51d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x38f8, .a=0x19, .x=0x00, .y=0x7d, .sp=0x09, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x38f8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x38f9, .a=0x19, .x=0x00, .y=0x7d, .sp=0x08, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x19}, {.addr=0x38f8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x38f8, .value=0x2d, .type=IO_READ},
        {.addr=0x38f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xc4fb, .a=0xe0, .x=0x16, .y=0x49, .sp=0x9c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0xc4fb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc4fc, .a=0xe0, .x=0x16, .y=0x49, .sp=0x9b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xe0}, {.addr=0xc4fb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc4fb, .value=0x2d, .type=IO_READ},
        {.addr=0xc4fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x12d9, .a=0x5c, .x=0x29, .y=0x87, .sp=0x07, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x12d9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x12da, .a=0x5c, .x=0x29, .y=0x87, .sp=0x06, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x5c}, {.addr=0x12d9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x12d9, .value=0x2d, .type=IO_READ},
        {.addr=0x12da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xcc05, .a=0x5f, .x=0x93, .y=0xf3, .sp=0x63, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xcc05, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcc06, .a=0x5f, .x=0x93, .y=0xf3, .sp=0x62, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x5f}, {.addr=0xcc05, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcc05, .value=0x2d, .type=IO_READ},
        {.addr=0xcc06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xd09e, .a=0x8f, .x=0xc4, .y=0xfa, .sp=0x0b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0xd09e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd09f, .a=0x8f, .x=0xc4, .y=0xfa, .sp=0x0a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x8f}, {.addr=0xd09e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd09e, .value=0x2d, .type=IO_READ},
        {.addr=0xd09f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x963f, .a=0x87, .x=0x80, .y=0x63, .sp=0x30, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x963f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9640, .a=0x87, .x=0x80, .y=0x63, .sp=0x2f, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x87}, {.addr=0x963f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x963f, .value=0x2d, .type=IO_READ},
        {.addr=0x9640, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x34d8, .a=0x5b, .x=0x3f, .y=0xa1, .sp=0x58, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x34d8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x34d9, .a=0x5b, .x=0x3f, .y=0xa1, .sp=0x57, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x5b}, {.addr=0x34d8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x34d8, .value=0x2d, .type=IO_READ},
        {.addr=0x34d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x8387, .a=0x6e, .x=0xff, .y=0xa3, .sp=0x4a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x8387, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8388, .a=0x6e, .x=0xff, .y=0xa3, .sp=0x49, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x6e}, {.addr=0x8387, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8387, .value=0x2d, .type=IO_READ},
        {.addr=0x8388, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xa330, .a=0x24, .x=0xfd, .y=0x84, .sp=0x64, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0xa330, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa331, .a=0x24, .x=0xfd, .y=0x84, .sp=0x63, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x24}, {.addr=0xa330, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa330, .value=0x2d, .type=IO_READ},
        {.addr=0xa331, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xa697, .a=0x02, .x=0x44, .y=0xf5, .sp=0xc7, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xa697, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa698, .a=0x02, .x=0x44, .y=0xf5, .sp=0xc6, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x02}, {.addr=0xa697, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa697, .value=0x2d, .type=IO_READ},
        {.addr=0xa698, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x6bf7, .a=0x7b, .x=0x5c, .y=0x5a, .sp=0x53, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x6bf7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6bf8, .a=0x7b, .x=0x5c, .y=0x5a, .sp=0x52, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x7b}, {.addr=0x6bf7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6bf7, .value=0x2d, .type=IO_READ},
        {.addr=0x6bf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x8692, .a=0xdc, .x=0x1b, .y=0x22, .sp=0x1b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x8692, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8693, .a=0xdc, .x=0x1b, .y=0x22, .sp=0x1a, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xdc}, {.addr=0x8692, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8692, .value=0x2d, .type=IO_READ},
        {.addr=0x8693, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x08e8, .a=0x79, .x=0x8c, .y=0x8b, .sp=0xb3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x08e8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x08e9, .a=0x79, .x=0x8c, .y=0x8b, .sp=0xb2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x79}, {.addr=0x08e8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x08e8, .value=0x2d, .type=IO_READ},
        {.addr=0x08e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x3f90, .a=0xac, .x=0x5d, .y=0xc9, .sp=0x87, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x3f90, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3f91, .a=0xac, .x=0x5d, .y=0xc9, .sp=0x86, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xac}, {.addr=0x3f90, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3f90, .value=0x2d, .type=IO_READ},
        {.addr=0x3f91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x737d, .a=0x81, .x=0x51, .y=0xed, .sp=0xaf, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x737d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x737e, .a=0x81, .x=0x51, .y=0xed, .sp=0xae, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x81}, {.addr=0x737d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x737d, .value=0x2d, .type=IO_READ},
        {.addr=0x737e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb0ce, .a=0xdc, .x=0x3a, .y=0xbb, .sp=0xa8, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xb0ce, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb0cf, .a=0xdc, .x=0x3a, .y=0xbb, .sp=0xa7, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xdc}, {.addr=0xb0ce, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb0ce, .value=0x2d, .type=IO_READ},
        {.addr=0xb0cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x727b, .a=0xbd, .x=0x2d, .y=0xf5, .sp=0xa8, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x727b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x727c, .a=0xbd, .x=0x2d, .y=0xf5, .sp=0xa7, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xbd}, {.addr=0x727b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x727b, .value=0x2d, .type=IO_READ},
        {.addr=0x727c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xbc31, .a=0x43, .x=0xba, .y=0xae, .sp=0x4a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0xbc31, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbc32, .a=0x43, .x=0xba, .y=0xae, .sp=0x49, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x43}, {.addr=0xbc31, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbc31, .value=0x2d, .type=IO_READ},
        {.addr=0xbc32, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x280d, .a=0x64, .x=0x79, .y=0xbc, .sp=0xbd, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x280d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x280e, .a=0x64, .x=0x79, .y=0xbc, .sp=0xbc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x64}, {.addr=0x280d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x280d, .value=0x2d, .type=IO_READ},
        {.addr=0x280e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x3669, .a=0xe4, .x=0x62, .y=0xf3, .sp=0xe6, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x3669, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x366a, .a=0xe4, .x=0x62, .y=0xf3, .sp=0xe5, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xe4}, {.addr=0x3669, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3669, .value=0x2d, .type=IO_READ},
        {.addr=0x366a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xd65d, .a=0x37, .x=0x14, .y=0xf1, .sp=0xd0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xd65d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd65e, .a=0x37, .x=0x14, .y=0xf1, .sp=0xcf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x37}, {.addr=0xd65d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd65d, .value=0x2d, .type=IO_READ},
        {.addr=0xd65e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x7182, .a=0x62, .x=0x91, .y=0xbf, .sp=0x12, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x7182, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7183, .a=0x62, .x=0x91, .y=0xbf, .sp=0x11, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x62}, {.addr=0x7182, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7182, .value=0x2d, .type=IO_READ},
        {.addr=0x7183, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x7fb5, .a=0x5a, .x=0x92, .y=0x34, .sp=0x82, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x7fb5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7fb6, .a=0x5a, .x=0x92, .y=0x34, .sp=0x81, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x5a}, {.addr=0x7fb5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7fb5, .value=0x2d, .type=IO_READ},
        {.addr=0x7fb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x91b2, .a=0x48, .x=0x28, .y=0xfd, .sp=0x24, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x91b2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x91b3, .a=0x48, .x=0x28, .y=0xfd, .sp=0x23, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x48}, {.addr=0x91b2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x91b2, .value=0x2d, .type=IO_READ},
        {.addr=0x91b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x39b0, .a=0xb2, .x=0x1e, .y=0xf3, .sp=0xd4, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x39b0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x39b1, .a=0xb2, .x=0x1e, .y=0xf3, .sp=0xd3, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xb2}, {.addr=0x39b0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x39b0, .value=0x2d, .type=IO_READ},
        {.addr=0x39b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xbf33, .a=0xa0, .x=0x4b, .y=0xdb, .sp=0xd3, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xbf33, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbf34, .a=0xa0, .x=0x4b, .y=0xdb, .sp=0xd2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xa0}, {.addr=0xbf33, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbf33, .value=0x2d, .type=IO_READ},
        {.addr=0xbf34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x819a, .a=0xfc, .x=0x23, .y=0xd3, .sp=0xd2, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x819a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x819b, .a=0xfc, .x=0x23, .y=0xd3, .sp=0xd1, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xfc}, {.addr=0x819a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x819a, .value=0x2d, .type=IO_READ},
        {.addr=0x819b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x0f1e, .a=0x19, .x=0x5c, .y=0x82, .sp=0xfb, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x0f1e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0f1f, .a=0x19, .x=0x5c, .y=0x82, .sp=0xfa, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x19}, {.addr=0x0f1e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0f1e, .value=0x2d, .type=IO_READ},
        {.addr=0x0f1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xcd0e, .a=0xf5, .x=0x7b, .y=0xf4, .sp=0x4c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0xcd0e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcd0f, .a=0xf5, .x=0x7b, .y=0xf4, .sp=0x4b, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xf5}, {.addr=0xcd0e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcd0e, .value=0x2d, .type=IO_READ},
        {.addr=0xcd0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x2d53, .a=0x28, .x=0xd1, .y=0xf1, .sp=0x95, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x2d53, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2d54, .a=0x28, .x=0xd1, .y=0xf1, .sp=0x94, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x28}, {.addr=0x2d53, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2d53, .value=0x2d, .type=IO_READ},
        {.addr=0x2d54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0f77, .a=0xf0, .x=0x16, .y=0x97, .sp=0xa8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x0f77, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0f78, .a=0xf0, .x=0x16, .y=0x97, .sp=0xa7, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xf0}, {.addr=0x0f77, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0f77, .value=0x2d, .type=IO_READ},
        {.addr=0x0f78, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x4fa3, .a=0x1b, .x=0xd5, .y=0x38, .sp=0xf5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x4fa3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4fa4, .a=0x1b, .x=0xd5, .y=0x38, .sp=0xf4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x1b}, {.addr=0x4fa3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4fa3, .value=0x2d, .type=IO_READ},
        {.addr=0x4fa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x0a6c, .a=0x30, .x=0x37, .y=0x0d, .sp=0x54, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x0a6c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0a6d, .a=0x30, .x=0x37, .y=0x0d, .sp=0x53, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x30}, {.addr=0x0a6c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0a6c, .value=0x2d, .type=IO_READ},
        {.addr=0x0a6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xff5d, .a=0xfc, .x=0xe7, .y=0x70, .sp=0x62, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xff5d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xff5e, .a=0xfc, .x=0xe7, .y=0x70, .sp=0x61, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xfc}, {.addr=0xff5d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xff5d, .value=0x2d, .type=IO_READ},
        {.addr=0xff5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x7bb7, .a=0x67, .x=0x95, .y=0x91, .sp=0x19, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x7bb7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7bb8, .a=0x67, .x=0x95, .y=0x91, .sp=0x18, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x67}, {.addr=0x7bb7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7bb7, .value=0x2d, .type=IO_READ},
        {.addr=0x7bb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x29b4, .a=0x78, .x=0xe4, .y=0x86, .sp=0x00, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x29b4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x29b5, .a=0x78, .x=0xe4, .y=0x86, .sp=0xff, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x78}, {.addr=0x29b4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x29b4, .value=0x2d, .type=IO_READ},
        {.addr=0x29b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xa33c, .a=0x81, .x=0xb5, .y=0x53, .sp=0xb5, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0xa33c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa33d, .a=0x81, .x=0xb5, .y=0x53, .sp=0xb4, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x81}, {.addr=0xa33c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa33c, .value=0x2d, .type=IO_READ},
        {.addr=0xa33d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x91e9, .a=0x04, .x=0xdc, .y=0x24, .sp=0x2b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x91e9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x91ea, .a=0x04, .x=0xdc, .y=0x24, .sp=0x2a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x04}, {.addr=0x91e9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x91e9, .value=0x2d, .type=IO_READ},
        {.addr=0x91ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x937a, .a=0x71, .x=0xdd, .y=0x0e, .sp=0x43, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x937a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x937b, .a=0x71, .x=0xdd, .y=0x0e, .sp=0x42, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x71}, {.addr=0x937a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x937a, .value=0x2d, .type=IO_READ},
        {.addr=0x937b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xc428, .a=0x1d, .x=0x97, .y=0xed, .sp=0xc7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xc428, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc429, .a=0x1d, .x=0x97, .y=0xed, .sp=0xc6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x1d}, {.addr=0xc428, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc428, .value=0x2d, .type=IO_READ},
        {.addr=0xc429, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x3a07, .a=0x68, .x=0x46, .y=0x74, .sp=0x8a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x3a07, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3a08, .a=0x68, .x=0x46, .y=0x74, .sp=0x89, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x68}, {.addr=0x3a07, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3a07, .value=0x2d, .type=IO_READ},
        {.addr=0x3a08, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xd159, .a=0xec, .x=0xd4, .y=0x87, .sp=0x29, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xd159, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd15a, .a=0xec, .x=0xd4, .y=0x87, .sp=0x28, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xec}, {.addr=0xd159, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd159, .value=0x2d, .type=IO_READ},
        {.addr=0xd15a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x7e65, .a=0x60, .x=0x37, .y=0x57, .sp=0x31, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x7e65, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7e66, .a=0x60, .x=0x37, .y=0x57, .sp=0x30, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x60}, {.addr=0x7e65, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7e65, .value=0x2d, .type=IO_READ},
        {.addr=0x7e66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x90be, .a=0x49, .x=0x97, .y=0x21, .sp=0x92, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x90be, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x90bf, .a=0x49, .x=0x97, .y=0x21, .sp=0x91, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x49}, {.addr=0x90be, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x90be, .value=0x2d, .type=IO_READ},
        {.addr=0x90bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xab14, .a=0x09, .x=0xdb, .y=0x68, .sp=0x0f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xab14, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xab15, .a=0x09, .x=0xdb, .y=0x68, .sp=0x0e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x09}, {.addr=0xab14, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xab14, .value=0x2d, .type=IO_READ},
        {.addr=0xab15, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xd07d, .a=0x62, .x=0xdd, .y=0xb7, .sp=0xa4, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xd07d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd07e, .a=0x62, .x=0xdd, .y=0xb7, .sp=0xa3, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x62}, {.addr=0xd07d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd07d, .value=0x2d, .type=IO_READ},
        {.addr=0xd07e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xecb3, .a=0x87, .x=0xa5, .y=0xed, .sp=0x22, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xecb3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xecb4, .a=0x87, .x=0xa5, .y=0xed, .sp=0x21, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x87}, {.addr=0xecb3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xecb3, .value=0x2d, .type=IO_READ},
        {.addr=0xecb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x78d1, .a=0x7b, .x=0xbc, .y=0x8e, .sp=0x2c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x78d1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x78d2, .a=0x7b, .x=0xbc, .y=0x8e, .sp=0x2b, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x7b}, {.addr=0x78d1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x78d1, .value=0x2d, .type=IO_READ},
        {.addr=0x78d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x3dc0, .a=0xf3, .x=0x9f, .y=0xb0, .sp=0x84, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x3dc0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3dc1, .a=0xf3, .x=0x9f, .y=0xb0, .sp=0x83, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xf3}, {.addr=0x3dc0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3dc0, .value=0x2d, .type=IO_READ},
        {.addr=0x3dc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x8785, .a=0xdc, .x=0xf4, .y=0x9c, .sp=0x60, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x8785, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8786, .a=0xdc, .x=0xf4, .y=0x9c, .sp=0x5f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xdc}, {.addr=0x8785, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8785, .value=0x2d, .type=IO_READ},
        {.addr=0x8786, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xd7d5, .a=0x1e, .x=0xd1, .y=0xba, .sp=0x11, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xd7d5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd7d6, .a=0x1e, .x=0xd1, .y=0xba, .sp=0x10, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x1e}, {.addr=0xd7d5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd7d5, .value=0x2d, .type=IO_READ},
        {.addr=0xd7d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xd0c8, .a=0x2d, .x=0x6c, .y=0xa4, .sp=0xb6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xd0c8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd0c9, .a=0x2d, .x=0x6c, .y=0xa4, .sp=0xb5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x2d}, {.addr=0xd0c8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd0c8, .value=0x2d, .type=IO_READ},
        {.addr=0xd0c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x8d7e, .a=0x36, .x=0x18, .y=0x90, .sp=0xf3, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x8d7e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8d7f, .a=0x36, .x=0x18, .y=0x90, .sp=0xf2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x36}, {.addr=0x8d7e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8d7e, .value=0x2d, .type=IO_READ},
        {.addr=0x8d7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x706e, .a=0xea, .x=0x66, .y=0xc2, .sp=0xd8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x706e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x706f, .a=0xea, .x=0x66, .y=0xc2, .sp=0xd7, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xea}, {.addr=0x706e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x706e, .value=0x2d, .type=IO_READ},
        {.addr=0x706f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x409b, .a=0x9e, .x=0xad, .y=0xdf, .sp=0x96, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x409b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x409c, .a=0x9e, .x=0xad, .y=0xdf, .sp=0x95, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x9e}, {.addr=0x409b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x409b, .value=0x2d, .type=IO_READ},
        {.addr=0x409c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x1b36, .a=0x13, .x=0x80, .y=0xd8, .sp=0x75, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x1b36, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1b37, .a=0x13, .x=0x80, .y=0xd8, .sp=0x74, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x13}, {.addr=0x1b36, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1b36, .value=0x2d, .type=IO_READ},
        {.addr=0x1b37, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x65af, .a=0x32, .x=0x5c, .y=0x44, .sp=0x2e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x65af, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x65b0, .a=0x32, .x=0x5c, .y=0x44, .sp=0x2d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x32}, {.addr=0x65af, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x65af, .value=0x2d, .type=IO_READ},
        {.addr=0x65b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x3144, .a=0x1f, .x=0x75, .y=0x22, .sp=0xa5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x3144, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3145, .a=0x1f, .x=0x75, .y=0x22, .sp=0xa4, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x1f}, {.addr=0x3144, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3144, .value=0x2d, .type=IO_READ},
        {.addr=0x3145, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x12d1, .a=0x8a, .x=0x75, .y=0x25, .sp=0xfb, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x12d1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x12d2, .a=0x8a, .x=0x75, .y=0x25, .sp=0xfa, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x8a}, {.addr=0x12d1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x12d1, .value=0x2d, .type=IO_READ},
        {.addr=0x12d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x2fca, .a=0x19, .x=0x02, .y=0x8f, .sp=0x4b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x2fca, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2fcb, .a=0x19, .x=0x02, .y=0x8f, .sp=0x4a, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x19}, {.addr=0x2fca, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2fca, .value=0x2d, .type=IO_READ},
        {.addr=0x2fcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xb9c6, .a=0x46, .x=0x49, .y=0x05, .sp=0x3a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xb9c6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb9c7, .a=0x46, .x=0x49, .y=0x05, .sp=0x39, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x46}, {.addr=0xb9c6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb9c6, .value=0x2d, .type=IO_READ},
        {.addr=0xb9c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xbfda, .a=0xec, .x=0x7c, .y=0x85, .sp=0xfd, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xbfda, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbfdb, .a=0xec, .x=0x7c, .y=0x85, .sp=0xfc, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xec}, {.addr=0xbfda, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbfda, .value=0x2d, .type=IO_READ},
        {.addr=0xbfdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x122c, .a=0x7a, .x=0x20, .y=0x72, .sp=0x04, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x122c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x122d, .a=0x7a, .x=0x20, .y=0x72, .sp=0x03, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x7a}, {.addr=0x122c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x122c, .value=0x2d, .type=IO_READ},
        {.addr=0x122d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xdf06, .a=0xee, .x=0xe2, .y=0xd3, .sp=0xcd, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xdf06, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdf07, .a=0xee, .x=0xe2, .y=0xd3, .sp=0xcc, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xee}, {.addr=0xdf06, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdf06, .value=0x2d, .type=IO_READ},
        {.addr=0xdf07, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x3bf8, .a=0x04, .x=0x96, .y=0x28, .sp=0x8e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x3bf8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3bf9, .a=0x04, .x=0x96, .y=0x28, .sp=0x8d, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x04}, {.addr=0x3bf8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3bf8, .value=0x2d, .type=IO_READ},
        {.addr=0x3bf9, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xec5a, .a=0xab, .x=0xea, .y=0x35, .sp=0x16, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xec5a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xec5b, .a=0xab, .x=0xea, .y=0x35, .sp=0x15, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xab}, {.addr=0xec5a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xec5a, .value=0x2d, .type=IO_READ},
        {.addr=0xec5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x5ae2, .a=0x18, .x=0x8d, .y=0x06, .sp=0xb9, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x5ae2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5ae3, .a=0x18, .x=0x8d, .y=0x06, .sp=0xb8, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x18}, {.addr=0x5ae2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5ae2, .value=0x2d, .type=IO_READ},
        {.addr=0x5ae3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xd5fa, .a=0xa3, .x=0x11, .y=0x48, .sp=0xdc, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0xd5fa, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd5fb, .a=0xa3, .x=0x11, .y=0x48, .sp=0xdb, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xa3}, {.addr=0xd5fa, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd5fa, .value=0x2d, .type=IO_READ},
        {.addr=0xd5fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x9a53, .a=0x0c, .x=0xd7, .y=0x82, .sp=0xaa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x9a53, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9a54, .a=0x0c, .x=0xd7, .y=0x82, .sp=0xa9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x0c}, {.addr=0x9a53, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9a53, .value=0x2d, .type=IO_READ},
        {.addr=0x9a54, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0987, .a=0xdb, .x=0x46, .y=0x75, .sp=0xba, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x0987, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0988, .a=0xdb, .x=0x46, .y=0x75, .sp=0xb9, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xdb}, {.addr=0x0987, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0987, .value=0x2d, .type=IO_READ},
        {.addr=0x0988, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x49a5, .a=0x41, .x=0xda, .y=0x19, .sp=0xc2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x49a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x49a6, .a=0x41, .x=0xda, .y=0x19, .sp=0xc1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x41}, {.addr=0x49a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x49a5, .value=0x2d, .type=IO_READ},
        {.addr=0x49a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x2d6c, .a=0xeb, .x=0xb3, .y=0x71, .sp=0x71, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x2d6c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2d6d, .a=0xeb, .x=0xb3, .y=0x71, .sp=0x70, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xeb}, {.addr=0x2d6c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2d6c, .value=0x2d, .type=IO_READ},
        {.addr=0x2d6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x0dc8, .a=0xc1, .x=0x30, .y=0x3e, .sp=0x0c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x0dc8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0dc9, .a=0xc1, .x=0x30, .y=0x3e, .sp=0x0b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xc1}, {.addr=0x0dc8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0dc8, .value=0x2d, .type=IO_READ},
        {.addr=0x0dc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x31f5, .a=0xc9, .x=0xf1, .y=0x7b, .sp=0xd1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x31f5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x31f6, .a=0xc9, .x=0xf1, .y=0x7b, .sp=0xd0, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xc9}, {.addr=0x31f5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x31f5, .value=0x2d, .type=IO_READ},
        {.addr=0x31f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xceda, .a=0xe6, .x=0xc5, .y=0x61, .sp=0xdc, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0xceda, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcedb, .a=0xe6, .x=0xc5, .y=0x61, .sp=0xdb, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xe6}, {.addr=0xceda, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xceda, .value=0x2d, .type=IO_READ},
        {.addr=0xcedb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x479b, .a=0x2c, .x=0xde, .y=0x26, .sp=0x46, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x479b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x479c, .a=0x2c, .x=0xde, .y=0x26, .sp=0x45, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x2c}, {.addr=0x479b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x479b, .value=0x2d, .type=IO_READ},
        {.addr=0x479c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xa2be, .a=0xea, .x=0x91, .y=0xdf, .sp=0xb0, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xa2be, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa2bf, .a=0xea, .x=0x91, .y=0xdf, .sp=0xaf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xea}, {.addr=0xa2be, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa2be, .value=0x2d, .type=IO_READ},
        {.addr=0xa2bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x3ad9, .a=0x7a, .x=0x9c, .y=0x8c, .sp=0x31, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x3ad9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3ada, .a=0x7a, .x=0x9c, .y=0x8c, .sp=0x30, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x7a}, {.addr=0x3ad9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3ad9, .value=0x2d, .type=IO_READ},
        {.addr=0x3ada, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x8c32, .a=0x88, .x=0x57, .y=0xbd, .sp=0x0c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x8c32, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8c33, .a=0x88, .x=0x57, .y=0xbd, .sp=0x0b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x88}, {.addr=0x8c32, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8c32, .value=0x2d, .type=IO_READ},
        {.addr=0x8c33, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x0d8f, .a=0xbc, .x=0x79, .y=0x08, .sp=0x52, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x0d8f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0d90, .a=0xbc, .x=0x79, .y=0x08, .sp=0x51, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xbc}, {.addr=0x0d8f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0d8f, .value=0x2d, .type=IO_READ},
        {.addr=0x0d90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x71f3, .a=0x9c, .x=0xd6, .y=0xbb, .sp=0xfe, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x71f3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x71f4, .a=0x9c, .x=0xd6, .y=0xbb, .sp=0xfd, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x9c}, {.addr=0x71f3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x71f3, .value=0x2d, .type=IO_READ},
        {.addr=0x71f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x0557, .a=0x50, .x=0x7d, .y=0x02, .sp=0x05, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x0557, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0558, .a=0x50, .x=0x7d, .y=0x02, .sp=0x04, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x50}, {.addr=0x0557, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0557, .value=0x2d, .type=IO_READ},
        {.addr=0x0558, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x12af, .a=0x08, .x=0x81, .y=0xdc, .sp=0xe6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x12af, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x12b0, .a=0x08, .x=0x81, .y=0xdc, .sp=0xe5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x08}, {.addr=0x12af, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x12af, .value=0x2d, .type=IO_READ},
        {.addr=0x12b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xa04a, .a=0xf6, .x=0xcd, .y=0xe5, .sp=0x61, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xa04a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa04b, .a=0xf6, .x=0xcd, .y=0xe5, .sp=0x60, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xf6}, {.addr=0xa04a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa04a, .value=0x2d, .type=IO_READ},
        {.addr=0xa04b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x5606, .a=0xa5, .x=0x9b, .y=0xd5, .sp=0xf4, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x5606, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5607, .a=0xa5, .x=0x9b, .y=0xd5, .sp=0xf3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xa5}, {.addr=0x5606, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5606, .value=0x2d, .type=IO_READ},
        {.addr=0x5607, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf3e3, .a=0x25, .x=0x32, .y=0xda, .sp=0x69, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0xf3e3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf3e4, .a=0x25, .x=0x32, .y=0xda, .sp=0x68, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x25}, {.addr=0xf3e3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf3e3, .value=0x2d, .type=IO_READ},
        {.addr=0xf3e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf9a9, .a=0x37, .x=0x59, .y=0x8d, .sp=0xde, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0xf9a9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf9aa, .a=0x37, .x=0x59, .y=0x8d, .sp=0xdd, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x37}, {.addr=0xf9a9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf9a9, .value=0x2d, .type=IO_READ},
        {.addr=0xf9aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0103) {
    const struct CPU_State initial_cpu = {.pc=0x8f48, .a=0x13, .x=0x99, .y=0xab, .sp=0x26, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x8f48, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8f49, .a=0x13, .x=0x99, .y=0xab, .sp=0x25, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x13}, {.addr=0x8f48, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8f48, .value=0x2d, .type=IO_READ},
        {.addr=0x8f49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0104) {
    const struct CPU_State initial_cpu = {.pc=0xeb6d, .a=0x0d, .x=0x47, .y=0x83, .sp=0x4e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xeb6d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeb6e, .a=0x0d, .x=0x47, .y=0x83, .sp=0x4d, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x0d}, {.addr=0xeb6d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeb6d, .value=0x2d, .type=IO_READ},
        {.addr=0xeb6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x37b3, .a=0x74, .x=0x35, .y=0x1f, .sp=0x47, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x37b3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x37b4, .a=0x74, .x=0x35, .y=0x1f, .sp=0x46, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x74}, {.addr=0x37b3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x37b3, .value=0x2d, .type=IO_READ},
        {.addr=0x37b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0106) {
    const struct CPU_State initial_cpu = {.pc=0x88ee, .a=0x17, .x=0x43, .y=0xe3, .sp=0xe5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x88ee, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x88ef, .a=0x17, .x=0x43, .y=0xe3, .sp=0xe4, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x17}, {.addr=0x88ee, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x88ee, .value=0x2d, .type=IO_READ},
        {.addr=0x88ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x9fc0, .a=0x79, .x=0x34, .y=0x3c, .sp=0x42, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x9fc0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9fc1, .a=0x79, .x=0x34, .y=0x3c, .sp=0x41, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x79}, {.addr=0x9fc0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9fc0, .value=0x2d, .type=IO_READ},
        {.addr=0x9fc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xe83c, .a=0x17, .x=0xb4, .y=0x04, .sp=0x6f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xe83c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe83d, .a=0x17, .x=0xb4, .y=0x04, .sp=0x6e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x17}, {.addr=0xe83c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe83c, .value=0x2d, .type=IO_READ},
        {.addr=0xe83d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0109) {
    const struct CPU_State initial_cpu = {.pc=0xe6d0, .a=0xbd, .x=0x94, .y=0x05, .sp=0x26, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xe6d0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe6d1, .a=0xbd, .x=0x94, .y=0x05, .sp=0x25, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xbd}, {.addr=0xe6d0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe6d0, .value=0x2d, .type=IO_READ},
        {.addr=0xe6d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_010A) {
    const struct CPU_State initial_cpu = {.pc=0x684d, .a=0xf1, .x=0xf5, .y=0xd1, .sp=0xca, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x684d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x684e, .a=0xf1, .x=0xf5, .y=0xd1, .sp=0xc9, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xf1}, {.addr=0x684d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x684d, .value=0x2d, .type=IO_READ},
        {.addr=0x684e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1d64, .a=0xb8, .x=0x14, .y=0x4d, .sp=0x56, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x1d64, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1d65, .a=0xb8, .x=0x14, .y=0x4d, .sp=0x55, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xb8}, {.addr=0x1d64, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1d64, .value=0x2d, .type=IO_READ},
        {.addr=0x1d65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x1fc8, .a=0x56, .x=0x4c, .y=0x5b, .sp=0x2c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x1fc8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1fc9, .a=0x56, .x=0x4c, .y=0x5b, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x56}, {.addr=0x1fc8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1fc8, .value=0x2d, .type=IO_READ},
        {.addr=0x1fc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_010D) {
    const struct CPU_State initial_cpu = {.pc=0x2db9, .a=0xdd, .x=0x96, .y=0xe3, .sp=0x9c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x2db9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2dba, .a=0xdd, .x=0x96, .y=0xe3, .sp=0x9b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xdd}, {.addr=0x2db9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2db9, .value=0x2d, .type=IO_READ},
        {.addr=0x2dba, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_010E) {
    const struct CPU_State initial_cpu = {.pc=0xed6f, .a=0xfc, .x=0x5a, .y=0x37, .sp=0xd7, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xed6f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xed70, .a=0xfc, .x=0x5a, .y=0x37, .sp=0xd6, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xfc}, {.addr=0xed6f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xed6f, .value=0x2d, .type=IO_READ},
        {.addr=0xed70, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x1f25, .a=0xae, .x=0x9d, .y=0x57, .sp=0x05, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x1f25, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1f26, .a=0xae, .x=0x9d, .y=0x57, .sp=0x04, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xae}, {.addr=0x1f25, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1f25, .value=0x2d, .type=IO_READ},
        {.addr=0x1f26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0110) {
    const struct CPU_State initial_cpu = {.pc=0xdeb2, .a=0xec, .x=0x55, .y=0x51, .sp=0x10, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0xdeb2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdeb3, .a=0xec, .x=0x55, .y=0x51, .sp=0x0f, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xec}, {.addr=0xdeb2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdeb2, .value=0x2d, .type=IO_READ},
        {.addr=0xdeb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x6ac3, .a=0xf5, .x=0x0f, .y=0x2f, .sp=0x36, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x6ac3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6ac4, .a=0xf5, .x=0x0f, .y=0x2f, .sp=0x35, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xf5}, {.addr=0x6ac3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6ac3, .value=0x2d, .type=IO_READ},
        {.addr=0x6ac4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x66eb, .a=0xb2, .x=0x31, .y=0x65, .sp=0x2e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x66eb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x66ec, .a=0xb2, .x=0x31, .y=0x65, .sp=0x2d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xb2}, {.addr=0x66eb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x66eb, .value=0x2d, .type=IO_READ},
        {.addr=0x66ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0113) {
    const struct CPU_State initial_cpu = {.pc=0x8e2f, .a=0x2e, .x=0xe1, .y=0x7d, .sp=0xc6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x8e2f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8e30, .a=0x2e, .x=0xe1, .y=0x7d, .sp=0xc5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x2e}, {.addr=0x8e2f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8e2f, .value=0x2d, .type=IO_READ},
        {.addr=0x8e30, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf239, .a=0xa2, .x=0x21, .y=0x70, .sp=0x58, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xf239, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf23a, .a=0xa2, .x=0x21, .y=0x70, .sp=0x57, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xa2}, {.addr=0xf239, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf239, .value=0x2d, .type=IO_READ},
        {.addr=0xf23a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb44b, .a=0xcf, .x=0x72, .y=0xa8, .sp=0x79, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0xb44b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb44c, .a=0xcf, .x=0x72, .y=0xa8, .sp=0x78, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xcf}, {.addr=0xb44b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb44b, .value=0x2d, .type=IO_READ},
        {.addr=0xb44c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0116) {
    const struct CPU_State initial_cpu = {.pc=0xc4d8, .a=0x1f, .x=0x74, .y=0x00, .sp=0xdc, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0xc4d8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc4d9, .a=0x1f, .x=0x74, .y=0x00, .sp=0xdb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x1f}, {.addr=0xc4d8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc4d8, .value=0x2d, .type=IO_READ},
        {.addr=0xc4d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0117) {
    const struct CPU_State initial_cpu = {.pc=0xa96f, .a=0xad, .x=0xa4, .y=0xca, .sp=0xa0, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0xa96f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa970, .a=0xad, .x=0xa4, .y=0xca, .sp=0x9f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xad}, {.addr=0xa96f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa96f, .value=0x2d, .type=IO_READ},
        {.addr=0xa970, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0118) {
    const struct CPU_State initial_cpu = {.pc=0x741a, .a=0x7a, .x=0x50, .y=0x99, .sp=0x42, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x741a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x741b, .a=0x7a, .x=0x50, .y=0x99, .sp=0x41, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x7a}, {.addr=0x741a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x741a, .value=0x2d, .type=IO_READ},
        {.addr=0x741b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x0812, .a=0x12, .x=0x5d, .y=0xdf, .sp=0xb0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x0812, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0813, .a=0x12, .x=0x5d, .y=0xdf, .sp=0xaf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x12}, {.addr=0x0812, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0812, .value=0x2d, .type=IO_READ},
        {.addr=0x0813, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_011A) {
    const struct CPU_State initial_cpu = {.pc=0xfc75, .a=0x75, .x=0xc2, .y=0x99, .sp=0x38, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0xfc75, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfc76, .a=0x75, .x=0xc2, .y=0x99, .sp=0x37, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x75}, {.addr=0xfc75, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfc75, .value=0x2d, .type=IO_READ},
        {.addr=0xfc76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x2224, .a=0xb5, .x=0x6d, .y=0x85, .sp=0x2c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x2224, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2225, .a=0xb5, .x=0x6d, .y=0x85, .sp=0x2b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xb5}, {.addr=0x2224, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2224, .value=0x2d, .type=IO_READ},
        {.addr=0x2225, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x832b, .a=0x29, .x=0x16, .y=0x17, .sp=0x2c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x832b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x832c, .a=0x29, .x=0x16, .y=0x17, .sp=0x2b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x29}, {.addr=0x832b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x832b, .value=0x2d, .type=IO_READ},
        {.addr=0x832c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_011D) {
    const struct CPU_State initial_cpu = {.pc=0x4bcd, .a=0xc1, .x=0xb0, .y=0xb5, .sp=0xea, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x4bcd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4bce, .a=0xc1, .x=0xb0, .y=0xb5, .sp=0xe9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xc1}, {.addr=0x4bcd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4bcd, .value=0x2d, .type=IO_READ},
        {.addr=0x4bce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x75be, .a=0x15, .x=0x42, .y=0x43, .sp=0x49, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x75be, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x75bf, .a=0x15, .x=0x42, .y=0x43, .sp=0x48, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x15}, {.addr=0x75be, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x75be, .value=0x2d, .type=IO_READ},
        {.addr=0x75bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_011F) {
    const struct CPU_State initial_cpu = {.pc=0x37d5, .a=0x2c, .x=0xfb, .y=0x75, .sp=0x52, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x37d5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x37d6, .a=0x2c, .x=0xfb, .y=0x75, .sp=0x51, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x2c}, {.addr=0x37d5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x37d5, .value=0x2d, .type=IO_READ},
        {.addr=0x37d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0120) {
    const struct CPU_State initial_cpu = {.pc=0xfacb, .a=0xac, .x=0xb0, .y=0x8c, .sp=0xfc, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xfacb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfacc, .a=0xac, .x=0xb0, .y=0x8c, .sp=0xfb, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xac}, {.addr=0xfacb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfacb, .value=0x2d, .type=IO_READ},
        {.addr=0xfacc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x12a2, .a=0x05, .x=0x89, .y=0x9a, .sp=0xe8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x12a2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x12a3, .a=0x05, .x=0x89, .y=0x9a, .sp=0xe7, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x05}, {.addr=0x12a2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x12a2, .value=0x2d, .type=IO_READ},
        {.addr=0x12a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x800e, .a=0x31, .x=0xfe, .y=0x36, .sp=0x52, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x800e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x800f, .a=0x31, .x=0xfe, .y=0x36, .sp=0x51, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x31}, {.addr=0x800e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x800e, .value=0x2d, .type=IO_READ},
        {.addr=0x800f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0123) {
    const struct CPU_State initial_cpu = {.pc=0x9d67, .a=0xca, .x=0x06, .y=0x04, .sp=0x24, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x9d67, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9d68, .a=0xca, .x=0x06, .y=0x04, .sp=0x23, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xca}, {.addr=0x9d67, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9d67, .value=0x2d, .type=IO_READ},
        {.addr=0x9d68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0124) {
    const struct CPU_State initial_cpu = {.pc=0x48a6, .a=0xa2, .x=0x60, .y=0xb2, .sp=0xf4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x48a6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x48a7, .a=0xa2, .x=0x60, .y=0xb2, .sp=0xf3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xa2}, {.addr=0x48a6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x48a6, .value=0x2d, .type=IO_READ},
        {.addr=0x48a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe650, .a=0xbe, .x=0x5a, .y=0xbc, .sp=0x5c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0xe650, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe651, .a=0xbe, .x=0x5a, .y=0xbc, .sp=0x5b, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xbe}, {.addr=0xe650, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe650, .value=0x2d, .type=IO_READ},
        {.addr=0xe651, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x4e2d, .a=0x5e, .x=0x0c, .y=0x15, .sp=0xee, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x4e2d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4e2e, .a=0x5e, .x=0x0c, .y=0x15, .sp=0xed, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x5e}, {.addr=0x4e2d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4e2d, .value=0x2d, .type=IO_READ},
        {.addr=0x4e2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0127) {
    const struct CPU_State initial_cpu = {.pc=0x8eed, .a=0xc8, .x=0xea, .y=0x7c, .sp=0xfb, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x8eed, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8eee, .a=0xc8, .x=0xea, .y=0x7c, .sp=0xfa, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xc8}, {.addr=0x8eed, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8eed, .value=0x2d, .type=IO_READ},
        {.addr=0x8eee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x4cc2, .a=0x0a, .x=0x5c, .y=0x86, .sp=0xde, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x4cc2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4cc3, .a=0x0a, .x=0x5c, .y=0x86, .sp=0xdd, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x0a}, {.addr=0x4cc2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4cc2, .value=0x2d, .type=IO_READ},
        {.addr=0x4cc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0129) {
    const struct CPU_State initial_cpu = {.pc=0x0cba, .a=0xb1, .x=0x50, .y=0xa3, .sp=0xb5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x0cba, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0cbb, .a=0xb1, .x=0x50, .y=0xa3, .sp=0xb4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xb1}, {.addr=0x0cba, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0cba, .value=0x2d, .type=IO_READ},
        {.addr=0x0cbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_012A) {
    const struct CPU_State initial_cpu = {.pc=0x1b4f, .a=0xbc, .x=0xa0, .y=0x59, .sp=0xe0, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x1b4f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1b50, .a=0xbc, .x=0xa0, .y=0x59, .sp=0xdf, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xbc}, {.addr=0x1b4f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1b4f, .value=0x2d, .type=IO_READ},
        {.addr=0x1b50, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_012B) {
    const struct CPU_State initial_cpu = {.pc=0x5049, .a=0xca, .x=0x00, .y=0xe0, .sp=0xfb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x5049, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x504a, .a=0xca, .x=0x00, .y=0xe0, .sp=0xfa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xca}, {.addr=0x5049, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5049, .value=0x2d, .type=IO_READ},
        {.addr=0x504a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_012C) {
    const struct CPU_State initial_cpu = {.pc=0xbe21, .a=0x19, .x=0xcf, .y=0xc5, .sp=0x49, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0xbe21, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbe22, .a=0x19, .x=0xcf, .y=0xc5, .sp=0x48, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x19}, {.addr=0xbe21, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbe21, .value=0x2d, .type=IO_READ},
        {.addr=0xbe22, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_012D) {
    const struct CPU_State initial_cpu = {.pc=0xe377, .a=0xca, .x=0xb7, .y=0x46, .sp=0xb4, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xe377, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe378, .a=0xca, .x=0xb7, .y=0x46, .sp=0xb3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xca}, {.addr=0xe377, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe377, .value=0x2d, .type=IO_READ},
        {.addr=0xe378, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_012E) {
    const struct CPU_State initial_cpu = {.pc=0x3093, .a=0x6a, .x=0x00, .y=0x4a, .sp=0x11, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x3093, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3094, .a=0x6a, .x=0x00, .y=0x4a, .sp=0x10, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x6a}, {.addr=0x3093, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3093, .value=0x2d, .type=IO_READ},
        {.addr=0x3094, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_012F) {
    const struct CPU_State initial_cpu = {.pc=0x5d80, .a=0xa3, .x=0x31, .y=0xc3, .sp=0x29, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x5d80, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5d81, .a=0xa3, .x=0x31, .y=0xc3, .sp=0x28, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xa3}, {.addr=0x5d80, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5d80, .value=0x2d, .type=IO_READ},
        {.addr=0x5d81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x68e8, .a=0x82, .x=0x20, .y=0x8e, .sp=0x16, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x68e8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x68e9, .a=0x82, .x=0x20, .y=0x8e, .sp=0x15, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x82}, {.addr=0x68e8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x68e8, .value=0x2d, .type=IO_READ},
        {.addr=0x68e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0131) {
    const struct CPU_State initial_cpu = {.pc=0x50dd, .a=0x2e, .x=0xec, .y=0x0e, .sp=0x44, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x50dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x50de, .a=0x2e, .x=0xec, .y=0x0e, .sp=0x43, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x2e}, {.addr=0x50dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x50dd, .value=0x2d, .type=IO_READ},
        {.addr=0x50de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x4fdf, .a=0xcd, .x=0xc1, .y=0x1c, .sp=0x8b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x4fdf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4fe0, .a=0xcd, .x=0xc1, .y=0x1c, .sp=0x8a, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xcd}, {.addr=0x4fdf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4fdf, .value=0x2d, .type=IO_READ},
        {.addr=0x4fe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0133) {
    const struct CPU_State initial_cpu = {.pc=0x8d94, .a=0x75, .x=0x68, .y=0xe4, .sp=0x50, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x8d94, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8d95, .a=0x75, .x=0x68, .y=0xe4, .sp=0x4f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x75}, {.addr=0x8d94, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8d94, .value=0x2d, .type=IO_READ},
        {.addr=0x8d95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0134) {
    const struct CPU_State initial_cpu = {.pc=0xc4b7, .a=0xf6, .x=0x6d, .y=0x19, .sp=0xc9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xc4b7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc4b8, .a=0xf6, .x=0x6d, .y=0x19, .sp=0xc8, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xf6}, {.addr=0xc4b7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc4b7, .value=0x2d, .type=IO_READ},
        {.addr=0xc4b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0135) {
    const struct CPU_State initial_cpu = {.pc=0xb37c, .a=0xd6, .x=0x5b, .y=0x4c, .sp=0x12, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xb37c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb37d, .a=0xd6, .x=0x5b, .y=0x4c, .sp=0x11, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xd6}, {.addr=0xb37c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb37c, .value=0x2d, .type=IO_READ},
        {.addr=0xb37d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xf408, .a=0xa3, .x=0x18, .y=0x46, .sp=0xc7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xf408, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf409, .a=0xa3, .x=0x18, .y=0x46, .sp=0xc6, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xa3}, {.addr=0xf408, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf408, .value=0x2d, .type=IO_READ},
        {.addr=0xf409, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x2657, .a=0x2b, .x=0xf2, .y=0xaa, .sp=0x5e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x2657, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2658, .a=0x2b, .x=0xf2, .y=0xaa, .sp=0x5d, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x2b}, {.addr=0x2657, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2657, .value=0x2d, .type=IO_READ},
        {.addr=0x2658, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0138) {
    const struct CPU_State initial_cpu = {.pc=0xea8a, .a=0xcc, .x=0x21, .y=0xbb, .sp=0x54, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xea8a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xea8b, .a=0xcc, .x=0x21, .y=0xbb, .sp=0x53, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xcc}, {.addr=0xea8a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xea8a, .value=0x2d, .type=IO_READ},
        {.addr=0xea8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x8cb2, .a=0x34, .x=0x41, .y=0x24, .sp=0x8a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x8cb2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8cb3, .a=0x34, .x=0x41, .y=0x24, .sp=0x89, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x34}, {.addr=0x8cb2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8cb2, .value=0x2d, .type=IO_READ},
        {.addr=0x8cb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_013A) {
    const struct CPU_State initial_cpu = {.pc=0xca3a, .a=0x26, .x=0x57, .y=0x46, .sp=0x6b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xca3a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xca3b, .a=0x26, .x=0x57, .y=0x46, .sp=0x6a, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x26}, {.addr=0xca3a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xca3a, .value=0x2d, .type=IO_READ},
        {.addr=0xca3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_013B) {
    const struct CPU_State initial_cpu = {.pc=0xe910, .a=0x63, .x=0xbc, .y=0xdc, .sp=0xed, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xe910, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe911, .a=0x63, .x=0xbc, .y=0xdc, .sp=0xec, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x63}, {.addr=0xe910, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe910, .value=0x2d, .type=IO_READ},
        {.addr=0xe911, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x8b88, .a=0x80, .x=0x49, .y=0x7c, .sp=0x5e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x8b88, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8b89, .a=0x80, .x=0x49, .y=0x7c, .sp=0x5d, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x80}, {.addr=0x8b88, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8b88, .value=0x2d, .type=IO_READ},
        {.addr=0x8b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_013D) {
    const struct CPU_State initial_cpu = {.pc=0xd887, .a=0x54, .x=0x1a, .y=0xaf, .sp=0x0b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0xd887, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd888, .a=0x54, .x=0x1a, .y=0xaf, .sp=0x0a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x54}, {.addr=0xd887, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd887, .value=0x2d, .type=IO_READ},
        {.addr=0xd888, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_013E) {
    const struct CPU_State initial_cpu = {.pc=0x6444, .a=0x2b, .x=0x6f, .y=0x93, .sp=0x4a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x6444, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6445, .a=0x2b, .x=0x6f, .y=0x93, .sp=0x49, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x2b}, {.addr=0x6444, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6444, .value=0x2d, .type=IO_READ},
        {.addr=0x6445, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x0725, .a=0xdb, .x=0x7a, .y=0xbd, .sp=0x5a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x0725, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0726, .a=0xdb, .x=0x7a, .y=0xbd, .sp=0x59, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xdb}, {.addr=0x0725, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0725, .value=0x2d, .type=IO_READ},
        {.addr=0x0726, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x9c8f, .a=0xf3, .x=0xf2, .y=0x87, .sp=0x5e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x9c8f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9c90, .a=0xf3, .x=0xf2, .y=0x87, .sp=0x5d, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xf3}, {.addr=0x9c8f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9c8f, .value=0x2d, .type=IO_READ},
        {.addr=0x9c90, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe807, .a=0x4f, .x=0x95, .y=0x58, .sp=0xf2, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xe807, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe808, .a=0x4f, .x=0x95, .y=0x58, .sp=0xf1, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x4f}, {.addr=0xe807, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe807, .value=0x2d, .type=IO_READ},
        {.addr=0xe808, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0142) {
    const struct CPU_State initial_cpu = {.pc=0xaf06, .a=0x4b, .x=0x27, .y=0xb4, .sp=0xfa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xaf06, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaf07, .a=0x4b, .x=0x27, .y=0xb4, .sp=0xf9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x4b}, {.addr=0xaf06, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaf06, .value=0x2d, .type=IO_READ},
        {.addr=0xaf07, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8a07, .a=0x15, .x=0x3f, .y=0xc4, .sp=0xfb, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x8a07, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8a08, .a=0x15, .x=0x3f, .y=0xc4, .sp=0xfa, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x15}, {.addr=0x8a07, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8a07, .value=0x2d, .type=IO_READ},
        {.addr=0x8a08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0144) {
    const struct CPU_State initial_cpu = {.pc=0x6c1a, .a=0x7c, .x=0xe7, .y=0x18, .sp=0x3a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x6c1a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6c1b, .a=0x7c, .x=0xe7, .y=0x18, .sp=0x39, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x7c}, {.addr=0x6c1a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6c1a, .value=0x2d, .type=IO_READ},
        {.addr=0x6c1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x617d, .a=0xb7, .x=0x40, .y=0x00, .sp=0x30, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x617d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x617e, .a=0xb7, .x=0x40, .y=0x00, .sp=0x2f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xb7}, {.addr=0x617d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x617d, .value=0x2d, .type=IO_READ},
        {.addr=0x617e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x620c, .a=0x63, .x=0xcd, .y=0xf0, .sp=0xc2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x620c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x620d, .a=0x63, .x=0xcd, .y=0xf0, .sp=0xc1, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x63}, {.addr=0x620c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x620c, .value=0x2d, .type=IO_READ},
        {.addr=0x620d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x78fc, .a=0xd9, .x=0x19, .y=0xa0, .sp=0x21, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x78fc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x78fd, .a=0xd9, .x=0x19, .y=0xa0, .sp=0x20, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xd9}, {.addr=0x78fc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x78fc, .value=0x2d, .type=IO_READ},
        {.addr=0x78fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x35c7, .a=0x8d, .x=0x81, .y=0x98, .sp=0x2b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x35c7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x35c8, .a=0x8d, .x=0x81, .y=0x98, .sp=0x2a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x8d}, {.addr=0x35c7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x35c7, .value=0x2d, .type=IO_READ},
        {.addr=0x35c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x0758, .a=0x8a, .x=0x9b, .y=0x92, .sp=0x4e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x0758, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0759, .a=0x8a, .x=0x9b, .y=0x92, .sp=0x4d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x8a}, {.addr=0x0758, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0758, .value=0x2d, .type=IO_READ},
        {.addr=0x0759, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x8a8a, .a=0x9e, .x=0x87, .y=0xf2, .sp=0xab, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x8a8a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8a8b, .a=0x9e, .x=0x87, .y=0xf2, .sp=0xaa, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x9e}, {.addr=0x8a8a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8a8a, .value=0x2d, .type=IO_READ},
        {.addr=0x8a8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xc4ce, .a=0xf2, .x=0x52, .y=0xf2, .sp=0xd5, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0xc4ce, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc4cf, .a=0xf2, .x=0x52, .y=0xf2, .sp=0xd4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xf2}, {.addr=0xc4ce, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc4ce, .value=0x2d, .type=IO_READ},
        {.addr=0xc4cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x6f93, .a=0x26, .x=0x93, .y=0x54, .sp=0x05, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x6f93, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6f94, .a=0x26, .x=0x93, .y=0x54, .sp=0x04, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x26}, {.addr=0x6f93, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6f93, .value=0x2d, .type=IO_READ},
        {.addr=0x6f94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_014D) {
    const struct CPU_State initial_cpu = {.pc=0xe3f3, .a=0xdc, .x=0x1f, .y=0x0c, .sp=0xba, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0xe3f3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe3f4, .a=0xdc, .x=0x1f, .y=0x0c, .sp=0xb9, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xdc}, {.addr=0xe3f3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe3f3, .value=0x2d, .type=IO_READ},
        {.addr=0xe3f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_014E) {
    const struct CPU_State initial_cpu = {.pc=0xc379, .a=0x3a, .x=0x52, .y=0xdd, .sp=0xfd, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xc379, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc37a, .a=0x3a, .x=0x52, .y=0xdd, .sp=0xfc, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x3a}, {.addr=0xc379, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc379, .value=0x2d, .type=IO_READ},
        {.addr=0xc37a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x11e9, .a=0xf6, .x=0xd6, .y=0x5c, .sp=0x8f, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x11e9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x11ea, .a=0xf6, .x=0xd6, .y=0x5c, .sp=0x8e, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xf6}, {.addr=0x11e9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x11e9, .value=0x2d, .type=IO_READ},
        {.addr=0x11ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x1b82, .a=0x41, .x=0x30, .y=0xd3, .sp=0x96, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x1b82, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1b83, .a=0x41, .x=0x30, .y=0xd3, .sp=0x95, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x41}, {.addr=0x1b82, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1b82, .value=0x2d, .type=IO_READ},
        {.addr=0x1b83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0151) {
    const struct CPU_State initial_cpu = {.pc=0x9616, .a=0x85, .x=0x74, .y=0xbf, .sp=0xa9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x9616, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9617, .a=0x85, .x=0x74, .y=0xbf, .sp=0xa8, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x85}, {.addr=0x9616, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9616, .value=0x2d, .type=IO_READ},
        {.addr=0x9617, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0152) {
    const struct CPU_State initial_cpu = {.pc=0x2a84, .a=0x41, .x=0x44, .y=0xff, .sp=0x35, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x2a84, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2a85, .a=0x41, .x=0x44, .y=0xff, .sp=0x34, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x41}, {.addr=0x2a84, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2a84, .value=0x2d, .type=IO_READ},
        {.addr=0x2a85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0153) {
    const struct CPU_State initial_cpu = {.pc=0x2779, .a=0x0e, .x=0x70, .y=0x44, .sp=0xed, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x2779, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x277a, .a=0x0e, .x=0x70, .y=0x44, .sp=0xec, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x0e}, {.addr=0x2779, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2779, .value=0x2d, .type=IO_READ},
        {.addr=0x277a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0154) {
    const struct CPU_State initial_cpu = {.pc=0xf12e, .a=0xe9, .x=0x81, .y=0x45, .sp=0x95, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0xf12e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf12f, .a=0xe9, .x=0x81, .y=0x45, .sp=0x94, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xe9}, {.addr=0xf12e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf12e, .value=0x2d, .type=IO_READ},
        {.addr=0xf12f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0155) {
    const struct CPU_State initial_cpu = {.pc=0x35cf, .a=0x1d, .x=0x07, .y=0x8d, .sp=0x8d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x35cf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x35d0, .a=0x1d, .x=0x07, .y=0x8d, .sp=0x8c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x1d}, {.addr=0x35cf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x35cf, .value=0x2d, .type=IO_READ},
        {.addr=0x35d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0156) {
    const struct CPU_State initial_cpu = {.pc=0x3f8f, .a=0x2c, .x=0x4f, .y=0xad, .sp=0xdb, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x3f8f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3f90, .a=0x2c, .x=0x4f, .y=0xad, .sp=0xda, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x2c}, {.addr=0x3f8f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3f8f, .value=0x2d, .type=IO_READ},
        {.addr=0x3f90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0157) {
    const struct CPU_State initial_cpu = {.pc=0x6f26, .a=0x94, .x=0x9b, .y=0x05, .sp=0x16, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x6f26, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6f27, .a=0x94, .x=0x9b, .y=0x05, .sp=0x15, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x94}, {.addr=0x6f26, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6f26, .value=0x2d, .type=IO_READ},
        {.addr=0x6f27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0158) {
    const struct CPU_State initial_cpu = {.pc=0x30c1, .a=0x88, .x=0xe7, .y=0x76, .sp=0x34, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x30c1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x30c2, .a=0x88, .x=0xe7, .y=0x76, .sp=0x33, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x88}, {.addr=0x30c1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x30c1, .value=0x2d, .type=IO_READ},
        {.addr=0x30c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x9cfb, .a=0xa3, .x=0x58, .y=0xd5, .sp=0x66, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x9cfb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9cfc, .a=0xa3, .x=0x58, .y=0xd5, .sp=0x65, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xa3}, {.addr=0x9cfb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9cfb, .value=0x2d, .type=IO_READ},
        {.addr=0x9cfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x0a00, .a=0x7f, .x=0x84, .y=0x09, .sp=0xeb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x0a00, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0a01, .a=0x7f, .x=0x84, .y=0x09, .sp=0xea, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x7f}, {.addr=0x0a00, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0a00, .value=0x2d, .type=IO_READ},
        {.addr=0x0a01, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_015B) {
    const struct CPU_State initial_cpu = {.pc=0xf761, .a=0x10, .x=0x7e, .y=0x9d, .sp=0xab, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0xf761, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf762, .a=0x10, .x=0x7e, .y=0x9d, .sp=0xaa, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x10}, {.addr=0xf761, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf761, .value=0x2d, .type=IO_READ},
        {.addr=0xf762, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x38c4, .a=0x41, .x=0x9c, .y=0x68, .sp=0x9e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x38c4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x38c5, .a=0x41, .x=0x9c, .y=0x68, .sp=0x9d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x41}, {.addr=0x38c4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x38c4, .value=0x2d, .type=IO_READ},
        {.addr=0x38c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_015D) {
    const struct CPU_State initial_cpu = {.pc=0x8a92, .a=0x2a, .x=0xdd, .y=0xf8, .sp=0x17, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x8a92, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8a93, .a=0x2a, .x=0xdd, .y=0xf8, .sp=0x16, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x2a}, {.addr=0x8a92, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8a92, .value=0x2d, .type=IO_READ},
        {.addr=0x8a93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_015E) {
    const struct CPU_State initial_cpu = {.pc=0xbb39, .a=0xcb, .x=0xde, .y=0x84, .sp=0x4f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0xbb39, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbb3a, .a=0xcb, .x=0xde, .y=0x84, .sp=0x4e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xcb}, {.addr=0xbb39, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbb39, .value=0x2d, .type=IO_READ},
        {.addr=0xbb3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x3290, .a=0x9b, .x=0xde, .y=0xb6, .sp=0xac, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x3290, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3291, .a=0x9b, .x=0xde, .y=0xb6, .sp=0xab, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x9b}, {.addr=0x3290, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3290, .value=0x2d, .type=IO_READ},
        {.addr=0x3291, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0160) {
    const struct CPU_State initial_cpu = {.pc=0x2e83, .a=0xcd, .x=0x18, .y=0x43, .sp=0x30, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x2e83, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2e84, .a=0xcd, .x=0x18, .y=0x43, .sp=0x2f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xcd}, {.addr=0x2e83, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2e83, .value=0x2d, .type=IO_READ},
        {.addr=0x2e84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xe0b1, .a=0x72, .x=0xb5, .y=0x01, .sp=0xed, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xe0b1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe0b2, .a=0x72, .x=0xb5, .y=0x01, .sp=0xec, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x72}, {.addr=0xe0b1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe0b1, .value=0x2d, .type=IO_READ},
        {.addr=0xe0b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0x88, .x=0x2c, .y=0x82, .sp=0xcf, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x6e40, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6e41, .a=0x88, .x=0x2c, .y=0x82, .sp=0xce, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x88}, {.addr=0x6e40, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0x2d, .type=IO_READ},
        {.addr=0x6e41, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0163) {
    const struct CPU_State initial_cpu = {.pc=0x9567, .a=0x90, .x=0x94, .y=0x21, .sp=0x58, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x9567, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9568, .a=0x90, .x=0x94, .y=0x21, .sp=0x57, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x90}, {.addr=0x9567, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9567, .value=0x2d, .type=IO_READ},
        {.addr=0x9568, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0164) {
    const struct CPU_State initial_cpu = {.pc=0xf6aa, .a=0x40, .x=0x5f, .y=0x0a, .sp=0x53, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xf6aa, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf6ab, .a=0x40, .x=0x5f, .y=0x0a, .sp=0x52, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x40}, {.addr=0xf6aa, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf6aa, .value=0x2d, .type=IO_READ},
        {.addr=0xf6ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0165) {
    const struct CPU_State initial_cpu = {.pc=0xe2d4, .a=0x52, .x=0xd7, .y=0x12, .sp=0xce, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xe2d4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe2d5, .a=0x52, .x=0xd7, .y=0x12, .sp=0xcd, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x52}, {.addr=0xe2d4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe2d4, .value=0x2d, .type=IO_READ},
        {.addr=0xe2d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0166) {
    const struct CPU_State initial_cpu = {.pc=0xde60, .a=0x01, .x=0xcf, .y=0x9b, .sp=0x9f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0xde60, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xde61, .a=0x01, .x=0xcf, .y=0x9b, .sp=0x9e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x01}, {.addr=0xde60, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xde60, .value=0x2d, .type=IO_READ},
        {.addr=0xde61, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0167) {
    const struct CPU_State initial_cpu = {.pc=0x9f5c, .a=0xd9, .x=0x46, .y=0xcb, .sp=0xab, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x9f5c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9f5d, .a=0xd9, .x=0x46, .y=0xcb, .sp=0xaa, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xd9}, {.addr=0x9f5c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9f5c, .value=0x2d, .type=IO_READ},
        {.addr=0x9f5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0168) {
    const struct CPU_State initial_cpu = {.pc=0x7707, .a=0x54, .x=0x7d, .y=0x41, .sp=0x93, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x7707, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7708, .a=0x54, .x=0x7d, .y=0x41, .sp=0x92, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x54}, {.addr=0x7707, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7707, .value=0x2d, .type=IO_READ},
        {.addr=0x7708, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0169) {
    const struct CPU_State initial_cpu = {.pc=0xdacf, .a=0xe6, .x=0xe1, .y=0xe0, .sp=0x9e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0xdacf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdad0, .a=0xe6, .x=0xe1, .y=0xe0, .sp=0x9d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xe6}, {.addr=0xdacf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdacf, .value=0x2d, .type=IO_READ},
        {.addr=0xdad0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x5f79, .a=0x9d, .x=0xbd, .y=0xa9, .sp=0xcf, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x5f79, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5f7a, .a=0x9d, .x=0xbd, .y=0xa9, .sp=0xce, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x9d}, {.addr=0x5f79, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5f79, .value=0x2d, .type=IO_READ},
        {.addr=0x5f7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x3a83, .a=0x21, .x=0xd5, .y=0x37, .sp=0x93, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x3a83, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3a84, .a=0x21, .x=0xd5, .y=0x37, .sp=0x92, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x21}, {.addr=0x3a83, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3a83, .value=0x2d, .type=IO_READ},
        {.addr=0x3a84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x4b82, .a=0x27, .x=0xb2, .y=0x34, .sp=0xfc, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x4b82, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4b83, .a=0x27, .x=0xb2, .y=0x34, .sp=0xfb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x27}, {.addr=0x4b82, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4b82, .value=0x2d, .type=IO_READ},
        {.addr=0x4b83, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_016D) {
    const struct CPU_State initial_cpu = {.pc=0xb7ad, .a=0xa7, .x=0x7c, .y=0x6d, .sp=0xe6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0xb7ad, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb7ae, .a=0xa7, .x=0x7c, .y=0x6d, .sp=0xe5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xa7}, {.addr=0xb7ad, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb7ad, .value=0x2d, .type=IO_READ},
        {.addr=0xb7ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x5f22, .a=0xcb, .x=0xcf, .y=0x4a, .sp=0xd3, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x5f22, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5f23, .a=0xcb, .x=0xcf, .y=0x4a, .sp=0xd2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xcb}, {.addr=0x5f22, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5f22, .value=0x2d, .type=IO_READ},
        {.addr=0x5f23, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_016F) {
    const struct CPU_State initial_cpu = {.pc=0xcea7, .a=0x79, .x=0x27, .y=0x26, .sp=0x08, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xcea7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcea8, .a=0x79, .x=0x27, .y=0x26, .sp=0x07, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x79}, {.addr=0xcea7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcea7, .value=0x2d, .type=IO_READ},
        {.addr=0xcea8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x406d, .a=0x13, .x=0xeb, .y=0x06, .sp=0xbb, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x406d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x406e, .a=0x13, .x=0xeb, .y=0x06, .sp=0xba, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x13}, {.addr=0x406d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x406d, .value=0x2d, .type=IO_READ},
        {.addr=0x406e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0171) {
    const struct CPU_State initial_cpu = {.pc=0x7fdc, .a=0xb0, .x=0xa1, .y=0x90, .sp=0xff, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x7fdc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7fdd, .a=0xb0, .x=0xa1, .y=0x90, .sp=0xfe, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xb0}, {.addr=0x7fdc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7fdc, .value=0x2d, .type=IO_READ},
        {.addr=0x7fdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0172) {
    const struct CPU_State initial_cpu = {.pc=0xcd53, .a=0x37, .x=0x72, .y=0x35, .sp=0xfb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xcd53, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcd54, .a=0x37, .x=0x72, .y=0x35, .sp=0xfa, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x37}, {.addr=0xcd53, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcd53, .value=0x2d, .type=IO_READ},
        {.addr=0xcd54, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0173) {
    const struct CPU_State initial_cpu = {.pc=0x08d3, .a=0x9d, .x=0x9d, .y=0xb1, .sp=0xd1, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x08d3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x08d4, .a=0x9d, .x=0x9d, .y=0xb1, .sp=0xd0, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x9d}, {.addr=0x08d3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x08d3, .value=0x2d, .type=IO_READ},
        {.addr=0x08d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0174) {
    const struct CPU_State initial_cpu = {.pc=0x07ac, .a=0xa0, .x=0x31, .y=0x4f, .sp=0xa5, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x07ac, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x07ad, .a=0xa0, .x=0x31, .y=0x4f, .sp=0xa4, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xa0}, {.addr=0x07ac, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x07ac, .value=0x2d, .type=IO_READ},
        {.addr=0x07ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0175) {
    const struct CPU_State initial_cpu = {.pc=0xca43, .a=0xb3, .x=0xc9, .y=0xd1, .sp=0x06, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xca43, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xca44, .a=0xb3, .x=0xc9, .y=0xd1, .sp=0x05, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xb3}, {.addr=0xca43, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xca43, .value=0x2d, .type=IO_READ},
        {.addr=0xca44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1b1f, .a=0x1c, .x=0xcd, .y=0xdc, .sp=0xee, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x1b1f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1b20, .a=0x1c, .x=0xcd, .y=0xdc, .sp=0xed, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x1c}, {.addr=0x1b1f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1b1f, .value=0x2d, .type=IO_READ},
        {.addr=0x1b20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xe1a1, .a=0x08, .x=0xe2, .y=0x7a, .sp=0x98, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xe1a1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe1a2, .a=0x08, .x=0xe2, .y=0x7a, .sp=0x97, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x08}, {.addr=0xe1a1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe1a1, .value=0x2d, .type=IO_READ},
        {.addr=0xe1a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0178) {
    const struct CPU_State initial_cpu = {.pc=0xef96, .a=0x87, .x=0x86, .y=0x1c, .sp=0x08, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xef96, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xef97, .a=0x87, .x=0x86, .y=0x1c, .sp=0x07, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x87}, {.addr=0xef96, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xef96, .value=0x2d, .type=IO_READ},
        {.addr=0xef97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x946f, .a=0x8c, .x=0xb3, .y=0x1d, .sp=0xb4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x946f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9470, .a=0x8c, .x=0xb3, .y=0x1d, .sp=0xb3, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x8c}, {.addr=0x946f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x946f, .value=0x2d, .type=IO_READ},
        {.addr=0x9470, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x6b42, .a=0x34, .x=0x2b, .y=0xe9, .sp=0x8b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x6b42, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6b43, .a=0x34, .x=0x2b, .y=0xe9, .sp=0x8a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x34}, {.addr=0x6b42, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6b42, .value=0x2d, .type=IO_READ},
        {.addr=0x6b43, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x5657, .a=0x08, .x=0x28, .y=0xcd, .sp=0x7a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x5657, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5658, .a=0x08, .x=0x28, .y=0xcd, .sp=0x79, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x08}, {.addr=0x5657, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5657, .value=0x2d, .type=IO_READ},
        {.addr=0x5658, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_017C) {
    const struct CPU_State initial_cpu = {.pc=0x7493, .a=0xa6, .x=0xe9, .y=0xba, .sp=0x47, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x7493, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7494, .a=0xa6, .x=0xe9, .y=0xba, .sp=0x46, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xa6}, {.addr=0x7493, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7493, .value=0x2d, .type=IO_READ},
        {.addr=0x7494, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x3ad3, .a=0x73, .x=0xe1, .y=0x11, .sp=0x3d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x3ad3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3ad4, .a=0x73, .x=0xe1, .y=0x11, .sp=0x3c, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x73}, {.addr=0x3ad3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3ad3, .value=0x2d, .type=IO_READ},
        {.addr=0x3ad4, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_017E) {
    const struct CPU_State initial_cpu = {.pc=0x1ccc, .a=0xf0, .x=0x73, .y=0xf1, .sp=0x35, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x1ccc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1ccd, .a=0xf0, .x=0x73, .y=0xf1, .sp=0x34, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xf0}, {.addr=0x1ccc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1ccc, .value=0x2d, .type=IO_READ},
        {.addr=0x1ccd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa617, .a=0xd9, .x=0xed, .y=0x25, .sp=0x53, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xa617, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa618, .a=0xd9, .x=0xed, .y=0x25, .sp=0x52, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xd9}, {.addr=0xa617, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa617, .value=0x2d, .type=IO_READ},
        {.addr=0xa618, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0180) {
    const struct CPU_State initial_cpu = {.pc=0x1361, .a=0x28, .x=0x9c, .y=0x6a, .sp=0x62, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x1361, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1362, .a=0x28, .x=0x9c, .y=0x6a, .sp=0x61, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x28}, {.addr=0x1361, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1361, .value=0x2d, .type=IO_READ},
        {.addr=0x1362, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x35e6, .a=0xb7, .x=0x60, .y=0xa0, .sp=0x34, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x35e6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x35e7, .a=0xb7, .x=0x60, .y=0xa0, .sp=0x33, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xb7}, {.addr=0x35e6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x35e6, .value=0x2d, .type=IO_READ},
        {.addr=0x35e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x0771, .a=0x55, .x=0x38, .y=0xc2, .sp=0xd7, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0x0771, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0772, .a=0x55, .x=0x38, .y=0xc2, .sp=0xd6, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x55}, {.addr=0x0771, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0771, .value=0x2d, .type=IO_READ},
        {.addr=0x0772, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0183) {
    const struct CPU_State initial_cpu = {.pc=0x8495, .a=0x45, .x=0x18, .y=0x1f, .sp=0xd3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x8495, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8496, .a=0x45, .x=0x18, .y=0x1f, .sp=0xd2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x45}, {.addr=0x8495, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8495, .value=0x2d, .type=IO_READ},
        {.addr=0x8496, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0184) {
    const struct CPU_State initial_cpu = {.pc=0xb8c6, .a=0xee, .x=0xad, .y=0x61, .sp=0x2d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0xb8c6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb8c7, .a=0xee, .x=0xad, .y=0x61, .sp=0x2c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xee}, {.addr=0xb8c6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb8c6, .value=0x2d, .type=IO_READ},
        {.addr=0xb8c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x0706, .a=0xfb, .x=0x75, .y=0x63, .sp=0xe3, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x0706, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0707, .a=0xfb, .x=0x75, .y=0x63, .sp=0xe2, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xfb}, {.addr=0x0706, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0706, .value=0x2d, .type=IO_READ},
        {.addr=0x0707, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0186) {
    const struct CPU_State initial_cpu = {.pc=0xcdd2, .a=0x31, .x=0x15, .y=0xec, .sp=0x9a, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xcdd2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcdd3, .a=0x31, .x=0x15, .y=0xec, .sp=0x99, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x31}, {.addr=0xcdd2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcdd2, .value=0x2d, .type=IO_READ},
        {.addr=0xcdd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0187) {
    const struct CPU_State initial_cpu = {.pc=0xc68f, .a=0xed, .x=0xf2, .y=0x18, .sp=0xed, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xc68f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc690, .a=0xed, .x=0xf2, .y=0x18, .sp=0xec, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xed}, {.addr=0xc68f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc68f, .value=0x2d, .type=IO_READ},
        {.addr=0xc690, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0188) {
    const struct CPU_State initial_cpu = {.pc=0xd549, .a=0x78, .x=0xb3, .y=0xf7, .sp=0x09, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0xd549, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd54a, .a=0x78, .x=0xb3, .y=0xf7, .sp=0x08, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x78}, {.addr=0xd549, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd549, .value=0x2d, .type=IO_READ},
        {.addr=0xd54a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb6d2, .a=0x34, .x=0xa4, .y=0x21, .sp=0x4b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xb6d2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb6d3, .a=0x34, .x=0xa4, .y=0x21, .sp=0x4a, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x34}, {.addr=0xb6d2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb6d2, .value=0x2d, .type=IO_READ},
        {.addr=0xb6d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_018A) {
    const struct CPU_State initial_cpu = {.pc=0x0625, .a=0xb6, .x=0x58, .y=0x51, .sp=0x3e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x0625, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0626, .a=0xb6, .x=0x58, .y=0x51, .sp=0x3d, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xb6}, {.addr=0x0625, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0625, .value=0x2d, .type=IO_READ},
        {.addr=0x0626, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_018B) {
    const struct CPU_State initial_cpu = {.pc=0x706d, .a=0xb3, .x=0xf3, .y=0x78, .sp=0x73, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x706d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x706e, .a=0xb3, .x=0xf3, .y=0x78, .sp=0x72, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xb3}, {.addr=0x706d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x706d, .value=0x2d, .type=IO_READ},
        {.addr=0x706e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf2ba, .a=0x45, .x=0x02, .y=0x8f, .sp=0x1e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xf2ba, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf2bb, .a=0x45, .x=0x02, .y=0x8f, .sp=0x1d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x45}, {.addr=0xf2ba, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf2ba, .value=0x2d, .type=IO_READ},
        {.addr=0xf2bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x158e, .a=0x0e, .x=0x15, .y=0xa8, .sp=0xab, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x158e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x158f, .a=0x0e, .x=0x15, .y=0xa8, .sp=0xaa, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x0e}, {.addr=0x158e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x158e, .value=0x2d, .type=IO_READ},
        {.addr=0x158f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_018E) {
    const struct CPU_State initial_cpu = {.pc=0x1813, .a=0x67, .x=0xfd, .y=0xcb, .sp=0x78, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x1813, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1814, .a=0x67, .x=0xfd, .y=0xcb, .sp=0x77, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x67}, {.addr=0x1813, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1813, .value=0x2d, .type=IO_READ},
        {.addr=0x1814, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5ef3, .a=0x77, .x=0x78, .y=0xfe, .sp=0x85, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x5ef3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5ef4, .a=0x77, .x=0x78, .y=0xfe, .sp=0x84, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x77}, {.addr=0x5ef3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5ef3, .value=0x2d, .type=IO_READ},
        {.addr=0x5ef4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xfdaa, .a=0x25, .x=0x34, .y=0x9c, .sp=0x08, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xfdaa, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfdab, .a=0x25, .x=0x34, .y=0x9c, .sp=0x07, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x25}, {.addr=0xfdaa, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfdaa, .value=0x2d, .type=IO_READ},
        {.addr=0xfdab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0191) {
    const struct CPU_State initial_cpu = {.pc=0xda9d, .a=0xf0, .x=0xd6, .y=0x3d, .sp=0xef, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xda9d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xda9e, .a=0xf0, .x=0xd6, .y=0x3d, .sp=0xee, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xf0}, {.addr=0xda9d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xda9d, .value=0x2d, .type=IO_READ},
        {.addr=0xda9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x5b0a, .a=0x76, .x=0x6d, .y=0x6e, .sp=0xe0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x5b0a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5b0b, .a=0x76, .x=0x6d, .y=0x6e, .sp=0xdf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x76}, {.addr=0x5b0a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5b0a, .value=0x2d, .type=IO_READ},
        {.addr=0x5b0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0193) {
    const struct CPU_State initial_cpu = {.pc=0xbc18, .a=0x4c, .x=0x80, .y=0x49, .sp=0x66, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0xbc18, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbc19, .a=0x4c, .x=0x80, .y=0x49, .sp=0x65, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x4c}, {.addr=0xbc18, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbc18, .value=0x2d, .type=IO_READ},
        {.addr=0xbc19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0194) {
    const struct CPU_State initial_cpu = {.pc=0xc3b2, .a=0x4c, .x=0x90, .y=0x44, .sp=0x20, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0xc3b2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc3b3, .a=0x4c, .x=0x90, .y=0x44, .sp=0x1f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x4c}, {.addr=0xc3b2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc3b2, .value=0x2d, .type=IO_READ},
        {.addr=0xc3b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0195) {
    const struct CPU_State initial_cpu = {.pc=0x5c37, .a=0x6b, .x=0xd1, .y=0x95, .sp=0x62, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x5c37, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5c38, .a=0x6b, .x=0xd1, .y=0x95, .sp=0x61, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x6b}, {.addr=0x5c37, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5c37, .value=0x2d, .type=IO_READ},
        {.addr=0x5c38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc72e, .a=0x6f, .x=0xf1, .y=0x86, .sp=0x44, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0xc72e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc72f, .a=0x6f, .x=0xf1, .y=0x86, .sp=0x43, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x6f}, {.addr=0xc72e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc72e, .value=0x2d, .type=IO_READ},
        {.addr=0xc72f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0197) {
    const struct CPU_State initial_cpu = {.pc=0xb2dd, .a=0x0d, .x=0x6c, .y=0x96, .sp=0x8a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xb2dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb2de, .a=0x0d, .x=0x6c, .y=0x96, .sp=0x89, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x0d}, {.addr=0xb2dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb2dd, .value=0x2d, .type=IO_READ},
        {.addr=0xb2de, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x3006, .a=0xe8, .x=0x15, .y=0x47, .sp=0x55, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x3006, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3007, .a=0xe8, .x=0x15, .y=0x47, .sp=0x54, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xe8}, {.addr=0x3006, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3006, .value=0x2d, .type=IO_READ},
        {.addr=0x3007, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0199) {
    const struct CPU_State initial_cpu = {.pc=0xb523, .a=0xc5, .x=0x1e, .y=0xfa, .sp=0x55, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xb523, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb524, .a=0xc5, .x=0x1e, .y=0xfa, .sp=0x54, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xc5}, {.addr=0xb523, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb523, .value=0x2d, .type=IO_READ},
        {.addr=0xb524, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa8b5, .a=0x0c, .x=0xf1, .y=0x67, .sp=0x48, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xa8b5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa8b6, .a=0x0c, .x=0xf1, .y=0x67, .sp=0x47, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x0c}, {.addr=0xa8b5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa8b5, .value=0x2d, .type=IO_READ},
        {.addr=0xa8b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_019B) {
    const struct CPU_State initial_cpu = {.pc=0xd58b, .a=0xee, .x=0x11, .y=0x6a, .sp=0x10, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0xd58b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd58c, .a=0xee, .x=0x11, .y=0x6a, .sp=0x0f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xee}, {.addr=0xd58b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd58b, .value=0x2d, .type=IO_READ},
        {.addr=0xd58c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x3c9e, .a=0x6b, .x=0x5c, .y=0xbe, .sp=0x39, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x3c9e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3c9f, .a=0x6b, .x=0x5c, .y=0xbe, .sp=0x38, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x6b}, {.addr=0x3c9e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3c9e, .value=0x2d, .type=IO_READ},
        {.addr=0x3c9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x8f9d, .a=0x4e, .x=0x7e, .y=0x25, .sp=0x0f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x8f9d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8f9e, .a=0x4e, .x=0x7e, .y=0x25, .sp=0x0e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x4e}, {.addr=0x8f9d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8f9d, .value=0x2d, .type=IO_READ},
        {.addr=0x8f9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_019E) {
    const struct CPU_State initial_cpu = {.pc=0x2cb4, .a=0x6d, .x=0x76, .y=0x6c, .sp=0x2e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x2cb4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2cb5, .a=0x6d, .x=0x76, .y=0x6c, .sp=0x2d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x6d}, {.addr=0x2cb4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2cb4, .value=0x2d, .type=IO_READ},
        {.addr=0x2cb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_019F) {
    const struct CPU_State initial_cpu = {.pc=0x3382, .a=0xd4, .x=0xf7, .y=0x69, .sp=0x02, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x3382, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3383, .a=0xd4, .x=0xf7, .y=0x69, .sp=0x01, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xd4}, {.addr=0x3382, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3382, .value=0x2d, .type=IO_READ},
        {.addr=0x3383, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x9ea9, .a=0x0c, .x=0x82, .y=0x9a, .sp=0xa0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x9ea9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9eaa, .a=0x0c, .x=0x82, .y=0x9a, .sp=0x9f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x0c}, {.addr=0x9ea9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9ea9, .value=0x2d, .type=IO_READ},
        {.addr=0x9eaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x2da9, .a=0x94, .x=0x1e, .y=0xdc, .sp=0x38, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x2da9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2daa, .a=0x94, .x=0x1e, .y=0xdc, .sp=0x37, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x94}, {.addr=0x2da9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2da9, .value=0x2d, .type=IO_READ},
        {.addr=0x2daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x8a2a, .a=0x2f, .x=0x47, .y=0xb2, .sp=0x35, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x8a2a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8a2b, .a=0x2f, .x=0x47, .y=0xb2, .sp=0x34, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x2f}, {.addr=0x8a2a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8a2a, .value=0x2d, .type=IO_READ},
        {.addr=0x8a2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x30d5, .a=0xa4, .x=0x42, .y=0xfb, .sp=0xeb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x30d5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x30d6, .a=0xa4, .x=0x42, .y=0xfb, .sp=0xea, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xa4}, {.addr=0x30d5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x30d5, .value=0x2d, .type=IO_READ},
        {.addr=0x30d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xcda0, .a=0xe3, .x=0x1f, .y=0x72, .sp=0x6d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xcda0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcda1, .a=0xe3, .x=0x1f, .y=0x72, .sp=0x6c, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xe3}, {.addr=0xcda0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcda0, .value=0x2d, .type=IO_READ},
        {.addr=0xcda1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x2c7d, .a=0xcc, .x=0x33, .y=0x15, .sp=0x9a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x2c7d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2c7e, .a=0xcc, .x=0x33, .y=0x15, .sp=0x99, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xcc}, {.addr=0x2c7d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2c7d, .value=0x2d, .type=IO_READ},
        {.addr=0x2c7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xa38b, .a=0x5d, .x=0x11, .y=0xf8, .sp=0x69, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0xa38b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa38c, .a=0x5d, .x=0x11, .y=0xf8, .sp=0x68, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x5d}, {.addr=0xa38b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa38b, .value=0x2d, .type=IO_READ},
        {.addr=0xa38c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xbaec, .a=0x05, .x=0x48, .y=0xdf, .sp=0xab, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0xbaec, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbaed, .a=0x05, .x=0x48, .y=0xdf, .sp=0xaa, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x05}, {.addr=0xbaec, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbaec, .value=0x2d, .type=IO_READ},
        {.addr=0xbaed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x90ad, .a=0xac, .x=0xc1, .y=0x4b, .sp=0xa0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x90ad, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x90ae, .a=0xac, .x=0xc1, .y=0x4b, .sp=0x9f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xac}, {.addr=0x90ad, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x90ad, .value=0x2d, .type=IO_READ},
        {.addr=0x90ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x0a93, .a=0xef, .x=0xdd, .y=0x1c, .sp=0x50, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x0a93, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0a94, .a=0xef, .x=0xdd, .y=0x1c, .sp=0x4f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xef}, {.addr=0x0a93, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0a93, .value=0x2d, .type=IO_READ},
        {.addr=0x0a94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x5f64, .a=0xc6, .x=0x81, .y=0xf5, .sp=0x1b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x5f64, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5f65, .a=0xc6, .x=0x81, .y=0xf5, .sp=0x1a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xc6}, {.addr=0x5f64, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5f64, .value=0x2d, .type=IO_READ},
        {.addr=0x5f65, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xfdd3, .a=0x27, .x=0x25, .y=0xe2, .sp=0x96, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0xfdd3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfdd4, .a=0x27, .x=0x25, .y=0xe2, .sp=0x95, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x27}, {.addr=0xfdd3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfdd3, .value=0x2d, .type=IO_READ},
        {.addr=0xfdd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x3617, .a=0xac, .x=0x26, .y=0x7d, .sp=0x2a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x3617, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3618, .a=0xac, .x=0x26, .y=0x7d, .sp=0x29, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xac}, {.addr=0x3617, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3617, .value=0x2d, .type=IO_READ},
        {.addr=0x3618, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x99ec, .a=0x91, .x=0xc0, .y=0xc9, .sp=0xda, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x99ec, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x99ed, .a=0x91, .x=0xc0, .y=0xc9, .sp=0xd9, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x91}, {.addr=0x99ec, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x99ec, .value=0x2d, .type=IO_READ},
        {.addr=0x99ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x0ab9, .a=0xa4, .x=0x46, .y=0xae, .sp=0x64, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x0ab9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0aba, .a=0xa4, .x=0x46, .y=0xae, .sp=0x63, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xa4}, {.addr=0x0ab9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0ab9, .value=0x2d, .type=IO_READ},
        {.addr=0x0aba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xe531, .a=0x5a, .x=0xd2, .y=0xb4, .sp=0x93, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xe531, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe532, .a=0x5a, .x=0xd2, .y=0xb4, .sp=0x92, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x5a}, {.addr=0xe531, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe531, .value=0x2d, .type=IO_READ},
        {.addr=0xe532, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xc53f, .a=0x0d, .x=0xb1, .y=0xc7, .sp=0xc5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xc53f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc540, .a=0x0d, .x=0xb1, .y=0xc7, .sp=0xc4, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x0d}, {.addr=0xc53f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc53f, .value=0x2d, .type=IO_READ},
        {.addr=0xc540, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x820b, .a=0xbf, .x=0xd1, .y=0xab, .sp=0x1b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x820b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x820c, .a=0xbf, .x=0xd1, .y=0xab, .sp=0x1a, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xbf}, {.addr=0x820b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x820b, .value=0x2d, .type=IO_READ},
        {.addr=0x820c, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x475c, .a=0x5f, .x=0x2b, .y=0x5a, .sp=0x5f, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x475c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x475d, .a=0x5f, .x=0x2b, .y=0x5a, .sp=0x5e, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x5f}, {.addr=0x475c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x475c, .value=0x2d, .type=IO_READ},
        {.addr=0x475d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xf571, .a=0x68, .x=0x3d, .y=0xf5, .sp=0x6d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xf571, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf572, .a=0x68, .x=0x3d, .y=0xf5, .sp=0x6c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x68}, {.addr=0xf571, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf571, .value=0x2d, .type=IO_READ},
        {.addr=0xf572, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x10cf, .a=0x6a, .x=0xec, .y=0x5c, .sp=0xf9, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x10cf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x10d0, .a=0x6a, .x=0xec, .y=0x5c, .sp=0xf8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x6a}, {.addr=0x10cf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x10cf, .value=0x2d, .type=IO_READ},
        {.addr=0x10d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xa533, .a=0x55, .x=0x71, .y=0xbe, .sp=0x69, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0xa533, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa534, .a=0x55, .x=0x71, .y=0xbe, .sp=0x68, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x55}, {.addr=0xa533, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa533, .value=0x2d, .type=IO_READ},
        {.addr=0xa534, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x0f10, .a=0x49, .x=0xc0, .y=0x77, .sp=0x06, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x0f10, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0f11, .a=0x49, .x=0xc0, .y=0x77, .sp=0x05, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x49}, {.addr=0x0f10, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0f10, .value=0x2d, .type=IO_READ},
        {.addr=0x0f11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xcb60, .a=0x55, .x=0xbb, .y=0xe0, .sp=0xed, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xcb60, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcb61, .a=0x55, .x=0xbb, .y=0xe0, .sp=0xec, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x55}, {.addr=0xcb60, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcb60, .value=0x2d, .type=IO_READ},
        {.addr=0xcb61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xacd5, .a=0xe9, .x=0xb1, .y=0x35, .sp=0x3e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xacd5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xacd6, .a=0xe9, .x=0xb1, .y=0x35, .sp=0x3d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xe9}, {.addr=0xacd5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xacd5, .value=0x2d, .type=IO_READ},
        {.addr=0xacd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x4fe3, .a=0xc5, .x=0x82, .y=0xe1, .sp=0x84, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x4fe3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4fe4, .a=0xc5, .x=0x82, .y=0xe1, .sp=0x83, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xc5}, {.addr=0x4fe3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4fe3, .value=0x2d, .type=IO_READ},
        {.addr=0x4fe4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x03c5, .a=0x67, .x=0xf6, .y=0x6e, .sp=0x73, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x03c5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x03c6, .a=0x67, .x=0xf6, .y=0x6e, .sp=0x72, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x67}, {.addr=0x03c5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x03c5, .value=0x2d, .type=IO_READ},
        {.addr=0x03c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xa10e, .a=0x8c, .x=0xd9, .y=0x15, .sp=0x7a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xa10e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa10f, .a=0x8c, .x=0xd9, .y=0x15, .sp=0x79, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x8c}, {.addr=0xa10e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa10e, .value=0x2d, .type=IO_READ},
        {.addr=0xa10f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x8e64, .a=0xc0, .x=0xf4, .y=0xdf, .sp=0xc5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x8e64, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8e65, .a=0xc0, .x=0xf4, .y=0xdf, .sp=0xc4, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xc0}, {.addr=0x8e64, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8e64, .value=0x2d, .type=IO_READ},
        {.addr=0x8e65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x432e, .a=0xee, .x=0x9c, .y=0x1b, .sp=0xfd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x432e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x432f, .a=0xee, .x=0x9c, .y=0x1b, .sp=0xfc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xee}, {.addr=0x432e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x432e, .value=0x2d, .type=IO_READ},
        {.addr=0x432f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x920b, .a=0x66, .x=0x79, .y=0x27, .sp=0x60, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x920b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x920c, .a=0x66, .x=0x79, .y=0x27, .sp=0x5f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x66}, {.addr=0x920b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x920b, .value=0x2d, .type=IO_READ},
        {.addr=0x920c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xdb88, .a=0x34, .x=0xc7, .y=0x8d, .sp=0x46, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xdb88, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdb89, .a=0x34, .x=0xc7, .y=0x8d, .sp=0x45, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x34}, {.addr=0xdb88, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdb88, .value=0x2d, .type=IO_READ},
        {.addr=0xdb89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x9323, .a=0xe5, .x=0x54, .y=0x40, .sp=0x15, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x9323, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9324, .a=0xe5, .x=0x54, .y=0x40, .sp=0x14, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xe5}, {.addr=0x9323, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9323, .value=0x2d, .type=IO_READ},
        {.addr=0x9324, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xdcb7, .a=0x3f, .x=0xac, .y=0xf3, .sp=0x70, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xdcb7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdcb8, .a=0x3f, .x=0xac, .y=0xf3, .sp=0x6f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x3f}, {.addr=0xdcb7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdcb7, .value=0x2d, .type=IO_READ},
        {.addr=0xdcb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xd071, .a=0xf4, .x=0xe9, .y=0x39, .sp=0x06, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xd071, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd072, .a=0xf4, .x=0xe9, .y=0x39, .sp=0x05, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xf4}, {.addr=0xd071, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd071, .value=0x2d, .type=IO_READ},
        {.addr=0xd072, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xd833, .a=0xb5, .x=0x7a, .y=0x90, .sp=0x33, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xd833, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd834, .a=0xb5, .x=0x7a, .y=0x90, .sp=0x32, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xb5}, {.addr=0xd833, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd833, .value=0x2d, .type=IO_READ},
        {.addr=0xd834, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x37db, .a=0x3a, .x=0xfc, .y=0x74, .sp=0x52, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x37db, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x37dc, .a=0x3a, .x=0xfc, .y=0x74, .sp=0x51, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x3a}, {.addr=0x37db, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x37db, .value=0x2d, .type=IO_READ},
        {.addr=0x37dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x2515, .a=0xa7, .x=0x7f, .y=0xca, .sp=0x7f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x2515, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2516, .a=0xa7, .x=0x7f, .y=0xca, .sp=0x7e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xa7}, {.addr=0x2515, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2515, .value=0x2d, .type=IO_READ},
        {.addr=0x2516, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x3e2c, .a=0x8a, .x=0x82, .y=0x19, .sp=0x59, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x3e2c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3e2d, .a=0x8a, .x=0x82, .y=0x19, .sp=0x58, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x8a}, {.addr=0x3e2c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3e2c, .value=0x2d, .type=IO_READ},
        {.addr=0x3e2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x2664, .a=0xb6, .x=0x84, .y=0x82, .sp=0x04, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x2664, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2665, .a=0xb6, .x=0x84, .y=0x82, .sp=0x03, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xb6}, {.addr=0x2664, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2664, .value=0x2d, .type=IO_READ},
        {.addr=0x2665, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xc632, .a=0xab, .x=0x9e, .y=0x09, .sp=0x11, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xc632, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc633, .a=0xab, .x=0x9e, .y=0x09, .sp=0x10, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xab}, {.addr=0xc632, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc632, .value=0x2d, .type=IO_READ},
        {.addr=0xc633, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xe0d6, .a=0xf9, .x=0x44, .y=0xe0, .sp=0x9f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0xe0d6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe0d7, .a=0xf9, .x=0x44, .y=0xe0, .sp=0x9e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xf9}, {.addr=0xe0d6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe0d6, .value=0x2d, .type=IO_READ},
        {.addr=0xe0d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x880c, .a=0xdd, .x=0x12, .y=0x03, .sp=0xd0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x880c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x880d, .a=0xdd, .x=0x12, .y=0x03, .sp=0xcf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xdd}, {.addr=0x880c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x880c, .value=0x2d, .type=IO_READ},
        {.addr=0x880d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x1524, .a=0x8d, .x=0x87, .y=0x4b, .sp=0x0b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x1524, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1525, .a=0x8d, .x=0x87, .y=0x4b, .sp=0x0a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x8d}, {.addr=0x1524, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1524, .value=0x2d, .type=IO_READ},
        {.addr=0x1525, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xc6d3, .a=0x4d, .x=0x97, .y=0x2c, .sp=0x57, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xc6d3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc6d4, .a=0x4d, .x=0x97, .y=0x2c, .sp=0x56, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x4d}, {.addr=0xc6d3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc6d3, .value=0x2d, .type=IO_READ},
        {.addr=0xc6d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x1a3f, .a=0x0f, .x=0x60, .y=0x11, .sp=0x40, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x1a3f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1a40, .a=0x0f, .x=0x60, .y=0x11, .sp=0x3f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x0f}, {.addr=0x1a3f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1a3f, .value=0x2d, .type=IO_READ},
        {.addr=0x1a40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x8879, .a=0x3a, .x=0xbd, .y=0x66, .sp=0x6c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x8879, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x887a, .a=0x3a, .x=0xbd, .y=0x66, .sp=0x6b, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x3a}, {.addr=0x8879, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8879, .value=0x2d, .type=IO_READ},
        {.addr=0x887a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x1486, .a=0xaf, .x=0xa4, .y=0x98, .sp=0x61, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x1486, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1487, .a=0xaf, .x=0xa4, .y=0x98, .sp=0x60, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xaf}, {.addr=0x1486, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1486, .value=0x2d, .type=IO_READ},
        {.addr=0x1487, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xd449, .a=0xe1, .x=0x94, .y=0x48, .sp=0xae, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xd449, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd44a, .a=0xe1, .x=0x94, .y=0x48, .sp=0xad, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xe1}, {.addr=0xd449, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd449, .value=0x2d, .type=IO_READ},
        {.addr=0xd44a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xae8a, .a=0xb5, .x=0x55, .y=0x83, .sp=0xc6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0xae8a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xae8b, .a=0xb5, .x=0x55, .y=0x83, .sp=0xc5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xb5}, {.addr=0xae8a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xae8a, .value=0x2d, .type=IO_READ},
        {.addr=0xae8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x8b81, .a=0xc3, .x=0x11, .y=0x32, .sp=0x38, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x8b81, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8b82, .a=0xc3, .x=0x11, .y=0x32, .sp=0x37, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xc3}, {.addr=0x8b81, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8b81, .value=0x2d, .type=IO_READ},
        {.addr=0x8b82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xc0de, .a=0x07, .x=0xcb, .y=0xfc, .sp=0xe2, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0xc0de, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc0df, .a=0x07, .x=0xcb, .y=0xfc, .sp=0xe1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x07}, {.addr=0xc0de, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc0de, .value=0x2d, .type=IO_READ},
        {.addr=0xc0df, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x5b41, .a=0xbe, .x=0x93, .y=0xb3, .sp=0xee, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x5b41, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5b42, .a=0xbe, .x=0x93, .y=0xb3, .sp=0xed, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xbe}, {.addr=0x5b41, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5b41, .value=0x2d, .type=IO_READ},
        {.addr=0x5b42, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xc350, .a=0xfa, .x=0x87, .y=0xb1, .sp=0xc7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xc350, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc351, .a=0xfa, .x=0x87, .y=0xb1, .sp=0xc6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xfa}, {.addr=0xc350, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc350, .value=0x2d, .type=IO_READ},
        {.addr=0xc351, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x5e17, .a=0xb8, .x=0xe3, .y=0x76, .sp=0xd3, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x5e17, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5e18, .a=0xb8, .x=0xe3, .y=0x76, .sp=0xd2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xb8}, {.addr=0x5e17, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5e17, .value=0x2d, .type=IO_READ},
        {.addr=0x5e18, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xdcd7, .a=0x2e, .x=0xc0, .y=0x40, .sp=0xbb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0xdcd7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdcd8, .a=0x2e, .x=0xc0, .y=0x40, .sp=0xba, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x2e}, {.addr=0xdcd7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdcd7, .value=0x2d, .type=IO_READ},
        {.addr=0xdcd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x83a5, .a=0x96, .x=0x56, .y=0xc1, .sp=0xba, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x83a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x83a6, .a=0x96, .x=0x56, .y=0xc1, .sp=0xb9, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x96}, {.addr=0x83a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x83a5, .value=0x2d, .type=IO_READ},
        {.addr=0x83a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xa1d9, .a=0x53, .x=0x4b, .y=0xcc, .sp=0x5d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0xa1d9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa1da, .a=0x53, .x=0x4b, .y=0xcc, .sp=0x5c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x53}, {.addr=0xa1d9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa1d9, .value=0x2d, .type=IO_READ},
        {.addr=0xa1da, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xfa61, .a=0x30, .x=0x1c, .y=0xc1, .sp=0x7d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xfa61, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfa62, .a=0x30, .x=0x1c, .y=0xc1, .sp=0x7c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x30}, {.addr=0xfa61, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfa61, .value=0x2d, .type=IO_READ},
        {.addr=0xfa62, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x7915, .a=0x5f, .x=0xc3, .y=0xcb, .sp=0x34, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x7915, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7916, .a=0x5f, .x=0xc3, .y=0xcb, .sp=0x33, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x5f}, {.addr=0x7915, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7915, .value=0x2d, .type=IO_READ},
        {.addr=0x7916, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x6f3c, .a=0x64, .x=0x01, .y=0x43, .sp=0x0a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x6f3c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6f3d, .a=0x64, .x=0x01, .y=0x43, .sp=0x09, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x64}, {.addr=0x6f3c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6f3c, .value=0x2d, .type=IO_READ},
        {.addr=0x6f3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x4035, .a=0x91, .x=0xd0, .y=0x63, .sp=0x34, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x4035, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4036, .a=0x91, .x=0xd0, .y=0x63, .sp=0x33, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x91}, {.addr=0x4035, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4035, .value=0x2d, .type=IO_READ},
        {.addr=0x4036, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x40d0, .a=0xae, .x=0xf7, .y=0xde, .sp=0xd3, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x40d0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x40d1, .a=0xae, .x=0xf7, .y=0xde, .sp=0xd2, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xae}, {.addr=0x40d0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x40d0, .value=0x2d, .type=IO_READ},
        {.addr=0x40d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x075c, .a=0xe4, .x=0x34, .y=0x65, .sp=0x94, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x075c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x075d, .a=0xe4, .x=0x34, .y=0x65, .sp=0x93, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xe4}, {.addr=0x075c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x075c, .value=0x2d, .type=IO_READ},
        {.addr=0x075d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x0661, .a=0x50, .x=0x38, .y=0xfb, .sp=0x6a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x0661, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0662, .a=0x50, .x=0x38, .y=0xfb, .sp=0x69, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x50}, {.addr=0x0661, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0661, .value=0x2d, .type=IO_READ},
        {.addr=0x0662, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xcb46, .a=0x86, .x=0x66, .y=0x77, .sp=0x7f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0xcb46, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcb47, .a=0x86, .x=0x66, .y=0x77, .sp=0x7e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x86}, {.addr=0xcb46, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcb46, .value=0x2d, .type=IO_READ},
        {.addr=0xcb47, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x4716, .a=0x9d, .x=0xbd, .y=0x4a, .sp=0xef, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x4716, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4717, .a=0x9d, .x=0xbd, .y=0x4a, .sp=0xee, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x9d}, {.addr=0x4716, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4716, .value=0x2d, .type=IO_READ},
        {.addr=0x4717, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x0a5c, .a=0xb7, .x=0x2e, .y=0x17, .sp=0xe2, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x0a5c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0a5d, .a=0xb7, .x=0x2e, .y=0x17, .sp=0xe1, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xb7}, {.addr=0x0a5c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0a5c, .value=0x2d, .type=IO_READ},
        {.addr=0x0a5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x65dd, .a=0x19, .x=0xf8, .y=0xb8, .sp=0x33, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x65dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x65de, .a=0x19, .x=0xf8, .y=0xb8, .sp=0x32, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x19}, {.addr=0x65dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x65dd, .value=0x2d, .type=IO_READ},
        {.addr=0x65de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x7588, .a=0x4a, .x=0xa9, .y=0x86, .sp=0x49, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x7588, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7589, .a=0x4a, .x=0xa9, .y=0x86, .sp=0x48, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x4a}, {.addr=0x7588, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7588, .value=0x2d, .type=IO_READ},
        {.addr=0x7589, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x1ece, .a=0x29, .x=0xdf, .y=0x6b, .sp=0x49, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x1ece, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1ecf, .a=0x29, .x=0xdf, .y=0x6b, .sp=0x48, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x29}, {.addr=0x1ece, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1ece, .value=0x2d, .type=IO_READ},
        {.addr=0x1ecf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x174b, .a=0x4f, .x=0x91, .y=0xc2, .sp=0x06, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x174b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x174c, .a=0x4f, .x=0x91, .y=0xc2, .sp=0x05, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x4f}, {.addr=0x174b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x174b, .value=0x2d, .type=IO_READ},
        {.addr=0x174c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xd580, .a=0xb9, .x=0xbb, .y=0xa2, .sp=0x75, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0xd580, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd581, .a=0xb9, .x=0xbb, .y=0xa2, .sp=0x74, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xb9}, {.addr=0xd580, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd580, .value=0x2d, .type=IO_READ},
        {.addr=0xd581, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xa102, .a=0x5c, .x=0x47, .y=0xd1, .sp=0xf8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xa102, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa103, .a=0x5c, .x=0x47, .y=0xd1, .sp=0xf7, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x5c}, {.addr=0xa102, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa102, .value=0x2d, .type=IO_READ},
        {.addr=0xa103, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xd145, .a=0x73, .x=0x09, .y=0xce, .sp=0x64, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0xd145, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd146, .a=0x73, .x=0x09, .y=0xce, .sp=0x63, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x73}, {.addr=0xd145, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd145, .value=0x2d, .type=IO_READ},
        {.addr=0xd146, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x5c87, .a=0x77, .x=0x88, .y=0x91, .sp=0x42, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x5c87, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5c88, .a=0x77, .x=0x88, .y=0x91, .sp=0x41, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x77}, {.addr=0x5c87, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5c87, .value=0x2d, .type=IO_READ},
        {.addr=0x5c88, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x07ef, .a=0xe5, .x=0xf5, .y=0x79, .sp=0x67, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x07ef, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x07f0, .a=0xe5, .x=0xf5, .y=0x79, .sp=0x66, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xe5}, {.addr=0x07ef, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x07ef, .value=0x2d, .type=IO_READ},
        {.addr=0x07f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x8f4b, .a=0xec, .x=0x32, .y=0xac, .sp=0x64, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x8f4b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8f4c, .a=0xec, .x=0x32, .y=0xac, .sp=0x63, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xec}, {.addr=0x8f4b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8f4b, .value=0x2d, .type=IO_READ},
        {.addr=0x8f4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xe01d, .a=0xa9, .x=0x7c, .y=0xe8, .sp=0x67, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xe01d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe01e, .a=0xa9, .x=0x7c, .y=0xe8, .sp=0x66, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xa9}, {.addr=0xe01d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe01d, .value=0x2d, .type=IO_READ},
        {.addr=0xe01e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x7b10, .a=0xc8, .x=0x3c, .y=0x63, .sp=0xa0, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x7b10, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7b11, .a=0xc8, .x=0x3c, .y=0x63, .sp=0x9f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xc8}, {.addr=0x7b10, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7b10, .value=0x2d, .type=IO_READ},
        {.addr=0x7b11, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xc98c, .a=0x1a, .x=0x7a, .y=0xfa, .sp=0x3f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0xc98c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc98d, .a=0x1a, .x=0x7a, .y=0xfa, .sp=0x3e, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x1a}, {.addr=0xc98c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc98c, .value=0x2d, .type=IO_READ},
        {.addr=0xc98d, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xefe4, .a=0xa0, .x=0xba, .y=0x81, .sp=0x98, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xefe4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xefe5, .a=0xa0, .x=0xba, .y=0x81, .sp=0x97, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xa0}, {.addr=0xefe4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xefe4, .value=0x2d, .type=IO_READ},
        {.addr=0xefe5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x8ed1, .a=0xf4, .x=0x6e, .y=0x00, .sp=0x6a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x8ed1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8ed2, .a=0xf4, .x=0x6e, .y=0x00, .sp=0x69, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xf4}, {.addr=0x8ed1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8ed1, .value=0x2d, .type=IO_READ},
        {.addr=0x8ed2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xe032, .a=0x52, .x=0x70, .y=0x9b, .sp=0x84, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xe032, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe033, .a=0x52, .x=0x70, .y=0x9b, .sp=0x83, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x52}, {.addr=0xe032, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe032, .value=0x2d, .type=IO_READ},
        {.addr=0xe033, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xf07a, .a=0x45, .x=0x8f, .y=0xc5, .sp=0x6f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xf07a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf07b, .a=0x45, .x=0x8f, .y=0xc5, .sp=0x6e, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x45}, {.addr=0xf07a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf07a, .value=0x2d, .type=IO_READ},
        {.addr=0xf07b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x765c, .a=0x9a, .x=0x0a, .y=0x31, .sp=0x3c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x765c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x765d, .a=0x9a, .x=0x0a, .y=0x31, .sp=0x3b, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x9a}, {.addr=0x765c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x765c, .value=0x2d, .type=IO_READ},
        {.addr=0x765d, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x6984, .a=0x1b, .x=0x58, .y=0x5a, .sp=0x13, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x6984, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6985, .a=0x1b, .x=0x58, .y=0x5a, .sp=0x12, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x1b}, {.addr=0x6984, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6984, .value=0x2d, .type=IO_READ},
        {.addr=0x6985, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xd4bb, .a=0x02, .x=0x82, .y=0xa9, .sp=0x90, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0xd4bb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd4bc, .a=0x02, .x=0x82, .y=0xa9, .sp=0x8f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x02}, {.addr=0xd4bb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd4bb, .value=0x2d, .type=IO_READ},
        {.addr=0xd4bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xea7a, .a=0x70, .x=0xa6, .y=0x7e, .sp=0xa4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xea7a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xea7b, .a=0x70, .x=0xa6, .y=0x7e, .sp=0xa3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x70}, {.addr=0xea7a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xea7a, .value=0x2d, .type=IO_READ},
        {.addr=0xea7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x712c, .a=0xb1, .x=0xf9, .y=0x5f, .sp=0x28, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x712c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x712d, .a=0xb1, .x=0xf9, .y=0x5f, .sp=0x27, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xb1}, {.addr=0x712c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x712c, .value=0x2d, .type=IO_READ},
        {.addr=0x712d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x6115, .a=0x1e, .x=0x07, .y=0xd0, .sp=0x98, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x6115, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6116, .a=0x1e, .x=0x07, .y=0xd0, .sp=0x97, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x1e}, {.addr=0x6115, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6115, .value=0x2d, .type=IO_READ},
        {.addr=0x6116, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x66e7, .a=0xfd, .x=0x28, .y=0x5e, .sp=0x8e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x66e7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x66e8, .a=0xfd, .x=0x28, .y=0x5e, .sp=0x8d, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xfd}, {.addr=0x66e7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x66e7, .value=0x2d, .type=IO_READ},
        {.addr=0x66e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x2a00, .a=0x34, .x=0x73, .y=0x72, .sp=0x58, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x2a00, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2a01, .a=0x34, .x=0x73, .y=0x72, .sp=0x57, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x34}, {.addr=0x2a00, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2a00, .value=0x2d, .type=IO_READ},
        {.addr=0x2a01, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xf2a2, .a=0x74, .x=0xd4, .y=0xee, .sp=0x0f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xf2a2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf2a3, .a=0x74, .x=0xd4, .y=0xee, .sp=0x0e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x74}, {.addr=0xf2a2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf2a2, .value=0x2d, .type=IO_READ},
        {.addr=0xf2a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x0fb8, .a=0xc7, .x=0x83, .y=0x82, .sp=0x31, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x0fb8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0fb9, .a=0xc7, .x=0x83, .y=0x82, .sp=0x30, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xc7}, {.addr=0x0fb8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0fb8, .value=0x2d, .type=IO_READ},
        {.addr=0x0fb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xb249, .a=0xfd, .x=0xa7, .y=0x05, .sp=0x99, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0xb249, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb24a, .a=0xfd, .x=0xa7, .y=0x05, .sp=0x98, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xfd}, {.addr=0xb249, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb249, .value=0x2d, .type=IO_READ},
        {.addr=0xb24a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x5e49, .a=0xc1, .x=0xeb, .y=0x66, .sp=0x12, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x5e49, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5e4a, .a=0xc1, .x=0xeb, .y=0x66, .sp=0x11, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xc1}, {.addr=0x5e49, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5e49, .value=0x2d, .type=IO_READ},
        {.addr=0x5e4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0201) {
    const struct CPU_State initial_cpu = {.pc=0x9180, .a=0xc1, .x=0x95, .y=0x32, .sp=0x2f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x9180, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9181, .a=0xc1, .x=0x95, .y=0x32, .sp=0x2e, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xc1}, {.addr=0x9180, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9180, .value=0x2d, .type=IO_READ},
        {.addr=0x9181, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0202) {
    const struct CPU_State initial_cpu = {.pc=0xe5e0, .a=0x5c, .x=0xb9, .y=0x5d, .sp=0x85, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xe5e0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe5e1, .a=0x5c, .x=0xb9, .y=0x5d, .sp=0x84, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x5c}, {.addr=0xe5e0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe5e0, .value=0x2d, .type=IO_READ},
        {.addr=0xe5e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x472f, .a=0x25, .x=0x3f, .y=0x0b, .sp=0x12, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x472f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4730, .a=0x25, .x=0x3f, .y=0x0b, .sp=0x11, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x25}, {.addr=0x472f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x472f, .value=0x2d, .type=IO_READ},
        {.addr=0x4730, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x0ef2, .a=0xdf, .x=0x63, .y=0xd4, .sp=0x3d, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x0ef2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0ef3, .a=0xdf, .x=0x63, .y=0xd4, .sp=0x3c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xdf}, {.addr=0x0ef2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0ef2, .value=0x2d, .type=IO_READ},
        {.addr=0x0ef3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0205) {
    const struct CPU_State initial_cpu = {.pc=0x282c, .a=0xf9, .x=0xe4, .y=0x8d, .sp=0x0a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x282c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x282d, .a=0xf9, .x=0xe4, .y=0x8d, .sp=0x09, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xf9}, {.addr=0x282c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x282c, .value=0x2d, .type=IO_READ},
        {.addr=0x282d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x68eb, .a=0x8d, .x=0x91, .y=0xdb, .sp=0xaf, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x68eb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x68ec, .a=0x8d, .x=0x91, .y=0xdb, .sp=0xae, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x8d}, {.addr=0x68eb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x68eb, .value=0x2d, .type=IO_READ},
        {.addr=0x68ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd480, .a=0x99, .x=0xa5, .y=0x3e, .sp=0x78, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xd480, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd481, .a=0x99, .x=0xa5, .y=0x3e, .sp=0x77, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x99}, {.addr=0xd480, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd480, .value=0x2d, .type=IO_READ},
        {.addr=0xd481, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0208) {
    const struct CPU_State initial_cpu = {.pc=0x2cc8, .a=0x3b, .x=0x71, .y=0x61, .sp=0x99, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x2cc8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2cc9, .a=0x3b, .x=0x71, .y=0x61, .sp=0x98, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x3b}, {.addr=0x2cc8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2cc8, .value=0x2d, .type=IO_READ},
        {.addr=0x2cc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0209) {
    const struct CPU_State initial_cpu = {.pc=0x3102, .a=0xd9, .x=0x75, .y=0xa2, .sp=0x78, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x3102, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3103, .a=0xd9, .x=0x75, .y=0xa2, .sp=0x77, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xd9}, {.addr=0x3102, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3102, .value=0x2d, .type=IO_READ},
        {.addr=0x3103, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xac75, .a=0x68, .x=0xa2, .y=0x1f, .sp=0xc4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xac75, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xac76, .a=0x68, .x=0xa2, .y=0x1f, .sp=0xc3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x68}, {.addr=0xac75, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xac75, .value=0x2d, .type=IO_READ},
        {.addr=0xac76, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x01e1, .a=0xb5, .x=0x28, .y=0x6f, .sp=0xa3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x01e1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x01e2, .a=0xb5, .x=0x28, .y=0x6f, .sp=0xa2, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xb5}, {.addr=0x01e1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x01e1, .value=0x2d, .type=IO_READ},
        {.addr=0x01e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_020C) {
    const struct CPU_State initial_cpu = {.pc=0x4741, .a=0xf6, .x=0x77, .y=0x6e, .sp=0x54, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x4741, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4742, .a=0xf6, .x=0x77, .y=0x6e, .sp=0x53, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xf6}, {.addr=0x4741, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4741, .value=0x2d, .type=IO_READ},
        {.addr=0x4742, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_020D) {
    const struct CPU_State initial_cpu = {.pc=0xb085, .a=0x5b, .x=0xd7, .y=0x13, .sp=0xe3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0xb085, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb086, .a=0x5b, .x=0xd7, .y=0x13, .sp=0xe2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x5b}, {.addr=0xb085, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb085, .value=0x2d, .type=IO_READ},
        {.addr=0xb086, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x8720, .a=0x44, .x=0xb1, .y=0x9d, .sp=0x34, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x8720, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8721, .a=0x44, .x=0xb1, .y=0x9d, .sp=0x33, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x44}, {.addr=0x8720, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8720, .value=0x2d, .type=IO_READ},
        {.addr=0x8721, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x9525, .a=0x37, .x=0x52, .y=0xc1, .sp=0x40, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x9525, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9526, .a=0x37, .x=0x52, .y=0xc1, .sp=0x3f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x37}, {.addr=0x9525, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9525, .value=0x2d, .type=IO_READ},
        {.addr=0x9526, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0210) {
    const struct CPU_State initial_cpu = {.pc=0x9a00, .a=0x8c, .x=0xe0, .y=0xa0, .sp=0xe6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x9a00, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9a01, .a=0x8c, .x=0xe0, .y=0xa0, .sp=0xe5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x8c}, {.addr=0x9a00, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9a00, .value=0x2d, .type=IO_READ},
        {.addr=0x9a01, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0211) {
    const struct CPU_State initial_cpu = {.pc=0x241a, .a=0x21, .x=0xbf, .y=0x63, .sp=0xa6, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x241a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x241b, .a=0x21, .x=0xbf, .y=0x63, .sp=0xa5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x21}, {.addr=0x241a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x241a, .value=0x2d, .type=IO_READ},
        {.addr=0x241b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf479, .a=0x1a, .x=0x1f, .y=0xfe, .sp=0xbc, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xf479, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf47a, .a=0x1a, .x=0x1f, .y=0xfe, .sp=0xbb, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x1a}, {.addr=0xf479, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf479, .value=0x2d, .type=IO_READ},
        {.addr=0xf47a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0213) {
    const struct CPU_State initial_cpu = {.pc=0x3931, .a=0xd6, .x=0x6d, .y=0xe4, .sp=0xb8, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x3931, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3932, .a=0xd6, .x=0x6d, .y=0xe4, .sp=0xb7, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xd6}, {.addr=0x3931, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3931, .value=0x2d, .type=IO_READ},
        {.addr=0x3932, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x3e59, .a=0xae, .x=0x12, .y=0xce, .sp=0x0a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x3e59, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3e5a, .a=0xae, .x=0x12, .y=0xce, .sp=0x09, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xae}, {.addr=0x3e59, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3e59, .value=0x2d, .type=IO_READ},
        {.addr=0x3e5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x31a3, .a=0x82, .x=0x74, .y=0xd9, .sp=0xb4, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x31a3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x31a4, .a=0x82, .x=0x74, .y=0xd9, .sp=0xb3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x82}, {.addr=0x31a3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x31a3, .value=0x2d, .type=IO_READ},
        {.addr=0x31a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x69e1, .a=0x36, .x=0xbf, .y=0x8b, .sp=0xd0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x69e1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x69e2, .a=0x36, .x=0xbf, .y=0x8b, .sp=0xcf, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x36}, {.addr=0x69e1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x69e1, .value=0x2d, .type=IO_READ},
        {.addr=0x69e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0217) {
    const struct CPU_State initial_cpu = {.pc=0x4178, .a=0xa0, .x=0x78, .y=0x70, .sp=0x18, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x4178, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4179, .a=0xa0, .x=0x78, .y=0x70, .sp=0x17, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xa0}, {.addr=0x4178, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4178, .value=0x2d, .type=IO_READ},
        {.addr=0x4179, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0218) {
    const struct CPU_State initial_cpu = {.pc=0x6c25, .a=0xcd, .x=0x1c, .y=0x60, .sp=0x9f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0x6c25, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6c26, .a=0xcd, .x=0x1c, .y=0x60, .sp=0x9e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xcd}, {.addr=0x6c25, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6c25, .value=0x2d, .type=IO_READ},
        {.addr=0x6c26, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x8713, .a=0xbc, .x=0x1f, .y=0xaf, .sp=0xb1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x8713, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8714, .a=0xbc, .x=0x1f, .y=0xaf, .sp=0xb0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xbc}, {.addr=0x8713, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8713, .value=0x2d, .type=IO_READ},
        {.addr=0x8714, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_021A) {
    const struct CPU_State initial_cpu = {.pc=0x0726, .a=0x94, .x=0x99, .y=0x66, .sp=0x18, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x0726, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0727, .a=0x94, .x=0x99, .y=0x66, .sp=0x17, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x94}, {.addr=0x0726, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0726, .value=0x2d, .type=IO_READ},
        {.addr=0x0727, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_021B) {
    const struct CPU_State initial_cpu = {.pc=0x5c1c, .a=0x9d, .x=0x3f, .y=0x74, .sp=0x67, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x5c1c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5c1d, .a=0x9d, .x=0x3f, .y=0x74, .sp=0x66, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x9d}, {.addr=0x5c1c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5c1c, .value=0x2d, .type=IO_READ},
        {.addr=0x5c1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_021C) {
    const struct CPU_State initial_cpu = {.pc=0x084e, .a=0x8b, .x=0x53, .y=0xc3, .sp=0x7d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x084e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x084f, .a=0x8b, .x=0x53, .y=0xc3, .sp=0x7c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x8b}, {.addr=0x084e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x084e, .value=0x2d, .type=IO_READ},
        {.addr=0x084f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_021D) {
    const struct CPU_State initial_cpu = {.pc=0xc946, .a=0x6c, .x=0x66, .y=0x8f, .sp=0x48, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xc946, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc947, .a=0x6c, .x=0x66, .y=0x8f, .sp=0x47, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x6c}, {.addr=0xc946, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc946, .value=0x2d, .type=IO_READ},
        {.addr=0xc947, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_021E) {
    const struct CPU_State initial_cpu = {.pc=0x49c8, .a=0xb4, .x=0x16, .y=0x12, .sp=0x26, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x49c8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x49c9, .a=0xb4, .x=0x16, .y=0x12, .sp=0x25, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xb4}, {.addr=0x49c8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x49c8, .value=0x2d, .type=IO_READ},
        {.addr=0x49c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd86a, .a=0xdf, .x=0xa7, .y=0x45, .sp=0x1c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xd86a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd86b, .a=0xdf, .x=0xa7, .y=0x45, .sp=0x1b, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xdf}, {.addr=0xd86a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd86a, .value=0x2d, .type=IO_READ},
        {.addr=0xd86b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0220) {
    const struct CPU_State initial_cpu = {.pc=0x5faa, .a=0xd7, .x=0x02, .y=0x5c, .sp=0x16, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x5faa, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5fab, .a=0xd7, .x=0x02, .y=0x5c, .sp=0x15, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xd7}, {.addr=0x5faa, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5faa, .value=0x2d, .type=IO_READ},
        {.addr=0x5fab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0221) {
    const struct CPU_State initial_cpu = {.pc=0x8eae, .a=0x1c, .x=0x88, .y=0x9f, .sp=0x31, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x8eae, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8eaf, .a=0x1c, .x=0x88, .y=0x9f, .sp=0x30, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x1c}, {.addr=0x8eae, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8eae, .value=0x2d, .type=IO_READ},
        {.addr=0x8eaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8ddd, .a=0x11, .x=0x1d, .y=0x6d, .sp=0x0a, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x8ddd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8dde, .a=0x11, .x=0x1d, .y=0x6d, .sp=0x09, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x11}, {.addr=0x8ddd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8ddd, .value=0x2d, .type=IO_READ},
        {.addr=0x8dde, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0223) {
    const struct CPU_State initial_cpu = {.pc=0xde63, .a=0xe6, .x=0xf6, .y=0x3f, .sp=0x4b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xde63, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xde64, .a=0xe6, .x=0xf6, .y=0x3f, .sp=0x4a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xe6}, {.addr=0xde63, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xde63, .value=0x2d, .type=IO_READ},
        {.addr=0xde64, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0224) {
    const struct CPU_State initial_cpu = {.pc=0x7b88, .a=0x4e, .x=0xf6, .y=0xf6, .sp=0x2e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x7b88, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7b89, .a=0x4e, .x=0xf6, .y=0xf6, .sp=0x2d, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x4e}, {.addr=0x7b88, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7b88, .value=0x2d, .type=IO_READ},
        {.addr=0x7b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0225) {
    const struct CPU_State initial_cpu = {.pc=0x5367, .a=0xb3, .x=0xd4, .y=0x5f, .sp=0x04, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x5367, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5368, .a=0xb3, .x=0xd4, .y=0x5f, .sp=0x03, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xb3}, {.addr=0x5367, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5367, .value=0x2d, .type=IO_READ},
        {.addr=0x5368, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0226) {
    const struct CPU_State initial_cpu = {.pc=0x525c, .a=0x85, .x=0x30, .y=0x06, .sp=0xc6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x525c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x525d, .a=0x85, .x=0x30, .y=0x06, .sp=0xc5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x85}, {.addr=0x525c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x525c, .value=0x2d, .type=IO_READ},
        {.addr=0x525d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0227) {
    const struct CPU_State initial_cpu = {.pc=0x6ce4, .a=0x9b, .x=0xcc, .y=0x73, .sp=0xde, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x6ce4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6ce5, .a=0x9b, .x=0xcc, .y=0x73, .sp=0xdd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x9b}, {.addr=0x6ce4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6ce4, .value=0x2d, .type=IO_READ},
        {.addr=0x6ce5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0228) {
    const struct CPU_State initial_cpu = {.pc=0x2cac, .a=0x05, .x=0xf1, .y=0x8b, .sp=0x76, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x2cac, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2cad, .a=0x05, .x=0xf1, .y=0x8b, .sp=0x75, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x05}, {.addr=0x2cac, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2cac, .value=0x2d, .type=IO_READ},
        {.addr=0x2cad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0229) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0xd6, .x=0x0b, .y=0x17, .sp=0x70, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xaebd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0xd6, .x=0x0b, .y=0x17, .sp=0x6f, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xd6}, {.addr=0xaebd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0x2d, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_022A) {
    const struct CPU_State initial_cpu = {.pc=0xcb3d, .a=0x74, .x=0x65, .y=0x07, .sp=0xfc, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xcb3d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcb3e, .a=0x74, .x=0x65, .y=0x07, .sp=0xfb, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x74}, {.addr=0xcb3d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcb3d, .value=0x2d, .type=IO_READ},
        {.addr=0xcb3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x6e7e, .a=0xcd, .x=0x33, .y=0x8f, .sp=0x3c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x6e7e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6e7f, .a=0xcd, .x=0x33, .y=0x8f, .sp=0x3b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xcd}, {.addr=0x6e7e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6e7e, .value=0x2d, .type=IO_READ},
        {.addr=0x6e7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_022C) {
    const struct CPU_State initial_cpu = {.pc=0x84dc, .a=0xc8, .x=0x57, .y=0xc0, .sp=0xee, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x84dc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x84dd, .a=0xc8, .x=0x57, .y=0xc0, .sp=0xed, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xc8}, {.addr=0x84dc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x84dc, .value=0x2d, .type=IO_READ},
        {.addr=0x84dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x01ca, .a=0x05, .x=0xca, .y=0x2f, .sp=0xf6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x2d}, {.addr=0x01f6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x01cb, .a=0x05, .x=0xca, .y=0x2f, .sp=0xf5, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x2d}, {.addr=0x01f6, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x01ca, .value=0x2d, .type=IO_READ},
        {.addr=0x01cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x4a27, .a=0x40, .x=0xd8, .y=0x46, .sp=0xf9, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x4a27, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4a28, .a=0x40, .x=0xd8, .y=0x46, .sp=0xf8, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x40}, {.addr=0x4a27, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4a27, .value=0x2d, .type=IO_READ},
        {.addr=0x4a28, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x1536, .a=0xa6, .x=0xd0, .y=0x4b, .sp=0x03, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x1536, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1537, .a=0xa6, .x=0xd0, .y=0x4b, .sp=0x02, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xa6}, {.addr=0x1536, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1536, .value=0x2d, .type=IO_READ},
        {.addr=0x1537, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0230) {
    const struct CPU_State initial_cpu = {.pc=0x0e1b, .a=0x37, .x=0x04, .y=0xf1, .sp=0x24, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x0e1b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0e1c, .a=0x37, .x=0x04, .y=0xf1, .sp=0x23, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x37}, {.addr=0x0e1b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0e1b, .value=0x2d, .type=IO_READ},
        {.addr=0x0e1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x2124, .a=0x81, .x=0x9b, .y=0x9b, .sp=0x5c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x2124, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2125, .a=0x81, .x=0x9b, .y=0x9b, .sp=0x5b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x81}, {.addr=0x2124, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2124, .value=0x2d, .type=IO_READ},
        {.addr=0x2125, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0232) {
    const struct CPU_State initial_cpu = {.pc=0x319b, .a=0x38, .x=0x3c, .y=0xf4, .sp=0xb9, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x319b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x319c, .a=0x38, .x=0x3c, .y=0xf4, .sp=0xb8, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x38}, {.addr=0x319b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x319b, .value=0x2d, .type=IO_READ},
        {.addr=0x319c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0233) {
    const struct CPU_State initial_cpu = {.pc=0x683c, .a=0x35, .x=0x28, .y=0x30, .sp=0x7c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x683c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x683d, .a=0x35, .x=0x28, .y=0x30, .sp=0x7b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x35}, {.addr=0x683c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x683c, .value=0x2d, .type=IO_READ},
        {.addr=0x683d, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd1ff, .a=0x15, .x=0xd2, .y=0x4f, .sp=0x2a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xd1ff, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd200, .a=0x15, .x=0xd2, .y=0x4f, .sp=0x29, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x15}, {.addr=0xd1ff, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd1ff, .value=0x2d, .type=IO_READ},
        {.addr=0xd200, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0235) {
    const struct CPU_State initial_cpu = {.pc=0x72b6, .a=0xa8, .x=0x4d, .y=0xe2, .sp=0x2f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x72b6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x72b7, .a=0xa8, .x=0x4d, .y=0xe2, .sp=0x2e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xa8}, {.addr=0x72b6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x72b6, .value=0x2d, .type=IO_READ},
        {.addr=0x72b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0236) {
    const struct CPU_State initial_cpu = {.pc=0xd0c5, .a=0x03, .x=0x4a, .y=0x55, .sp=0x97, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xd0c5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd0c6, .a=0x03, .x=0x4a, .y=0x55, .sp=0x96, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x03}, {.addr=0xd0c5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd0c5, .value=0x2d, .type=IO_READ},
        {.addr=0xd0c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0237) {
    const struct CPU_State initial_cpu = {.pc=0x82e4, .a=0xd9, .x=0xb8, .y=0xdd, .sp=0x66, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x82e4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x82e5, .a=0xd9, .x=0xb8, .y=0xdd, .sp=0x65, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xd9}, {.addr=0x82e4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x82e4, .value=0x2d, .type=IO_READ},
        {.addr=0x82e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x2aca, .a=0x3e, .x=0xcb, .y=0x6c, .sp=0x21, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x2aca, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2acb, .a=0x3e, .x=0xcb, .y=0x6c, .sp=0x20, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x3e}, {.addr=0x2aca, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2aca, .value=0x2d, .type=IO_READ},
        {.addr=0x2acb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0239) {
    const struct CPU_State initial_cpu = {.pc=0xa5a8, .a=0xf6, .x=0xe7, .y=0x13, .sp=0x83, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0xa5a8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa5a9, .a=0xf6, .x=0xe7, .y=0x13, .sp=0x82, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xf6}, {.addr=0xa5a8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa5a8, .value=0x2d, .type=IO_READ},
        {.addr=0xa5a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x47f8, .a=0xb4, .x=0xc2, .y=0xd5, .sp=0xb2, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x47f8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x47f9, .a=0xb4, .x=0xc2, .y=0xd5, .sp=0xb1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xb4}, {.addr=0x47f8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x47f8, .value=0x2d, .type=IO_READ},
        {.addr=0x47f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_023B) {
    const struct CPU_State initial_cpu = {.pc=0xb830, .a=0x52, .x=0x6d, .y=0x03, .sp=0xb0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xb830, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb831, .a=0x52, .x=0x6d, .y=0x03, .sp=0xaf, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x52}, {.addr=0xb830, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb830, .value=0x2d, .type=IO_READ},
        {.addr=0xb831, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_023C) {
    const struct CPU_State initial_cpu = {.pc=0xf083, .a=0x17, .x=0xc7, .y=0xe2, .sp=0x93, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xf083, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf084, .a=0x17, .x=0xc7, .y=0xe2, .sp=0x92, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x17}, {.addr=0xf083, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf083, .value=0x2d, .type=IO_READ},
        {.addr=0xf084, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x6d84, .a=0xca, .x=0x54, .y=0xe1, .sp=0xee, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x6d84, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6d85, .a=0xca, .x=0x54, .y=0xe1, .sp=0xed, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xca}, {.addr=0x6d84, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6d84, .value=0x2d, .type=IO_READ},
        {.addr=0x6d85, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_023E) {
    const struct CPU_State initial_cpu = {.pc=0x4ee8, .a=0x3c, .x=0x32, .y=0xed, .sp=0x19, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x4ee8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4ee9, .a=0x3c, .x=0x32, .y=0xed, .sp=0x18, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x3c}, {.addr=0x4ee8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4ee8, .value=0x2d, .type=IO_READ},
        {.addr=0x4ee9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_023F) {
    const struct CPU_State initial_cpu = {.pc=0x18f4, .a=0x42, .x=0x8e, .y=0x2e, .sp=0x5b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x18f4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x18f5, .a=0x42, .x=0x8e, .y=0x2e, .sp=0x5a, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x42}, {.addr=0x18f4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x18f4, .value=0x2d, .type=IO_READ},
        {.addr=0x18f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0240) {
    const struct CPU_State initial_cpu = {.pc=0xe1c9, .a=0x22, .x=0xfa, .y=0x98, .sp=0x55, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xe1c9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe1ca, .a=0x22, .x=0xfa, .y=0x98, .sp=0x54, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x22}, {.addr=0xe1c9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe1c9, .value=0x2d, .type=IO_READ},
        {.addr=0xe1ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x3dbe, .a=0x88, .x=0xdd, .y=0xd3, .sp=0xa7, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x3dbe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3dbf, .a=0x88, .x=0xdd, .y=0xd3, .sp=0xa6, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x88}, {.addr=0x3dbe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3dbe, .value=0x2d, .type=IO_READ},
        {.addr=0x3dbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0242) {
    const struct CPU_State initial_cpu = {.pc=0xc5a5, .a=0x02, .x=0x24, .y=0x3c, .sp=0x4d, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0xc5a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc5a6, .a=0x02, .x=0x24, .y=0x3c, .sp=0x4c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x02}, {.addr=0xc5a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc5a5, .value=0x2d, .type=IO_READ},
        {.addr=0xc5a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0243) {
    const struct CPU_State initial_cpu = {.pc=0xb220, .a=0x87, .x=0xd4, .y=0xcd, .sp=0x04, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xb220, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb221, .a=0x87, .x=0xd4, .y=0xcd, .sp=0x03, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x87}, {.addr=0xb220, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb220, .value=0x2d, .type=IO_READ},
        {.addr=0xb221, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0244) {
    const struct CPU_State initial_cpu = {.pc=0xf836, .a=0xdb, .x=0x31, .y=0x0c, .sp=0x4f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0xf836, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf837, .a=0xdb, .x=0x31, .y=0x0c, .sp=0x4e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xdb}, {.addr=0xf836, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf836, .value=0x2d, .type=IO_READ},
        {.addr=0xf837, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x43a5, .a=0xb6, .x=0x45, .y=0x89, .sp=0x85, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x43a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x43a6, .a=0xb6, .x=0x45, .y=0x89, .sp=0x84, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xb6}, {.addr=0x43a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x43a5, .value=0x2d, .type=IO_READ},
        {.addr=0x43a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0246) {
    const struct CPU_State initial_cpu = {.pc=0xb724, .a=0xc0, .x=0xfe, .y=0x35, .sp=0x3b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0xb724, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb725, .a=0xc0, .x=0xfe, .y=0x35, .sp=0x3a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xc0}, {.addr=0xb724, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb724, .value=0x2d, .type=IO_READ},
        {.addr=0xb725, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0247) {
    const struct CPU_State initial_cpu = {.pc=0xc0dd, .a=0xc7, .x=0xff, .y=0x7c, .sp=0xae, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xc0dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc0de, .a=0xc7, .x=0xff, .y=0x7c, .sp=0xad, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xc7}, {.addr=0xc0dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc0dd, .value=0x2d, .type=IO_READ},
        {.addr=0xc0de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0248) {
    const struct CPU_State initial_cpu = {.pc=0xc95d, .a=0x81, .x=0x05, .y=0xc5, .sp=0x79, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0xc95d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc95e, .a=0x81, .x=0x05, .y=0xc5, .sp=0x78, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x81}, {.addr=0xc95d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc95d, .value=0x2d, .type=IO_READ},
        {.addr=0xc95e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0249) {
    const struct CPU_State initial_cpu = {.pc=0xf6ba, .a=0xaa, .x=0xd3, .y=0x4f, .sp=0x85, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xf6ba, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf6bb, .a=0xaa, .x=0xd3, .y=0x4f, .sp=0x84, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xaa}, {.addr=0xf6ba, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf6ba, .value=0x2d, .type=IO_READ},
        {.addr=0xf6bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_024A) {
    const struct CPU_State initial_cpu = {.pc=0xb2f3, .a=0xc9, .x=0x4e, .y=0xbf, .sp=0x9e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0xb2f3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb2f4, .a=0xc9, .x=0x4e, .y=0xbf, .sp=0x9d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xc9}, {.addr=0xb2f3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb2f3, .value=0x2d, .type=IO_READ},
        {.addr=0xb2f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_024B) {
    const struct CPU_State initial_cpu = {.pc=0x52a0, .a=0xa9, .x=0x4c, .y=0xaa, .sp=0xcf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x52a0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x52a1, .a=0xa9, .x=0x4c, .y=0xaa, .sp=0xce, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xa9}, {.addr=0x52a0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x52a0, .value=0x2d, .type=IO_READ},
        {.addr=0x52a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_024C) {
    const struct CPU_State initial_cpu = {.pc=0xffd7, .a=0x0e, .x=0x7f, .y=0xff, .sp=0x9c, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0xffd7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xffd8, .a=0x0e, .x=0x7f, .y=0xff, .sp=0x9b, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x0e}, {.addr=0xffd7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xffd7, .value=0x2d, .type=IO_READ},
        {.addr=0xffd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x50b5, .a=0x0a, .x=0xc2, .y=0xb0, .sp=0x96, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x50b5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x50b6, .a=0x0a, .x=0xc2, .y=0xb0, .sp=0x95, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x0a}, {.addr=0x50b5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x50b5, .value=0x2d, .type=IO_READ},
        {.addr=0x50b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x8c3c, .a=0x63, .x=0xfd, .y=0x47, .sp=0x06, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x8c3c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8c3d, .a=0x63, .x=0xfd, .y=0x47, .sp=0x05, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x63}, {.addr=0x8c3c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8c3c, .value=0x2d, .type=IO_READ},
        {.addr=0x8c3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x28ab, .a=0x69, .x=0xfd, .y=0x10, .sp=0xc4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x28ab, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x28ac, .a=0x69, .x=0xfd, .y=0x10, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x69}, {.addr=0x28ab, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x28ab, .value=0x2d, .type=IO_READ},
        {.addr=0x28ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xe61e, .a=0x87, .x=0x3c, .y=0x5f, .sp=0xe7, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xe61e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe61f, .a=0x87, .x=0x3c, .y=0x5f, .sp=0xe6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x87}, {.addr=0xe61e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe61e, .value=0x2d, .type=IO_READ},
        {.addr=0xe61f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x4992, .a=0xa8, .x=0x6c, .y=0x61, .sp=0x93, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x4992, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4993, .a=0xa8, .x=0x6c, .y=0x61, .sp=0x92, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xa8}, {.addr=0x4992, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4992, .value=0x2d, .type=IO_READ},
        {.addr=0x4993, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x8fc0, .a=0x97, .x=0x9c, .y=0xe6, .sp=0x56, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x8fc0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8fc1, .a=0x97, .x=0x9c, .y=0xe6, .sp=0x55, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x97}, {.addr=0x8fc0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8fc0, .value=0x2d, .type=IO_READ},
        {.addr=0x8fc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0253) {
    const struct CPU_State initial_cpu = {.pc=0x23d3, .a=0xc3, .x=0x1d, .y=0x84, .sp=0x27, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x23d3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x23d4, .a=0xc3, .x=0x1d, .y=0x84, .sp=0x26, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xc3}, {.addr=0x23d3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x23d3, .value=0x2d, .type=IO_READ},
        {.addr=0x23d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x5772, .a=0x97, .x=0xc8, .y=0xac, .sp=0xfb, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x5772, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5773, .a=0x97, .x=0xc8, .y=0xac, .sp=0xfa, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x97}, {.addr=0x5772, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5772, .value=0x2d, .type=IO_READ},
        {.addr=0x5773, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0255) {
    const struct CPU_State initial_cpu = {.pc=0x69a3, .a=0x44, .x=0x9a, .y=0x4c, .sp=0x4d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x69a3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x69a4, .a=0x44, .x=0x9a, .y=0x4c, .sp=0x4c, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x44}, {.addr=0x69a3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x69a3, .value=0x2d, .type=IO_READ},
        {.addr=0x69a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xf1a5, .a=0x07, .x=0x41, .y=0x4d, .sp=0xb2, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0xf1a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf1a6, .a=0x07, .x=0x41, .y=0x4d, .sp=0xb1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x07}, {.addr=0xf1a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf1a5, .value=0x2d, .type=IO_READ},
        {.addr=0xf1a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x6d44, .a=0x1a, .x=0xf1, .y=0xff, .sp=0x52, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x6d44, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6d45, .a=0x1a, .x=0xf1, .y=0xff, .sp=0x51, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x1a}, {.addr=0x6d44, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6d44, .value=0x2d, .type=IO_READ},
        {.addr=0x6d45, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0258) {
    const struct CPU_State initial_cpu = {.pc=0xa8a5, .a=0x1e, .x=0x04, .y=0x1d, .sp=0xde, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0xa8a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa8a6, .a=0x1e, .x=0x04, .y=0x1d, .sp=0xdd, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x1e}, {.addr=0xa8a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa8a5, .value=0x2d, .type=IO_READ},
        {.addr=0xa8a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0259) {
    const struct CPU_State initial_cpu = {.pc=0xe8f6, .a=0xb0, .x=0xcc, .y=0x59, .sp=0x72, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xe8f6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe8f7, .a=0xb0, .x=0xcc, .y=0x59, .sp=0x71, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xb0}, {.addr=0xe8f6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe8f6, .value=0x2d, .type=IO_READ},
        {.addr=0xe8f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xa3dc, .a=0xdf, .x=0x8b, .y=0x6b, .sp=0x54, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xa3dc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa3dd, .a=0xdf, .x=0x8b, .y=0x6b, .sp=0x53, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xdf}, {.addr=0xa3dc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa3dc, .value=0x2d, .type=IO_READ},
        {.addr=0xa3dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_025B) {
    const struct CPU_State initial_cpu = {.pc=0xb0d3, .a=0xff, .x=0x7c, .y=0x51, .sp=0xb5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0xb0d3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb0d4, .a=0xff, .x=0x7c, .y=0x51, .sp=0xb4, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xff}, {.addr=0xb0d3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb0d3, .value=0x2d, .type=IO_READ},
        {.addr=0xb0d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd156, .a=0x92, .x=0xef, .y=0x59, .sp=0xc2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0xd156, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd157, .a=0x92, .x=0xef, .y=0x59, .sp=0xc1, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x92}, {.addr=0xd156, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd156, .value=0x2d, .type=IO_READ},
        {.addr=0xd157, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_025D) {
    const struct CPU_State initial_cpu = {.pc=0x1879, .a=0xd7, .x=0xec, .y=0xa0, .sp=0x5b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x1879, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x187a, .a=0xd7, .x=0xec, .y=0xa0, .sp=0x5a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xd7}, {.addr=0x1879, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1879, .value=0x2d, .type=IO_READ},
        {.addr=0x187a, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x7609, .a=0xa9, .x=0xe0, .y=0xa1, .sp=0xab, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x7609, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x760a, .a=0xa9, .x=0xe0, .y=0xa1, .sp=0xaa, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xa9}, {.addr=0x7609, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7609, .value=0x2d, .type=IO_READ},
        {.addr=0x760a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x489e, .a=0x43, .x=0xde, .y=0xf9, .sp=0x4b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x489e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x489f, .a=0x43, .x=0xde, .y=0xf9, .sp=0x4a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x43}, {.addr=0x489e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x489e, .value=0x2d, .type=IO_READ},
        {.addr=0x489f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0260) {
    const struct CPU_State initial_cpu = {.pc=0x9d77, .a=0x20, .x=0xff, .y=0xf2, .sp=0xb0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x9d77, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9d78, .a=0x20, .x=0xff, .y=0xf2, .sp=0xaf, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x20}, {.addr=0x9d77, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9d77, .value=0x2d, .type=IO_READ},
        {.addr=0x9d78, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0261) {
    const struct CPU_State initial_cpu = {.pc=0x1e68, .a=0x22, .x=0x5f, .y=0x92, .sp=0xd3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x1e68, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1e69, .a=0x22, .x=0x5f, .y=0x92, .sp=0xd2, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x22}, {.addr=0x1e68, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1e68, .value=0x2d, .type=IO_READ},
        {.addr=0x1e69, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0262) {
    const struct CPU_State initial_cpu = {.pc=0xb37d, .a=0x18, .x=0x77, .y=0xb4, .sp=0x9d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0xb37d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb37e, .a=0x18, .x=0x77, .y=0xb4, .sp=0x9c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x18}, {.addr=0xb37d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb37d, .value=0x2d, .type=IO_READ},
        {.addr=0xb37e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x63a0, .a=0xcd, .x=0xac, .y=0x80, .sp=0x21, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x63a0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x63a1, .a=0xcd, .x=0xac, .y=0x80, .sp=0x20, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xcd}, {.addr=0x63a0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x63a0, .value=0x2d, .type=IO_READ},
        {.addr=0x63a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x69f9, .a=0x03, .x=0x23, .y=0xce, .sp=0xc4, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x69f9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x69fa, .a=0x03, .x=0x23, .y=0xce, .sp=0xc3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x03}, {.addr=0x69f9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x69f9, .value=0x2d, .type=IO_READ},
        {.addr=0x69fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0265) {
    const struct CPU_State initial_cpu = {.pc=0xde2c, .a=0x5c, .x=0x9a, .y=0x02, .sp=0x34, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0xde2c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xde2d, .a=0x5c, .x=0x9a, .y=0x02, .sp=0x33, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x5c}, {.addr=0xde2c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xde2c, .value=0x2d, .type=IO_READ},
        {.addr=0xde2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0266) {
    const struct CPU_State initial_cpu = {.pc=0xa74c, .a=0xd4, .x=0xb1, .y=0x95, .sp=0xb4, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xa74c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa74d, .a=0xd4, .x=0xb1, .y=0x95, .sp=0xb3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xd4}, {.addr=0xa74c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa74c, .value=0x2d, .type=IO_READ},
        {.addr=0xa74d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0267) {
    const struct CPU_State initial_cpu = {.pc=0x3c23, .a=0x60, .x=0x05, .y=0x88, .sp=0xca, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x3c23, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3c24, .a=0x60, .x=0x05, .y=0x88, .sp=0xc9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x60}, {.addr=0x3c23, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3c23, .value=0x2d, .type=IO_READ},
        {.addr=0x3c24, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x1ba3, .a=0xac, .x=0xe3, .y=0x48, .sp=0x9b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x1ba3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1ba4, .a=0xac, .x=0xe3, .y=0x48, .sp=0x9a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xac}, {.addr=0x1ba3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1ba3, .value=0x2d, .type=IO_READ},
        {.addr=0x1ba4, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0269) {
    const struct CPU_State initial_cpu = {.pc=0x2c36, .a=0xc9, .x=0x1b, .y=0xfd, .sp=0x6c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x2c36, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2c37, .a=0xc9, .x=0x1b, .y=0xfd, .sp=0x6b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xc9}, {.addr=0x2c36, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2c36, .value=0x2d, .type=IO_READ},
        {.addr=0x2c37, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_026A) {
    const struct CPU_State initial_cpu = {.pc=0xaac5, .a=0xeb, .x=0x64, .y=0x20, .sp=0xb1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xaac5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaac6, .a=0xeb, .x=0x64, .y=0x20, .sp=0xb0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xeb}, {.addr=0xaac5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaac5, .value=0x2d, .type=IO_READ},
        {.addr=0xaac6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb224, .a=0x68, .x=0x86, .y=0x4b, .sp=0x56, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xb224, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb225, .a=0x68, .x=0x86, .y=0x4b, .sp=0x55, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x68}, {.addr=0xb224, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb224, .value=0x2d, .type=IO_READ},
        {.addr=0xb225, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_026C) {
    const struct CPU_State initial_cpu = {.pc=0xbb8e, .a=0xa4, .x=0xd4, .y=0xa2, .sp=0x09, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0xbb8e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbb8f, .a=0xa4, .x=0xd4, .y=0xa2, .sp=0x08, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xa4}, {.addr=0xbb8e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbb8e, .value=0x2d, .type=IO_READ},
        {.addr=0xbb8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_026D) {
    const struct CPU_State initial_cpu = {.pc=0xe737, .a=0x23, .x=0x94, .y=0xca, .sp=0x0a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xe737, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe738, .a=0x23, .x=0x94, .y=0xca, .sp=0x09, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x23}, {.addr=0xe737, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe737, .value=0x2d, .type=IO_READ},
        {.addr=0xe738, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x6ba0, .a=0xb3, .x=0x8f, .y=0xeb, .sp=0x68, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x6ba0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6ba1, .a=0xb3, .x=0x8f, .y=0xeb, .sp=0x67, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xb3}, {.addr=0x6ba0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6ba0, .value=0x2d, .type=IO_READ},
        {.addr=0x6ba1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_026F) {
    const struct CPU_State initial_cpu = {.pc=0x96f6, .a=0x4b, .x=0x12, .y=0x35, .sp=0x5e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x96f6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x96f7, .a=0x4b, .x=0x12, .y=0x35, .sp=0x5d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x4b}, {.addr=0x96f6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x96f6, .value=0x2d, .type=IO_READ},
        {.addr=0x96f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x5b82, .a=0x8b, .x=0x1e, .y=0x3c, .sp=0x67, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x5b82, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5b83, .a=0x8b, .x=0x1e, .y=0x3c, .sp=0x66, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x8b}, {.addr=0x5b82, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5b82, .value=0x2d, .type=IO_READ},
        {.addr=0x5b83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x4c4c, .a=0xed, .x=0x81, .y=0x3a, .sp=0xf4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x4c4c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4c4d, .a=0xed, .x=0x81, .y=0x3a, .sp=0xf3, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xed}, {.addr=0x4c4c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4c4c, .value=0x2d, .type=IO_READ},
        {.addr=0x4c4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0272) {
    const struct CPU_State initial_cpu = {.pc=0x2ed6, .a=0x0e, .x=0x1c, .y=0x88, .sp=0xb4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x2ed6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2ed7, .a=0x0e, .x=0x1c, .y=0x88, .sp=0xb3, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x0e}, {.addr=0x2ed6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2ed6, .value=0x2d, .type=IO_READ},
        {.addr=0x2ed7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x404e, .a=0x13, .x=0x8d, .y=0x80, .sp=0x39, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x404e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x404f, .a=0x13, .x=0x8d, .y=0x80, .sp=0x38, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x13}, {.addr=0x404e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x404e, .value=0x2d, .type=IO_READ},
        {.addr=0x404f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0274) {
    const struct CPU_State initial_cpu = {.pc=0xc315, .a=0x4d, .x=0x51, .y=0x5f, .sp=0xb1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xc315, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc316, .a=0x4d, .x=0x51, .y=0x5f, .sp=0xb0, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x4d}, {.addr=0xc315, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc315, .value=0x2d, .type=IO_READ},
        {.addr=0xc316, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x2b4a, .a=0x6f, .x=0x0a, .y=0x95, .sp=0x01, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x2b4a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2b4b, .a=0x6f, .x=0x0a, .y=0x95, .sp=0x00, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x6f}, {.addr=0x2b4a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2b4a, .value=0x2d, .type=IO_READ},
        {.addr=0x2b4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x9094, .a=0x12, .x=0xe0, .y=0xe9, .sp=0x7d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x9094, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9095, .a=0x12, .x=0xe0, .y=0xe9, .sp=0x7c, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x12}, {.addr=0x9094, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9094, .value=0x2d, .type=IO_READ},
        {.addr=0x9095, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x9064, .a=0x7e, .x=0x65, .y=0x66, .sp=0x8b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x9064, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9065, .a=0x7e, .x=0x65, .y=0x66, .sp=0x8a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x7e}, {.addr=0x9064, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9064, .value=0x2d, .type=IO_READ},
        {.addr=0x9065, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0278) {
    const struct CPU_State initial_cpu = {.pc=0x40a8, .a=0xbf, .x=0x87, .y=0x41, .sp=0x51, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0x40a8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x40a9, .a=0xbf, .x=0x87, .y=0x41, .sp=0x50, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xbf}, {.addr=0x40a8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x40a8, .value=0x2d, .type=IO_READ},
        {.addr=0x40a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0279) {
    const struct CPU_State initial_cpu = {.pc=0x9e2f, .a=0xfd, .x=0xb2, .y=0xa5, .sp=0x63, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x9e2f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9e30, .a=0xfd, .x=0xb2, .y=0xa5, .sp=0x62, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xfd}, {.addr=0x9e2f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9e2f, .value=0x2d, .type=IO_READ},
        {.addr=0x9e30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x7343, .a=0x37, .x=0xdb, .y=0x32, .sp=0x9d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0x7343, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7344, .a=0x37, .x=0xdb, .y=0x32, .sp=0x9c, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x37}, {.addr=0x7343, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7343, .value=0x2d, .type=IO_READ},
        {.addr=0x7344, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_027B) {
    const struct CPU_State initial_cpu = {.pc=0xe421, .a=0x7f, .x=0x17, .y=0x52, .sp=0xad, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0xe421, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe422, .a=0x7f, .x=0x17, .y=0x52, .sp=0xac, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x7f}, {.addr=0xe421, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe421, .value=0x2d, .type=IO_READ},
        {.addr=0xe422, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_027C) {
    const struct CPU_State initial_cpu = {.pc=0xf656, .a=0x7c, .x=0x09, .y=0x22, .sp=0x3e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xf656, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf657, .a=0x7c, .x=0x09, .y=0x22, .sp=0x3d, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x7c}, {.addr=0xf656, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf656, .value=0x2d, .type=IO_READ},
        {.addr=0xf657, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_027D) {
    const struct CPU_State initial_cpu = {.pc=0xe303, .a=0x54, .x=0xc1, .y=0x44, .sp=0x34, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0xe303, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe304, .a=0x54, .x=0xc1, .y=0x44, .sp=0x33, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x54}, {.addr=0xe303, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe303, .value=0x2d, .type=IO_READ},
        {.addr=0xe304, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_027E) {
    const struct CPU_State initial_cpu = {.pc=0xf443, .a=0xb9, .x=0x16, .y=0x29, .sp=0x00, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xf443, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf444, .a=0xb9, .x=0x16, .y=0x29, .sp=0xff, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xb9}, {.addr=0xf443, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf443, .value=0x2d, .type=IO_READ},
        {.addr=0xf444, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_027F) {
    const struct CPU_State initial_cpu = {.pc=0x4063, .a=0x21, .x=0x34, .y=0x0d, .sp=0xbe, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0x4063, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4064, .a=0x21, .x=0x34, .y=0x0d, .sp=0xbd, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x21}, {.addr=0x4063, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4063, .value=0x2d, .type=IO_READ},
        {.addr=0x4064, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0280) {
    const struct CPU_State initial_cpu = {.pc=0x0c94, .a=0x62, .x=0xb9, .y=0xe7, .sp=0x20, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x0c94, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0c95, .a=0x62, .x=0xb9, .y=0xe7, .sp=0x1f, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x62}, {.addr=0x0c94, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0c94, .value=0x2d, .type=IO_READ},
        {.addr=0x0c95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x70f3, .a=0xfb, .x=0xd4, .y=0xf0, .sp=0x28, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x70f3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x70f4, .a=0xfb, .x=0xd4, .y=0xf0, .sp=0x27, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xfb}, {.addr=0x70f3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x70f3, .value=0x2d, .type=IO_READ},
        {.addr=0x70f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x566c, .a=0x07, .x=0x5c, .y=0x0d, .sp=0x9d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0x566c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x566d, .a=0x07, .x=0x5c, .y=0x0d, .sp=0x9c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x07}, {.addr=0x566c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x566c, .value=0x2d, .type=IO_READ},
        {.addr=0x566d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0283) {
    const struct CPU_State initial_cpu = {.pc=0xf2dd, .a=0x8d, .x=0x3d, .y=0xd2, .sp=0xa5, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xf2dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf2de, .a=0x8d, .x=0x3d, .y=0xd2, .sp=0xa4, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x8d}, {.addr=0xf2dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf2dd, .value=0x2d, .type=IO_READ},
        {.addr=0xf2de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0284) {
    const struct CPU_State initial_cpu = {.pc=0xbc00, .a=0x03, .x=0x94, .y=0x73, .sp=0x82, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xbc00, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbc01, .a=0x03, .x=0x94, .y=0x73, .sp=0x81, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x03}, {.addr=0xbc00, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbc00, .value=0x2d, .type=IO_READ},
        {.addr=0xbc01, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0285) {
    const struct CPU_State initial_cpu = {.pc=0x57d7, .a=0xa8, .x=0xd4, .y=0xb5, .sp=0x2f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x57d7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x57d8, .a=0xa8, .x=0xd4, .y=0xb5, .sp=0x2e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xa8}, {.addr=0x57d7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x57d7, .value=0x2d, .type=IO_READ},
        {.addr=0x57d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0286) {
    const struct CPU_State initial_cpu = {.pc=0x068a, .a=0x8b, .x=0x90, .y=0x6f, .sp=0x8c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x068a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x068b, .a=0x8b, .x=0x90, .y=0x6f, .sp=0x8b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x8b}, {.addr=0x068a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x068a, .value=0x2d, .type=IO_READ},
        {.addr=0x068b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0287) {
    const struct CPU_State initial_cpu = {.pc=0xdf44, .a=0x16, .x=0xa6, .y=0x41, .sp=0x9c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0xdf44, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdf45, .a=0x16, .x=0xa6, .y=0x41, .sp=0x9b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x16}, {.addr=0xdf44, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdf44, .value=0x2d, .type=IO_READ},
        {.addr=0xdf45, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0288) {
    const struct CPU_State initial_cpu = {.pc=0x9114, .a=0x02, .x=0x84, .y=0x1e, .sp=0xd8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x9114, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9115, .a=0x02, .x=0x84, .y=0x1e, .sp=0xd7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x02}, {.addr=0x9114, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9114, .value=0x2d, .type=IO_READ},
        {.addr=0x9115, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0289) {
    const struct CPU_State initial_cpu = {.pc=0xd599, .a=0x53, .x=0x88, .y=0x74, .sp=0xd2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xd599, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd59a, .a=0x53, .x=0x88, .y=0x74, .sp=0xd1, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x53}, {.addr=0xd599, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd599, .value=0x2d, .type=IO_READ},
        {.addr=0xd59a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_028A) {
    const struct CPU_State initial_cpu = {.pc=0x0443, .a=0xf3, .x=0x40, .y=0x68, .sp=0xd6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x0443, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0444, .a=0xf3, .x=0x40, .y=0x68, .sp=0xd5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xf3}, {.addr=0x0443, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0443, .value=0x2d, .type=IO_READ},
        {.addr=0x0444, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x2722, .a=0xc1, .x=0x69, .y=0xd6, .sp=0x8c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x2722, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2723, .a=0xc1, .x=0x69, .y=0xd6, .sp=0x8b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xc1}, {.addr=0x2722, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2722, .value=0x2d, .type=IO_READ},
        {.addr=0x2723, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x88b7, .a=0x72, .x=0xcb, .y=0xab, .sp=0x9a, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x88b7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x88b8, .a=0x72, .x=0xcb, .y=0xab, .sp=0x99, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x72}, {.addr=0x88b7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x88b7, .value=0x2d, .type=IO_READ},
        {.addr=0x88b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_028D) {
    const struct CPU_State initial_cpu = {.pc=0x9c4d, .a=0x57, .x=0x70, .y=0x7a, .sp=0x36, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x9c4d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9c4e, .a=0x57, .x=0x70, .y=0x7a, .sp=0x35, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x57}, {.addr=0x9c4d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9c4d, .value=0x2d, .type=IO_READ},
        {.addr=0x9c4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_028E) {
    const struct CPU_State initial_cpu = {.pc=0x8dd5, .a=0x84, .x=0xa9, .y=0xec, .sp=0xd2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x8dd5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8dd6, .a=0x84, .x=0xa9, .y=0xec, .sp=0xd1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x84}, {.addr=0x8dd5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8dd5, .value=0x2d, .type=IO_READ},
        {.addr=0x8dd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_028F) {
    const struct CPU_State initial_cpu = {.pc=0x7397, .a=0x4b, .x=0x57, .y=0x2a, .sp=0xcf, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x7397, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7398, .a=0x4b, .x=0x57, .y=0x2a, .sp=0xce, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x4b}, {.addr=0x7397, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7397, .value=0x2d, .type=IO_READ},
        {.addr=0x7398, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0290) {
    const struct CPU_State initial_cpu = {.pc=0x7ae2, .a=0xfa, .x=0x1f, .y=0x4d, .sp=0x8e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x7ae2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7ae3, .a=0xfa, .x=0x1f, .y=0x4d, .sp=0x8d, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xfa}, {.addr=0x7ae2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7ae2, .value=0x2d, .type=IO_READ},
        {.addr=0x7ae3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x5b47, .a=0x19, .x=0x51, .y=0x04, .sp=0xb3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x5b47, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5b48, .a=0x19, .x=0x51, .y=0x04, .sp=0xb2, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x19}, {.addr=0x5b47, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5b47, .value=0x2d, .type=IO_READ},
        {.addr=0x5b48, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x4246, .a=0xb7, .x=0xe9, .y=0x78, .sp=0x10, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x4246, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4247, .a=0xb7, .x=0xe9, .y=0x78, .sp=0x0f, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xb7}, {.addr=0x4246, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4246, .value=0x2d, .type=IO_READ},
        {.addr=0x4247, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0293) {
    const struct CPU_State initial_cpu = {.pc=0x6bfe, .a=0x62, .x=0xa0, .y=0x57, .sp=0xef, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x6bfe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6bff, .a=0x62, .x=0xa0, .y=0x57, .sp=0xee, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x62}, {.addr=0x6bfe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6bfe, .value=0x2d, .type=IO_READ},
        {.addr=0x6bff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0294) {
    const struct CPU_State initial_cpu = {.pc=0xd769, .a=0x8e, .x=0x33, .y=0x35, .sp=0xa3, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xd769, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd76a, .a=0x8e, .x=0x33, .y=0x35, .sp=0xa2, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x8e}, {.addr=0xd769, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd769, .value=0x2d, .type=IO_READ},
        {.addr=0xd76a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x0065, .a=0x1d, .x=0x7f, .y=0xe7, .sp=0x67, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x2d}, {.addr=0x0167, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0066, .a=0x1d, .x=0x7f, .y=0xe7, .sp=0x66, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x2d}, {.addr=0x0167, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0065, .value=0x2d, .type=IO_READ},
        {.addr=0x0066, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0296) {
    const struct CPU_State initial_cpu = {.pc=0x53cc, .a=0xeb, .x=0x55, .y=0xb0, .sp=0x8a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x53cc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x53cd, .a=0xeb, .x=0x55, .y=0xb0, .sp=0x89, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xeb}, {.addr=0x53cc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x53cc, .value=0x2d, .type=IO_READ},
        {.addr=0x53cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0297) {
    const struct CPU_State initial_cpu = {.pc=0xeda5, .a=0x86, .x=0xfb, .y=0x41, .sp=0xe8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0xeda5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeda6, .a=0x86, .x=0xfb, .y=0x41, .sp=0xe7, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x86}, {.addr=0xeda5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeda5, .value=0x2d, .type=IO_READ},
        {.addr=0xeda6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0298) {
    const struct CPU_State initial_cpu = {.pc=0xa287, .a=0x99, .x=0xaa, .y=0xc3, .sp=0x53, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xa287, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa288, .a=0x99, .x=0xaa, .y=0xc3, .sp=0x52, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x99}, {.addr=0xa287, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa287, .value=0x2d, .type=IO_READ},
        {.addr=0xa288, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x3423, .a=0xb5, .x=0x8b, .y=0x17, .sp=0x5b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x3423, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3424, .a=0xb5, .x=0x8b, .y=0x17, .sp=0x5a, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xb5}, {.addr=0x3423, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3423, .value=0x2d, .type=IO_READ},
        {.addr=0x3424, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_029A) {
    const struct CPU_State initial_cpu = {.pc=0x25af, .a=0xe3, .x=0x37, .y=0x59, .sp=0x46, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x25af, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x25b0, .a=0xe3, .x=0x37, .y=0x59, .sp=0x45, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xe3}, {.addr=0x25af, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x25af, .value=0x2d, .type=IO_READ},
        {.addr=0x25b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_029B) {
    const struct CPU_State initial_cpu = {.pc=0xf4bc, .a=0x28, .x=0x0c, .y=0x31, .sp=0x3f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0xf4bc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf4bd, .a=0x28, .x=0x0c, .y=0x31, .sp=0x3e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x28}, {.addr=0xf4bc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf4bc, .value=0x2d, .type=IO_READ},
        {.addr=0xf4bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc0d7, .a=0x30, .x=0x3c, .y=0x2a, .sp=0xa0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0xc0d7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc0d8, .a=0x30, .x=0x3c, .y=0x2a, .sp=0x9f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x30}, {.addr=0xc0d7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc0d7, .value=0x2d, .type=IO_READ},
        {.addr=0xc0d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_029D) {
    const struct CPU_State initial_cpu = {.pc=0x7846, .a=0x79, .x=0x4a, .y=0xcd, .sp=0x81, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x7846, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7847, .a=0x79, .x=0x4a, .y=0xcd, .sp=0x80, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x79}, {.addr=0x7846, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7846, .value=0x2d, .type=IO_READ},
        {.addr=0x7847, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x6811, .a=0x43, .x=0x7d, .y=0x06, .sp=0x63, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x6811, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6812, .a=0x43, .x=0x7d, .y=0x06, .sp=0x62, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x43}, {.addr=0x6811, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6811, .value=0x2d, .type=IO_READ},
        {.addr=0x6812, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x7a82, .a=0x02, .x=0x94, .y=0x9e, .sp=0x58, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x7a82, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7a83, .a=0x02, .x=0x94, .y=0x9e, .sp=0x57, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x02}, {.addr=0x7a82, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7a82, .value=0x2d, .type=IO_READ},
        {.addr=0x7a83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x3810, .a=0x37, .x=0x0d, .y=0x4c, .sp=0x09, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x3810, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3811, .a=0x37, .x=0x0d, .y=0x4c, .sp=0x08, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x37}, {.addr=0x3810, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3810, .value=0x2d, .type=IO_READ},
        {.addr=0x3811, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x715b, .a=0x84, .x=0x0c, .y=0x32, .sp=0x00, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x715b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x715c, .a=0x84, .x=0x0c, .y=0x32, .sp=0xff, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x84}, {.addr=0x715b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x715b, .value=0x2d, .type=IO_READ},
        {.addr=0x715c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x428d, .a=0xbb, .x=0x7f, .y=0xe4, .sp=0x8e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x428d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x428e, .a=0xbb, .x=0x7f, .y=0xe4, .sp=0x8d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xbb}, {.addr=0x428d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x428d, .value=0x2d, .type=IO_READ},
        {.addr=0x428e, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x458e, .a=0xbc, .x=0x2a, .y=0x11, .sp=0xc5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x458e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x458f, .a=0xbc, .x=0x2a, .y=0x11, .sp=0xc4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xbc}, {.addr=0x458e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x458e, .value=0x2d, .type=IO_READ},
        {.addr=0x458f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x4c74, .a=0x4c, .x=0x48, .y=0xae, .sp=0xee, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x4c74, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4c75, .a=0x4c, .x=0x48, .y=0xae, .sp=0xed, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x4c}, {.addr=0x4c74, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4c74, .value=0x2d, .type=IO_READ},
        {.addr=0x4c75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x0485, .a=0x1a, .x=0xf4, .y=0x1e, .sp=0x9e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x0485, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0486, .a=0x1a, .x=0xf4, .y=0x1e, .sp=0x9d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x1a}, {.addr=0x0485, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0485, .value=0x2d, .type=IO_READ},
        {.addr=0x0486, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x0bbe, .a=0xf2, .x=0x70, .y=0xea, .sp=0x69, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x0bbe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0bbf, .a=0xf2, .x=0x70, .y=0xea, .sp=0x68, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xf2}, {.addr=0x0bbe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0bbe, .value=0x2d, .type=IO_READ},
        {.addr=0x0bbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x50f9, .a=0x9f, .x=0x90, .y=0x03, .sp=0x43, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x50f9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x50fa, .a=0x9f, .x=0x90, .y=0x03, .sp=0x42, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x9f}, {.addr=0x50f9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x50f9, .value=0x2d, .type=IO_READ},
        {.addr=0x50fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xaf86, .a=0xb1, .x=0xff, .y=0x62, .sp=0x51, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xaf86, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaf87, .a=0xb1, .x=0xff, .y=0x62, .sp=0x50, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xb1}, {.addr=0xaf86, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaf86, .value=0x2d, .type=IO_READ},
        {.addr=0xaf87, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x5a51, .a=0xd2, .x=0xd8, .y=0x94, .sp=0xd8, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x5a51, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5a52, .a=0xd2, .x=0xd8, .y=0x94, .sp=0xd7, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xd2}, {.addr=0x5a51, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5a51, .value=0x2d, .type=IO_READ},
        {.addr=0x5a52, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x2da9, .a=0x31, .x=0xa7, .y=0xe0, .sp=0x4e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x2da9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2daa, .a=0x31, .x=0xa7, .y=0xe0, .sp=0x4d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x31}, {.addr=0x2da9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2da9, .value=0x2d, .type=IO_READ},
        {.addr=0x2daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x57bb, .a=0x67, .x=0x4f, .y=0x39, .sp=0xed, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x57bb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x57bc, .a=0x67, .x=0x4f, .y=0x39, .sp=0xec, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x67}, {.addr=0x57bb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x57bb, .value=0x2d, .type=IO_READ},
        {.addr=0x57bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x75f5, .a=0xb2, .x=0x18, .y=0x52, .sp=0x63, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x75f5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x75f6, .a=0xb2, .x=0x18, .y=0x52, .sp=0x62, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xb2}, {.addr=0x75f5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x75f5, .value=0x2d, .type=IO_READ},
        {.addr=0x75f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xe369, .a=0xe4, .x=0xa2, .y=0xe1, .sp=0x56, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xe369, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe36a, .a=0xe4, .x=0xa2, .y=0xe1, .sp=0x55, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xe4}, {.addr=0xe369, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe369, .value=0x2d, .type=IO_READ},
        {.addr=0xe36a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xbc80, .a=0x6d, .x=0x10, .y=0x8c, .sp=0x89, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xbc80, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbc81, .a=0x6d, .x=0x10, .y=0x8c, .sp=0x88, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x6d}, {.addr=0xbc80, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbc80, .value=0x2d, .type=IO_READ},
        {.addr=0xbc81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x56ec, .a=0x53, .x=0x5a, .y=0x8d, .sp=0x4c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x56ec, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x56ed, .a=0x53, .x=0x5a, .y=0x8d, .sp=0x4b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x53}, {.addr=0x56ec, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x56ec, .value=0x2d, .type=IO_READ},
        {.addr=0x56ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x15ea, .a=0xde, .x=0xe0, .y=0x60, .sp=0xaf, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x15ea, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x15eb, .a=0xde, .x=0xe0, .y=0x60, .sp=0xae, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xde}, {.addr=0x15ea, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x15ea, .value=0x2d, .type=IO_READ},
        {.addr=0x15eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xb730, .a=0x41, .x=0x9d, .y=0x8e, .sp=0x99, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0xb730, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb731, .a=0x41, .x=0x9d, .y=0x8e, .sp=0x98, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x41}, {.addr=0xb730, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb730, .value=0x2d, .type=IO_READ},
        {.addr=0xb731, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x96fc, .a=0x92, .x=0xdf, .y=0xed, .sp=0xb8, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x96fc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x96fd, .a=0x92, .x=0xdf, .y=0xed, .sp=0xb7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x92}, {.addr=0x96fc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x96fc, .value=0x2d, .type=IO_READ},
        {.addr=0x96fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x6728, .a=0x47, .x=0xe0, .y=0xd5, .sp=0x18, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x6728, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6729, .a=0x47, .x=0xe0, .y=0xd5, .sp=0x17, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x47}, {.addr=0x6728, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6728, .value=0x2d, .type=IO_READ},
        {.addr=0x6729, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x55bc, .a=0x72, .x=0xcb, .y=0x6a, .sp=0x12, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x55bc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x55bd, .a=0x72, .x=0xcb, .y=0x6a, .sp=0x11, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x72}, {.addr=0x55bc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x55bc, .value=0x2d, .type=IO_READ},
        {.addr=0x55bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x9b19, .a=0x41, .x=0x6f, .y=0x87, .sp=0xf1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x9b19, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9b1a, .a=0x41, .x=0x6f, .y=0x87, .sp=0xf0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x41}, {.addr=0x9b19, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9b19, .value=0x2d, .type=IO_READ},
        {.addr=0x9b1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x9fea, .a=0x7a, .x=0xef, .y=0x4d, .sp=0xfe, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x9fea, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9feb, .a=0x7a, .x=0xef, .y=0x4d, .sp=0xfd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x7a}, {.addr=0x9fea, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9fea, .value=0x2d, .type=IO_READ},
        {.addr=0x9feb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x876e, .a=0x40, .x=0x56, .y=0xd8, .sp=0xae, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x876e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x876f, .a=0x40, .x=0x56, .y=0xd8, .sp=0xad, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x40}, {.addr=0x876e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x876e, .value=0x2d, .type=IO_READ},
        {.addr=0x876f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x03bb, .a=0xc7, .x=0x40, .y=0x79, .sp=0xb0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x03bb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x03bc, .a=0xc7, .x=0x40, .y=0x79, .sp=0xaf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc7}, {.addr=0x03bb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x03bb, .value=0x2d, .type=IO_READ},
        {.addr=0x03bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x7df3, .a=0xf1, .x=0xb7, .y=0xff, .sp=0x4a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x7df3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7df4, .a=0xf1, .x=0xb7, .y=0xff, .sp=0x49, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xf1}, {.addr=0x7df3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7df3, .value=0x2d, .type=IO_READ},
        {.addr=0x7df4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xa404, .a=0x2a, .x=0x54, .y=0x7e, .sp=0x86, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xa404, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa405, .a=0x2a, .x=0x54, .y=0x7e, .sp=0x85, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x2a}, {.addr=0xa404, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa404, .value=0x2d, .type=IO_READ},
        {.addr=0xa405, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc7a0, .a=0x18, .x=0x8e, .y=0x42, .sp=0x6f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xc7a0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc7a1, .a=0x18, .x=0x8e, .y=0x42, .sp=0x6e, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x18}, {.addr=0xc7a0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc7a0, .value=0x2d, .type=IO_READ},
        {.addr=0xc7a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x3e6f, .a=0x07, .x=0x5d, .y=0x5d, .sp=0xe3, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x3e6f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3e70, .a=0x07, .x=0x5d, .y=0x5d, .sp=0xe2, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x07}, {.addr=0x3e6f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3e6f, .value=0x2d, .type=IO_READ},
        {.addr=0x3e70, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x7ead, .a=0xd9, .x=0x78, .y=0x76, .sp=0xa1, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x7ead, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7eae, .a=0xd9, .x=0x78, .y=0x76, .sp=0xa0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xd9}, {.addr=0x7ead, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7ead, .value=0x2d, .type=IO_READ},
        {.addr=0x7eae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xd997, .a=0xeb, .x=0xb7, .y=0x74, .sp=0xa5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xd997, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd998, .a=0xeb, .x=0xb7, .y=0x74, .sp=0xa4, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xeb}, {.addr=0xd997, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd997, .value=0x2d, .type=IO_READ},
        {.addr=0xd998, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x3e8e, .a=0x04, .x=0xc7, .y=0xae, .sp=0x45, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x3e8e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3e8f, .a=0x04, .x=0xc7, .y=0xae, .sp=0x44, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x04}, {.addr=0x3e8e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3e8e, .value=0x2d, .type=IO_READ},
        {.addr=0x3e8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x32f3, .a=0x2c, .x=0xca, .y=0xc6, .sp=0x4b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x32f3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x32f4, .a=0x2c, .x=0xca, .y=0xc6, .sp=0x4a, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x2c}, {.addr=0x32f3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x32f3, .value=0x2d, .type=IO_READ},
        {.addr=0x32f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xd634, .a=0xa2, .x=0x1d, .y=0x4a, .sp=0x44, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0xd634, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd635, .a=0xa2, .x=0x1d, .y=0x4a, .sp=0x43, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xa2}, {.addr=0xd634, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd634, .value=0x2d, .type=IO_READ},
        {.addr=0xd635, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xfc9b, .a=0x97, .x=0x3f, .y=0xc7, .sp=0xa4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xfc9b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfc9c, .a=0x97, .x=0x3f, .y=0xc7, .sp=0xa3, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x97}, {.addr=0xfc9b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfc9b, .value=0x2d, .type=IO_READ},
        {.addr=0xfc9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xf7b4, .a=0xa8, .x=0x86, .y=0x3c, .sp=0x15, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0xf7b4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf7b5, .a=0xa8, .x=0x86, .y=0x3c, .sp=0x14, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xa8}, {.addr=0xf7b4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf7b4, .value=0x2d, .type=IO_READ},
        {.addr=0xf7b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xa757, .a=0xc8, .x=0x24, .y=0x6a, .sp=0x6d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xa757, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa758, .a=0xc8, .x=0x24, .y=0x6a, .sp=0x6c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xc8}, {.addr=0xa757, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa757, .value=0x2d, .type=IO_READ},
        {.addr=0xa758, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2449, .a=0xd0, .x=0x0e, .y=0x11, .sp=0xe2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x2449, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x244a, .a=0xd0, .x=0x0e, .y=0x11, .sp=0xe1, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xd0}, {.addr=0x2449, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2449, .value=0x2d, .type=IO_READ},
        {.addr=0x244a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xc4b8, .a=0xe7, .x=0x20, .y=0x03, .sp=0x04, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xc4b8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc4b9, .a=0xe7, .x=0x20, .y=0x03, .sp=0x03, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xe7}, {.addr=0xc4b8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc4b8, .value=0x2d, .type=IO_READ},
        {.addr=0xc4b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x0b20, .a=0xa6, .x=0x7f, .y=0xd8, .sp=0x8c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x0b20, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0b21, .a=0xa6, .x=0x7f, .y=0xd8, .sp=0x8b, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xa6}, {.addr=0x0b20, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0b20, .value=0x2d, .type=IO_READ},
        {.addr=0x0b21, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7003, .a=0xbb, .x=0x48, .y=0xe1, .sp=0x14, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x7003, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7004, .a=0xbb, .x=0x48, .y=0xe1, .sp=0x13, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xbb}, {.addr=0x7003, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7003, .value=0x2d, .type=IO_READ},
        {.addr=0x7004, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xda39, .a=0x27, .x=0x3e, .y=0x07, .sp=0x55, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xda39, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xda3a, .a=0x27, .x=0x3e, .y=0x07, .sp=0x54, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x27}, {.addr=0xda39, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xda39, .value=0x2d, .type=IO_READ},
        {.addr=0xda3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x6e37, .a=0xde, .x=0xed, .y=0x94, .sp=0xd2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x6e37, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6e38, .a=0xde, .x=0xed, .y=0x94, .sp=0xd1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xde}, {.addr=0x6e37, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6e37, .value=0x2d, .type=IO_READ},
        {.addr=0x6e38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x3e4c, .a=0x4c, .x=0x3c, .y=0x4c, .sp=0x11, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x3e4c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3e4d, .a=0x4c, .x=0x3c, .y=0x4c, .sp=0x10, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x4c}, {.addr=0x3e4c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3e4c, .value=0x2d, .type=IO_READ},
        {.addr=0x3e4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x1ba8, .a=0xa8, .x=0x86, .y=0x86, .sp=0x1e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0x1ba8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1ba9, .a=0xa8, .x=0x86, .y=0x86, .sp=0x1d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xa8}, {.addr=0x1ba8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1ba8, .value=0x2d, .type=IO_READ},
        {.addr=0x1ba9, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x01bd, .a=0x43, .x=0x3c, .y=0xf1, .sp=0x70, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x01bd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x01be, .a=0x43, .x=0x3c, .y=0xf1, .sp=0x6f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x43}, {.addr=0x01bd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x01bd, .value=0x2d, .type=IO_READ},
        {.addr=0x01be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x2cbe, .a=0x6e, .x=0x3f, .y=0x55, .sp=0xf2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0x2cbe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2cbf, .a=0x6e, .x=0x3f, .y=0x55, .sp=0xf1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x6e}, {.addr=0x2cbe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2cbe, .value=0x2d, .type=IO_READ},
        {.addr=0x2cbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x8c01, .a=0x94, .x=0xc1, .y=0xcc, .sp=0x8d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x8c01, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8c02, .a=0x94, .x=0xc1, .y=0xcc, .sp=0x8c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x94}, {.addr=0x8c01, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8c01, .value=0x2d, .type=IO_READ},
        {.addr=0x8c02, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x4a70, .a=0x34, .x=0x3e, .y=0xd5, .sp=0x19, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x4a70, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4a71, .a=0x34, .x=0x3e, .y=0xd5, .sp=0x18, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x34}, {.addr=0x4a70, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4a70, .value=0x2d, .type=IO_READ},
        {.addr=0x4a71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x836f, .a=0xc6, .x=0xed, .y=0x5b, .sp=0xed, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x836f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8370, .a=0xc6, .x=0xed, .y=0x5b, .sp=0xec, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xc6}, {.addr=0x836f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x836f, .value=0x2d, .type=IO_READ},
        {.addr=0x8370, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x8aa4, .a=0x2c, .x=0x81, .y=0x07, .sp=0xa0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x8aa4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8aa5, .a=0x2c, .x=0x81, .y=0x07, .sp=0x9f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x2c}, {.addr=0x8aa4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8aa4, .value=0x2d, .type=IO_READ},
        {.addr=0x8aa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x36c5, .a=0xe3, .x=0xff, .y=0x5a, .sp=0x0a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x36c5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x36c6, .a=0xe3, .x=0xff, .y=0x5a, .sp=0x09, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xe3}, {.addr=0x36c5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x36c5, .value=0x2d, .type=IO_READ},
        {.addr=0x36c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x8224, .a=0x0c, .x=0x04, .y=0x54, .sp=0x67, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x8224, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8225, .a=0x0c, .x=0x04, .y=0x54, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x0c}, {.addr=0x8224, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8224, .value=0x2d, .type=IO_READ},
        {.addr=0x8225, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xd1c8, .a=0x15, .x=0x66, .y=0x8e, .sp=0xea, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xd1c8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd1c9, .a=0x15, .x=0x66, .y=0x8e, .sp=0xe9, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x15}, {.addr=0xd1c8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd1c8, .value=0x2d, .type=IO_READ},
        {.addr=0xd1c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x94eb, .a=0x6b, .x=0x6a, .y=0x0e, .sp=0xd3, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x94eb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x94ec, .a=0x6b, .x=0x6a, .y=0x0e, .sp=0xd2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x6b}, {.addr=0x94eb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x94eb, .value=0x2d, .type=IO_READ},
        {.addr=0x94ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x4395, .a=0x6d, .x=0xbd, .y=0x64, .sp=0x02, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x4395, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4396, .a=0x6d, .x=0xbd, .y=0x64, .sp=0x01, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x6d}, {.addr=0x4395, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4395, .value=0x2d, .type=IO_READ},
        {.addr=0x4396, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x4bea, .a=0xaa, .x=0x46, .y=0x87, .sp=0xb7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x4bea, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4beb, .a=0xaa, .x=0x46, .y=0x87, .sp=0xb6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xaa}, {.addr=0x4bea, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4bea, .value=0x2d, .type=IO_READ},
        {.addr=0x4beb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x85a2, .a=0x33, .x=0xaa, .y=0x56, .sp=0x5b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x85a2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x85a3, .a=0x33, .x=0xaa, .y=0x56, .sp=0x5a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x33}, {.addr=0x85a2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x85a2, .value=0x2d, .type=IO_READ},
        {.addr=0x85a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x65f2, .a=0x6b, .x=0x80, .y=0x6e, .sp=0xd3, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x65f2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x65f3, .a=0x6b, .x=0x80, .y=0x6e, .sp=0xd2, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x6b}, {.addr=0x65f2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x65f2, .value=0x2d, .type=IO_READ},
        {.addr=0x65f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xc6b6, .a=0x52, .x=0x29, .y=0xca, .sp=0x7a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xc6b6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc6b7, .a=0x52, .x=0x29, .y=0xca, .sp=0x79, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x52}, {.addr=0xc6b6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc6b6, .value=0x2d, .type=IO_READ},
        {.addr=0xc6b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x1c08, .a=0xc5, .x=0xc6, .y=0x37, .sp=0x46, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x1c08, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1c09, .a=0xc5, .x=0xc6, .y=0x37, .sp=0x45, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xc5}, {.addr=0x1c08, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1c08, .value=0x2d, .type=IO_READ},
        {.addr=0x1c09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x3c5b, .a=0xb9, .x=0xe2, .y=0x0d, .sp=0x23, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x3c5b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3c5c, .a=0xb9, .x=0xe2, .y=0x0d, .sp=0x22, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xb9}, {.addr=0x3c5b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3c5b, .value=0x2d, .type=IO_READ},
        {.addr=0x3c5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xdb23, .a=0x3d, .x=0xd3, .y=0x97, .sp=0x3c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xdb23, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdb24, .a=0x3d, .x=0xd3, .y=0x97, .sp=0x3b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x3d}, {.addr=0xdb23, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdb23, .value=0x2d, .type=IO_READ},
        {.addr=0xdb24, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xaccb, .a=0xdd, .x=0x7e, .y=0x1e, .sp=0x96, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0xaccb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaccc, .a=0xdd, .x=0x7e, .y=0x1e, .sp=0x95, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xdd}, {.addr=0xaccb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaccb, .value=0x2d, .type=IO_READ},
        {.addr=0xaccc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x5571, .a=0xef, .x=0xb6, .y=0xee, .sp=0x98, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x5571, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5572, .a=0xef, .x=0xb6, .y=0xee, .sp=0x97, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xef}, {.addr=0x5571, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5571, .value=0x2d, .type=IO_READ},
        {.addr=0x5572, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xa0c8, .a=0xb1, .x=0x8d, .y=0xd2, .sp=0x9a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xa0c8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa0c9, .a=0xb1, .x=0x8d, .y=0xd2, .sp=0x99, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xb1}, {.addr=0xa0c8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa0c8, .value=0x2d, .type=IO_READ},
        {.addr=0xa0c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xb0c1, .a=0x8e, .x=0x6e, .y=0xfd, .sp=0x5f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0xb0c1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb0c2, .a=0x8e, .x=0x6e, .y=0xfd, .sp=0x5e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x8e}, {.addr=0xb0c1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb0c1, .value=0x2d, .type=IO_READ},
        {.addr=0xb0c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x0c93, .a=0x04, .x=0xd7, .y=0x8c, .sp=0xab, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x0c93, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0c94, .a=0x04, .x=0xd7, .y=0x8c, .sp=0xaa, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x04}, {.addr=0x0c93, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0c93, .value=0x2d, .type=IO_READ},
        {.addr=0x0c94, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x665f, .a=0x64, .x=0xd5, .y=0xc4, .sp=0xa2, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x665f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6660, .a=0x64, .x=0xd5, .y=0xc4, .sp=0xa1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x64}, {.addr=0x665f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x665f, .value=0x2d, .type=IO_READ},
        {.addr=0x6660, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xf973, .a=0x2b, .x=0xf2, .y=0xfc, .sp=0xc3, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xf973, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf974, .a=0x2b, .x=0xf2, .y=0xfc, .sp=0xc2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x2b}, {.addr=0xf973, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf973, .value=0x2d, .type=IO_READ},
        {.addr=0xf974, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb7cd, .a=0x0a, .x=0x56, .y=0x0a, .sp=0x78, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xb7cd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb7ce, .a=0x0a, .x=0x56, .y=0x0a, .sp=0x77, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x0a}, {.addr=0xb7cd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb7cd, .value=0x2d, .type=IO_READ},
        {.addr=0xb7ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xf03c, .a=0x20, .x=0x7e, .y=0x00, .sp=0xc9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xf03c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf03d, .a=0x20, .x=0x7e, .y=0x00, .sp=0xc8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x20}, {.addr=0xf03c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf03c, .value=0x2d, .type=IO_READ},
        {.addr=0xf03d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xf664, .a=0xdf, .x=0xf2, .y=0xe6, .sp=0x59, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xf664, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf665, .a=0xdf, .x=0xf2, .y=0xe6, .sp=0x58, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xdf}, {.addr=0xf664, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf664, .value=0x2d, .type=IO_READ},
        {.addr=0xf665, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xf984, .a=0x08, .x=0x2d, .y=0x93, .sp=0xbc, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xf984, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf985, .a=0x08, .x=0x2d, .y=0x93, .sp=0xbb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x08}, {.addr=0xf984, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf984, .value=0x2d, .type=IO_READ},
        {.addr=0xf985, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xb05f, .a=0xd6, .x=0x28, .y=0x4f, .sp=0xca, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0xb05f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb060, .a=0xd6, .x=0x28, .y=0x4f, .sp=0xc9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xd6}, {.addr=0xb05f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb05f, .value=0x2d, .type=IO_READ},
        {.addr=0xb060, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x71cd, .a=0xd2, .x=0x2c, .y=0x6e, .sp=0xc0, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x71cd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x71ce, .a=0xd2, .x=0x2c, .y=0x6e, .sp=0xbf, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xd2}, {.addr=0x71cd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x71cd, .value=0x2d, .type=IO_READ},
        {.addr=0x71ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xb37f, .a=0x27, .x=0x15, .y=0xe1, .sp=0xa8, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xb37f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb380, .a=0x27, .x=0x15, .y=0xe1, .sp=0xa7, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x27}, {.addr=0xb37f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb37f, .value=0x2d, .type=IO_READ},
        {.addr=0xb380, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xb717, .a=0xac, .x=0x05, .y=0x52, .sp=0x40, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0xb717, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb718, .a=0xac, .x=0x05, .y=0x52, .sp=0x3f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xac}, {.addr=0xb717, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb717, .value=0x2d, .type=IO_READ},
        {.addr=0xb718, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x7055, .a=0xaf, .x=0xa5, .y=0x37, .sp=0x9d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0x7055, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7056, .a=0xaf, .x=0xa5, .y=0x37, .sp=0x9c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xaf}, {.addr=0x7055, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7055, .value=0x2d, .type=IO_READ},
        {.addr=0x7056, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xf741, .a=0xa6, .x=0xbc, .y=0xd9, .sp=0x89, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xf741, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf742, .a=0xa6, .x=0xbc, .y=0xd9, .sp=0x88, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xa6}, {.addr=0xf741, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf741, .value=0x2d, .type=IO_READ},
        {.addr=0xf742, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x622e, .a=0x5f, .x=0x0c, .y=0x55, .sp=0x59, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x622e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x622f, .a=0x5f, .x=0x0c, .y=0x55, .sp=0x58, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x5f}, {.addr=0x622e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x622e, .value=0x2d, .type=IO_READ},
        {.addr=0x622f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x3158, .a=0xc0, .x=0x83, .y=0x66, .sp=0xcc, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x3158, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3159, .a=0xc0, .x=0x83, .y=0x66, .sp=0xcb, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xc0}, {.addr=0x3158, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3158, .value=0x2d, .type=IO_READ},
        {.addr=0x3159, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x22ad, .a=0xa9, .x=0x39, .y=0x14, .sp=0xf1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x22ad, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x22ae, .a=0xa9, .x=0x39, .y=0x14, .sp=0xf0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xa9}, {.addr=0x22ad, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x22ad, .value=0x2d, .type=IO_READ},
        {.addr=0x22ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x399c, .a=0xa9, .x=0xdb, .y=0xa1, .sp=0x6b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x399c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x399d, .a=0xa9, .x=0xdb, .y=0xa1, .sp=0x6a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xa9}, {.addr=0x399c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x399c, .value=0x2d, .type=IO_READ},
        {.addr=0x399d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xdae3, .a=0x91, .x=0xf2, .y=0x57, .sp=0x84, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xdae3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdae4, .a=0x91, .x=0xf2, .y=0x57, .sp=0x83, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x91}, {.addr=0xdae3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdae3, .value=0x2d, .type=IO_READ},
        {.addr=0xdae4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x968b, .a=0x96, .x=0x17, .y=0xf1, .sp=0x69, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x968b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x968c, .a=0x96, .x=0x17, .y=0xf1, .sp=0x68, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x96}, {.addr=0x968b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x968b, .value=0x2d, .type=IO_READ},
        {.addr=0x968c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x9a4c, .a=0x48, .x=0x94, .y=0x0a, .sp=0xca, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x9a4c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9a4d, .a=0x48, .x=0x94, .y=0x0a, .sp=0xc9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x48}, {.addr=0x9a4c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9a4c, .value=0x2d, .type=IO_READ},
        {.addr=0x9a4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x5860, .a=0x8a, .x=0x67, .y=0xf2, .sp=0xa8, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x5860, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5861, .a=0x8a, .x=0x67, .y=0xf2, .sp=0xa7, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x8a}, {.addr=0x5860, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5860, .value=0x2d, .type=IO_READ},
        {.addr=0x5861, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x1fd0, .a=0xe5, .x=0x99, .y=0xb4, .sp=0x44, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x1fd0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1fd1, .a=0xe5, .x=0x99, .y=0xb4, .sp=0x43, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xe5}, {.addr=0x1fd0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1fd0, .value=0x2d, .type=IO_READ},
        {.addr=0x1fd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xd803, .a=0x6e, .x=0x7d, .y=0x3c, .sp=0x1a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0xd803, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd804, .a=0x6e, .x=0x7d, .y=0x3c, .sp=0x19, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x6e}, {.addr=0xd803, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd803, .value=0x2d, .type=IO_READ},
        {.addr=0xd804, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xdc22, .a=0xcd, .x=0x0f, .y=0xfe, .sp=0x5f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0xdc22, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdc23, .a=0xcd, .x=0x0f, .y=0xfe, .sp=0x5e, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xcd}, {.addr=0xdc22, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdc22, .value=0x2d, .type=IO_READ},
        {.addr=0xdc23, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x6338, .a=0xb0, .x=0x91, .y=0x20, .sp=0x75, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x6338, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0xb0, .x=0x91, .y=0x20, .sp=0x74, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xb0}, {.addr=0x6338, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6338, .value=0x2d, .type=IO_READ},
        {.addr=0x6339, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8c49, .a=0x69, .x=0xe6, .y=0x81, .sp=0x95, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x8c49, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8c4a, .a=0x69, .x=0xe6, .y=0x81, .sp=0x94, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x69}, {.addr=0x8c49, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8c49, .value=0x2d, .type=IO_READ},
        {.addr=0x8c4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x45d0, .a=0x83, .x=0x04, .y=0x4f, .sp=0x27, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x45d0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x45d1, .a=0x83, .x=0x04, .y=0x4f, .sp=0x26, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x83}, {.addr=0x45d0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x45d0, .value=0x2d, .type=IO_READ},
        {.addr=0x45d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x3f51, .a=0xa9, .x=0x32, .y=0xb7, .sp=0x30, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x3f51, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3f52, .a=0xa9, .x=0x32, .y=0xb7, .sp=0x2f, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xa9}, {.addr=0x3f51, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3f51, .value=0x2d, .type=IO_READ},
        {.addr=0x3f52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x1f38, .a=0xe6, .x=0xd7, .y=0x84, .sp=0x38, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x1f38, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1f39, .a=0xe6, .x=0xd7, .y=0x84, .sp=0x37, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xe6}, {.addr=0x1f38, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1f38, .value=0x2d, .type=IO_READ},
        {.addr=0x1f39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0300) {
    const struct CPU_State initial_cpu = {.pc=0x2b51, .a=0xb5, .x=0x02, .y=0x73, .sp=0x4f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x2b51, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2b52, .a=0xb5, .x=0x02, .y=0x73, .sp=0x4e, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xb5}, {.addr=0x2b51, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2b51, .value=0x2d, .type=IO_READ},
        {.addr=0x2b52, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x0222, .a=0x73, .x=0x2c, .y=0xca, .sp=0xc7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x0222, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0223, .a=0x73, .x=0x2c, .y=0xca, .sp=0xc6, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x73}, {.addr=0x0222, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0222, .value=0x2d, .type=IO_READ},
        {.addr=0x0223, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x0441, .a=0xd8, .x=0x10, .y=0x25, .sp=0x40, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x0441, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0442, .a=0xd8, .x=0x10, .y=0x25, .sp=0x3f, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xd8}, {.addr=0x0441, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0441, .value=0x2d, .type=IO_READ},
        {.addr=0x0442, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x81a5, .a=0x95, .x=0xd5, .y=0x91, .sp=0x80, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x81a5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x81a6, .a=0x95, .x=0xd5, .y=0x91, .sp=0x7f, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x95}, {.addr=0x81a5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x81a5, .value=0x2d, .type=IO_READ},
        {.addr=0x81a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0304) {
    const struct CPU_State initial_cpu = {.pc=0xf72d, .a=0x5f, .x=0xd9, .y=0x4b, .sp=0x9b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0xf72d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf72e, .a=0x5f, .x=0xd9, .y=0x4b, .sp=0x9a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x5f}, {.addr=0xf72d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf72d, .value=0x2d, .type=IO_READ},
        {.addr=0xf72e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x5804, .a=0x96, .x=0x7d, .y=0x3d, .sp=0x02, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x5804, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5805, .a=0x96, .x=0x7d, .y=0x3d, .sp=0x01, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x96}, {.addr=0x5804, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5804, .value=0x2d, .type=IO_READ},
        {.addr=0x5805, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdc8e, .a=0x0f, .x=0x15, .y=0x02, .sp=0x09, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0xdc8e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdc8f, .a=0x0f, .x=0x15, .y=0x02, .sp=0x08, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x0f}, {.addr=0xdc8e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdc8e, .value=0x2d, .type=IO_READ},
        {.addr=0xdc8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0307) {
    const struct CPU_State initial_cpu = {.pc=0xd54b, .a=0xae, .x=0x9d, .y=0x6a, .sp=0x3d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0xd54b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd54c, .a=0xae, .x=0x9d, .y=0x6a, .sp=0x3c, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xae}, {.addr=0xd54b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd54b, .value=0x2d, .type=IO_READ},
        {.addr=0xd54c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6cda, .a=0xe9, .x=0x27, .y=0xc5, .sp=0xc1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x6cda, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6cdb, .a=0xe9, .x=0x27, .y=0xc5, .sp=0xc0, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xe9}, {.addr=0x6cda, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6cda, .value=0x2d, .type=IO_READ},
        {.addr=0x6cdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0309) {
    const struct CPU_State initial_cpu = {.pc=0x100c, .a=0x7b, .x=0xd0, .y=0xdf, .sp=0x6f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x100c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x100d, .a=0x7b, .x=0xd0, .y=0xdf, .sp=0x6e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x7b}, {.addr=0x100c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x100c, .value=0x2d, .type=IO_READ},
        {.addr=0x100d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_030A) {
    const struct CPU_State initial_cpu = {.pc=0x1997, .a=0x60, .x=0x53, .y=0x14, .sp=0x74, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x1997, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1998, .a=0x60, .x=0x53, .y=0x14, .sp=0x73, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x60}, {.addr=0x1997, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1997, .value=0x2d, .type=IO_READ},
        {.addr=0x1998, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x74be, .a=0xe4, .x=0x9a, .y=0xc1, .sp=0x50, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x74be, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x74bf, .a=0xe4, .x=0x9a, .y=0xc1, .sp=0x4f, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xe4}, {.addr=0x74be, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x74be, .value=0x2d, .type=IO_READ},
        {.addr=0x74bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x2a6c, .a=0x93, .x=0xb2, .y=0xb5, .sp=0x02, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x2a6c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2a6d, .a=0x93, .x=0xb2, .y=0xb5, .sp=0x01, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x93}, {.addr=0x2a6c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2a6c, .value=0x2d, .type=IO_READ},
        {.addr=0x2a6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_030D) {
    const struct CPU_State initial_cpu = {.pc=0xfdb3, .a=0x53, .x=0x74, .y=0x85, .sp=0x16, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xfdb3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfdb4, .a=0x53, .x=0x74, .y=0x85, .sp=0x15, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x53}, {.addr=0xfdb3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfdb3, .value=0x2d, .type=IO_READ},
        {.addr=0xfdb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_030E) {
    const struct CPU_State initial_cpu = {.pc=0x0ecc, .a=0x95, .x=0x67, .y=0xf1, .sp=0x70, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x0ecc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0ecd, .a=0x95, .x=0x67, .y=0xf1, .sp=0x6f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x95}, {.addr=0x0ecc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0ecc, .value=0x2d, .type=IO_READ},
        {.addr=0x0ecd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_030F) {
    const struct CPU_State initial_cpu = {.pc=0x1e16, .a=0xe8, .x=0xe6, .y=0x71, .sp=0xec, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x1e16, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1e17, .a=0xe8, .x=0xe6, .y=0x71, .sp=0xeb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xe8}, {.addr=0x1e16, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1e16, .value=0x2d, .type=IO_READ},
        {.addr=0x1e17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x71bc, .a=0xaf, .x=0xe5, .y=0x45, .sp=0xf0, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x71bc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x71bd, .a=0xaf, .x=0xe5, .y=0x45, .sp=0xef, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xaf}, {.addr=0x71bc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x71bc, .value=0x2d, .type=IO_READ},
        {.addr=0x71bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0311) {
    const struct CPU_State initial_cpu = {.pc=0xe405, .a=0xa9, .x=0x68, .y=0xd1, .sp=0x38, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0xe405, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe406, .a=0xa9, .x=0x68, .y=0xd1, .sp=0x37, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xa9}, {.addr=0xe405, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe405, .value=0x2d, .type=IO_READ},
        {.addr=0xe406, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0312) {
    const struct CPU_State initial_cpu = {.pc=0x9f7b, .a=0xab, .x=0x76, .y=0x20, .sp=0xa9, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x9f7b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9f7c, .a=0xab, .x=0x76, .y=0x20, .sp=0xa8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xab}, {.addr=0x9f7b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9f7b, .value=0x2d, .type=IO_READ},
        {.addr=0x9f7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0313) {
    const struct CPU_State initial_cpu = {.pc=0xcb09, .a=0x83, .x=0x17, .y=0xc1, .sp=0x23, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0xcb09, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcb0a, .a=0x83, .x=0x17, .y=0xc1, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x83}, {.addr=0xcb09, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcb09, .value=0x2d, .type=IO_READ},
        {.addr=0xcb0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0314) {
    const struct CPU_State initial_cpu = {.pc=0x96dd, .a=0x73, .x=0x06, .y=0xc0, .sp=0x80, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x96dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x96de, .a=0x73, .x=0x06, .y=0xc0, .sp=0x7f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x73}, {.addr=0x96dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x96dd, .value=0x2d, .type=IO_READ},
        {.addr=0x96de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x878d, .a=0xc6, .x=0x42, .y=0xdd, .sp=0xa1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x878d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x878e, .a=0xc6, .x=0x42, .y=0xdd, .sp=0xa0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xc6}, {.addr=0x878d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x878d, .value=0x2d, .type=IO_READ},
        {.addr=0x878e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0316) {
    const struct CPU_State initial_cpu = {.pc=0x50f5, .a=0x0c, .x=0x62, .y=0xd9, .sp=0xd3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x50f5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x50f6, .a=0x0c, .x=0x62, .y=0xd9, .sp=0xd2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x0c}, {.addr=0x50f5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x50f5, .value=0x2d, .type=IO_READ},
        {.addr=0x50f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x2181, .a=0x70, .x=0xe0, .y=0x3e, .sp=0x19, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x2181, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2182, .a=0x70, .x=0xe0, .y=0x3e, .sp=0x18, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x70}, {.addr=0x2181, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2181, .value=0x2d, .type=IO_READ},
        {.addr=0x2182, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0318) {
    const struct CPU_State initial_cpu = {.pc=0x9b3d, .a=0x17, .x=0x83, .y=0xbb, .sp=0x74, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x9b3d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9b3e, .a=0x17, .x=0x83, .y=0xbb, .sp=0x73, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x17}, {.addr=0x9b3d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9b3d, .value=0x2d, .type=IO_READ},
        {.addr=0x9b3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0319) {
    const struct CPU_State initial_cpu = {.pc=0x7ada, .a=0xe5, .x=0x7d, .y=0xff, .sp=0x3b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x7ada, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7adb, .a=0xe5, .x=0x7d, .y=0xff, .sp=0x3a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xe5}, {.addr=0x7ada, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7ada, .value=0x2d, .type=IO_READ},
        {.addr=0x7adb, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x256c, .a=0x61, .x=0x98, .y=0xfa, .sp=0x2d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x256c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x256d, .a=0x61, .x=0x98, .y=0xfa, .sp=0x2c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x61}, {.addr=0x256c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x256c, .value=0x2d, .type=IO_READ},
        {.addr=0x256d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x3fe5, .a=0xb9, .x=0x7e, .y=0x17, .sp=0xba, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x3fe5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3fe6, .a=0xb9, .x=0x7e, .y=0x17, .sp=0xb9, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xb9}, {.addr=0x3fe5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3fe5, .value=0x2d, .type=IO_READ},
        {.addr=0x3fe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x8439, .a=0xa7, .x=0xd2, .y=0x15, .sp=0x0a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x8439, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x843a, .a=0xa7, .x=0xd2, .y=0x15, .sp=0x09, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xa7}, {.addr=0x8439, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8439, .value=0x2d, .type=IO_READ},
        {.addr=0x843a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_031D) {
    const struct CPU_State initial_cpu = {.pc=0x3cc5, .a=0x6b, .x=0x42, .y=0x40, .sp=0x95, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x3cc5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3cc6, .a=0x6b, .x=0x42, .y=0x40, .sp=0x94, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x6b}, {.addr=0x3cc5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3cc5, .value=0x2d, .type=IO_READ},
        {.addr=0x3cc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_031E) {
    const struct CPU_State initial_cpu = {.pc=0xac9f, .a=0x66, .x=0x63, .y=0x7f, .sp=0xc8, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0xac9f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaca0, .a=0x66, .x=0x63, .y=0x7f, .sp=0xc7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x66}, {.addr=0xac9f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xac9f, .value=0x2d, .type=IO_READ},
        {.addr=0xaca0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x6cce, .a=0x20, .x=0x13, .y=0x62, .sp=0xd0, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x6cce, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6ccf, .a=0x20, .x=0x13, .y=0x62, .sp=0xcf, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x20}, {.addr=0x6cce, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6cce, .value=0x2d, .type=IO_READ},
        {.addr=0x6ccf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x263a, .a=0xed, .x=0x0b, .y=0xbc, .sp=0xfa, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x263a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x263b, .a=0xed, .x=0x0b, .y=0xbc, .sp=0xf9, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xed}, {.addr=0x263a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x263a, .value=0x2d, .type=IO_READ},
        {.addr=0x263b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0232, .a=0x7a, .x=0xcf, .y=0xe5, .sp=0x19, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x0232, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0233, .a=0x7a, .x=0xcf, .y=0xe5, .sp=0x18, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x7a}, {.addr=0x0232, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0232, .value=0x2d, .type=IO_READ},
        {.addr=0x0233, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x2a62, .a=0xe8, .x=0x00, .y=0xe6, .sp=0x0f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x2a62, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2a63, .a=0xe8, .x=0x00, .y=0xe6, .sp=0x0e, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xe8}, {.addr=0x2a62, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2a62, .value=0x2d, .type=IO_READ},
        {.addr=0x2a63, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0323) {
    const struct CPU_State initial_cpu = {.pc=0xba13, .a=0xb9, .x=0xc1, .y=0x93, .sp=0x5c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0xba13, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xba14, .a=0xb9, .x=0xc1, .y=0x93, .sp=0x5b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xb9}, {.addr=0xba13, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xba13, .value=0x2d, .type=IO_READ},
        {.addr=0xba14, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0324) {
    const struct CPU_State initial_cpu = {.pc=0xade3, .a=0x56, .x=0xbc, .y=0xba, .sp=0xe7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xade3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xade4, .a=0x56, .x=0xbc, .y=0xba, .sp=0xe6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x56}, {.addr=0xade3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xade3, .value=0x2d, .type=IO_READ},
        {.addr=0xade4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x10d3, .a=0x96, .x=0xbb, .y=0x85, .sp=0x2c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x10d3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x10d4, .a=0x96, .x=0xbb, .y=0x85, .sp=0x2b, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x96}, {.addr=0x10d3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x10d3, .value=0x2d, .type=IO_READ},
        {.addr=0x10d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x78d6, .a=0x91, .x=0xa3, .y=0x5d, .sp=0x8d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x78d6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x78d7, .a=0x91, .x=0xa3, .y=0x5d, .sp=0x8c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x91}, {.addr=0x78d6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x78d6, .value=0x2d, .type=IO_READ},
        {.addr=0x78d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0327) {
    const struct CPU_State initial_cpu = {.pc=0xb3e1, .a=0x33, .x=0x57, .y=0x98, .sp=0x0c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0xb3e1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb3e2, .a=0x33, .x=0x57, .y=0x98, .sp=0x0b, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x33}, {.addr=0xb3e1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb3e1, .value=0x2d, .type=IO_READ},
        {.addr=0xb3e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0328) {
    const struct CPU_State initial_cpu = {.pc=0x6148, .a=0xe7, .x=0xe2, .y=0xc7, .sp=0xc1, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x6148, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6149, .a=0xe7, .x=0xe2, .y=0xc7, .sp=0xc0, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xe7}, {.addr=0x6148, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6148, .value=0x2d, .type=IO_READ},
        {.addr=0x6149, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x2282, .a=0xd9, .x=0xcf, .y=0x52, .sp=0xd1, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x2282, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2283, .a=0xd9, .x=0xcf, .y=0x52, .sp=0xd0, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xd9}, {.addr=0x2282, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2282, .value=0x2d, .type=IO_READ},
        {.addr=0x2283, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x82d5, .a=0xd9, .x=0xd7, .y=0x77, .sp=0xa8, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x82d5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x82d6, .a=0xd9, .x=0xd7, .y=0x77, .sp=0xa7, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xd9}, {.addr=0x82d5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x82d5, .value=0x2d, .type=IO_READ},
        {.addr=0x82d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_032B) {
    const struct CPU_State initial_cpu = {.pc=0xe6ce, .a=0x2e, .x=0x19, .y=0xbf, .sp=0xd9, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xe6ce, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe6cf, .a=0x2e, .x=0x19, .y=0xbf, .sp=0xd8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x2e}, {.addr=0xe6ce, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe6ce, .value=0x2d, .type=IO_READ},
        {.addr=0xe6cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_032C) {
    const struct CPU_State initial_cpu = {.pc=0x0b8f, .a=0x94, .x=0xa8, .y=0xd7, .sp=0x91, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x0b8f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0b90, .a=0x94, .x=0xa8, .y=0xd7, .sp=0x90, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x94}, {.addr=0x0b8f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0b8f, .value=0x2d, .type=IO_READ},
        {.addr=0x0b90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_032D) {
    const struct CPU_State initial_cpu = {.pc=0xd9b1, .a=0xa7, .x=0xe5, .y=0xfe, .sp=0xb8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xd9b1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd9b2, .a=0xa7, .x=0xe5, .y=0xfe, .sp=0xb7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xa7}, {.addr=0xd9b1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd9b1, .value=0x2d, .type=IO_READ},
        {.addr=0xd9b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_032E) {
    const struct CPU_State initial_cpu = {.pc=0xfedd, .a=0x95, .x=0x7a, .y=0xf2, .sp=0xb6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xfedd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfede, .a=0x95, .x=0x7a, .y=0xf2, .sp=0xb5, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x95}, {.addr=0xfedd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfedd, .value=0x2d, .type=IO_READ},
        {.addr=0xfede, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_032F) {
    const struct CPU_State initial_cpu = {.pc=0x46fe, .a=0x86, .x=0xa4, .y=0xd2, .sp=0x7d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x46fe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x46ff, .a=0x86, .x=0xa4, .y=0xd2, .sp=0x7c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x86}, {.addr=0x46fe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x46fe, .value=0x2d, .type=IO_READ},
        {.addr=0x46ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0330) {
    const struct CPU_State initial_cpu = {.pc=0xbc15, .a=0x8d, .x=0x34, .y=0x96, .sp=0xcc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0xbc15, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbc16, .a=0x8d, .x=0x34, .y=0x96, .sp=0xcb, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x8d}, {.addr=0xbc15, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbc15, .value=0x2d, .type=IO_READ},
        {.addr=0xbc16, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x50cc, .a=0x15, .x=0xf7, .y=0xbb, .sp=0x93, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x50cc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x50cd, .a=0x15, .x=0xf7, .y=0xbb, .sp=0x92, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x15}, {.addr=0x50cc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x50cc, .value=0x2d, .type=IO_READ},
        {.addr=0x50cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0332) {
    const struct CPU_State initial_cpu = {.pc=0xa67b, .a=0x24, .x=0x60, .y=0xf7, .sp=0x57, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xa67b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa67c, .a=0x24, .x=0x60, .y=0xf7, .sp=0x56, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x24}, {.addr=0xa67b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa67b, .value=0x2d, .type=IO_READ},
        {.addr=0xa67c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0333) {
    const struct CPU_State initial_cpu = {.pc=0x0b78, .a=0x65, .x=0x6e, .y=0xc4, .sp=0x4b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x0b78, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0b79, .a=0x65, .x=0x6e, .y=0xc4, .sp=0x4a, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x65}, {.addr=0x0b78, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0b78, .value=0x2d, .type=IO_READ},
        {.addr=0x0b79, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0334) {
    const struct CPU_State initial_cpu = {.pc=0xaccb, .a=0x20, .x=0x7b, .y=0x37, .sp=0x4d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0xaccb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaccc, .a=0x20, .x=0x7b, .y=0x37, .sp=0x4c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x20}, {.addr=0xaccb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaccb, .value=0x2d, .type=IO_READ},
        {.addr=0xaccc, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0335) {
    const struct CPU_State initial_cpu = {.pc=0xc7c6, .a=0x73, .x=0x3b, .y=0x3e, .sp=0xb3, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0xc7c6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc7c7, .a=0x73, .x=0x3b, .y=0x3e, .sp=0xb2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x73}, {.addr=0xc7c6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc7c6, .value=0x2d, .type=IO_READ},
        {.addr=0xc7c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x60a7, .a=0xb0, .x=0x50, .y=0x1f, .sp=0xe7, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0x60a7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x60a8, .a=0xb0, .x=0x50, .y=0x1f, .sp=0xe6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xb0}, {.addr=0x60a7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x60a7, .value=0x2d, .type=IO_READ},
        {.addr=0x60a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0337) {
    const struct CPU_State initial_cpu = {.pc=0xe264, .a=0x45, .x=0x83, .y=0xe1, .sp=0xf5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xe264, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe265, .a=0x45, .x=0x83, .y=0xe1, .sp=0xf4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x45}, {.addr=0xe264, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe264, .value=0x2d, .type=IO_READ},
        {.addr=0xe265, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x1761, .a=0x62, .x=0xaf, .y=0xff, .sp=0x14, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x1761, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1762, .a=0x62, .x=0xaf, .y=0xff, .sp=0x13, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x62}, {.addr=0x1761, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1761, .value=0x2d, .type=IO_READ},
        {.addr=0x1762, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0339) {
    const struct CPU_State initial_cpu = {.pc=0xe658, .a=0x9c, .x=0x37, .y=0x5d, .sp=0x8c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0xe658, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe659, .a=0x9c, .x=0x37, .y=0x5d, .sp=0x8b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x9c}, {.addr=0xe658, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe658, .value=0x2d, .type=IO_READ},
        {.addr=0xe659, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_033A) {
    const struct CPU_State initial_cpu = {.pc=0xf729, .a=0x31, .x=0x12, .y=0x10, .sp=0xe5, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0xf729, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf72a, .a=0x31, .x=0x12, .y=0x10, .sp=0xe4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x31}, {.addr=0xf729, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf729, .value=0x2d, .type=IO_READ},
        {.addr=0xf72a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6828, .a=0x2f, .x=0xe8, .y=0x6e, .sp=0x67, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x6828, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6829, .a=0x2f, .x=0xe8, .y=0x6e, .sp=0x66, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x2f}, {.addr=0x6828, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6828, .value=0x2d, .type=IO_READ},
        {.addr=0x6829, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x0dcc, .a=0x94, .x=0x65, .y=0xd3, .sp=0x79, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x0dcc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0dcd, .a=0x94, .x=0x65, .y=0xd3, .sp=0x78, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x94}, {.addr=0x0dcc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0dcc, .value=0x2d, .type=IO_READ},
        {.addr=0x0dcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_033D) {
    const struct CPU_State initial_cpu = {.pc=0x49bc, .a=0x2d, .x=0x04, .y=0x70, .sp=0x3e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x49bc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x49bd, .a=0x2d, .x=0x04, .y=0x70, .sp=0x3d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x2d}, {.addr=0x49bc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x49bc, .value=0x2d, .type=IO_READ},
        {.addr=0x49bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_033E) {
    const struct CPU_State initial_cpu = {.pc=0xff06, .a=0xf0, .x=0x31, .y=0xfb, .sp=0x16, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xff06, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xff07, .a=0xf0, .x=0x31, .y=0xfb, .sp=0x15, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xf0}, {.addr=0xff06, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xff06, .value=0x2d, .type=IO_READ},
        {.addr=0xff07, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_033F) {
    const struct CPU_State initial_cpu = {.pc=0xe261, .a=0x0f, .x=0x1b, .y=0x2b, .sp=0x6d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xe261, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe262, .a=0x0f, .x=0x1b, .y=0x2b, .sp=0x6c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x0f}, {.addr=0xe261, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe261, .value=0x2d, .type=IO_READ},
        {.addr=0xe262, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0340) {
    const struct CPU_State initial_cpu = {.pc=0x9ee1, .a=0x0f, .x=0xbd, .y=0x0e, .sp=0xe4, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x9ee1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9ee2, .a=0x0f, .x=0xbd, .y=0x0e, .sp=0xe3, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x0f}, {.addr=0x9ee1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9ee1, .value=0x2d, .type=IO_READ},
        {.addr=0x9ee2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0341) {
    const struct CPU_State initial_cpu = {.pc=0x4729, .a=0xb3, .x=0xe9, .y=0x51, .sp=0x48, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x4729, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x472a, .a=0xb3, .x=0xe9, .y=0x51, .sp=0x47, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xb3}, {.addr=0x4729, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4729, .value=0x2d, .type=IO_READ},
        {.addr=0x472a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0342) {
    const struct CPU_State initial_cpu = {.pc=0xf624, .a=0xb2, .x=0xd0, .y=0xcf, .sp=0x9a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xf624, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf625, .a=0xb2, .x=0xd0, .y=0xcf, .sp=0x99, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xb2}, {.addr=0xf624, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf624, .value=0x2d, .type=IO_READ},
        {.addr=0xf625, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0343) {
    const struct CPU_State initial_cpu = {.pc=0xf415, .a=0x8e, .x=0x0c, .y=0x60, .sp=0x12, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xf415, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf416, .a=0x8e, .x=0x0c, .y=0x60, .sp=0x11, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x8e}, {.addr=0xf415, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf415, .value=0x2d, .type=IO_READ},
        {.addr=0xf416, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0344) {
    const struct CPU_State initial_cpu = {.pc=0xeaad, .a=0xff, .x=0xe1, .y=0x60, .sp=0xbf, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xeaad, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeaae, .a=0xff, .x=0xe1, .y=0x60, .sp=0xbe, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xff}, {.addr=0xeaad, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeaad, .value=0x2d, .type=IO_READ},
        {.addr=0xeaae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0345) {
    const struct CPU_State initial_cpu = {.pc=0xe78e, .a=0xf9, .x=0xe5, .y=0xcd, .sp=0x94, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0xe78e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe78f, .a=0xf9, .x=0xe5, .y=0xcd, .sp=0x93, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xf9}, {.addr=0xe78e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe78e, .value=0x2d, .type=IO_READ},
        {.addr=0xe78f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0346) {
    const struct CPU_State initial_cpu = {.pc=0xc898, .a=0xdb, .x=0x60, .y=0x40, .sp=0x11, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xc898, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc899, .a=0xdb, .x=0x60, .y=0x40, .sp=0x10, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xdb}, {.addr=0xc898, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc898, .value=0x2d, .type=IO_READ},
        {.addr=0xc899, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x579f, .a=0xff, .x=0x61, .y=0xc5, .sp=0xb7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x579f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x57a0, .a=0xff, .x=0x61, .y=0xc5, .sp=0xb6, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xff}, {.addr=0x579f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x579f, .value=0x2d, .type=IO_READ},
        {.addr=0x57a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0348) {
    const struct CPU_State initial_cpu = {.pc=0x1cce, .a=0x3f, .x=0x30, .y=0xfa, .sp=0x79, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x1cce, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1ccf, .a=0x3f, .x=0x30, .y=0xfa, .sp=0x78, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x3f}, {.addr=0x1cce, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1cce, .value=0x2d, .type=IO_READ},
        {.addr=0x1ccf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x0009, .a=0xc8, .x=0xac, .y=0x72, .sp=0x4c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x2d}, {.addr=0x014c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x000a, .a=0xc8, .x=0xac, .y=0x72, .sp=0x4b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x2d}, {.addr=0x014c, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x0009, .value=0x2d, .type=IO_READ},
        {.addr=0x000a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x173e, .a=0xb7, .x=0xb1, .y=0x71, .sp=0x82, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x173e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x173f, .a=0xb7, .x=0xb1, .y=0x71, .sp=0x81, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xb7}, {.addr=0x173e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x173e, .value=0x2d, .type=IO_READ},
        {.addr=0x173f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x3f27, .a=0x81, .x=0x9c, .y=0x2c, .sp=0x9b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x3f27, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3f28, .a=0x81, .x=0x9c, .y=0x2c, .sp=0x9a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x81}, {.addr=0x3f27, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3f27, .value=0x2d, .type=IO_READ},
        {.addr=0x3f28, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_034C) {
    const struct CPU_State initial_cpu = {.pc=0xb1fb, .a=0x55, .x=0xc5, .y=0x89, .sp=0xfc, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xb1fb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb1fc, .a=0x55, .x=0xc5, .y=0x89, .sp=0xfb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x55}, {.addr=0xb1fb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb1fb, .value=0x2d, .type=IO_READ},
        {.addr=0xb1fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x6b69, .a=0xe9, .x=0x88, .y=0x35, .sp=0xde, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x6b69, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6b6a, .a=0xe9, .x=0x88, .y=0x35, .sp=0xdd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xe9}, {.addr=0x6b69, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6b69, .value=0x2d, .type=IO_READ},
        {.addr=0x6b6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_034E) {
    const struct CPU_State initial_cpu = {.pc=0xd7ed, .a=0x42, .x=0x44, .y=0x1b, .sp=0xa2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0xd7ed, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd7ee, .a=0x42, .x=0x44, .y=0x1b, .sp=0xa1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x42}, {.addr=0xd7ed, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd7ed, .value=0x2d, .type=IO_READ},
        {.addr=0xd7ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x34be, .a=0x35, .x=0x9c, .y=0x4d, .sp=0x21, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x34be, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x34bf, .a=0x35, .x=0x9c, .y=0x4d, .sp=0x20, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x35}, {.addr=0x34be, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x34be, .value=0x2d, .type=IO_READ},
        {.addr=0x34bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0350) {
    const struct CPU_State initial_cpu = {.pc=0x048e, .a=0x2f, .x=0xd6, .y=0xed, .sp=0x7f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x048e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x048f, .a=0x2f, .x=0xd6, .y=0xed, .sp=0x7e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x2f}, {.addr=0x048e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x048e, .value=0x2d, .type=IO_READ},
        {.addr=0x048f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x0d6a, .a=0x9b, .x=0xad, .y=0xa8, .sp=0xf2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0x0d6a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0d6b, .a=0x9b, .x=0xad, .y=0xa8, .sp=0xf1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x9b}, {.addr=0x0d6a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0d6a, .value=0x2d, .type=IO_READ},
        {.addr=0x0d6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0352) {
    const struct CPU_State initial_cpu = {.pc=0x26c4, .a=0x70, .x=0x27, .y=0xc8, .sp=0xc2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x26c4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x26c5, .a=0x70, .x=0x27, .y=0xc8, .sp=0xc1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x70}, {.addr=0x26c4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x26c4, .value=0x2d, .type=IO_READ},
        {.addr=0x26c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x8e26, .a=0x8c, .x=0x6e, .y=0xd5, .sp=0xa4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x8e26, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8e27, .a=0x8c, .x=0x6e, .y=0xd5, .sp=0xa3, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x8c}, {.addr=0x8e26, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8e26, .value=0x2d, .type=IO_READ},
        {.addr=0x8e27, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0354) {
    const struct CPU_State initial_cpu = {.pc=0x90a4, .a=0xb2, .x=0x08, .y=0x47, .sp=0x0a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x90a4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x90a5, .a=0xb2, .x=0x08, .y=0x47, .sp=0x09, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xb2}, {.addr=0x90a4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x90a4, .value=0x2d, .type=IO_READ},
        {.addr=0x90a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0355) {
    const struct CPU_State initial_cpu = {.pc=0xadab, .a=0xf7, .x=0x7d, .y=0x77, .sp=0x83, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0xadab, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xadac, .a=0xf7, .x=0x7d, .y=0x77, .sp=0x82, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xf7}, {.addr=0xadab, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xadab, .value=0x2d, .type=IO_READ},
        {.addr=0xadac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0356) {
    const struct CPU_State initial_cpu = {.pc=0x640b, .a=0xb2, .x=0xa6, .y=0x62, .sp=0x6c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x640b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x640c, .a=0xb2, .x=0xa6, .y=0x62, .sp=0x6b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xb2}, {.addr=0x640b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x640b, .value=0x2d, .type=IO_READ},
        {.addr=0x640c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6af9, .a=0xf1, .x=0xe4, .y=0x25, .sp=0x32, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x6af9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6afa, .a=0xf1, .x=0xe4, .y=0x25, .sp=0x31, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xf1}, {.addr=0x6af9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6af9, .value=0x2d, .type=IO_READ},
        {.addr=0x6afa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x10c9, .a=0xc9, .x=0xe7, .y=0xf4, .sp=0xd4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x10c9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x10ca, .a=0xc9, .x=0xe7, .y=0xf4, .sp=0xd3, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xc9}, {.addr=0x10c9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x10c9, .value=0x2d, .type=IO_READ},
        {.addr=0x10ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0359) {
    const struct CPU_State initial_cpu = {.pc=0x040d, .a=0x13, .x=0x20, .y=0x47, .sp=0x38, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x040d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x040e, .a=0x13, .x=0x20, .y=0x47, .sp=0x37, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x13}, {.addr=0x040d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x040d, .value=0x2d, .type=IO_READ},
        {.addr=0x040e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x2b5e, .a=0x79, .x=0x52, .y=0x0d, .sp=0xc2, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x2b5e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2b5f, .a=0x79, .x=0x52, .y=0x0d, .sp=0xc1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x79}, {.addr=0x2b5e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2b5e, .value=0x2d, .type=IO_READ},
        {.addr=0x2b5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_035B) {
    const struct CPU_State initial_cpu = {.pc=0xc133, .a=0x20, .x=0x28, .y=0x54, .sp=0x8d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0xc133, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc134, .a=0x20, .x=0x28, .y=0x54, .sp=0x8c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x20}, {.addr=0xc133, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc133, .value=0x2d, .type=IO_READ},
        {.addr=0xc134, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x3b16, .a=0x71, .x=0x31, .y=0xb6, .sp=0xfc, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x3b16, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3b17, .a=0x71, .x=0x31, .y=0xb6, .sp=0xfb, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x71}, {.addr=0x3b16, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3b16, .value=0x2d, .type=IO_READ},
        {.addr=0x3b17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x4f0d, .a=0x1d, .x=0x98, .y=0x28, .sp=0x2f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x4f0d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4f0e, .a=0x1d, .x=0x98, .y=0x28, .sp=0x2e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x1d}, {.addr=0x4f0d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4f0d, .value=0x2d, .type=IO_READ},
        {.addr=0x4f0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_035E) {
    const struct CPU_State initial_cpu = {.pc=0x6787, .a=0xb2, .x=0x64, .y=0x95, .sp=0x1c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x6787, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6788, .a=0xb2, .x=0x64, .y=0x95, .sp=0x1b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xb2}, {.addr=0x6787, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6787, .value=0x2d, .type=IO_READ},
        {.addr=0x6788, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_035F) {
    const struct CPU_State initial_cpu = {.pc=0x3acc, .a=0x24, .x=0x49, .y=0x39, .sp=0x97, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0x3acc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3acd, .a=0x24, .x=0x49, .y=0x39, .sp=0x96, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x24}, {.addr=0x3acc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3acc, .value=0x2d, .type=IO_READ},
        {.addr=0x3acd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0360) {
    const struct CPU_State initial_cpu = {.pc=0xf446, .a=0x0a, .x=0x08, .y=0x3f, .sp=0x6e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0xf446, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf447, .a=0x0a, .x=0x08, .y=0x3f, .sp=0x6d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x0a}, {.addr=0xf446, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf446, .value=0x2d, .type=IO_READ},
        {.addr=0xf447, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0361) {
    const struct CPU_State initial_cpu = {.pc=0xbbca, .a=0x7f, .x=0x5e, .y=0x29, .sp=0x15, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0xbbca, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbbcb, .a=0x7f, .x=0x5e, .y=0x29, .sp=0x14, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x7f}, {.addr=0xbbca, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbbca, .value=0x2d, .type=IO_READ},
        {.addr=0xbbcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x4c70, .a=0x68, .x=0x09, .y=0x4d, .sp=0xf3, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x4c70, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4c71, .a=0x68, .x=0x09, .y=0x4d, .sp=0xf2, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x68}, {.addr=0x4c70, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4c70, .value=0x2d, .type=IO_READ},
        {.addr=0x4c71, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x4e65, .a=0x03, .x=0x77, .y=0xeb, .sp=0x63, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x4e65, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4e66, .a=0x03, .x=0x77, .y=0xeb, .sp=0x62, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x03}, {.addr=0x4e65, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4e65, .value=0x2d, .type=IO_READ},
        {.addr=0x4e66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x1df9, .a=0xc5, .x=0x4d, .y=0x54, .sp=0xb8, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x1df9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1dfa, .a=0xc5, .x=0x4d, .y=0x54, .sp=0xb7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xc5}, {.addr=0x1df9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1df9, .value=0x2d, .type=IO_READ},
        {.addr=0x1dfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x5936, .a=0x1d, .x=0x5a, .y=0xf1, .sp=0x0b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x5936, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5937, .a=0x1d, .x=0x5a, .y=0xf1, .sp=0x0a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x1d}, {.addr=0x5936, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5936, .value=0x2d, .type=IO_READ},
        {.addr=0x5937, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0366) {
    const struct CPU_State initial_cpu = {.pc=0xeef5, .a=0x98, .x=0x7d, .y=0xb6, .sp=0xf6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0xeef5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeef6, .a=0x98, .x=0x7d, .y=0xb6, .sp=0xf5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x98}, {.addr=0xeef5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeef5, .value=0x2d, .type=IO_READ},
        {.addr=0xeef6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0367) {
    const struct CPU_State initial_cpu = {.pc=0x283a, .a=0xd6, .x=0x88, .y=0xde, .sp=0xb2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x283a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x283b, .a=0xd6, .x=0x88, .y=0xde, .sp=0xb1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xd6}, {.addr=0x283a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x283a, .value=0x2d, .type=IO_READ},
        {.addr=0x283b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x07e3, .a=0x63, .x=0x75, .y=0x76, .sp=0xff, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x07e3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x07e4, .a=0x63, .x=0x75, .y=0x76, .sp=0xfe, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x63}, {.addr=0x07e3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x07e3, .value=0x2d, .type=IO_READ},
        {.addr=0x07e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x22a3, .a=0xa7, .x=0xe1, .y=0x17, .sp=0x44, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x22a3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x22a4, .a=0xa7, .x=0xe1, .y=0x17, .sp=0x43, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xa7}, {.addr=0x22a3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x22a3, .value=0x2d, .type=IO_READ},
        {.addr=0x22a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x3289, .a=0x63, .x=0x0d, .y=0xf6, .sp=0xef, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x3289, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x328a, .a=0x63, .x=0x0d, .y=0xf6, .sp=0xee, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x63}, {.addr=0x3289, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3289, .value=0x2d, .type=IO_READ},
        {.addr=0x328a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_036B) {
    const struct CPU_State initial_cpu = {.pc=0x2035, .a=0xfa, .x=0x07, .y=0xe3, .sp=0x34, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x2035, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2036, .a=0xfa, .x=0x07, .y=0xe3, .sp=0x33, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xfa}, {.addr=0x2035, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2035, .value=0x2d, .type=IO_READ},
        {.addr=0x2036, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x4ca2, .a=0x12, .x=0xd7, .y=0x3c, .sp=0x04, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x4ca2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4ca3, .a=0x12, .x=0xd7, .y=0x3c, .sp=0x03, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x12}, {.addr=0x4ca2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca2, .value=0x2d, .type=IO_READ},
        {.addr=0x4ca3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_036D) {
    const struct CPU_State initial_cpu = {.pc=0xc759, .a=0x53, .x=0xda, .y=0x2e, .sp=0x02, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0xc759, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc75a, .a=0x53, .x=0xda, .y=0x2e, .sp=0x01, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x53}, {.addr=0xc759, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc759, .value=0x2d, .type=IO_READ},
        {.addr=0xc75a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_036E) {
    const struct CPU_State initial_cpu = {.pc=0xce84, .a=0x65, .x=0xf5, .y=0xac, .sp=0x92, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xce84, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xce85, .a=0x65, .x=0xf5, .y=0xac, .sp=0x91, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x65}, {.addr=0xce84, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xce84, .value=0x2d, .type=IO_READ},
        {.addr=0xce85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_036F) {
    const struct CPU_State initial_cpu = {.pc=0xfa75, .a=0x8d, .x=0xd6, .y=0x85, .sp=0x9f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0xfa75, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfa76, .a=0x8d, .x=0xd6, .y=0x85, .sp=0x9e, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x8d}, {.addr=0xfa75, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfa75, .value=0x2d, .type=IO_READ},
        {.addr=0xfa76, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0370) {
    const struct CPU_State initial_cpu = {.pc=0xe62f, .a=0x84, .x=0x63, .y=0xd8, .sp=0x35, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xe62f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe630, .a=0x84, .x=0x63, .y=0xd8, .sp=0x34, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x84}, {.addr=0xe62f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe62f, .value=0x2d, .type=IO_READ},
        {.addr=0xe630, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0371) {
    const struct CPU_State initial_cpu = {.pc=0xc44a, .a=0x2e, .x=0xec, .y=0x79, .sp=0x76, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0xc44a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc44b, .a=0x2e, .x=0xec, .y=0x79, .sp=0x75, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x2e}, {.addr=0xc44a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc44a, .value=0x2d, .type=IO_READ},
        {.addr=0xc44b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0372) {
    const struct CPU_State initial_cpu = {.pc=0x36be, .a=0xc4, .x=0xbf, .y=0xa5, .sp=0x56, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x36be, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x36bf, .a=0xc4, .x=0xbf, .y=0xa5, .sp=0x55, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xc4}, {.addr=0x36be, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x36be, .value=0x2d, .type=IO_READ},
        {.addr=0x36bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0373) {
    const struct CPU_State initial_cpu = {.pc=0xb2ad, .a=0xbe, .x=0xa9, .y=0x0d, .sp=0xda, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0xb2ad, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb2ae, .a=0xbe, .x=0xa9, .y=0x0d, .sp=0xd9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xbe}, {.addr=0xb2ad, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb2ad, .value=0x2d, .type=IO_READ},
        {.addr=0xb2ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x4e9b, .a=0xe7, .x=0x8f, .y=0x55, .sp=0xf5, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x4e9b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4e9c, .a=0xe7, .x=0x8f, .y=0x55, .sp=0xf4, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe7}, {.addr=0x4e9b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4e9b, .value=0x2d, .type=IO_READ},
        {.addr=0x4e9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0375) {
    const struct CPU_State initial_cpu = {.pc=0xdb49, .a=0x90, .x=0xd2, .y=0x09, .sp=0xb4, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xdb49, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdb4a, .a=0x90, .x=0xd2, .y=0x09, .sp=0xb3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x90}, {.addr=0xdb49, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdb49, .value=0x2d, .type=IO_READ},
        {.addr=0xdb4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0376) {
    const struct CPU_State initial_cpu = {.pc=0xb5ee, .a=0x78, .x=0x3d, .y=0xec, .sp=0x16, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xb5ee, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb5ef, .a=0x78, .x=0x3d, .y=0xec, .sp=0x15, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x78}, {.addr=0xb5ee, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb5ee, .value=0x2d, .type=IO_READ},
        {.addr=0xb5ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0377) {
    const struct CPU_State initial_cpu = {.pc=0xe424, .a=0xfc, .x=0x6f, .y=0xec, .sp=0x48, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xe424, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe425, .a=0xfc, .x=0x6f, .y=0xec, .sp=0x47, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xfc}, {.addr=0xe424, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe424, .value=0x2d, .type=IO_READ},
        {.addr=0xe425, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x2379, .a=0x76, .x=0xb7, .y=0xb3, .sp=0xcf, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x2379, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x237a, .a=0x76, .x=0xb7, .y=0xb3, .sp=0xce, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x76}, {.addr=0x2379, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2379, .value=0x2d, .type=IO_READ},
        {.addr=0x237a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0379) {
    const struct CPU_State initial_cpu = {.pc=0x90a8, .a=0xf7, .x=0x2f, .y=0xb5, .sp=0xa9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x90a8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x90a9, .a=0xf7, .x=0x2f, .y=0xb5, .sp=0xa8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xf7}, {.addr=0x90a8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x90a8, .value=0x2d, .type=IO_READ},
        {.addr=0x90a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_037A) {
    const struct CPU_State initial_cpu = {.pc=0x6b0b, .a=0x57, .x=0xad, .y=0x59, .sp=0x3c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x6b0b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6b0c, .a=0x57, .x=0xad, .y=0x59, .sp=0x3b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x57}, {.addr=0x6b0b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6b0b, .value=0x2d, .type=IO_READ},
        {.addr=0x6b0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_037B) {
    const struct CPU_State initial_cpu = {.pc=0x20f7, .a=0xd2, .x=0xb1, .y=0x7e, .sp=0x10, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x20f7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x20f8, .a=0xd2, .x=0xb1, .y=0x7e, .sp=0x0f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xd2}, {.addr=0x20f7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x20f7, .value=0x2d, .type=IO_READ},
        {.addr=0x20f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x07fe, .a=0xba, .x=0x54, .y=0xca, .sp=0xc8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0x07fe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x07ff, .a=0xba, .x=0x54, .y=0xca, .sp=0xc7, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xba}, {.addr=0x07fe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x07fe, .value=0x2d, .type=IO_READ},
        {.addr=0x07ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xba, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_037D) {
    const struct CPU_State initial_cpu = {.pc=0xeba4, .a=0x71, .x=0x8b, .y=0x15, .sp=0x96, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0xeba4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeba5, .a=0x71, .x=0x8b, .y=0x15, .sp=0x95, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x71}, {.addr=0xeba4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeba4, .value=0x2d, .type=IO_READ},
        {.addr=0xeba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_037E) {
    const struct CPU_State initial_cpu = {.pc=0x008a, .a=0x0b, .x=0xb9, .y=0x61, .sp=0x0f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x2d}, {.addr=0x010f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x008b, .a=0x0b, .x=0xb9, .y=0x61, .sp=0x0e, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x2d}, {.addr=0x010f, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x008a, .value=0x2d, .type=IO_READ},
        {.addr=0x008b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_037F) {
    const struct CPU_State initial_cpu = {.pc=0xeb50, .a=0x74, .x=0xb7, .y=0xd2, .sp=0xa7, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xeb50, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeb51, .a=0x74, .x=0xb7, .y=0xd2, .sp=0xa6, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x74}, {.addr=0xeb50, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeb50, .value=0x2d, .type=IO_READ},
        {.addr=0xeb51, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x52f5, .a=0xa0, .x=0x81, .y=0xd9, .sp=0x56, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x52f5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x52f6, .a=0xa0, .x=0x81, .y=0xd9, .sp=0x55, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xa0}, {.addr=0x52f5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x52f5, .value=0x2d, .type=IO_READ},
        {.addr=0x52f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x53b7, .a=0x45, .x=0x0a, .y=0xc8, .sp=0x0b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x53b7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x53b8, .a=0x45, .x=0x0a, .y=0xc8, .sp=0x0a, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x45}, {.addr=0x53b7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x53b7, .value=0x2d, .type=IO_READ},
        {.addr=0x53b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0382) {
    const struct CPU_State initial_cpu = {.pc=0x796a, .a=0xa0, .x=0xdd, .y=0x4b, .sp=0x28, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x796a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x796b, .a=0xa0, .x=0xdd, .y=0x4b, .sp=0x27, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xa0}, {.addr=0x796a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x796a, .value=0x2d, .type=IO_READ},
        {.addr=0x796b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0383) {
    const struct CPU_State initial_cpu = {.pc=0xa933, .a=0xe4, .x=0x23, .y=0x44, .sp=0x1f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xa933, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa934, .a=0xe4, .x=0x23, .y=0x44, .sp=0x1e, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xe4}, {.addr=0xa933, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa933, .value=0x2d, .type=IO_READ},
        {.addr=0xa934, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0384) {
    const struct CPU_State initial_cpu = {.pc=0x0a08, .a=0xb9, .x=0x68, .y=0x51, .sp=0x50, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x0a08, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0a09, .a=0xb9, .x=0x68, .y=0x51, .sp=0x4f, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xb9}, {.addr=0x0a08, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0a08, .value=0x2d, .type=IO_READ},
        {.addr=0x0a09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0385) {
    const struct CPU_State initial_cpu = {.pc=0xf637, .a=0xfa, .x=0x63, .y=0x83, .sp=0xb6, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xf637, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf638, .a=0xfa, .x=0x63, .y=0x83, .sp=0xb5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xfa}, {.addr=0xf637, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf637, .value=0x2d, .type=IO_READ},
        {.addr=0xf638, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x438d, .a=0xc4, .x=0xbf, .y=0xd8, .sp=0xe4, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x438d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x438e, .a=0xc4, .x=0xbf, .y=0xd8, .sp=0xe3, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xc4}, {.addr=0x438d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x438d, .value=0x2d, .type=IO_READ},
        {.addr=0x438e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0387) {
    const struct CPU_State initial_cpu = {.pc=0x418b, .a=0xc1, .x=0x36, .y=0x1f, .sp=0x63, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x418b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x418c, .a=0xc1, .x=0x36, .y=0x1f, .sp=0x62, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xc1}, {.addr=0x418b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x418b, .value=0x2d, .type=IO_READ},
        {.addr=0x418c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0388) {
    const struct CPU_State initial_cpu = {.pc=0x8647, .a=0xc7, .x=0x09, .y=0x46, .sp=0x81, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x8647, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8648, .a=0xc7, .x=0x09, .y=0x46, .sp=0x80, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc7}, {.addr=0x8647, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8647, .value=0x2d, .type=IO_READ},
        {.addr=0x8648, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9336, .a=0x5c, .x=0x8e, .y=0x4f, .sp=0xd4, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x9336, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9337, .a=0x5c, .x=0x8e, .y=0x4f, .sp=0xd3, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x5c}, {.addr=0x9336, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9336, .value=0x2d, .type=IO_READ},
        {.addr=0x9337, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_038A) {
    const struct CPU_State initial_cpu = {.pc=0x5f65, .a=0x1f, .x=0xf6, .y=0xbf, .sp=0x0d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0x5f65, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5f66, .a=0x1f, .x=0xf6, .y=0xbf, .sp=0x0c, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x1f}, {.addr=0x5f65, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5f65, .value=0x2d, .type=IO_READ},
        {.addr=0x5f66, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_038B) {
    const struct CPU_State initial_cpu = {.pc=0xdaa0, .a=0xa0, .x=0xa3, .y=0xc3, .sp=0x51, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xdaa0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdaa1, .a=0xa0, .x=0xa3, .y=0xc3, .sp=0x50, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xa0}, {.addr=0xdaa0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdaa0, .value=0x2d, .type=IO_READ},
        {.addr=0xdaa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x9c23, .a=0x09, .x=0x17, .y=0xcc, .sp=0x8a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x9c23, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9c24, .a=0x09, .x=0x17, .y=0xcc, .sp=0x89, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x09}, {.addr=0x9c23, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9c23, .value=0x2d, .type=IO_READ},
        {.addr=0x9c24, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_038D) {
    const struct CPU_State initial_cpu = {.pc=0xccd8, .a=0x7b, .x=0xe2, .y=0xc6, .sp=0xbc, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xccd8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xccd9, .a=0x7b, .x=0xe2, .y=0xc6, .sp=0xbb, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x7b}, {.addr=0xccd8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xccd8, .value=0x2d, .type=IO_READ},
        {.addr=0xccd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_038E) {
    const struct CPU_State initial_cpu = {.pc=0xdc12, .a=0xc1, .x=0xad, .y=0xc6, .sp=0x6b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xdc12, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdc13, .a=0xc1, .x=0xad, .y=0xc6, .sp=0x6a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xc1}, {.addr=0xdc12, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdc12, .value=0x2d, .type=IO_READ},
        {.addr=0xdc13, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_038F) {
    const struct CPU_State initial_cpu = {.pc=0x1794, .a=0xf3, .x=0x8c, .y=0x8f, .sp=0x49, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x1794, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1795, .a=0xf3, .x=0x8c, .y=0x8f, .sp=0x48, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xf3}, {.addr=0x1794, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1794, .value=0x2d, .type=IO_READ},
        {.addr=0x1795, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0390) {
    const struct CPU_State initial_cpu = {.pc=0x4c94, .a=0xec, .x=0x9a, .y=0x05, .sp=0xc6, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x4c94, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4c95, .a=0xec, .x=0x9a, .y=0x05, .sp=0xc5, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xec}, {.addr=0x4c94, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4c94, .value=0x2d, .type=IO_READ},
        {.addr=0x4c95, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0391) {
    const struct CPU_State initial_cpu = {.pc=0xff05, .a=0xd6, .x=0x9b, .y=0xd7, .sp=0x07, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0xff05, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xff06, .a=0xd6, .x=0x9b, .y=0xd7, .sp=0x06, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xd6}, {.addr=0xff05, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xff05, .value=0x2d, .type=IO_READ},
        {.addr=0xff06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0392) {
    const struct CPU_State initial_cpu = {.pc=0x318f, .a=0x30, .x=0x91, .y=0x5f, .sp=0xfd, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x318f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3190, .a=0x30, .x=0x91, .y=0x5f, .sp=0xfc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x30}, {.addr=0x318f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x318f, .value=0x2d, .type=IO_READ},
        {.addr=0x3190, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0393) {
    const struct CPU_State initial_cpu = {.pc=0xfc74, .a=0x25, .x=0xa0, .y=0x49, .sp=0x0f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xfc74, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfc75, .a=0x25, .x=0xa0, .y=0x49, .sp=0x0e, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x25}, {.addr=0xfc74, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfc74, .value=0x2d, .type=IO_READ},
        {.addr=0xfc75, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0394) {
    const struct CPU_State initial_cpu = {.pc=0x647b, .a=0x50, .x=0xa5, .y=0xac, .sp=0x00, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x647b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x647c, .a=0x50, .x=0xa5, .y=0xac, .sp=0xff, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x50}, {.addr=0x647b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x647b, .value=0x2d, .type=IO_READ},
        {.addr=0x647c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0395) {
    const struct CPU_State initial_cpu = {.pc=0xb977, .a=0xd5, .x=0xf2, .y=0xe8, .sp=0x98, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xb977, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb978, .a=0xd5, .x=0xf2, .y=0xe8, .sp=0x97, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xd5}, {.addr=0xb977, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb977, .value=0x2d, .type=IO_READ},
        {.addr=0xb978, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x29a7, .a=0x27, .x=0x07, .y=0x79, .sp=0x4a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x29a7, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x29a8, .a=0x27, .x=0x07, .y=0x79, .sp=0x49, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x27}, {.addr=0x29a7, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x29a7, .value=0x2d, .type=IO_READ},
        {.addr=0x29a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x89ff, .a=0x13, .x=0x39, .y=0xda, .sp=0xda, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x89ff, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8a00, .a=0x13, .x=0x39, .y=0xda, .sp=0xd9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x13}, {.addr=0x89ff, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x89ff, .value=0x2d, .type=IO_READ},
        {.addr=0x8a00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x6c0f, .a=0xb8, .x=0xb6, .y=0x72, .sp=0x71, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x6c0f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6c10, .a=0xb8, .x=0xb6, .y=0x72, .sp=0x70, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xb8}, {.addr=0x6c0f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6c0f, .value=0x2d, .type=IO_READ},
        {.addr=0x6c10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x499c, .a=0x83, .x=0xda, .y=0x30, .sp=0xb8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x499c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x499d, .a=0x83, .x=0xda, .y=0x30, .sp=0xb7, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x83}, {.addr=0x499c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x499c, .value=0x2d, .type=IO_READ},
        {.addr=0x499d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_039A) {
    const struct CPU_State initial_cpu = {.pc=0xb9d1, .a=0x52, .x=0x17, .y=0x53, .sp=0xaf, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0xb9d1, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb9d2, .a=0x52, .x=0x17, .y=0x53, .sp=0xae, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x52}, {.addr=0xb9d1, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb9d1, .value=0x2d, .type=IO_READ},
        {.addr=0xb9d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x615a, .a=0x7c, .x=0xf5, .y=0x49, .sp=0x06, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x615a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x615b, .a=0x7c, .x=0xf5, .y=0x49, .sp=0x05, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x7c}, {.addr=0x615a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x615a, .value=0x2d, .type=IO_READ},
        {.addr=0x615b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_039C) {
    const struct CPU_State initial_cpu = {.pc=0xab54, .a=0x16, .x=0xbe, .y=0x57, .sp=0xd7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xab54, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xab55, .a=0x16, .x=0xbe, .y=0x57, .sp=0xd6, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x16}, {.addr=0xab54, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xab54, .value=0x2d, .type=IO_READ},
        {.addr=0xab55, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_039D) {
    const struct CPU_State initial_cpu = {.pc=0x4382, .a=0x9d, .x=0x14, .y=0x20, .sp=0xb7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x4382, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4383, .a=0x9d, .x=0x14, .y=0x20, .sp=0xb6, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x9d}, {.addr=0x4382, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4382, .value=0x2d, .type=IO_READ},
        {.addr=0x4383, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_039E) {
    const struct CPU_State initial_cpu = {.pc=0x348e, .a=0x9c, .x=0x7f, .y=0x88, .sp=0x4f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x348e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x348f, .a=0x9c, .x=0x7f, .y=0x88, .sp=0x4e, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x9c}, {.addr=0x348e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x348e, .value=0x2d, .type=IO_READ},
        {.addr=0x348f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_039F) {
    const struct CPU_State initial_cpu = {.pc=0xe357, .a=0xc3, .x=0x91, .y=0xfa, .sp=0x14, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xe357, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe358, .a=0xc3, .x=0x91, .y=0xfa, .sp=0x13, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xc3}, {.addr=0xe357, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe357, .value=0x2d, .type=IO_READ},
        {.addr=0xe358, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x456a, .a=0x80, .x=0x99, .y=0x7c, .sp=0xc9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x456a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x456b, .a=0x80, .x=0x99, .y=0x7c, .sp=0xc8, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x80}, {.addr=0x456a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x456a, .value=0x2d, .type=IO_READ},
        {.addr=0x456b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x5ce8, .a=0x5e, .x=0xf5, .y=0xc0, .sp=0x1f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0x5ce8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5ce9, .a=0x5e, .x=0xf5, .y=0xc0, .sp=0x1e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x5e}, {.addr=0x5ce8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5ce8, .value=0x2d, .type=IO_READ},
        {.addr=0x5ce9, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xfedd, .a=0xa4, .x=0xe4, .y=0xb3, .sp=0xab, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0xfedd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfede, .a=0xa4, .x=0xe4, .y=0xb3, .sp=0xaa, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xa4}, {.addr=0xfedd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfedd, .value=0x2d, .type=IO_READ},
        {.addr=0xfede, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xf95e, .a=0x1c, .x=0x3d, .y=0x73, .sp=0xf1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0xf95e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf95f, .a=0x1c, .x=0x3d, .y=0x73, .sp=0xf0, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x1c}, {.addr=0xf95e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf95e, .value=0x2d, .type=IO_READ},
        {.addr=0xf95f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xd6c9, .a=0xdc, .x=0xb6, .y=0xd3, .sp=0x53, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xd6c9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd6ca, .a=0xdc, .x=0xb6, .y=0xd3, .sp=0x52, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xdc}, {.addr=0xd6c9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd6c9, .value=0x2d, .type=IO_READ},
        {.addr=0xd6ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x08c3, .a=0x29, .x=0x86, .y=0x9b, .sp=0xc9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x08c3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x08c4, .a=0x29, .x=0x86, .y=0x9b, .sp=0xc8, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x29}, {.addr=0x08c3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x08c3, .value=0x2d, .type=IO_READ},
        {.addr=0x08c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xe686, .a=0x34, .x=0xd8, .y=0xa8, .sp=0xc7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xe686, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe687, .a=0x34, .x=0xd8, .y=0xa8, .sp=0xc6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x34}, {.addr=0xe686, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe686, .value=0x2d, .type=IO_READ},
        {.addr=0xe687, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x8ec2, .a=0xf9, .x=0x65, .y=0x22, .sp=0x06, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x8ec2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8ec3, .a=0xf9, .x=0x65, .y=0x22, .sp=0x05, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xf9}, {.addr=0x8ec2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8ec2, .value=0x2d, .type=IO_READ},
        {.addr=0x8ec3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x5090, .a=0xc0, .x=0x40, .y=0x36, .sp=0x20, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x5090, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5091, .a=0xc0, .x=0x40, .y=0x36, .sp=0x1f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xc0}, {.addr=0x5090, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5090, .value=0x2d, .type=IO_READ},
        {.addr=0x5091, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xcab3, .a=0x36, .x=0xd4, .y=0x35, .sp=0x60, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0xcab3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcab4, .a=0x36, .x=0xd4, .y=0x35, .sp=0x5f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x36}, {.addr=0xcab3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcab3, .value=0x2d, .type=IO_READ},
        {.addr=0xcab4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xa314, .a=0x6f, .x=0x82, .y=0xe2, .sp=0x31, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0xa314, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa315, .a=0x6f, .x=0x82, .y=0xe2, .sp=0x30, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x6f}, {.addr=0xa314, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa314, .value=0x2d, .type=IO_READ},
        {.addr=0xa315, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x32ae, .a=0x7f, .x=0x97, .y=0x6c, .sp=0xdc, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x32ae, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x32af, .a=0x7f, .x=0x97, .y=0x6c, .sp=0xdb, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x7f}, {.addr=0x32ae, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x32ae, .value=0x2d, .type=IO_READ},
        {.addr=0x32af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x2bfe, .a=0x5d, .x=0x1f, .y=0x10, .sp=0x70, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x2bfe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2bff, .a=0x5d, .x=0x1f, .y=0x10, .sp=0x6f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x5d}, {.addr=0x2bfe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2bfe, .value=0x2d, .type=IO_READ},
        {.addr=0x2bff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xd41e, .a=0x08, .x=0x8c, .y=0x8c, .sp=0x05, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0xd41e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd41f, .a=0x08, .x=0x8c, .y=0x8c, .sp=0x04, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x08}, {.addr=0xd41e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd41e, .value=0x2d, .type=IO_READ},
        {.addr=0xd41f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3965, .a=0x62, .x=0xd5, .y=0xa3, .sp=0xbb, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x3965, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3966, .a=0x62, .x=0xd5, .y=0xa3, .sp=0xba, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x62}, {.addr=0x3965, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3965, .value=0x2d, .type=IO_READ},
        {.addr=0x3966, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x1c42, .a=0x7c, .x=0x8a, .y=0x35, .sp=0x6b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x1c42, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1c43, .a=0x7c, .x=0x8a, .y=0x35, .sp=0x6a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x7c}, {.addr=0x1c42, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1c42, .value=0x2d, .type=IO_READ},
        {.addr=0x1c43, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xf2c0, .a=0x34, .x=0x12, .y=0x05, .sp=0x72, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xf2c0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf2c1, .a=0x34, .x=0x12, .y=0x05, .sp=0x71, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x34}, {.addr=0xf2c0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf2c0, .value=0x2d, .type=IO_READ},
        {.addr=0xf2c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xc2bc, .a=0x93, .x=0x63, .y=0xe6, .sp=0xbc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xc2bc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc2bd, .a=0x93, .x=0x63, .y=0xe6, .sp=0xbb, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x93}, {.addr=0xc2bc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc2bc, .value=0x2d, .type=IO_READ},
        {.addr=0xc2bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x41b2, .a=0xda, .x=0x29, .y=0x71, .sp=0x8e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x41b2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x41b3, .a=0xda, .x=0x29, .y=0x71, .sp=0x8d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xda}, {.addr=0x41b2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x41b2, .value=0x2d, .type=IO_READ},
        {.addr=0x41b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x52f0, .a=0xa6, .x=0xfb, .y=0x3d, .sp=0x1d, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x52f0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x52f1, .a=0xa6, .x=0xfb, .y=0x3d, .sp=0x1c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xa6}, {.addr=0x52f0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x52f0, .value=0x2d, .type=IO_READ},
        {.addr=0x52f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xecaa, .a=0x57, .x=0x80, .y=0xf0, .sp=0x2a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xecaa, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xecab, .a=0x57, .x=0x80, .y=0xf0, .sp=0x29, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x57}, {.addr=0xecaa, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xecaa, .value=0x2d, .type=IO_READ},
        {.addr=0xecab, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x690e, .a=0x05, .x=0xe1, .y=0x04, .sp=0x24, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x690e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x690f, .a=0x05, .x=0xe1, .y=0x04, .sp=0x23, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x05}, {.addr=0x690e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x690e, .value=0x2d, .type=IO_READ},
        {.addr=0x690f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x8eb2, .a=0xfb, .x=0xde, .y=0xe7, .sp=0xe6, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x8eb2, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8eb3, .a=0xfb, .x=0xde, .y=0xe7, .sp=0xe5, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xfb}, {.addr=0x8eb2, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8eb2, .value=0x2d, .type=IO_READ},
        {.addr=0x8eb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x8b10, .a=0xfe, .x=0x56, .y=0xf8, .sp=0x43, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x8b10, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8b11, .a=0xfe, .x=0x56, .y=0xf8, .sp=0x42, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xfe}, {.addr=0x8b10, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8b10, .value=0x2d, .type=IO_READ},
        {.addr=0x8b11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x98cf, .a=0x19, .x=0xd0, .y=0xd1, .sp=0x1a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0x98cf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x98d0, .a=0x19, .x=0xd0, .y=0xd1, .sp=0x19, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x19}, {.addr=0x98cf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x98cf, .value=0x2d, .type=IO_READ},
        {.addr=0x98d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xfec8, .a=0x27, .x=0xb5, .y=0xfc, .sp=0xb7, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xfec8, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xfec9, .a=0x27, .x=0xb5, .y=0xfc, .sp=0xb6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x27}, {.addr=0xfec8, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xfec8, .value=0x2d, .type=IO_READ},
        {.addr=0xfec9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xdc59, .a=0x2b, .x=0xb1, .y=0xec, .sp=0x36, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0xdc59, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xdc5a, .a=0x2b, .x=0xb1, .y=0xec, .sp=0x35, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x2b}, {.addr=0xdc59, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xdc59, .value=0x2d, .type=IO_READ},
        {.addr=0xdc5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x1c07, .a=0x0d, .x=0xa0, .y=0x67, .sp=0xd1, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x1c07, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1c08, .a=0x0d, .x=0xa0, .y=0x67, .sp=0xd0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x0d}, {.addr=0x1c07, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1c07, .value=0x2d, .type=IO_READ},
        {.addr=0x1c08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x4258, .a=0x13, .x=0xbb, .y=0xd6, .sp=0x50, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x4258, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4259, .a=0x13, .x=0xbb, .y=0xd6, .sp=0x4f, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x13}, {.addr=0x4258, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4258, .value=0x2d, .type=IO_READ},
        {.addr=0x4259, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x2dd0, .a=0xfb, .x=0xcf, .y=0x42, .sp=0x6f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x2dd0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2dd1, .a=0xfb, .x=0xcf, .y=0x42, .sp=0x6e, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xfb}, {.addr=0x2dd0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2dd0, .value=0x2d, .type=IO_READ},
        {.addr=0x2dd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x4828, .a=0x37, .x=0xa2, .y=0x50, .sp=0xbd, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x4828, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4829, .a=0x37, .x=0xa2, .y=0x50, .sp=0xbc, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x37}, {.addr=0x4828, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4828, .value=0x2d, .type=IO_READ},
        {.addr=0x4829, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x8fb9, .a=0xc7, .x=0x57, .y=0x8e, .sp=0x62, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x8fb9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8fba, .a=0xc7, .x=0x57, .y=0x8e, .sp=0x61, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xc7}, {.addr=0x8fb9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8fb9, .value=0x2d, .type=IO_READ},
        {.addr=0x8fba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x9284, .a=0x32, .x=0x49, .y=0x9b, .sp=0x07, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x9284, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9285, .a=0x32, .x=0x49, .y=0x9b, .sp=0x06, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x32}, {.addr=0x9284, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9284, .value=0x2d, .type=IO_READ},
        {.addr=0x9285, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x2e32, .a=0x1a, .x=0x71, .y=0xef, .sp=0x8e, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x2e32, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2e33, .a=0x1a, .x=0x71, .y=0xef, .sp=0x8d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x1a}, {.addr=0x2e32, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2e32, .value=0x2d, .type=IO_READ},
        {.addr=0x2e33, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x23c0, .a=0xa9, .x=0x7e, .y=0x2a, .sp=0x15, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x23c0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x23c1, .a=0xa9, .x=0x7e, .y=0x2a, .sp=0x14, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xa9}, {.addr=0x23c0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x23c0, .value=0x2d, .type=IO_READ},
        {.addr=0x23c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x9711, .a=0xd7, .x=0x24, .y=0xb6, .sp=0xd6, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x9711, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9712, .a=0xd7, .x=0x24, .y=0xb6, .sp=0xd5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xd7}, {.addr=0x9711, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9711, .value=0x2d, .type=IO_READ},
        {.addr=0x9712, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xc6ec, .a=0xf8, .x=0x53, .y=0x1b, .sp=0x86, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xc6ec, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc6ed, .a=0xf8, .x=0x53, .y=0x1b, .sp=0x85, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xf8}, {.addr=0xc6ec, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc6ec, .value=0x2d, .type=IO_READ},
        {.addr=0xc6ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xb2cd, .a=0xe2, .x=0xf1, .y=0xe4, .sp=0xb3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0xb2cd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb2ce, .a=0xe2, .x=0xf1, .y=0xe4, .sp=0xb2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xe2}, {.addr=0xb2cd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb2cd, .value=0x2d, .type=IO_READ},
        {.addr=0xb2ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x7ea5, .a=0xcf, .x=0xdd, .y=0x64, .sp=0x86, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x7ea5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7ea6, .a=0xcf, .x=0xdd, .y=0x64, .sp=0x85, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xcf}, {.addr=0x7ea5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7ea5, .value=0x2d, .type=IO_READ},
        {.addr=0x7ea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xd540, .a=0x52, .x=0xc6, .y=0x9e, .sp=0x04, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xd540, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd541, .a=0x52, .x=0xc6, .y=0x9e, .sp=0x03, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x52}, {.addr=0xd540, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd540, .value=0x2d, .type=IO_READ},
        {.addr=0xd541, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x0aa5, .a=0xf2, .x=0xd5, .y=0x96, .sp=0x7d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x0aa5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0aa6, .a=0xf2, .x=0xd5, .y=0x96, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xf2}, {.addr=0x0aa5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0aa5, .value=0x2d, .type=IO_READ},
        {.addr=0x0aa6, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xc117, .a=0x84, .x=0x68, .y=0xa9, .sp=0x33, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xc117, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xc118, .a=0x84, .x=0x68, .y=0xa9, .sp=0x32, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x84}, {.addr=0xc117, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xc117, .value=0x2d, .type=IO_READ},
        {.addr=0xc118, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x416a, .a=0x2a, .x=0x61, .y=0x96, .sp=0xde, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x416a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x416b, .a=0x2a, .x=0x61, .y=0x96, .sp=0xdd, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x2a}, {.addr=0x416a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x416a, .value=0x2d, .type=IO_READ},
        {.addr=0x416b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x228d, .a=0xa8, .x=0xc5, .y=0xf7, .sp=0xc8, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0x228d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x228e, .a=0xa8, .x=0xc5, .y=0xf7, .sp=0xc7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xa8}, {.addr=0x228d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x228d, .value=0x2d, .type=IO_READ},
        {.addr=0x228e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xa83c, .a=0xc2, .x=0x94, .y=0x51, .sp=0x9e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0xa83c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa83d, .a=0xc2, .x=0x94, .y=0x51, .sp=0x9d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xc2}, {.addr=0xa83c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa83c, .value=0x2d, .type=IO_READ},
        {.addr=0xa83d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xe14b, .a=0x31, .x=0xdf, .y=0x37, .sp=0x19, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xe14b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe14c, .a=0x31, .x=0xdf, .y=0x37, .sp=0x18, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x31}, {.addr=0xe14b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe14b, .value=0x2d, .type=IO_READ},
        {.addr=0xe14c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x71bc, .a=0xfe, .x=0x7b, .y=0x47, .sp=0xfd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x71bc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x71bd, .a=0xfe, .x=0x7b, .y=0x47, .sp=0xfc, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xfe}, {.addr=0x71bc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x71bc, .value=0x2d, .type=IO_READ},
        {.addr=0x71bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x4f0d, .a=0x99, .x=0x02, .y=0xb0, .sp=0x89, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x4f0d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4f0e, .a=0x99, .x=0x02, .y=0xb0, .sp=0x88, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x99}, {.addr=0x4f0d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4f0d, .value=0x2d, .type=IO_READ},
        {.addr=0x4f0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x2da4, .a=0x75, .x=0x6a, .y=0xa2, .sp=0xf0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x2da4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x2da5, .a=0x75, .x=0x6a, .y=0xa2, .sp=0xef, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x75}, {.addr=0x2da4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x2da4, .value=0x2d, .type=IO_READ},
        {.addr=0x2da5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa4b9, .a=0xbc, .x=0x0d, .y=0x0a, .sp=0xf6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0xa4b9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa4ba, .a=0xbc, .x=0x0d, .y=0x0a, .sp=0xf5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xbc}, {.addr=0xa4b9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa4b9, .value=0x2d, .type=IO_READ},
        {.addr=0xa4ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xd676, .a=0x3b, .x=0x9a, .y=0xc7, .sp=0xaf, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0xd676, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd677, .a=0x3b, .x=0x9a, .y=0xc7, .sp=0xae, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x3b}, {.addr=0xd676, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd676, .value=0x2d, .type=IO_READ},
        {.addr=0xd677, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xd492, .a=0xef, .x=0x1b, .y=0x16, .sp=0x21, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0xd492, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd493, .a=0xef, .x=0x1b, .y=0x16, .sp=0x20, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xef}, {.addr=0xd492, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd492, .value=0x2d, .type=IO_READ},
        {.addr=0xd493, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x1886, .a=0x6e, .x=0xfc, .y=0xea, .sp=0x22, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x1886, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1887, .a=0x6e, .x=0xfc, .y=0xea, .sp=0x21, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x6e}, {.addr=0x1886, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1886, .value=0x2d, .type=IO_READ},
        {.addr=0x1887, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x57fc, .a=0x03, .x=0xfb, .y=0x01, .sp=0x4e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x57fc, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x57fd, .a=0x03, .x=0xfb, .y=0x01, .sp=0x4d, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x03}, {.addr=0x57fc, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x57fc, .value=0x2d, .type=IO_READ},
        {.addr=0x57fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x5064, .a=0x60, .x=0x63, .y=0x46, .sp=0x03, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x5064, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5065, .a=0x60, .x=0x63, .y=0x46, .sp=0x02, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x60}, {.addr=0x5064, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5064, .value=0x2d, .type=IO_READ},
        {.addr=0x5065, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xcfcf, .a=0x04, .x=0xe5, .y=0x3a, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xcfcf, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcfd0, .a=0x04, .x=0xe5, .y=0x3a, .sp=0x61, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x04}, {.addr=0xcfcf, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcfcf, .value=0x2d, .type=IO_READ},
        {.addr=0xcfd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x5b05, .a=0xf0, .x=0x89, .y=0xe5, .sp=0xd5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0x5b05, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5b06, .a=0xf0, .x=0x89, .y=0xe5, .sp=0xd4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xf0}, {.addr=0x5b05, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5b05, .value=0x2d, .type=IO_READ},
        {.addr=0x5b06, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x7ab3, .a=0x1a, .x=0x88, .y=0x41, .sp=0xe1, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x7ab3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7ab4, .a=0x1a, .x=0x88, .y=0x41, .sp=0xe0, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x1a}, {.addr=0x7ab3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7ab3, .value=0x2d, .type=IO_READ},
        {.addr=0x7ab4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xaebe, .a=0xb6, .x=0xea, .y=0xcf, .sp=0x58, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xaebe, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xaebf, .a=0xb6, .x=0xea, .y=0xcf, .sp=0x57, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xb6}, {.addr=0xaebe, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xaebe, .value=0x2d, .type=IO_READ},
        {.addr=0xaebf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xeea5, .a=0xd3, .x=0xe8, .y=0x88, .sp=0x96, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0xeea5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xeea6, .a=0xd3, .x=0xe8, .y=0x88, .sp=0x95, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xd3}, {.addr=0xeea5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xeea5, .value=0x2d, .type=IO_READ},
        {.addr=0xeea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x7f87, .a=0x7b, .x=0x09, .y=0xa8, .sp=0x52, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x7f87, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x7f88, .a=0x7b, .x=0x09, .y=0xa8, .sp=0x51, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x7b}, {.addr=0x7f87, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x7f87, .value=0x2d, .type=IO_READ},
        {.addr=0x7f88, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x25a6, .a=0x33, .x=0xf5, .y=0x18, .sp=0x26, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x25a6, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x25a7, .a=0x33, .x=0xf5, .y=0x18, .sp=0x25, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x33}, {.addr=0x25a6, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x25a6, .value=0x2d, .type=IO_READ},
        {.addr=0x25a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1138, .a=0xe7, .x=0x59, .y=0x37, .sp=0xe9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x1138, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x1139, .a=0xe7, .x=0x59, .y=0x37, .sp=0xe8, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xe7}, {.addr=0x1138, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x1138, .value=0x2d, .type=IO_READ},
        {.addr=0x1139, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x60f5, .a=0xd5, .x=0xe1, .y=0x9d, .sp=0x38, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x60f5, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x60f6, .a=0xd5, .x=0xe1, .y=0x9d, .sp=0x37, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xd5}, {.addr=0x60f5, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x60f5, .value=0x2d, .type=IO_READ},
        {.addr=0x60f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xd04d, .a=0xb5, .x=0xd9, .y=0x5d, .sp=0xd7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xd04d, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd04e, .a=0xb5, .x=0xd9, .y=0x5d, .sp=0xd6, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xb5}, {.addr=0xd04d, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd04d, .value=0x2d, .type=IO_READ},
        {.addr=0xd04e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x34df, .a=0x20, .x=0xa3, .y=0x09, .sp=0x6d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x34df, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x34e0, .a=0x20, .x=0xa3, .y=0x09, .sp=0x6c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x20}, {.addr=0x34df, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x34df, .value=0x2d, .type=IO_READ},
        {.addr=0x34e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x143b, .a=0x20, .x=0x6a, .y=0x88, .sp=0x0b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x143b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x143c, .a=0x20, .x=0x6a, .y=0x88, .sp=0x0a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x20}, {.addr=0x143b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x143b, .value=0x2d, .type=IO_READ},
        {.addr=0x143c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x8239, .a=0x32, .x=0xc8, .y=0xe3, .sp=0x12, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x8239, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x823a, .a=0x32, .x=0xc8, .y=0xe3, .sp=0x11, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x32}, {.addr=0x8239, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8239, .value=0x2d, .type=IO_READ},
        {.addr=0x823a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xb810, .a=0x36, .x=0x4c, .y=0x10, .sp=0x57, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xb810, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb811, .a=0x36, .x=0x4c, .y=0x10, .sp=0x56, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x36}, {.addr=0xb810, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb810, .value=0x2d, .type=IO_READ},
        {.addr=0xb811, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xae5b, .a=0x5b, .x=0x26, .y=0xd3, .sp=0x30, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0xae5b, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xae5c, .a=0x5b, .x=0x26, .y=0xd3, .sp=0x2f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x5b}, {.addr=0xae5b, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xae5b, .value=0x2d, .type=IO_READ},
        {.addr=0xae5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xa20a, .a=0x25, .x=0xd4, .y=0x19, .sp=0xbb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0xa20a, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa20b, .a=0x25, .x=0xd4, .y=0x19, .sp=0xba, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x25}, {.addr=0xa20a, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa20a, .value=0x2d, .type=IO_READ},
        {.addr=0xa20b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_2D, _2D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xec17, .a=0xbd, .x=0xc1, .y=0xfa, .sp=0x76, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0xec17, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xec18, .a=0xbd, .x=0xc1, .y=0xfa, .sp=0x75, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xbd}, {.addr=0xec17, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xec17, .value=0x2d, .type=IO_READ},
        {.addr=0xec18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("2D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
