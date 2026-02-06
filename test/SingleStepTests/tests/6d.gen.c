#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_6D, _6D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x5ac2, .a=0xac, .x=0x35, .y=0xac, .sp=0xa7, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x5ac2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5ac3, .a=0xac, .x=0x35, .y=0xac, .sp=0xa6, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xac}, {.addr=0x5ac2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5ac2, .value=0x6d, .type=IO_READ},
        {.addr=0x5ac3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x4e21, .a=0x27, .x=0x70, .y=0xb9, .sp=0xb8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x4e21, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4e22, .a=0x27, .x=0x70, .y=0xb9, .sp=0xb7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xb9}, {.addr=0x4e21, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4e21, .value=0x6d, .type=IO_READ},
        {.addr=0x4e22, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0002) {
    const struct CPU_State initial_cpu = {.pc=0x5b50, .a=0xa0, .x=0x19, .y=0x25, .sp=0x6a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x5b50, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5b51, .a=0xa0, .x=0x19, .y=0x25, .sp=0x69, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x25}, {.addr=0x5b50, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5b50, .value=0x6d, .type=IO_READ},
        {.addr=0x5b51, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0003) {
    const struct CPU_State initial_cpu = {.pc=0xd03d, .a=0xf8, .x=0x99, .y=0x99, .sp=0xc9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xd03d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd03e, .a=0xf8, .x=0x99, .y=0x99, .sp=0xc8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x99}, {.addr=0xd03d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd03d, .value=0x6d, .type=IO_READ},
        {.addr=0xd03e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0004) {
    const struct CPU_State initial_cpu = {.pc=0x68c7, .a=0x9c, .x=0x19, .y=0xa1, .sp=0xf1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x68c7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x68c8, .a=0x9c, .x=0x19, .y=0xa1, .sp=0xf0, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xa1}, {.addr=0x68c7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x68c7, .value=0x6d, .type=IO_READ},
        {.addr=0x68c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0005) {
    const struct CPU_State initial_cpu = {.pc=0xc7d3, .a=0x64, .x=0xd7, .y=0xdd, .sp=0x59, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xc7d3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc7d4, .a=0x64, .x=0xd7, .y=0xdd, .sp=0x58, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xdd}, {.addr=0xc7d3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc7d3, .value=0x6d, .type=IO_READ},
        {.addr=0xc7d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0006) {
    const struct CPU_State initial_cpu = {.pc=0xae86, .a=0x5c, .x=0x65, .y=0xa5, .sp=0xa5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xae86, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xae87, .a=0x5c, .x=0x65, .y=0xa5, .sp=0xa4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xa5}, {.addr=0xae86, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xae86, .value=0x6d, .type=IO_READ},
        {.addr=0xae87, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x9267, .a=0xb3, .x=0x49, .y=0x82, .sp=0xc1, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x9267, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9268, .a=0xb3, .x=0x49, .y=0x82, .sp=0xc0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x82}, {.addr=0x9267, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9267, .value=0x6d, .type=IO_READ},
        {.addr=0x9268, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x3c48, .a=0x54, .x=0x06, .y=0x59, .sp=0xe0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x3c48, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3c49, .a=0x54, .x=0x06, .y=0x59, .sp=0xdf, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x59}, {.addr=0x3c48, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3c48, .value=0x6d, .type=IO_READ},
        {.addr=0x3c49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xb783, .a=0x2c, .x=0x84, .y=0x97, .sp=0xa5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xb783, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb784, .a=0x2c, .x=0x84, .y=0x97, .sp=0xa4, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x97}, {.addr=0xb783, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb783, .value=0x6d, .type=IO_READ},
        {.addr=0xb784, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_000A) {
    const struct CPU_State initial_cpu = {.pc=0x0529, .a=0x8c, .x=0x58, .y=0x97, .sp=0xe8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x0529, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x052a, .a=0x8c, .x=0x58, .y=0x97, .sp=0xe7, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x97}, {.addr=0x0529, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0529, .value=0x6d, .type=IO_READ},
        {.addr=0x052a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_000B) {
    const struct CPU_State initial_cpu = {.pc=0x7962, .a=0xc6, .x=0x28, .y=0x93, .sp=0xc4, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x7962, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7963, .a=0xc6, .x=0x28, .y=0x93, .sp=0xc3, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x93}, {.addr=0x7962, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7962, .value=0x6d, .type=IO_READ},
        {.addr=0x7963, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x7af8, .a=0x8b, .x=0x83, .y=0xe5, .sp=0xd4, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x7af8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7af9, .a=0x8b, .x=0x83, .y=0xe5, .sp=0xd3, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xe5}, {.addr=0x7af8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7af8, .value=0x6d, .type=IO_READ},
        {.addr=0x7af9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x1aee, .a=0x5a, .x=0xb8, .y=0xf4, .sp=0xfa, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x1aee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1aef, .a=0x5a, .x=0xb8, .y=0xf4, .sp=0xf9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xf4}, {.addr=0x1aee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1aee, .value=0x6d, .type=IO_READ},
        {.addr=0x1aef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_000E) {
    const struct CPU_State initial_cpu = {.pc=0xf5c5, .a=0xcd, .x=0x90, .y=0x4d, .sp=0xdf, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xf5c5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf5c6, .a=0xcd, .x=0x90, .y=0x4d, .sp=0xde, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x4d}, {.addr=0xf5c5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf5c5, .value=0x6d, .type=IO_READ},
        {.addr=0xf5c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x64d1, .a=0x5d, .x=0xbf, .y=0xbf, .sp=0x2f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x64d1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x64d2, .a=0x5d, .x=0xbf, .y=0xbf, .sp=0x2e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xbf}, {.addr=0x64d1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x64d1, .value=0x6d, .type=IO_READ},
        {.addr=0x64d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x45b2, .a=0x9a, .x=0xff, .y=0xfd, .sp=0x10, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x45b2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x45b3, .a=0x9a, .x=0xff, .y=0xfd, .sp=0x0f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xfd}, {.addr=0x45b2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x45b2, .value=0x6d, .type=IO_READ},
        {.addr=0x45b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0011) {
    const struct CPU_State initial_cpu = {.pc=0x892b, .a=0xa4, .x=0xb1, .y=0x28, .sp=0x27, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x892b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x892c, .a=0xa4, .x=0xb1, .y=0x28, .sp=0x26, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x28}, {.addr=0x892b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x892b, .value=0x6d, .type=IO_READ},
        {.addr=0x892c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0012) {
    const struct CPU_State initial_cpu = {.pc=0xaddb, .a=0x25, .x=0x86, .y=0xde, .sp=0xeb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xaddb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaddc, .a=0x25, .x=0x86, .y=0xde, .sp=0xea, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xde}, {.addr=0xaddb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaddb, .value=0x6d, .type=IO_READ},
        {.addr=0xaddc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x7a97, .a=0xc2, .x=0xad, .y=0x82, .sp=0x5e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x7a97, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7a98, .a=0xc2, .x=0xad, .y=0x82, .sp=0x5d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x82}, {.addr=0x7a97, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7a97, .value=0x6d, .type=IO_READ},
        {.addr=0x7a98, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0014) {
    const struct CPU_State initial_cpu = {.pc=0x2d51, .a=0xf0, .x=0xdd, .y=0xd9, .sp=0x01, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x2d51, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d52, .a=0xf0, .x=0xdd, .y=0xd9, .sp=0x00, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xd9}, {.addr=0x2d51, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d51, .value=0x6d, .type=IO_READ},
        {.addr=0x2d52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0015) {
    const struct CPU_State initial_cpu = {.pc=0xf9c5, .a=0x52, .x=0x36, .y=0xbd, .sp=0xef, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xf9c5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf9c6, .a=0x52, .x=0x36, .y=0xbd, .sp=0xee, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xbd}, {.addr=0xf9c5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf9c5, .value=0x6d, .type=IO_READ},
        {.addr=0xf9c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0016) {
    const struct CPU_State initial_cpu = {.pc=0xe74e, .a=0xe7, .x=0x80, .y=0x2f, .sp=0x7d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xe74e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe74f, .a=0xe7, .x=0x80, .y=0x2f, .sp=0x7c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x2f}, {.addr=0xe74e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe74e, .value=0x6d, .type=IO_READ},
        {.addr=0xe74f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0017) {
    const struct CPU_State initial_cpu = {.pc=0x4c3c, .a=0x68, .x=0x29, .y=0x0c, .sp=0x46, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x4c3c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4c3d, .a=0x68, .x=0x29, .y=0x0c, .sp=0x45, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x0c}, {.addr=0x4c3c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4c3c, .value=0x6d, .type=IO_READ},
        {.addr=0x4c3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x77c9, .a=0x11, .x=0x78, .y=0x2a, .sp=0xa1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x77c9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x77ca, .a=0x11, .x=0x78, .y=0x2a, .sp=0xa0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x2a}, {.addr=0x77c9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x77c9, .value=0x6d, .type=IO_READ},
        {.addr=0x77ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x211c, .a=0x0d, .x=0x8e, .y=0x29, .sp=0x8f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x211c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x211d, .a=0x0d, .x=0x8e, .y=0x29, .sp=0x8e, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x29}, {.addr=0x211c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x211c, .value=0x6d, .type=IO_READ},
        {.addr=0x211d, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_001A) {
    const struct CPU_State initial_cpu = {.pc=0x6cce, .a=0xe4, .x=0xd5, .y=0xe5, .sp=0xad, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x6cce, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6ccf, .a=0xe4, .x=0xd5, .y=0xe5, .sp=0xac, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xe5}, {.addr=0x6cce, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6cce, .value=0x6d, .type=IO_READ},
        {.addr=0x6ccf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x4b9b, .a=0x8d, .x=0xbf, .y=0x7c, .sp=0xe3, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x4b9b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4b9c, .a=0x8d, .x=0xbf, .y=0x7c, .sp=0xe2, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x7c}, {.addr=0x4b9b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4b9b, .value=0x6d, .type=IO_READ},
        {.addr=0x4b9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_001C) {
    const struct CPU_State initial_cpu = {.pc=0xe585, .a=0x69, .x=0x85, .y=0x04, .sp=0x40, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0xe585, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe586, .a=0x69, .x=0x85, .y=0x04, .sp=0x3f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x04}, {.addr=0xe585, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe585, .value=0x6d, .type=IO_READ},
        {.addr=0xe586, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_001D) {
    const struct CPU_State initial_cpu = {.pc=0xe5ee, .a=0xd3, .x=0xb3, .y=0x5c, .sp=0x84, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xe5ee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe5ef, .a=0xd3, .x=0xb3, .y=0x5c, .sp=0x83, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x5c}, {.addr=0xe5ee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe5ee, .value=0x6d, .type=IO_READ},
        {.addr=0xe5ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_001E) {
    const struct CPU_State initial_cpu = {.pc=0xf7e1, .a=0x4b, .x=0xdd, .y=0x04, .sp=0xf5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xf7e1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf7e2, .a=0x4b, .x=0xdd, .y=0x04, .sp=0xf4, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x04}, {.addr=0xf7e1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf7e1, .value=0x6d, .type=IO_READ},
        {.addr=0xf7e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_001F) {
    const struct CPU_State initial_cpu = {.pc=0xc6a6, .a=0xcd, .x=0xc4, .y=0x43, .sp=0xd1, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0xc6a6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc6a7, .a=0xcd, .x=0xc4, .y=0x43, .sp=0xd0, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x43}, {.addr=0xc6a6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc6a6, .value=0x6d, .type=IO_READ},
        {.addr=0xc6a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x8cfc, .a=0xd2, .x=0xca, .y=0x55, .sp=0x93, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x8cfc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8cfd, .a=0xd2, .x=0xca, .y=0x55, .sp=0x92, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x55}, {.addr=0x8cfc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8cfc, .value=0x6d, .type=IO_READ},
        {.addr=0x8cfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x5c41, .a=0xb4, .x=0x97, .y=0x7c, .sp=0x41, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x5c41, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5c42, .a=0xb4, .x=0x97, .y=0x7c, .sp=0x40, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x7c}, {.addr=0x5c41, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5c41, .value=0x6d, .type=IO_READ},
        {.addr=0x5c42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0022) {
    const struct CPU_State initial_cpu = {.pc=0xc3bf, .a=0x72, .x=0xd0, .y=0xc7, .sp=0xf8, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xc3bf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc3c0, .a=0x72, .x=0xd0, .y=0xc7, .sp=0xf7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xc7}, {.addr=0xc3bf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc3bf, .value=0x6d, .type=IO_READ},
        {.addr=0xc3c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0023) {
    const struct CPU_State initial_cpu = {.pc=0x5798, .a=0x32, .x=0xbb, .y=0xc6, .sp=0xbd, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x5798, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5799, .a=0x32, .x=0xbb, .y=0xc6, .sp=0xbc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xc6}, {.addr=0x5798, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5798, .value=0x6d, .type=IO_READ},
        {.addr=0x5799, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0024) {
    const struct CPU_State initial_cpu = {.pc=0xc022, .a=0x2b, .x=0x1e, .y=0xdc, .sp=0x14, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xc022, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc023, .a=0x2b, .x=0x1e, .y=0xdc, .sp=0x13, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xdc}, {.addr=0xc022, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc022, .value=0x6d, .type=IO_READ},
        {.addr=0xc023, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x38e3, .a=0x0b, .x=0x51, .y=0xb0, .sp=0x07, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x38e3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x38e4, .a=0x0b, .x=0x51, .y=0xb0, .sp=0x06, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xb0}, {.addr=0x38e3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x38e3, .value=0x6d, .type=IO_READ},
        {.addr=0x38e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0026) {
    const struct CPU_State initial_cpu = {.pc=0x8862, .a=0x3f, .x=0x5b, .y=0xd5, .sp=0x79, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x8862, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8863, .a=0x3f, .x=0x5b, .y=0xd5, .sp=0x78, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xd5}, {.addr=0x8862, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8862, .value=0x6d, .type=IO_READ},
        {.addr=0x8863, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0027) {
    const struct CPU_State initial_cpu = {.pc=0xabbd, .a=0x0b, .x=0xd5, .y=0xdf, .sp=0x46, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xabbd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xabbe, .a=0x0b, .x=0xd5, .y=0xdf, .sp=0x45, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xdf}, {.addr=0xabbd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xabbd, .value=0x6d, .type=IO_READ},
        {.addr=0xabbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xd036, .a=0x9f, .x=0xd3, .y=0x79, .sp=0x19, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xd036, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd037, .a=0x9f, .x=0xd3, .y=0x79, .sp=0x18, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x79}, {.addr=0xd036, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd036, .value=0x6d, .type=IO_READ},
        {.addr=0xd037, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0029) {
    const struct CPU_State initial_cpu = {.pc=0x417b, .a=0x69, .x=0x9e, .y=0xc4, .sp=0x0b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x417b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x417c, .a=0x69, .x=0x9e, .y=0xc4, .sp=0x0a, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xc4}, {.addr=0x417b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x417b, .value=0x6d, .type=IO_READ},
        {.addr=0x417c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_002A) {
    const struct CPU_State initial_cpu = {.pc=0x88df, .a=0x20, .x=0x0b, .y=0x6a, .sp=0x5e, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x88df, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x88e0, .a=0x20, .x=0x0b, .y=0x6a, .sp=0x5d, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x6a}, {.addr=0x88df, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x88df, .value=0x6d, .type=IO_READ},
        {.addr=0x88e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xe2e8, .a=0xba, .x=0xcf, .y=0x47, .sp=0x3c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xe2e8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe2e9, .a=0xba, .x=0xcf, .y=0x47, .sp=0x3b, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x47}, {.addr=0xe2e8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe2e8, .value=0x6d, .type=IO_READ},
        {.addr=0xe2e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x5083, .a=0x0e, .x=0xf4, .y=0xc6, .sp=0xc1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x5083, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5084, .a=0x0e, .x=0xf4, .y=0xc6, .sp=0xc0, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xc6}, {.addr=0x5083, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5083, .value=0x6d, .type=IO_READ},
        {.addr=0x5084, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_002D) {
    const struct CPU_State initial_cpu = {.pc=0x222e, .a=0x10, .x=0xe5, .y=0x7d, .sp=0x4c, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x222e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x222f, .a=0x10, .x=0xe5, .y=0x7d, .sp=0x4b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x7d}, {.addr=0x222e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x222e, .value=0x6d, .type=IO_READ},
        {.addr=0x222f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x1ca1, .a=0x31, .x=0xb4, .y=0x6a, .sp=0x8d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x1ca1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1ca2, .a=0x31, .x=0xb4, .y=0x6a, .sp=0x8c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x6a}, {.addr=0x1ca1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1ca1, .value=0x6d, .type=IO_READ},
        {.addr=0x1ca2, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8713, .a=0xc6, .x=0x7b, .y=0xce, .sp=0xa1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x8713, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8714, .a=0xc6, .x=0x7b, .y=0xce, .sp=0xa0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xce}, {.addr=0x8713, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8713, .value=0x6d, .type=IO_READ},
        {.addr=0x8714, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x1add, .a=0x89, .x=0x28, .y=0xa4, .sp=0xf0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x1add, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1ade, .a=0x89, .x=0x28, .y=0xa4, .sp=0xef, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xa4}, {.addr=0x1add, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1add, .value=0x6d, .type=IO_READ},
        {.addr=0x1ade, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x3f75, .a=0x0e, .x=0x3e, .y=0x0d, .sp=0x62, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x3f75, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3f76, .a=0x0e, .x=0x3e, .y=0x0d, .sp=0x61, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x0d}, {.addr=0x3f75, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3f75, .value=0x6d, .type=IO_READ},
        {.addr=0x3f76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0032) {
    const struct CPU_State initial_cpu = {.pc=0xc687, .a=0xef, .x=0xf7, .y=0x96, .sp=0xb1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xc687, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc688, .a=0xef, .x=0xf7, .y=0x96, .sp=0xb0, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x96}, {.addr=0xc687, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc687, .value=0x6d, .type=IO_READ},
        {.addr=0xc688, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0033) {
    const struct CPU_State initial_cpu = {.pc=0x36df, .a=0x3b, .x=0x57, .y=0x3f, .sp=0x33, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x36df, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x36e0, .a=0x3b, .x=0x57, .y=0x3f, .sp=0x32, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x3f}, {.addr=0x36df, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x36df, .value=0x6d, .type=IO_READ},
        {.addr=0x36e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0034) {
    const struct CPU_State initial_cpu = {.pc=0xe1ff, .a=0x20, .x=0xbf, .y=0xa2, .sp=0x35, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xe1ff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe200, .a=0x20, .x=0xbf, .y=0xa2, .sp=0x34, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xa2}, {.addr=0xe1ff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe1ff, .value=0x6d, .type=IO_READ},
        {.addr=0xe200, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x9fbc, .a=0xed, .x=0xa3, .y=0x47, .sp=0x6b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x9fbc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9fbd, .a=0xed, .x=0xa3, .y=0x47, .sp=0x6a, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x47}, {.addr=0x9fbc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9fbc, .value=0x6d, .type=IO_READ},
        {.addr=0x9fbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0036) {
    const struct CPU_State initial_cpu = {.pc=0xa833, .a=0xa4, .x=0xcb, .y=0x21, .sp=0x24, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0xa833, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa834, .a=0xa4, .x=0xcb, .y=0x21, .sp=0x23, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x21}, {.addr=0xa833, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa833, .value=0x6d, .type=IO_READ},
        {.addr=0xa834, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0037) {
    const struct CPU_State initial_cpu = {.pc=0xb484, .a=0x7d, .x=0xfb, .y=0x98, .sp=0xbf, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xb484, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb485, .a=0x7d, .x=0xfb, .y=0x98, .sp=0xbe, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x98}, {.addr=0xb484, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb484, .value=0x6d, .type=IO_READ},
        {.addr=0xb485, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0038) {
    const struct CPU_State initial_cpu = {.pc=0xb14a, .a=0x5c, .x=0x61, .y=0x19, .sp=0xa7, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xb14a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb14b, .a=0x5c, .x=0x61, .y=0x19, .sp=0xa6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x19}, {.addr=0xb14a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb14a, .value=0x6d, .type=IO_READ},
        {.addr=0xb14b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x900f, .a=0xda, .x=0x03, .y=0x65, .sp=0x58, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x900f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9010, .a=0xda, .x=0x03, .y=0x65, .sp=0x57, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x65}, {.addr=0x900f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x900f, .value=0x6d, .type=IO_READ},
        {.addr=0x9010, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_003A) {
    const struct CPU_State initial_cpu = {.pc=0x2881, .a=0xc9, .x=0x68, .y=0xc6, .sp=0x22, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x2881, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2882, .a=0xc9, .x=0x68, .y=0xc6, .sp=0x21, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xc6}, {.addr=0x2881, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2881, .value=0x6d, .type=IO_READ},
        {.addr=0x2882, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x5ee9, .a=0x8f, .x=0x5e, .y=0x6c, .sp=0xae, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x5ee9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5eea, .a=0x8f, .x=0x5e, .y=0x6c, .sp=0xad, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x6c}, {.addr=0x5ee9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5ee9, .value=0x6d, .type=IO_READ},
        {.addr=0x5eea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x295d, .a=0x60, .x=0xfc, .y=0xc8, .sp=0x81, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x295d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x295e, .a=0x60, .x=0xfc, .y=0xc8, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc8}, {.addr=0x295d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x295d, .value=0x6d, .type=IO_READ},
        {.addr=0x295e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0bf4, .a=0x8d, .x=0x32, .y=0x4b, .sp=0xa3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x0bf4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0bf5, .a=0x8d, .x=0x32, .y=0x4b, .sp=0xa2, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x4b}, {.addr=0x0bf4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0bf4, .value=0x6d, .type=IO_READ},
        {.addr=0x0bf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x5210, .a=0xb7, .x=0xf4, .y=0x81, .sp=0x11, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x5210, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5211, .a=0xb7, .x=0xf4, .y=0x81, .sp=0x10, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x81}, {.addr=0x5210, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5210, .value=0x6d, .type=IO_READ},
        {.addr=0x5211, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x8cd6, .a=0x7b, .x=0x0c, .y=0xc6, .sp=0x4c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x8cd6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8cd7, .a=0x7b, .x=0x0c, .y=0xc6, .sp=0x4b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xc6}, {.addr=0x8cd6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8cd6, .value=0x6d, .type=IO_READ},
        {.addr=0x8cd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0040) {
    const struct CPU_State initial_cpu = {.pc=0xb45a, .a=0x31, .x=0xf9, .y=0xf5, .sp=0x42, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xb45a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb45b, .a=0x31, .x=0xf9, .y=0xf5, .sp=0x41, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xf5}, {.addr=0xb45a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb45a, .value=0x6d, .type=IO_READ},
        {.addr=0xb45b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x3133, .a=0xfb, .x=0x29, .y=0x62, .sp=0x4b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x3133, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3134, .a=0xfb, .x=0x29, .y=0x62, .sp=0x4a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x62}, {.addr=0x3133, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3133, .value=0x6d, .type=IO_READ},
        {.addr=0x3134, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0042) {
    const struct CPU_State initial_cpu = {.pc=0x412c, .a=0xfd, .x=0xf5, .y=0xcd, .sp=0xe2, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x412c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x412d, .a=0xfd, .x=0xf5, .y=0xcd, .sp=0xe1, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xcd}, {.addr=0x412c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x412c, .value=0x6d, .type=IO_READ},
        {.addr=0x412d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0043) {
    const struct CPU_State initial_cpu = {.pc=0x5137, .a=0x5b, .x=0xee, .y=0xea, .sp=0x13, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x5137, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5138, .a=0x5b, .x=0xee, .y=0xea, .sp=0x12, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xea}, {.addr=0x5137, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5137, .value=0x6d, .type=IO_READ},
        {.addr=0x5138, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x26d0, .a=0x40, .x=0x32, .y=0x7a, .sp=0x37, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x26d0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x26d1, .a=0x40, .x=0x32, .y=0x7a, .sp=0x36, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x7a}, {.addr=0x26d0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x26d0, .value=0x6d, .type=IO_READ},
        {.addr=0x26d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0045) {
    const struct CPU_State initial_cpu = {.pc=0xd661, .a=0x09, .x=0xff, .y=0xd3, .sp=0x53, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xd661, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd662, .a=0x09, .x=0xff, .y=0xd3, .sp=0x52, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xd3}, {.addr=0xd661, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd661, .value=0x6d, .type=IO_READ},
        {.addr=0xd662, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0046) {
    const struct CPU_State initial_cpu = {.pc=0x7e35, .a=0xd4, .x=0x2f, .y=0xc6, .sp=0x2e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x7e35, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7e36, .a=0xd4, .x=0x2f, .y=0xc6, .sp=0x2d, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xc6}, {.addr=0x7e35, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7e35, .value=0x6d, .type=IO_READ},
        {.addr=0x7e36, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0047) {
    const struct CPU_State initial_cpu = {.pc=0x8fc8, .a=0x9a, .x=0x6f, .y=0x03, .sp=0x06, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x8fc8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8fc9, .a=0x9a, .x=0x6f, .y=0x03, .sp=0x05, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x03}, {.addr=0x8fc8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8fc8, .value=0x6d, .type=IO_READ},
        {.addr=0x8fc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x074b, .a=0xa4, .x=0x8e, .y=0x40, .sp=0x15, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x074b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x074c, .a=0xa4, .x=0x8e, .y=0x40, .sp=0x14, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x40}, {.addr=0x074b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x074b, .value=0x6d, .type=IO_READ},
        {.addr=0x074c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0049) {
    const struct CPU_State initial_cpu = {.pc=0x1d85, .a=0x65, .x=0x05, .y=0x77, .sp=0xc7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x1d85, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1d86, .a=0x65, .x=0x05, .y=0x77, .sp=0xc6, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x77}, {.addr=0x1d85, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1d85, .value=0x6d, .type=IO_READ},
        {.addr=0x1d86, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_004A) {
    const struct CPU_State initial_cpu = {.pc=0x07b1, .a=0x7f, .x=0x22, .y=0xaa, .sp=0x5a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x07b1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x07b2, .a=0x7f, .x=0x22, .y=0xaa, .sp=0x59, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xaa}, {.addr=0x07b1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x07b1, .value=0x6d, .type=IO_READ},
        {.addr=0x07b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_004B) {
    const struct CPU_State initial_cpu = {.pc=0x92f0, .a=0x36, .x=0xd6, .y=0x33, .sp=0xe9, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x92f0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x92f1, .a=0x36, .x=0xd6, .y=0x33, .sp=0xe8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x33}, {.addr=0x92f0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x92f0, .value=0x6d, .type=IO_READ},
        {.addr=0x92f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x5afe, .a=0xed, .x=0x41, .y=0x19, .sp=0xdb, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x5afe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5aff, .a=0xed, .x=0x41, .y=0x19, .sp=0xda, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x19}, {.addr=0x5afe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5afe, .value=0x6d, .type=IO_READ},
        {.addr=0x5aff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x97ff, .a=0x48, .x=0xe1, .y=0x24, .sp=0x8c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x97ff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9800, .a=0x48, .x=0xe1, .y=0x24, .sp=0x8b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x24}, {.addr=0x97ff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x97ff, .value=0x6d, .type=IO_READ},
        {.addr=0x9800, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_004E) {
    const struct CPU_State initial_cpu = {.pc=0xe078, .a=0xda, .x=0xea, .y=0x59, .sp=0x43, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xe078, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe079, .a=0xda, .x=0xea, .y=0x59, .sp=0x42, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x59}, {.addr=0xe078, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe078, .value=0x6d, .type=IO_READ},
        {.addr=0xe079, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x02a2, .a=0xae, .x=0x9c, .y=0xea, .sp=0x72, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x02a2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x02a3, .a=0xae, .x=0x9c, .y=0xea, .sp=0x71, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xea}, {.addr=0x02a2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x02a2, .value=0x6d, .type=IO_READ},
        {.addr=0x02a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0050) {
    const struct CPU_State initial_cpu = {.pc=0xf26e, .a=0xbb, .x=0xca, .y=0xcc, .sp=0x35, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xf26e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf26f, .a=0xbb, .x=0xca, .y=0xcc, .sp=0x34, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xcc}, {.addr=0xf26e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf26e, .value=0x6d, .type=IO_READ},
        {.addr=0xf26f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0051) {
    const struct CPU_State initial_cpu = {.pc=0xb691, .a=0xd6, .x=0xe4, .y=0x82, .sp=0xa2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0xb691, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb692, .a=0xd6, .x=0xe4, .y=0x82, .sp=0xa1, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x82}, {.addr=0xb691, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb691, .value=0x6d, .type=IO_READ},
        {.addr=0xb692, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0052) {
    const struct CPU_State initial_cpu = {.pc=0x7ebe, .a=0x51, .x=0xf6, .y=0x6e, .sp=0x68, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x7ebe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7ebf, .a=0x51, .x=0xf6, .y=0x6e, .sp=0x67, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x6e}, {.addr=0x7ebe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7ebe, .value=0x6d, .type=IO_READ},
        {.addr=0x7ebf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0053) {
    const struct CPU_State initial_cpu = {.pc=0xb50a, .a=0xe3, .x=0x25, .y=0x9c, .sp=0xe4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xb50a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb50b, .a=0xe3, .x=0x25, .y=0x9c, .sp=0xe3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x9c}, {.addr=0xb50a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb50a, .value=0x6d, .type=IO_READ},
        {.addr=0xb50b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0054) {
    const struct CPU_State initial_cpu = {.pc=0xf7b1, .a=0x79, .x=0x4e, .y=0x72, .sp=0x61, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xf7b1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf7b2, .a=0x79, .x=0x4e, .y=0x72, .sp=0x60, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x72}, {.addr=0xf7b1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf7b1, .value=0x6d, .type=IO_READ},
        {.addr=0xf7b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0055) {
    const struct CPU_State initial_cpu = {.pc=0xb185, .a=0x4e, .x=0x4d, .y=0xa4, .sp=0xf2, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xb185, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb186, .a=0x4e, .x=0x4d, .y=0xa4, .sp=0xf1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xa4}, {.addr=0xb185, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb185, .value=0x6d, .type=IO_READ},
        {.addr=0xb186, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x2d41, .a=0xc0, .x=0xf4, .y=0xae, .sp=0x15, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x2d41, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d42, .a=0xc0, .x=0xf4, .y=0xae, .sp=0x14, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xae}, {.addr=0x2d41, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d41, .value=0x6d, .type=IO_READ},
        {.addr=0x2d42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0057) {
    const struct CPU_State initial_cpu = {.pc=0xfb42, .a=0xac, .x=0x7f, .y=0xd1, .sp=0x7a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xfb42, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfb43, .a=0xac, .x=0x7f, .y=0xd1, .sp=0x79, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xd1}, {.addr=0xfb42, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfb42, .value=0x6d, .type=IO_READ},
        {.addr=0xfb43, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x1253, .a=0xf4, .x=0x53, .y=0xe9, .sp=0x3e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x1253, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1254, .a=0xf4, .x=0x53, .y=0xe9, .sp=0x3d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xe9}, {.addr=0x1253, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1253, .value=0x6d, .type=IO_READ},
        {.addr=0x1254, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x7b3d, .a=0xf3, .x=0x40, .y=0xf7, .sp=0xd4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x7b3d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7b3e, .a=0xf3, .x=0x40, .y=0xf7, .sp=0xd3, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xf7}, {.addr=0x7b3d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7b3d, .value=0x6d, .type=IO_READ},
        {.addr=0x7b3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf67c, .a=0x0c, .x=0xd9, .y=0x0a, .sp=0x20, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0xf67c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf67d, .a=0x0c, .x=0xd9, .y=0x0a, .sp=0x1f, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x0a}, {.addr=0xf67c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf67c, .value=0x6d, .type=IO_READ},
        {.addr=0xf67d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_005B) {
    const struct CPU_State initial_cpu = {.pc=0x0090, .a=0xaa, .x=0x56, .y=0x09, .sp=0x4a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x6d}, {.addr=0x014a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0091, .a=0xaa, .x=0x56, .y=0x09, .sp=0x49, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x6d}, {.addr=0x014a, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x0090, .value=0x6d, .type=IO_READ},
        {.addr=0x0091, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x2b17, .a=0xe7, .x=0x56, .y=0xe5, .sp=0x27, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x2b17, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2b18, .a=0xe7, .x=0x56, .y=0xe5, .sp=0x26, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xe5}, {.addr=0x2b17, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2b17, .value=0x6d, .type=IO_READ},
        {.addr=0x2b18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x0124, .a=0x03, .x=0x85, .y=0xee, .sp=0x32, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x6d}, {.addr=0x0132, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0125, .a=0x03, .x=0x85, .y=0xee, .sp=0x31, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x6d}, {.addr=0x0132, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0124, .value=0x6d, .type=IO_READ},
        {.addr=0x0125, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x4fa4, .a=0x3b, .x=0x5a, .y=0x33, .sp=0x3c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x4fa4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4fa5, .a=0x3b, .x=0x5a, .y=0x33, .sp=0x3b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x33}, {.addr=0x4fa4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4fa4, .value=0x6d, .type=IO_READ},
        {.addr=0x4fa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_005F) {
    const struct CPU_State initial_cpu = {.pc=0x95b4, .a=0x52, .x=0x31, .y=0x3d, .sp=0xd2, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x95b4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x95b5, .a=0x52, .x=0x31, .y=0x3d, .sp=0xd1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x3d}, {.addr=0x95b4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x95b4, .value=0x6d, .type=IO_READ},
        {.addr=0x95b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0060) {
    const struct CPU_State initial_cpu = {.pc=0xdfcf, .a=0x91, .x=0x49, .y=0x08, .sp=0x86, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xdfcf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdfd0, .a=0x91, .x=0x49, .y=0x08, .sp=0x85, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x08}, {.addr=0xdfcf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdfcf, .value=0x6d, .type=IO_READ},
        {.addr=0xdfd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x7d8e, .a=0xbe, .x=0x41, .y=0x00, .sp=0xb5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x7d8e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7d8f, .a=0xbe, .x=0x41, .y=0x00, .sp=0xb4, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x7d8e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7d8e, .value=0x6d, .type=IO_READ},
        {.addr=0x7d8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9245, .a=0x61, .x=0xc0, .y=0x94, .sp=0x60, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x9245, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9246, .a=0x61, .x=0xc0, .y=0x94, .sp=0x5f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x94}, {.addr=0x9245, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9245, .value=0x6d, .type=IO_READ},
        {.addr=0x9246, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0063) {
    const struct CPU_State initial_cpu = {.pc=0xc2ac, .a=0x75, .x=0x41, .y=0x96, .sp=0xf3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xc2ac, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc2ad, .a=0x75, .x=0x41, .y=0x96, .sp=0xf2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x96}, {.addr=0xc2ac, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc2ac, .value=0x6d, .type=IO_READ},
        {.addr=0xc2ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0064) {
    const struct CPU_State initial_cpu = {.pc=0xb18a, .a=0x61, .x=0xb0, .y=0x56, .sp=0xe3, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0xb18a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb18b, .a=0x61, .x=0xb0, .y=0x56, .sp=0xe2, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x56}, {.addr=0xb18a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb18a, .value=0x6d, .type=IO_READ},
        {.addr=0xb18b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0065) {
    const struct CPU_State initial_cpu = {.pc=0xfb0f, .a=0x3e, .x=0xc1, .y=0x7d, .sp=0xef, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xfb0f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfb10, .a=0x3e, .x=0xc1, .y=0x7d, .sp=0xee, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x7d}, {.addr=0xfb0f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfb0f, .value=0x6d, .type=IO_READ},
        {.addr=0xfb10, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0066) {
    const struct CPU_State initial_cpu = {.pc=0xed7c, .a=0x6a, .x=0x16, .y=0x6d, .sp=0x01, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xed7c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xed7d, .a=0x6a, .x=0x16, .y=0x6d, .sp=0x00, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x6d}, {.addr=0xed7c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xed7c, .value=0x6d, .type=IO_READ},
        {.addr=0xed7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0067) {
    const struct CPU_State initial_cpu = {.pc=0x95b8, .a=0x7f, .x=0xb8, .y=0x5d, .sp=0x3b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x95b8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x95b9, .a=0x7f, .x=0xb8, .y=0x5d, .sp=0x3a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x5d}, {.addr=0x95b8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x95b8, .value=0x6d, .type=IO_READ},
        {.addr=0x95b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x1df2, .a=0xd2, .x=0xe7, .y=0xfe, .sp=0x3d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x1df2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1df3, .a=0xd2, .x=0xe7, .y=0xfe, .sp=0x3c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xfe}, {.addr=0x1df2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1df2, .value=0x6d, .type=IO_READ},
        {.addr=0x1df3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0069) {
    const struct CPU_State initial_cpu = {.pc=0xbd3f, .a=0x05, .x=0x36, .y=0x67, .sp=0x7e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0xbd3f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbd40, .a=0x05, .x=0x36, .y=0x67, .sp=0x7d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x67}, {.addr=0xbd3f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbd3f, .value=0x6d, .type=IO_READ},
        {.addr=0xbd40, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_006A) {
    const struct CPU_State initial_cpu = {.pc=0x294d, .a=0x64, .x=0x7c, .y=0x3d, .sp=0x78, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x294d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x294e, .a=0x64, .x=0x7c, .y=0x3d, .sp=0x77, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x3d}, {.addr=0x294d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x294d, .value=0x6d, .type=IO_READ},
        {.addr=0x294e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_006B) {
    const struct CPU_State initial_cpu = {.pc=0xabfe, .a=0xd5, .x=0x95, .y=0xbc, .sp=0x58, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xabfe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xabff, .a=0xd5, .x=0x95, .y=0xbc, .sp=0x57, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xbc}, {.addr=0xabfe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xabfe, .value=0x6d, .type=IO_READ},
        {.addr=0xabff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x029c, .a=0x50, .x=0x20, .y=0xb6, .sp=0x63, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x029c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x029d, .a=0x50, .x=0x20, .y=0xb6, .sp=0x62, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xb6}, {.addr=0x029c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x029c, .value=0x6d, .type=IO_READ},
        {.addr=0x029d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_006D) {
    const struct CPU_State initial_cpu = {.pc=0xeedf, .a=0x26, .x=0x9a, .y=0xc6, .sp=0x33, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xeedf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeee0, .a=0x26, .x=0x9a, .y=0xc6, .sp=0x32, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xc6}, {.addr=0xeedf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeedf, .value=0x6d, .type=IO_READ},
        {.addr=0xeee0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_006E) {
    const struct CPU_State initial_cpu = {.pc=0x1a8d, .a=0xa0, .x=0x74, .y=0xbd, .sp=0xcc, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x1a8d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1a8e, .a=0xa0, .x=0x74, .y=0xbd, .sp=0xcb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xbd}, {.addr=0x1a8d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1a8d, .value=0x6d, .type=IO_READ},
        {.addr=0x1a8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x537b, .a=0xd4, .x=0x85, .y=0x00, .sp=0xef, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x537b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x537c, .a=0xd4, .x=0x85, .y=0x00, .sp=0xee, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x537b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x537b, .value=0x6d, .type=IO_READ},
        {.addr=0x537c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x7749, .a=0x17, .x=0x66, .y=0x01, .sp=0xd2, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x7749, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x774a, .a=0x17, .x=0x66, .y=0x01, .sp=0xd1, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x01}, {.addr=0x7749, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7749, .value=0x6d, .type=IO_READ},
        {.addr=0x774a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x289e, .a=0x6c, .x=0xe4, .y=0xfd, .sp=0x32, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x289e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x289f, .a=0x6c, .x=0xe4, .y=0xfd, .sp=0x31, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xfd}, {.addr=0x289e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x289e, .value=0x6d, .type=IO_READ},
        {.addr=0x289f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0072) {
    const struct CPU_State initial_cpu = {.pc=0x1b59, .a=0x62, .x=0x54, .y=0xe0, .sp=0xee, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x1b59, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1b5a, .a=0x62, .x=0x54, .y=0xe0, .sp=0xed, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xe0}, {.addr=0x1b59, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1b59, .value=0x6d, .type=IO_READ},
        {.addr=0x1b5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0073) {
    const struct CPU_State initial_cpu = {.pc=0x2492, .a=0xde, .x=0xac, .y=0x4f, .sp=0xee, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x2492, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2493, .a=0xde, .x=0xac, .y=0x4f, .sp=0xed, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x4f}, {.addr=0x2492, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2492, .value=0x6d, .type=IO_READ},
        {.addr=0x2493, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0074) {
    const struct CPU_State initial_cpu = {.pc=0x824e, .a=0x29, .x=0x59, .y=0x1e, .sp=0x13, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x824e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x824f, .a=0x29, .x=0x59, .y=0x1e, .sp=0x12, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x1e}, {.addr=0x824e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x824e, .value=0x6d, .type=IO_READ},
        {.addr=0x824f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0075) {
    const struct CPU_State initial_cpu = {.pc=0xa881, .a=0x9f, .x=0xb8, .y=0x6c, .sp=0xfc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xa881, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa882, .a=0x9f, .x=0xb8, .y=0x6c, .sp=0xfb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x6c}, {.addr=0xa881, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa881, .value=0x6d, .type=IO_READ},
        {.addr=0xa882, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0076) {
    const struct CPU_State initial_cpu = {.pc=0x4c2e, .a=0x41, .x=0xca, .y=0xec, .sp=0xe3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x4c2e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4c2f, .a=0x41, .x=0xca, .y=0xec, .sp=0xe2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xec}, {.addr=0x4c2e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4c2e, .value=0x6d, .type=IO_READ},
        {.addr=0x4c2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0077) {
    const struct CPU_State initial_cpu = {.pc=0x2dfe, .a=0x23, .x=0xfa, .y=0x3a, .sp=0xf8, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x2dfe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2dff, .a=0x23, .x=0xfa, .y=0x3a, .sp=0xf7, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x3a}, {.addr=0x2dfe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2dfe, .value=0x6d, .type=IO_READ},
        {.addr=0x2dff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x081f, .a=0xc5, .x=0x13, .y=0x41, .sp=0x52, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x081f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0820, .a=0xc5, .x=0x13, .y=0x41, .sp=0x51, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x41}, {.addr=0x081f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x081f, .value=0x6d, .type=IO_READ},
        {.addr=0x0820, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0079) {
    const struct CPU_State initial_cpu = {.pc=0xed2e, .a=0x4c, .x=0xcb, .y=0x44, .sp=0x21, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0xed2e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xed2f, .a=0x4c, .x=0xcb, .y=0x44, .sp=0x20, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x44}, {.addr=0xed2e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xed2e, .value=0x6d, .type=IO_READ},
        {.addr=0xed2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_007A) {
    const struct CPU_State initial_cpu = {.pc=0xbe9f, .a=0x4b, .x=0x62, .y=0xa8, .sp=0x6b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xbe9f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbea0, .a=0x4b, .x=0x62, .y=0xa8, .sp=0x6a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xa8}, {.addr=0xbe9f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbe9f, .value=0x6d, .type=IO_READ},
        {.addr=0xbea0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_007B) {
    const struct CPU_State initial_cpu = {.pc=0x6a19, .a=0x86, .x=0x0f, .y=0x57, .sp=0x85, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x6a19, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6a1a, .a=0x86, .x=0x0f, .y=0x57, .sp=0x84, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x57}, {.addr=0x6a19, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6a19, .value=0x6d, .type=IO_READ},
        {.addr=0x6a1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_007C) {
    const struct CPU_State initial_cpu = {.pc=0xcb26, .a=0x66, .x=0x8c, .y=0x3b, .sp=0x23, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0xcb26, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcb27, .a=0x66, .x=0x8c, .y=0x3b, .sp=0x22, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x3b}, {.addr=0xcb26, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcb26, .value=0x6d, .type=IO_READ},
        {.addr=0xcb27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_007D) {
    const struct CPU_State initial_cpu = {.pc=0xc3ff, .a=0x06, .x=0x5c, .y=0xd5, .sp=0xfb, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xc3ff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc400, .a=0x06, .x=0x5c, .y=0xd5, .sp=0xfa, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xd5}, {.addr=0xc3ff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc3ff, .value=0x6d, .type=IO_READ},
        {.addr=0xc400, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x4d36, .a=0xb0, .x=0x6a, .y=0x32, .sp=0x51, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0x4d36, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4d37, .a=0xb0, .x=0x6a, .y=0x32, .sp=0x50, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x32}, {.addr=0x4d36, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4d36, .value=0x6d, .type=IO_READ},
        {.addr=0x4d37, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x0240, .a=0xc3, .x=0x73, .y=0xec, .sp=0xc2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x0240, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0241, .a=0xc3, .x=0x73, .y=0xec, .sp=0xc1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xec}, {.addr=0x0240, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0240, .value=0x6d, .type=IO_READ},
        {.addr=0x0241, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0080) {
    const struct CPU_State initial_cpu = {.pc=0xff4e, .a=0x0d, .x=0x27, .y=0x06, .sp=0xc3, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xff4e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xff4f, .a=0x0d, .x=0x27, .y=0x06, .sp=0xc2, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x06}, {.addr=0xff4e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xff4e, .value=0x6d, .type=IO_READ},
        {.addr=0xff4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x43e1, .a=0xef, .x=0x02, .y=0x8f, .sp=0xe1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x43e1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x43e2, .a=0xef, .x=0x02, .y=0x8f, .sp=0xe0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x8f}, {.addr=0x43e1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x43e1, .value=0x6d, .type=IO_READ},
        {.addr=0x43e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0082) {
    const struct CPU_State initial_cpu = {.pc=0xbe50, .a=0x0e, .x=0x21, .y=0xd1, .sp=0xf7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xbe50, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbe51, .a=0x0e, .x=0x21, .y=0xd1, .sp=0xf6, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xd1}, {.addr=0xbe50, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbe50, .value=0x6d, .type=IO_READ},
        {.addr=0xbe51, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x5a67, .a=0x8f, .x=0xf5, .y=0x4d, .sp=0xce, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x5a67, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5a68, .a=0x8f, .x=0xf5, .y=0x4d, .sp=0xcd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x4d}, {.addr=0x5a67, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5a67, .value=0x6d, .type=IO_READ},
        {.addr=0x5a68, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x7a59, .a=0x52, .x=0x6e, .y=0x42, .sp=0x06, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x7a59, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7a5a, .a=0x52, .x=0x6e, .y=0x42, .sp=0x05, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x42}, {.addr=0x7a59, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7a59, .value=0x6d, .type=IO_READ},
        {.addr=0x7a5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x77a6, .a=0xd6, .x=0x49, .y=0xa3, .sp=0xb1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x77a6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x77a7, .a=0xd6, .x=0x49, .y=0xa3, .sp=0xb0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xa3}, {.addr=0x77a6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x77a6, .value=0x6d, .type=IO_READ},
        {.addr=0x77a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0086) {
    const struct CPU_State initial_cpu = {.pc=0xeaa3, .a=0x6f, .x=0x88, .y=0x61, .sp=0xef, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xeaa3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeaa4, .a=0x6f, .x=0x88, .y=0x61, .sp=0xee, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x61}, {.addr=0xeaa3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeaa3, .value=0x6d, .type=IO_READ},
        {.addr=0xeaa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0087) {
    const struct CPU_State initial_cpu = {.pc=0x2626, .a=0x10, .x=0xbc, .y=0x3f, .sp=0x6e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x2626, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2627, .a=0x10, .x=0xbc, .y=0x3f, .sp=0x6d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x3f}, {.addr=0x2626, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2626, .value=0x6d, .type=IO_READ},
        {.addr=0x2627, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x71ee, .a=0xc9, .x=0x8b, .y=0x6d, .sp=0xf7, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x71ee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x71ef, .a=0xc9, .x=0x8b, .y=0x6d, .sp=0xf6, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x6d}, {.addr=0x71ee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x71ee, .value=0x6d, .type=IO_READ},
        {.addr=0x71ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0089) {
    const struct CPU_State initial_cpu = {.pc=0x8c57, .a=0x46, .x=0x7d, .y=0x71, .sp=0xa7, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x8c57, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c58, .a=0x46, .x=0x7d, .y=0x71, .sp=0xa6, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x71}, {.addr=0x8c57, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c57, .value=0x6d, .type=IO_READ},
        {.addr=0x8c58, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_008A) {
    const struct CPU_State initial_cpu = {.pc=0x81a7, .a=0x06, .x=0x32, .y=0x9a, .sp=0x07, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x81a7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x81a8, .a=0x06, .x=0x32, .y=0x9a, .sp=0x06, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x9a}, {.addr=0x81a7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x81a7, .value=0x6d, .type=IO_READ},
        {.addr=0x81a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xac3c, .a=0xf4, .x=0x99, .y=0xb1, .sp=0x48, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xac3c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xac3d, .a=0xf4, .x=0x99, .y=0xb1, .sp=0x47, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xb1}, {.addr=0xac3c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xac3c, .value=0x6d, .type=IO_READ},
        {.addr=0xac3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_008C) {
    const struct CPU_State initial_cpu = {.pc=0xe69d, .a=0xff, .x=0xde, .y=0xa3, .sp=0x63, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xe69d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe69e, .a=0xff, .x=0xde, .y=0xa3, .sp=0x62, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xa3}, {.addr=0xe69d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe69d, .value=0x6d, .type=IO_READ},
        {.addr=0xe69e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3680, .a=0x45, .x=0xec, .y=0x8f, .sp=0x8f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x3680, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3681, .a=0x45, .x=0xec, .y=0x8f, .sp=0x8e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x8f}, {.addr=0x3680, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3680, .value=0x6d, .type=IO_READ},
        {.addr=0x3681, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_008E) {
    const struct CPU_State initial_cpu = {.pc=0xd3b0, .a=0xf5, .x=0xce, .y=0x12, .sp=0x2f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0xd3b0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd3b1, .a=0xf5, .x=0xce, .y=0x12, .sp=0x2e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x12}, {.addr=0xd3b0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd3b0, .value=0x6d, .type=IO_READ},
        {.addr=0xd3b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_008F) {
    const struct CPU_State initial_cpu = {.pc=0xf94d, .a=0xfd, .x=0x9e, .y=0x44, .sp=0x42, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xf94d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf94e, .a=0xfd, .x=0x9e, .y=0x44, .sp=0x41, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x44}, {.addr=0xf94d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf94d, .value=0x6d, .type=IO_READ},
        {.addr=0xf94e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x93df, .a=0xfd, .x=0x9c, .y=0xe1, .sp=0x29, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x93df, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x93e0, .a=0xfd, .x=0x9c, .y=0xe1, .sp=0x28, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xe1}, {.addr=0x93df, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x93df, .value=0x6d, .type=IO_READ},
        {.addr=0x93e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0091) {
    const struct CPU_State initial_cpu = {.pc=0x9f2e, .a=0x4b, .x=0x9e, .y=0x0c, .sp=0x3e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x9f2e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9f2f, .a=0x4b, .x=0x9e, .y=0x0c, .sp=0x3d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x0c}, {.addr=0x9f2e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9f2e, .value=0x6d, .type=IO_READ},
        {.addr=0x9f2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0092) {
    const struct CPU_State initial_cpu = {.pc=0x6cdb, .a=0x29, .x=0xa2, .y=0x9c, .sp=0xb6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x6cdb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6cdc, .a=0x29, .x=0xa2, .y=0x9c, .sp=0xb5, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x9c}, {.addr=0x6cdb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6cdb, .value=0x6d, .type=IO_READ},
        {.addr=0x6cdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x209c, .a=0x79, .x=0x77, .y=0x71, .sp=0x71, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x209c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x209d, .a=0x79, .x=0x77, .y=0x71, .sp=0x70, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x71}, {.addr=0x209c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x209c, .value=0x6d, .type=IO_READ},
        {.addr=0x209d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0094) {
    const struct CPU_State initial_cpu = {.pc=0xdfdf, .a=0x53, .x=0xf4, .y=0x70, .sp=0xd3, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xdfdf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdfe0, .a=0x53, .x=0xf4, .y=0x70, .sp=0xd2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x70}, {.addr=0xdfdf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdfdf, .value=0x6d, .type=IO_READ},
        {.addr=0xdfe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0095) {
    const struct CPU_State initial_cpu = {.pc=0x0f4b, .a=0x1b, .x=0x1f, .y=0x09, .sp=0x4a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x0f4b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0f4c, .a=0x1b, .x=0x1f, .y=0x09, .sp=0x49, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x09}, {.addr=0x0f4b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0f4b, .value=0x6d, .type=IO_READ},
        {.addr=0x0f4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x00dc, .a=0x88, .x=0xfb, .y=0xb8, .sp=0x11, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x6d}, {.addr=0x0111, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x00dd, .a=0x88, .x=0xfb, .y=0xb8, .sp=0x10, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x6d}, {.addr=0x0111, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x00dc, .value=0x6d, .type=IO_READ},
        {.addr=0x00dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0097) {
    const struct CPU_State initial_cpu = {.pc=0x8125, .a=0xd8, .x=0x8f, .y=0x8e, .sp=0x7e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x8125, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8126, .a=0xd8, .x=0x8f, .y=0x8e, .sp=0x7d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x8e}, {.addr=0x8125, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8125, .value=0x6d, .type=IO_READ},
        {.addr=0x8126, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0098) {
    const struct CPU_State initial_cpu = {.pc=0xe0bf, .a=0xa0, .x=0x7d, .y=0xaa, .sp=0x84, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xe0bf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe0c0, .a=0xa0, .x=0x7d, .y=0xaa, .sp=0x83, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xaa}, {.addr=0xe0bf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe0bf, .value=0x6d, .type=IO_READ},
        {.addr=0xe0c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0099) {
    const struct CPU_State initial_cpu = {.pc=0x60aa, .a=0xbf, .x=0xc0, .y=0x64, .sp=0xa5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x60aa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x60ab, .a=0xbf, .x=0xc0, .y=0x64, .sp=0xa4, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x64}, {.addr=0x60aa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x60aa, .value=0x6d, .type=IO_READ},
        {.addr=0x60ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_009A) {
    const struct CPU_State initial_cpu = {.pc=0x3b0d, .a=0x52, .x=0xdd, .y=0xdc, .sp=0xcc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x3b0d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3b0e, .a=0x52, .x=0xdd, .y=0xdc, .sp=0xcb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xdc}, {.addr=0x3b0d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3b0d, .value=0x6d, .type=IO_READ},
        {.addr=0x3b0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_009B) {
    const struct CPU_State initial_cpu = {.pc=0x3bab, .a=0xd1, .x=0x1e, .y=0x9c, .sp=0x9e, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x3bab, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3bac, .a=0xd1, .x=0x1e, .y=0x9c, .sp=0x9d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x9c}, {.addr=0x3bab, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3bab, .value=0x6d, .type=IO_READ},
        {.addr=0x3bac, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x2b14, .a=0xdf, .x=0x09, .y=0xa4, .sp=0x9a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x2b14, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2b15, .a=0xdf, .x=0x09, .y=0xa4, .sp=0x99, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xa4}, {.addr=0x2b14, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2b14, .value=0x6d, .type=IO_READ},
        {.addr=0x2b15, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_009D) {
    const struct CPU_State initial_cpu = {.pc=0xdc1a, .a=0xac, .x=0xef, .y=0x9f, .sp=0xc1, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xdc1a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdc1b, .a=0xac, .x=0xef, .y=0x9f, .sp=0xc0, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x9f}, {.addr=0xdc1a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdc1a, .value=0x6d, .type=IO_READ},
        {.addr=0xdc1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x24c7, .a=0x41, .x=0xbf, .y=0xcf, .sp=0xb9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x24c7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x24c8, .a=0x41, .x=0xbf, .y=0xcf, .sp=0xb8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xcf}, {.addr=0x24c7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x24c7, .value=0x6d, .type=IO_READ},
        {.addr=0x24c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x5741, .a=0x10, .x=0x14, .y=0xd0, .sp=0x4f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x5741, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5742, .a=0x10, .x=0x14, .y=0xd0, .sp=0x4e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xd0}, {.addr=0x5741, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5741, .value=0x6d, .type=IO_READ},
        {.addr=0x5742, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x8c3e, .a=0xc5, .x=0xa1, .y=0x3c, .sp=0x57, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x8c3e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c3f, .a=0xc5, .x=0xa1, .y=0x3c, .sp=0x56, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x3c}, {.addr=0x8c3e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c3e, .value=0x6d, .type=IO_READ},
        {.addr=0x8c3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x8aaa, .a=0x79, .x=0x23, .y=0x24, .sp=0x47, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x8aaa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8aab, .a=0x79, .x=0x23, .y=0x24, .sp=0x46, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x24}, {.addr=0x8aaa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8aaa, .value=0x6d, .type=IO_READ},
        {.addr=0x8aab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x154f, .a=0xfe, .x=0x37, .y=0xeb, .sp=0xe7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0x154f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1550, .a=0xfe, .x=0x37, .y=0xeb, .sp=0xe6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xeb}, {.addr=0x154f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x154f, .value=0x6d, .type=IO_READ},
        {.addr=0x1550, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x4d95, .a=0x5e, .x=0x85, .y=0x76, .sp=0x85, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x4d95, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4d96, .a=0x5e, .x=0x85, .y=0x76, .sp=0x84, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x76}, {.addr=0x4d95, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4d95, .value=0x6d, .type=IO_READ},
        {.addr=0x4d96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x37b0, .a=0xb6, .x=0x9b, .y=0x28, .sp=0x5e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x37b0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x37b1, .a=0xb6, .x=0x9b, .y=0x28, .sp=0x5d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x28}, {.addr=0x37b0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x37b0, .value=0x6d, .type=IO_READ},
        {.addr=0x37b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xf1cc, .a=0xb9, .x=0x64, .y=0x7e, .sp=0xbd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0xf1cc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf1cd, .a=0xb9, .x=0x64, .y=0x7e, .sp=0xbc, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x7e}, {.addr=0xf1cc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf1cc, .value=0x6d, .type=IO_READ},
        {.addr=0xf1cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x69be, .a=0x5e, .x=0x61, .y=0x47, .sp=0x41, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x69be, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x69bf, .a=0x5e, .x=0x61, .y=0x47, .sp=0x40, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x47}, {.addr=0x69be, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x69be, .value=0x6d, .type=IO_READ},
        {.addr=0x69bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xec9b, .a=0x82, .x=0x96, .y=0x50, .sp=0x5a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0xec9b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xec9c, .a=0x82, .x=0x96, .y=0x50, .sp=0x59, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x50}, {.addr=0xec9b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xec9b, .value=0x6d, .type=IO_READ},
        {.addr=0xec9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x340f, .a=0x10, .x=0xab, .y=0xe9, .sp=0x23, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x340f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3410, .a=0x10, .x=0xab, .y=0xe9, .sp=0x22, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xe9}, {.addr=0x340f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x340f, .value=0x6d, .type=IO_READ},
        {.addr=0x3410, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xce88, .a=0x02, .x=0xd5, .y=0xea, .sp=0xaa, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0xce88, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xce89, .a=0x02, .x=0xd5, .y=0xea, .sp=0xa9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xea}, {.addr=0xce88, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xce88, .value=0x6d, .type=IO_READ},
        {.addr=0xce89, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x620a, .a=0x19, .x=0x51, .y=0x9f, .sp=0x45, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x620a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x620b, .a=0x19, .x=0x51, .y=0x9f, .sp=0x44, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x9f}, {.addr=0x620a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x620a, .value=0x6d, .type=IO_READ},
        {.addr=0x620b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x7bed, .a=0x20, .x=0x29, .y=0xe4, .sp=0x22, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x7bed, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7bee, .a=0x20, .x=0x29, .y=0xe4, .sp=0x21, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xe4}, {.addr=0x7bed, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7bed, .value=0x6d, .type=IO_READ},
        {.addr=0x7bee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x356c, .a=0x78, .x=0xfe, .y=0x89, .sp=0x58, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x356c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x356d, .a=0x78, .x=0xfe, .y=0x89, .sp=0x57, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x89}, {.addr=0x356c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x356c, .value=0x6d, .type=IO_READ},
        {.addr=0x356d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x70ef, .a=0x1d, .x=0xa1, .y=0x4a, .sp=0x45, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x70ef, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x70f0, .a=0x1d, .x=0xa1, .y=0x4a, .sp=0x44, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x4a}, {.addr=0x70ef, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x70ef, .value=0x6d, .type=IO_READ},
        {.addr=0x70f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xef3d, .a=0x14, .x=0x3d, .y=0xd6, .sp=0x2c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0xef3d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xef3e, .a=0x14, .x=0x3d, .y=0xd6, .sp=0x2b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xd6}, {.addr=0xef3d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xef3d, .value=0x6d, .type=IO_READ},
        {.addr=0xef3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x21f6, .a=0x7f, .x=0x8b, .y=0x2c, .sp=0x1b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x21f6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x21f7, .a=0x7f, .x=0x8b, .y=0x2c, .sp=0x1a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x2c}, {.addr=0x21f6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x21f6, .value=0x6d, .type=IO_READ},
        {.addr=0x21f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x99f9, .a=0x96, .x=0x41, .y=0x2d, .sp=0x38, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x99f9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x99fa, .a=0x96, .x=0x41, .y=0x2d, .sp=0x37, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x2d}, {.addr=0x99f9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x99f9, .value=0x6d, .type=IO_READ},
        {.addr=0x99fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x1ee2, .a=0x45, .x=0xca, .y=0x19, .sp=0xca, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x1ee2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1ee3, .a=0x45, .x=0xca, .y=0x19, .sp=0xc9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x19}, {.addr=0x1ee2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1ee2, .value=0x6d, .type=IO_READ},
        {.addr=0x1ee3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xde3a, .a=0x02, .x=0xb6, .y=0xa4, .sp=0x75, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0xde3a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xde3b, .a=0x02, .x=0xb6, .y=0xa4, .sp=0x74, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xa4}, {.addr=0xde3a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xde3a, .value=0x6d, .type=IO_READ},
        {.addr=0xde3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x2ec9, .a=0xdb, .x=0xdf, .y=0xfe, .sp=0x16, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x2ec9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2eca, .a=0xdb, .x=0xdf, .y=0xfe, .sp=0x15, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xfe}, {.addr=0x2ec9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2ec9, .value=0x6d, .type=IO_READ},
        {.addr=0x2eca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xd9cc, .a=0x2e, .x=0x41, .y=0xa8, .sp=0xfc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xd9cc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd9cd, .a=0x2e, .x=0x41, .y=0xa8, .sp=0xfb, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xa8}, {.addr=0xd9cc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd9cc, .value=0x6d, .type=IO_READ},
        {.addr=0xd9cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xb80a, .a=0xc5, .x=0x9f, .y=0xd8, .sp=0xdd, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0xb80a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb80b, .a=0xc5, .x=0x9f, .y=0xd8, .sp=0xdc, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xd8}, {.addr=0xb80a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb80a, .value=0x6d, .type=IO_READ},
        {.addr=0xb80b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x61c8, .a=0xcf, .x=0xd5, .y=0xbd, .sp=0x84, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x61c8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x61c9, .a=0xcf, .x=0xd5, .y=0xbd, .sp=0x83, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xbd}, {.addr=0x61c8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x61c8, .value=0x6d, .type=IO_READ},
        {.addr=0x61c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x1f8a, .a=0x88, .x=0xb5, .y=0x06, .sp=0x65, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x1f8a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1f8b, .a=0x88, .x=0xb5, .y=0x06, .sp=0x64, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x06}, {.addr=0x1f8a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1f8a, .value=0x6d, .type=IO_READ},
        {.addr=0x1f8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xd64d, .a=0x7e, .x=0xc7, .y=0x49, .sp=0xdb, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0xd64d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd64e, .a=0x7e, .x=0xc7, .y=0x49, .sp=0xda, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x49}, {.addr=0xd64d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd64d, .value=0x6d, .type=IO_READ},
        {.addr=0xd64e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x5f3e, .a=0x8b, .x=0x74, .y=0x4b, .sp=0x0c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x5f3e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5f3f, .a=0x8b, .x=0x74, .y=0x4b, .sp=0x0b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x4b}, {.addr=0x5f3e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5f3e, .value=0x6d, .type=IO_READ},
        {.addr=0x5f3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xf454, .a=0xa9, .x=0x64, .y=0x30, .sp=0x24, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0xf454, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf455, .a=0xa9, .x=0x64, .y=0x30, .sp=0x23, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x30}, {.addr=0xf454, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf454, .value=0x6d, .type=IO_READ},
        {.addr=0xf455, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x4c41, .a=0x59, .x=0x2a, .y=0x3f, .sp=0x66, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x4c41, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4c42, .a=0x59, .x=0x2a, .y=0x3f, .sp=0x65, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x3f}, {.addr=0x4c41, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4c41, .value=0x6d, .type=IO_READ},
        {.addr=0x4c42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x328c, .a=0x8a, .x=0x2d, .y=0x68, .sp=0x57, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x328c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x328d, .a=0x8a, .x=0x2d, .y=0x68, .sp=0x56, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x68}, {.addr=0x328c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x328c, .value=0x6d, .type=IO_READ},
        {.addr=0x328d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xc019, .a=0x90, .x=0x4d, .y=0xbf, .sp=0x26, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xc019, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc01a, .a=0x90, .x=0x4d, .y=0xbf, .sp=0x25, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xbf}, {.addr=0xc019, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc019, .value=0x6d, .type=IO_READ},
        {.addr=0xc01a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xf935, .a=0x47, .x=0x8d, .y=0xd3, .sp=0x3b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0xf935, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf936, .a=0x47, .x=0x8d, .y=0xd3, .sp=0x3a, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xd3}, {.addr=0xf935, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf935, .value=0x6d, .type=IO_READ},
        {.addr=0xf936, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xa72d, .a=0x14, .x=0xd1, .y=0x8d, .sp=0x32, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xa72d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa72e, .a=0x14, .x=0xd1, .y=0x8d, .sp=0x31, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x8d}, {.addr=0xa72d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa72d, .value=0x6d, .type=IO_READ},
        {.addr=0xa72e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x74e9, .a=0x9f, .x=0xa4, .y=0x85, .sp=0x82, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x74e9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x74ea, .a=0x9f, .x=0xa4, .y=0x85, .sp=0x81, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x85}, {.addr=0x74e9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x74e9, .value=0x6d, .type=IO_READ},
        {.addr=0x74ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xce66, .a=0x75, .x=0xb9, .y=0xea, .sp=0x6b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xce66, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xce67, .a=0x75, .x=0xb9, .y=0xea, .sp=0x6a, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xea}, {.addr=0xce66, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xce66, .value=0x6d, .type=IO_READ},
        {.addr=0xce67, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x38e0, .a=0x0b, .x=0xa4, .y=0xaa, .sp=0xcd, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x38e0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x38e1, .a=0x0b, .x=0xa4, .y=0xaa, .sp=0xcc, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xaa}, {.addr=0x38e0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x38e0, .value=0x6d, .type=IO_READ},
        {.addr=0x38e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xe4e1, .a=0xdc, .x=0xd7, .y=0x34, .sp=0x15, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0xe4e1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe4e2, .a=0xdc, .x=0xd7, .y=0x34, .sp=0x14, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x34}, {.addr=0xe4e1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe4e1, .value=0x6d, .type=IO_READ},
        {.addr=0xe4e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x9863, .a=0x14, .x=0x7a, .y=0x8d, .sp=0xa3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x9863, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9864, .a=0x14, .x=0x7a, .y=0x8d, .sp=0xa2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x8d}, {.addr=0x9863, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9863, .value=0x6d, .type=IO_READ},
        {.addr=0x9864, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x519a, .a=0x15, .x=0x55, .y=0xbe, .sp=0x99, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x519a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x519b, .a=0x15, .x=0x55, .y=0xbe, .sp=0x98, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xbe}, {.addr=0x519a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x519a, .value=0x6d, .type=IO_READ},
        {.addr=0x519b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xb5a9, .a=0x7f, .x=0xa3, .y=0x87, .sp=0x4e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xb5a9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb5aa, .a=0x7f, .x=0xa3, .y=0x87, .sp=0x4d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x87}, {.addr=0xb5a9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb5a9, .value=0x6d, .type=IO_READ},
        {.addr=0xb5aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xe372, .a=0x29, .x=0xf1, .y=0xce, .sp=0x55, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xe372, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe373, .a=0x29, .x=0xf1, .y=0xce, .sp=0x54, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xce}, {.addr=0xe372, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe372, .value=0x6d, .type=IO_READ},
        {.addr=0xe373, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x6ec7, .a=0x29, .x=0xe8, .y=0x5a, .sp=0x5d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0x6ec7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6ec8, .a=0x29, .x=0xe8, .y=0x5a, .sp=0x5c, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x5a}, {.addr=0x6ec7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6ec7, .value=0x6d, .type=IO_READ},
        {.addr=0x6ec8, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x2f34, .a=0xad, .x=0x7d, .y=0x2e, .sp=0x3f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x2f34, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2f35, .a=0xad, .x=0x7d, .y=0x2e, .sp=0x3e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x2e}, {.addr=0x2f34, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2f34, .value=0x6d, .type=IO_READ},
        {.addr=0x2f35, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x081d, .a=0x89, .x=0xb8, .y=0x43, .sp=0xba, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x081d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x081e, .a=0x89, .x=0xb8, .y=0x43, .sp=0xb9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x43}, {.addr=0x081d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x081d, .value=0x6d, .type=IO_READ},
        {.addr=0x081e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2b88, .a=0xf0, .x=0xfa, .y=0x8b, .sp=0x4e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x2b88, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2b89, .a=0xf0, .x=0xfa, .y=0x8b, .sp=0x4d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x8b}, {.addr=0x2b88, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2b88, .value=0x6d, .type=IO_READ},
        {.addr=0x2b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x6345, .a=0x60, .x=0x47, .y=0xbe, .sp=0x5b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x6345, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6346, .a=0x60, .x=0x47, .y=0xbe, .sp=0x5a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xbe}, {.addr=0x6345, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6345, .value=0x6d, .type=IO_READ},
        {.addr=0x6346, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9990, .a=0xf2, .x=0x4d, .y=0xb3, .sp=0xf0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x9990, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9991, .a=0xf2, .x=0x4d, .y=0xb3, .sp=0xef, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xb3}, {.addr=0x9990, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9990, .value=0x6d, .type=IO_READ},
        {.addr=0x9991, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x97b6, .a=0x3c, .x=0x41, .y=0xb2, .sp=0xac, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x97b6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x97b7, .a=0x3c, .x=0x41, .y=0xb2, .sp=0xab, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xb2}, {.addr=0x97b6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x97b6, .value=0x6d, .type=IO_READ},
        {.addr=0x97b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xb3ff, .a=0x13, .x=0xa8, .y=0x2c, .sp=0x6f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xb3ff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb400, .a=0x13, .x=0xa8, .y=0x2c, .sp=0x6e, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x2c}, {.addr=0xb3ff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb3ff, .value=0x6d, .type=IO_READ},
        {.addr=0xb400, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x67bd, .a=0xf2, .x=0x41, .y=0x00, .sp=0xa5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x67bd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x67be, .a=0xf2, .x=0x41, .y=0x00, .sp=0xa4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x67bd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x67bd, .value=0x6d, .type=IO_READ},
        {.addr=0x67be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x0751, .a=0x3e, .x=0xcb, .y=0xdd, .sp=0x3b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x0751, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0752, .a=0x3e, .x=0xcb, .y=0xdd, .sp=0x3a, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xdd}, {.addr=0x0751, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0751, .value=0x6d, .type=IO_READ},
        {.addr=0x0752, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9698, .a=0xfc, .x=0x2d, .y=0x75, .sp=0xfe, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x9698, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9699, .a=0xfc, .x=0x2d, .y=0x75, .sp=0xfd, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x75}, {.addr=0x9698, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9698, .value=0x6d, .type=IO_READ},
        {.addr=0x9699, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x2285, .a=0xe4, .x=0xa8, .y=0x54, .sp=0xca, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x2285, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2286, .a=0xe4, .x=0xa8, .y=0x54, .sp=0xc9, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x54}, {.addr=0x2285, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2285, .value=0x6d, .type=IO_READ},
        {.addr=0x2286, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xfd3d, .a=0x62, .x=0xa7, .y=0xed, .sp=0x75, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0xfd3d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfd3e, .a=0x62, .x=0xa7, .y=0xed, .sp=0x74, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xed}, {.addr=0xfd3d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfd3d, .value=0x6d, .type=IO_READ},
        {.addr=0xfd3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x1ad4, .a=0xae, .x=0xa2, .y=0xe9, .sp=0xdd, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0x1ad4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1ad5, .a=0xae, .x=0xa2, .y=0xe9, .sp=0xdc, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xe9}, {.addr=0x1ad4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1ad4, .value=0x6d, .type=IO_READ},
        {.addr=0x1ad5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xbf26, .a=0x23, .x=0x2b, .y=0xa4, .sp=0x0c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0xbf26, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbf27, .a=0x23, .x=0x2b, .y=0xa4, .sp=0x0b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xa4}, {.addr=0xbf26, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbf26, .value=0x6d, .type=IO_READ},
        {.addr=0xbf27, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xd9b4, .a=0x5d, .x=0xb4, .y=0x8b, .sp=0x71, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0xd9b4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd9b5, .a=0x5d, .x=0xb4, .y=0x8b, .sp=0x70, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x8b}, {.addr=0xd9b4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd9b4, .value=0x6d, .type=IO_READ},
        {.addr=0xd9b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x5ff4, .a=0x2f, .x=0x30, .y=0xe5, .sp=0x73, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x5ff4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5ff5, .a=0x2f, .x=0x30, .y=0xe5, .sp=0x72, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xe5}, {.addr=0x5ff4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5ff4, .value=0x6d, .type=IO_READ},
        {.addr=0x5ff5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x5469, .a=0x52, .x=0x24, .y=0xf1, .sp=0x0e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x5469, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x546a, .a=0x52, .x=0x24, .y=0xf1, .sp=0x0d, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xf1}, {.addr=0x5469, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5469, .value=0x6d, .type=IO_READ},
        {.addr=0x546a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xbe72, .a=0x6b, .x=0xb9, .y=0x0d, .sp=0x16, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xbe72, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbe73, .a=0x6b, .x=0xb9, .y=0x0d, .sp=0x15, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x0d}, {.addr=0xbe72, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbe72, .value=0x6d, .type=IO_READ},
        {.addr=0xbe73, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x086a, .a=0x79, .x=0x4e, .y=0xa3, .sp=0xca, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x086a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x086b, .a=0x79, .x=0x4e, .y=0xa3, .sp=0xc9, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xa3}, {.addr=0x086a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x086a, .value=0x6d, .type=IO_READ},
        {.addr=0x086b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x87db, .a=0x6b, .x=0x1c, .y=0x7e, .sp=0x40, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x87db, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x87dc, .a=0x6b, .x=0x1c, .y=0x7e, .sp=0x3f, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x7e}, {.addr=0x87db, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x87db, .value=0x6d, .type=IO_READ},
        {.addr=0x87dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x4894, .a=0x65, .x=0xfe, .y=0x10, .sp=0xe0, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x4894, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4895, .a=0x65, .x=0xfe, .y=0x10, .sp=0xdf, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x10}, {.addr=0x4894, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4894, .value=0x6d, .type=IO_READ},
        {.addr=0x4895, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x14a4, .a=0x32, .x=0x24, .y=0x4f, .sp=0xd8, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x14a4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x14a5, .a=0x32, .x=0x24, .y=0x4f, .sp=0xd7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x4f}, {.addr=0x14a4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x14a4, .value=0x6d, .type=IO_READ},
        {.addr=0x14a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x1327, .a=0x13, .x=0xfa, .y=0x5e, .sp=0x05, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x1327, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1328, .a=0x13, .x=0xfa, .y=0x5e, .sp=0x04, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x5e}, {.addr=0x1327, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1327, .value=0x6d, .type=IO_READ},
        {.addr=0x1328, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x2948, .a=0xdc, .x=0xd5, .y=0x04, .sp=0x87, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x2948, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2949, .a=0xdc, .x=0xd5, .y=0x04, .sp=0x86, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x04}, {.addr=0x2948, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2948, .value=0x6d, .type=IO_READ},
        {.addr=0x2949, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x6069, .a=0x17, .x=0xf8, .y=0x90, .sp=0xc2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x6069, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x606a, .a=0x17, .x=0xf8, .y=0x90, .sp=0xc1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x90}, {.addr=0x6069, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6069, .value=0x6d, .type=IO_READ},
        {.addr=0x606a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x8dc2, .a=0x8b, .x=0x89, .y=0xa5, .sp=0xd3, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x8dc2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8dc3, .a=0x8b, .x=0x89, .y=0xa5, .sp=0xd2, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xa5}, {.addr=0x8dc2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8dc2, .value=0x6d, .type=IO_READ},
        {.addr=0x8dc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x9464, .a=0xc0, .x=0x39, .y=0x64, .sp=0xcc, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x9464, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9465, .a=0xc0, .x=0x39, .y=0x64, .sp=0xcb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x64}, {.addr=0x9464, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9464, .value=0x6d, .type=IO_READ},
        {.addr=0x9465, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xd72d, .a=0x2d, .x=0x45, .y=0xcd, .sp=0xc4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xd72d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd72e, .a=0x2d, .x=0x45, .y=0xcd, .sp=0xc3, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xcd}, {.addr=0xd72d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd72d, .value=0x6d, .type=IO_READ},
        {.addr=0xd72e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xd607, .a=0xaf, .x=0xe0, .y=0x06, .sp=0x57, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xd607, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd608, .a=0xaf, .x=0xe0, .y=0x06, .sp=0x56, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x06}, {.addr=0xd607, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd607, .value=0x6d, .type=IO_READ},
        {.addr=0xd608, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xe5d6, .a=0xd3, .x=0xa2, .y=0x59, .sp=0xb0, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xe5d6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe5d7, .a=0xd3, .x=0xa2, .y=0x59, .sp=0xaf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x59}, {.addr=0xe5d6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe5d6, .value=0x6d, .type=IO_READ},
        {.addr=0xe5d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x47fe, .a=0x0c, .x=0xbb, .y=0xfd, .sp=0x0c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x47fe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x47ff, .a=0x0c, .x=0xbb, .y=0xfd, .sp=0x0b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xfd}, {.addr=0x47fe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x47fe, .value=0x6d, .type=IO_READ},
        {.addr=0x47ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x4613, .a=0x34, .x=0x42, .y=0x46, .sp=0x57, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x4613, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4614, .a=0x34, .x=0x42, .y=0x46, .sp=0x56, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x46}, {.addr=0x4613, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4613, .value=0x6d, .type=IO_READ},
        {.addr=0x4614, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x7422, .a=0xd3, .x=0x63, .y=0x2b, .sp=0x5c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x7422, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7423, .a=0xd3, .x=0x63, .y=0x2b, .sp=0x5b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x2b}, {.addr=0x7422, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7422, .value=0x6d, .type=IO_READ},
        {.addr=0x7423, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xa0c6, .a=0xc2, .x=0x62, .y=0x13, .sp=0x42, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0xa0c6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa0c7, .a=0xc2, .x=0x62, .y=0x13, .sp=0x41, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x13}, {.addr=0xa0c6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa0c6, .value=0x6d, .type=IO_READ},
        {.addr=0xa0c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x9764, .a=0x6d, .x=0xa3, .y=0x37, .sp=0xdb, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x9764, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9765, .a=0x6d, .x=0xa3, .y=0x37, .sp=0xda, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x37}, {.addr=0x9764, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9764, .value=0x6d, .type=IO_READ},
        {.addr=0x9765, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x23d7, .a=0xdf, .x=0xd3, .y=0x15, .sp=0x98, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x23d7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x23d8, .a=0xdf, .x=0xd3, .y=0x15, .sp=0x97, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x15}, {.addr=0x23d7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x23d7, .value=0x6d, .type=IO_READ},
        {.addr=0x23d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x26b7, .a=0x62, .x=0x5b, .y=0x29, .sp=0x51, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0x26b7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x26b8, .a=0x62, .x=0x5b, .y=0x29, .sp=0x50, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x29}, {.addr=0x26b7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x26b7, .value=0x6d, .type=IO_READ},
        {.addr=0x26b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x55ce, .a=0x53, .x=0xda, .y=0x2b, .sp=0xf5, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x55ce, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x55cf, .a=0x53, .x=0xda, .y=0x2b, .sp=0xf4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x2b}, {.addr=0x55ce, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x55ce, .value=0x6d, .type=IO_READ},
        {.addr=0x55cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xcde4, .a=0x62, .x=0xea, .y=0x4c, .sp=0x8d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0xcde4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcde5, .a=0x62, .x=0xea, .y=0x4c, .sp=0x8c, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x4c}, {.addr=0xcde4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcde4, .value=0x6d, .type=IO_READ},
        {.addr=0xcde5, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x2c47, .a=0xfa, .x=0x33, .y=0xf7, .sp=0x6c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x2c47, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2c48, .a=0xfa, .x=0x33, .y=0xf7, .sp=0x6b, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xf7}, {.addr=0x2c47, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2c47, .value=0x6d, .type=IO_READ},
        {.addr=0x2c48, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x2477, .a=0x3a, .x=0xbe, .y=0xf1, .sp=0x13, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x2477, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2478, .a=0x3a, .x=0xbe, .y=0xf1, .sp=0x12, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xf1}, {.addr=0x2477, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2477, .value=0x6d, .type=IO_READ},
        {.addr=0x2478, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x1618, .a=0x77, .x=0xba, .y=0x1b, .sp=0x77, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x1618, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1619, .a=0x77, .x=0xba, .y=0x1b, .sp=0x76, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x1b}, {.addr=0x1618, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1618, .value=0x6d, .type=IO_READ},
        {.addr=0x1619, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x9057, .a=0x01, .x=0x0a, .y=0x5c, .sp=0xcd, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x9057, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9058, .a=0x01, .x=0x0a, .y=0x5c, .sp=0xcc, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x5c}, {.addr=0x9057, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9057, .value=0x6d, .type=IO_READ},
        {.addr=0x9058, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xdb91, .a=0x83, .x=0x40, .y=0xf0, .sp=0x67, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xdb91, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdb92, .a=0x83, .x=0x40, .y=0xf0, .sp=0x66, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xf0}, {.addr=0xdb91, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdb91, .value=0x6d, .type=IO_READ},
        {.addr=0xdb92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xaf9a, .a=0x97, .x=0x32, .y=0x3f, .sp=0x62, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xaf9a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaf9b, .a=0x97, .x=0x32, .y=0x3f, .sp=0x61, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x3f}, {.addr=0xaf9a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaf9a, .value=0x6d, .type=IO_READ},
        {.addr=0xaf9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x074f, .a=0x71, .x=0x19, .y=0x6b, .sp=0x15, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x074f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0750, .a=0x71, .x=0x19, .y=0x6b, .sp=0x14, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x6b}, {.addr=0x074f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x074f, .value=0x6d, .type=IO_READ},
        {.addr=0x0750, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x2d12, .a=0x15, .x=0x51, .y=0x6b, .sp=0x94, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x2d12, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d13, .a=0x15, .x=0x51, .y=0x6b, .sp=0x93, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x6b}, {.addr=0x2d12, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d12, .value=0x6d, .type=IO_READ},
        {.addr=0x2d13, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x12e4, .a=0x71, .x=0xf6, .y=0x17, .sp=0x09, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x12e4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x12e5, .a=0x71, .x=0xf6, .y=0x17, .sp=0x08, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x17}, {.addr=0x12e4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x12e4, .value=0x6d, .type=IO_READ},
        {.addr=0x12e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xe830, .a=0xae, .x=0x3a, .y=0xc3, .sp=0x38, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0xe830, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe831, .a=0xae, .x=0x3a, .y=0xc3, .sp=0x37, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xc3}, {.addr=0xe830, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe830, .value=0x6d, .type=IO_READ},
        {.addr=0xe831, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb20d, .a=0xc4, .x=0x62, .y=0x5a, .sp=0xb1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xb20d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb20e, .a=0xc4, .x=0x62, .y=0x5a, .sp=0xb0, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x5a}, {.addr=0xb20d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb20d, .value=0x6d, .type=IO_READ},
        {.addr=0xb20e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xf0ac, .a=0x9a, .x=0xde, .y=0xa1, .sp=0xf9, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xf0ac, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf0ad, .a=0x9a, .x=0xde, .y=0xa1, .sp=0xf8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xa1}, {.addr=0xf0ac, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf0ac, .value=0x6d, .type=IO_READ},
        {.addr=0xf0ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x7331, .a=0xa1, .x=0xc9, .y=0xca, .sp=0xe3, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x7331, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7332, .a=0xa1, .x=0xc9, .y=0xca, .sp=0xe2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xca}, {.addr=0x7331, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7331, .value=0x6d, .type=IO_READ},
        {.addr=0x7332, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x246a, .a=0x27, .x=0x9a, .y=0x97, .sp=0x8e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x246a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x246b, .a=0x27, .x=0x9a, .y=0x97, .sp=0x8d, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x97}, {.addr=0x246a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x246a, .value=0x6d, .type=IO_READ},
        {.addr=0x246b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x65bd, .a=0x85, .x=0x54, .y=0xea, .sp=0xc3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x65bd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x65be, .a=0x85, .x=0x54, .y=0xea, .sp=0xc2, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xea}, {.addr=0x65bd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x65bd, .value=0x6d, .type=IO_READ},
        {.addr=0x65be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x06af, .a=0xfd, .x=0x2a, .y=0x44, .sp=0xc6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x06af, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x06b0, .a=0xfd, .x=0x2a, .y=0x44, .sp=0xc5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x44}, {.addr=0x06af, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x06af, .value=0x6d, .type=IO_READ},
        {.addr=0x06b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x71e7, .a=0x59, .x=0x82, .y=0xe8, .sp=0xfa, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x71e7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x71e8, .a=0x59, .x=0x82, .y=0xe8, .sp=0xf9, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xe8}, {.addr=0x71e7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x71e7, .value=0x6d, .type=IO_READ},
        {.addr=0x71e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0101) {
    const struct CPU_State initial_cpu = {.pc=0xe80e, .a=0x64, .x=0x70, .y=0x26, .sp=0x26, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xe80e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe80f, .a=0x64, .x=0x70, .y=0x26, .sp=0x25, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x26}, {.addr=0xe80e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe80e, .value=0x6d, .type=IO_READ},
        {.addr=0xe80f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0102) {
    const struct CPU_State initial_cpu = {.pc=0xced4, .a=0xe8, .x=0x33, .y=0x12, .sp=0xfe, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xced4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xced5, .a=0xe8, .x=0x33, .y=0x12, .sp=0xfd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x12}, {.addr=0xced4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xced4, .value=0x6d, .type=IO_READ},
        {.addr=0xced5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0103) {
    const struct CPU_State initial_cpu = {.pc=0xa745, .a=0xcf, .x=0xde, .y=0xf9, .sp=0xff, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xa745, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa746, .a=0xcf, .x=0xde, .y=0xf9, .sp=0xfe, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xf9}, {.addr=0xa745, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa745, .value=0x6d, .type=IO_READ},
        {.addr=0xa746, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0104) {
    const struct CPU_State initial_cpu = {.pc=0x7b81, .a=0x3d, .x=0x3f, .y=0xb8, .sp=0xc2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x7b81, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7b82, .a=0x3d, .x=0x3f, .y=0xb8, .sp=0xc1, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xb8}, {.addr=0x7b81, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7b81, .value=0x6d, .type=IO_READ},
        {.addr=0x7b82, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x977c, .a=0xd2, .x=0x29, .y=0x65, .sp=0xec, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x977c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x977d, .a=0xd2, .x=0x29, .y=0x65, .sp=0xeb, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x65}, {.addr=0x977c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x977c, .value=0x6d, .type=IO_READ},
        {.addr=0x977d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0106) {
    const struct CPU_State initial_cpu = {.pc=0xd4bd, .a=0x47, .x=0xd6, .y=0xeb, .sp=0x0a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xd4bd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd4be, .a=0x47, .x=0xd6, .y=0xeb, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xeb}, {.addr=0xd4bd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd4bd, .value=0x6d, .type=IO_READ},
        {.addr=0xd4be, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x10ab, .a=0x05, .x=0x57, .y=0x95, .sp=0xf8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x10ab, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x10ac, .a=0x05, .x=0x57, .y=0x95, .sp=0xf7, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x95}, {.addr=0x10ab, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x10ab, .value=0x6d, .type=IO_READ},
        {.addr=0x10ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xa425, .a=0xeb, .x=0x76, .y=0x43, .sp=0x02, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0xa425, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa426, .a=0xeb, .x=0x76, .y=0x43, .sp=0x01, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x43}, {.addr=0xa425, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa425, .value=0x6d, .type=IO_READ},
        {.addr=0xa426, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0109) {
    const struct CPU_State initial_cpu = {.pc=0xd3ef, .a=0x69, .x=0x8d, .y=0x73, .sp=0x59, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xd3ef, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd3f0, .a=0x69, .x=0x8d, .y=0x73, .sp=0x58, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x73}, {.addr=0xd3ef, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd3ef, .value=0x6d, .type=IO_READ},
        {.addr=0xd3f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_010A) {
    const struct CPU_State initial_cpu = {.pc=0x9bea, .a=0x47, .x=0x8d, .y=0xe1, .sp=0x4f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x9bea, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9beb, .a=0x47, .x=0x8d, .y=0xe1, .sp=0x4e, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xe1}, {.addr=0x9bea, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9bea, .value=0x6d, .type=IO_READ},
        {.addr=0x9beb, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_010B) {
    const struct CPU_State initial_cpu = {.pc=0xe144, .a=0x08, .x=0x21, .y=0x4f, .sp=0xe7, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xe144, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe145, .a=0x08, .x=0x21, .y=0x4f, .sp=0xe6, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x4f}, {.addr=0xe144, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe144, .value=0x6d, .type=IO_READ},
        {.addr=0xe145, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x3cb0, .a=0x39, .x=0x33, .y=0xef, .sp=0xab, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x3cb0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3cb1, .a=0x39, .x=0x33, .y=0xef, .sp=0xaa, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xef}, {.addr=0x3cb0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3cb0, .value=0x6d, .type=IO_READ},
        {.addr=0x3cb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_010D) {
    const struct CPU_State initial_cpu = {.pc=0x74af, .a=0x7f, .x=0x6a, .y=0xce, .sp=0xc6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x74af, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x74b0, .a=0x7f, .x=0x6a, .y=0xce, .sp=0xc5, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xce}, {.addr=0x74af, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x74af, .value=0x6d, .type=IO_READ},
        {.addr=0x74b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_010E) {
    const struct CPU_State initial_cpu = {.pc=0x1d9a, .a=0x86, .x=0xc6, .y=0xb2, .sp=0x05, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x1d9a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1d9b, .a=0x86, .x=0xc6, .y=0xb2, .sp=0x04, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xb2}, {.addr=0x1d9a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1d9a, .value=0x6d, .type=IO_READ},
        {.addr=0x1d9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x3208, .a=0x4e, .x=0xce, .y=0xfc, .sp=0x00, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x3208, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3209, .a=0x4e, .x=0xce, .y=0xfc, .sp=0xff, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xfc}, {.addr=0x3208, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3208, .value=0x6d, .type=IO_READ},
        {.addr=0x3209, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x2021, .a=0xa3, .x=0xf4, .y=0xc0, .sp=0x35, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x2021, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2022, .a=0xa3, .x=0xf4, .y=0xc0, .sp=0x34, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xc0}, {.addr=0x2021, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2021, .value=0x6d, .type=IO_READ},
        {.addr=0x2022, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0111) {
    const struct CPU_State initial_cpu = {.pc=0xf3fd, .a=0x64, .x=0xdf, .y=0x78, .sp=0x2a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xf3fd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf3fe, .a=0x64, .x=0xdf, .y=0x78, .sp=0x29, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x78}, {.addr=0xf3fd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf3fd, .value=0x6d, .type=IO_READ},
        {.addr=0xf3fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x2311, .a=0x5e, .x=0xaf, .y=0xe1, .sp=0x1a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0x2311, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2312, .a=0x5e, .x=0xaf, .y=0xe1, .sp=0x19, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xe1}, {.addr=0x2311, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2311, .value=0x6d, .type=IO_READ},
        {.addr=0x2312, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0113) {
    const struct CPU_State initial_cpu = {.pc=0x2710, .a=0x0c, .x=0x29, .y=0x5f, .sp=0x19, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x2710, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2711, .a=0x0c, .x=0x29, .y=0x5f, .sp=0x18, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x5f}, {.addr=0x2710, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2710, .value=0x6d, .type=IO_READ},
        {.addr=0x2711, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0114) {
    const struct CPU_State initial_cpu = {.pc=0x6d5c, .a=0x19, .x=0x0b, .y=0xe2, .sp=0xf9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x6d5c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6d5d, .a=0x19, .x=0x0b, .y=0xe2, .sp=0xf8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xe2}, {.addr=0x6d5c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6d5c, .value=0x6d, .type=IO_READ},
        {.addr=0x6d5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xbaff, .a=0x1c, .x=0xca, .y=0x0c, .sp=0xb4, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xbaff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbb00, .a=0x1c, .x=0xca, .y=0x0c, .sp=0xb3, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x0c}, {.addr=0xbaff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbaff, .value=0x6d, .type=IO_READ},
        {.addr=0xbb00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x0efe, .a=0xbe, .x=0x20, .y=0x01, .sp=0x48, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x0efe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0eff, .a=0xbe, .x=0x20, .y=0x01, .sp=0x47, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x01}, {.addr=0x0efe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0efe, .value=0x6d, .type=IO_READ},
        {.addr=0x0eff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0117) {
    const struct CPU_State initial_cpu = {.pc=0xe519, .a=0xb0, .x=0xb9, .y=0x12, .sp=0x17, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xe519, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe51a, .a=0xb0, .x=0xb9, .y=0x12, .sp=0x16, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x12}, {.addr=0xe519, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe519, .value=0x6d, .type=IO_READ},
        {.addr=0xe51a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0118) {
    const struct CPU_State initial_cpu = {.pc=0xb2e3, .a=0xad, .x=0x2d, .y=0x85, .sp=0x81, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0xb2e3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb2e4, .a=0xad, .x=0x2d, .y=0x85, .sp=0x80, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x85}, {.addr=0xb2e3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb2e3, .value=0x6d, .type=IO_READ},
        {.addr=0xb2e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x4576, .a=0xe7, .x=0x53, .y=0x63, .sp=0x3e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x4576, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4577, .a=0xe7, .x=0x53, .y=0x63, .sp=0x3d, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x63}, {.addr=0x4576, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4576, .value=0x6d, .type=IO_READ},
        {.addr=0x4577, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_011A) {
    const struct CPU_State initial_cpu = {.pc=0xdae6, .a=0x7a, .x=0xb5, .y=0x64, .sp=0x37, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0xdae6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdae7, .a=0x7a, .x=0xb5, .y=0x64, .sp=0x36, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x64}, {.addr=0xdae6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdae6, .value=0x6d, .type=IO_READ},
        {.addr=0xdae7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_011B) {
    const struct CPU_State initial_cpu = {.pc=0xc6fe, .a=0x84, .x=0x8f, .y=0xde, .sp=0x97, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xc6fe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc6ff, .a=0x84, .x=0x8f, .y=0xde, .sp=0x96, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xde}, {.addr=0xc6fe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc6fe, .value=0x6d, .type=IO_READ},
        {.addr=0xc6ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x922c, .a=0xe5, .x=0x24, .y=0x32, .sp=0x83, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x922c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x922d, .a=0xe5, .x=0x24, .y=0x32, .sp=0x82, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x32}, {.addr=0x922c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x922c, .value=0x6d, .type=IO_READ},
        {.addr=0x922d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_011D) {
    const struct CPU_State initial_cpu = {.pc=0xc30f, .a=0x07, .x=0xc2, .y=0x1a, .sp=0x36, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0xc30f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc310, .a=0x07, .x=0xc2, .y=0x1a, .sp=0x35, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x1a}, {.addr=0xc30f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc30f, .value=0x6d, .type=IO_READ},
        {.addr=0xc310, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x85ef, .a=0x81, .x=0x0f, .y=0xc9, .sp=0x4b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x85ef, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x85f0, .a=0x81, .x=0x0f, .y=0xc9, .sp=0x4a, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xc9}, {.addr=0x85ef, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x85ef, .value=0x6d, .type=IO_READ},
        {.addr=0x85f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_011F) {
    const struct CPU_State initial_cpu = {.pc=0x797c, .a=0x5f, .x=0x17, .y=0xbe, .sp=0xc1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x797c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x797d, .a=0x5f, .x=0x17, .y=0xbe, .sp=0xc0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xbe}, {.addr=0x797c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x797c, .value=0x6d, .type=IO_READ},
        {.addr=0x797d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0120) {
    const struct CPU_State initial_cpu = {.pc=0x864a, .a=0x2b, .x=0x3d, .y=0xfc, .sp=0xfc, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x864a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x864b, .a=0x2b, .x=0x3d, .y=0xfc, .sp=0xfb, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xfc}, {.addr=0x864a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x864a, .value=0x6d, .type=IO_READ},
        {.addr=0x864b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x0f30, .a=0x70, .x=0x6d, .y=0xa1, .sp=0xed, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x0f30, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0f31, .a=0x70, .x=0x6d, .y=0xa1, .sp=0xec, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xa1}, {.addr=0x0f30, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0f30, .value=0x6d, .type=IO_READ},
        {.addr=0x0f31, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x80ef, .a=0x29, .x=0x41, .y=0xb2, .sp=0x23, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x80ef, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x80f0, .a=0x29, .x=0x41, .y=0xb2, .sp=0x22, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xb2}, {.addr=0x80ef, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x80ef, .value=0x6d, .type=IO_READ},
        {.addr=0x80f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0123) {
    const struct CPU_State initial_cpu = {.pc=0xdd8b, .a=0x2c, .x=0x43, .y=0x81, .sp=0x0a, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xdd8b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdd8c, .a=0x2c, .x=0x43, .y=0x81, .sp=0x09, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x81}, {.addr=0xdd8b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdd8b, .value=0x6d, .type=IO_READ},
        {.addr=0xdd8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0124) {
    const struct CPU_State initial_cpu = {.pc=0xbce1, .a=0xaf, .x=0x7a, .y=0x9e, .sp=0x28, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0xbce1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbce2, .a=0xaf, .x=0x7a, .y=0x9e, .sp=0x27, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x9e}, {.addr=0xbce1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbce1, .value=0x6d, .type=IO_READ},
        {.addr=0xbce2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0125) {
    const struct CPU_State initial_cpu = {.pc=0x1a73, .a=0xf6, .x=0xfe, .y=0x56, .sp=0xfb, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x1a73, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1a74, .a=0xf6, .x=0xfe, .y=0x56, .sp=0xfa, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x56}, {.addr=0x1a73, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1a73, .value=0x6d, .type=IO_READ},
        {.addr=0x1a74, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x73ba, .a=0x33, .x=0xc0, .y=0x0d, .sp=0xb9, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x73ba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x73bb, .a=0x33, .x=0xc0, .y=0x0d, .sp=0xb8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x0d}, {.addr=0x73ba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x73ba, .value=0x6d, .type=IO_READ},
        {.addr=0x73bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0127) {
    const struct CPU_State initial_cpu = {.pc=0x0f15, .a=0x82, .x=0x2c, .y=0xb5, .sp=0xe7, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0x0f15, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0f16, .a=0x82, .x=0x2c, .y=0xb5, .sp=0xe6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xb5}, {.addr=0x0f15, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0f15, .value=0x6d, .type=IO_READ},
        {.addr=0x0f16, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x5315, .a=0x19, .x=0xe5, .y=0x4d, .sp=0x04, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x5315, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5316, .a=0x19, .x=0xe5, .y=0x4d, .sp=0x03, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x4d}, {.addr=0x5315, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5315, .value=0x6d, .type=IO_READ},
        {.addr=0x5316, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0129) {
    const struct CPU_State initial_cpu = {.pc=0xdd1d, .a=0x2a, .x=0xfc, .y=0x4a, .sp=0xe8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0xdd1d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdd1e, .a=0x2a, .x=0xfc, .y=0x4a, .sp=0xe7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x4a}, {.addr=0xdd1d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdd1d, .value=0x6d, .type=IO_READ},
        {.addr=0xdd1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_012A) {
    const struct CPU_State initial_cpu = {.pc=0x3721, .a=0x6e, .x=0x08, .y=0x1c, .sp=0x58, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x3721, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3722, .a=0x6e, .x=0x08, .y=0x1c, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x1c}, {.addr=0x3721, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3721, .value=0x6d, .type=IO_READ},
        {.addr=0x3722, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_012B) {
    const struct CPU_State initial_cpu = {.pc=0xa0cd, .a=0x8c, .x=0x35, .y=0xe6, .sp=0xce, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xa0cd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa0ce, .a=0x8c, .x=0x35, .y=0xe6, .sp=0xcd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xe6}, {.addr=0xa0cd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa0cd, .value=0x6d, .type=IO_READ},
        {.addr=0xa0ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_012C) {
    const struct CPU_State initial_cpu = {.pc=0x65a2, .a=0xcf, .x=0x7d, .y=0x32, .sp=0x75, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x65a2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x65a3, .a=0xcf, .x=0x7d, .y=0x32, .sp=0x74, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x32}, {.addr=0x65a2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x65a2, .value=0x6d, .type=IO_READ},
        {.addr=0x65a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_012D) {
    const struct CPU_State initial_cpu = {.pc=0xd9e8, .a=0xa4, .x=0xc3, .y=0x5a, .sp=0xcb, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0xd9e8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd9e9, .a=0xa4, .x=0xc3, .y=0x5a, .sp=0xca, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x5a}, {.addr=0xd9e8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd9e8, .value=0x6d, .type=IO_READ},
        {.addr=0xd9e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_012E) {
    const struct CPU_State initial_cpu = {.pc=0x6726, .a=0x5d, .x=0xd4, .y=0x1c, .sp=0xca, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x6726, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6727, .a=0x5d, .x=0xd4, .y=0x1c, .sp=0xc9, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x1c}, {.addr=0x6726, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6726, .value=0x6d, .type=IO_READ},
        {.addr=0x6727, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_012F) {
    const struct CPU_State initial_cpu = {.pc=0xc6f9, .a=0x81, .x=0x3f, .y=0x58, .sp=0x89, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xc6f9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc6fa, .a=0x81, .x=0x3f, .y=0x58, .sp=0x88, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x58}, {.addr=0xc6f9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc6f9, .value=0x6d, .type=IO_READ},
        {.addr=0xc6fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x998a, .a=0x98, .x=0x9c, .y=0x83, .sp=0x86, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x998a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x998b, .a=0x98, .x=0x9c, .y=0x83, .sp=0x85, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x83}, {.addr=0x998a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x998a, .value=0x6d, .type=IO_READ},
        {.addr=0x998b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0131) {
    const struct CPU_State initial_cpu = {.pc=0x0f76, .a=0x8f, .x=0xb0, .y=0x14, .sp=0x2b, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x0f76, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0f77, .a=0x8f, .x=0xb0, .y=0x14, .sp=0x2a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x14}, {.addr=0x0f76, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0f76, .value=0x6d, .type=IO_READ},
        {.addr=0x0f77, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x7223, .a=0x04, .x=0xa2, .y=0x58, .sp=0x76, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x7223, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7224, .a=0x04, .x=0xa2, .y=0x58, .sp=0x75, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x58}, {.addr=0x7223, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7223, .value=0x6d, .type=IO_READ},
        {.addr=0x7224, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0133) {
    const struct CPU_State initial_cpu = {.pc=0xfa0a, .a=0x66, .x=0xe7, .y=0xa6, .sp=0x8d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0xfa0a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfa0b, .a=0x66, .x=0xe7, .y=0xa6, .sp=0x8c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xa6}, {.addr=0xfa0a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfa0a, .value=0x6d, .type=IO_READ},
        {.addr=0xfa0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0134) {
    const struct CPU_State initial_cpu = {.pc=0x6eda, .a=0x18, .x=0x1a, .y=0x6e, .sp=0x2b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x6eda, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6edb, .a=0x18, .x=0x1a, .y=0x6e, .sp=0x2a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x6e}, {.addr=0x6eda, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6eda, .value=0x6d, .type=IO_READ},
        {.addr=0x6edb, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0135) {
    const struct CPU_State initial_cpu = {.pc=0x3db3, .a=0xb0, .x=0x15, .y=0x6e, .sp=0x9e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x3db3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3db4, .a=0xb0, .x=0x15, .y=0x6e, .sp=0x9d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x6e}, {.addr=0x3db3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3db3, .value=0x6d, .type=IO_READ},
        {.addr=0x3db4, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xb20a, .a=0x5f, .x=0xc3, .y=0x0d, .sp=0x14, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xb20a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb20b, .a=0x5f, .x=0xc3, .y=0x0d, .sp=0x13, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x0d}, {.addr=0xb20a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb20a, .value=0x6d, .type=IO_READ},
        {.addr=0xb20b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x8dfc, .a=0x5d, .x=0x18, .y=0xaa, .sp=0x5f, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x8dfc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8dfd, .a=0x5d, .x=0x18, .y=0xaa, .sp=0x5e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xaa}, {.addr=0x8dfc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8dfc, .value=0x6d, .type=IO_READ},
        {.addr=0x8dfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0138) {
    const struct CPU_State initial_cpu = {.pc=0x69b1, .a=0x80, .x=0x09, .y=0x79, .sp=0xa5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x69b1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x69b2, .a=0x80, .x=0x09, .y=0x79, .sp=0xa4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x79}, {.addr=0x69b1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x69b1, .value=0x6d, .type=IO_READ},
        {.addr=0x69b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x0c8c, .a=0x05, .x=0x7e, .y=0x5b, .sp=0xc3, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x0c8c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0c8d, .a=0x05, .x=0x7e, .y=0x5b, .sp=0xc2, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x5b}, {.addr=0x0c8c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0c8c, .value=0x6d, .type=IO_READ},
        {.addr=0x0c8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_013A) {
    const struct CPU_State initial_cpu = {.pc=0xfea4, .a=0x2e, .x=0xce, .y=0xe0, .sp=0xcb, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0xfea4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfea5, .a=0x2e, .x=0xce, .y=0xe0, .sp=0xca, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xe0}, {.addr=0xfea4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfea4, .value=0x6d, .type=IO_READ},
        {.addr=0xfea5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_013B) {
    const struct CPU_State initial_cpu = {.pc=0x7353, .a=0x76, .x=0x55, .y=0xf4, .sp=0x9d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0x7353, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7354, .a=0x76, .x=0x55, .y=0xf4, .sp=0x9c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xf4}, {.addr=0x7353, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7353, .value=0x6d, .type=IO_READ},
        {.addr=0x7354, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x5cc9, .a=0x74, .x=0xa2, .y=0x5a, .sp=0x85, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x5cc9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5cca, .a=0x74, .x=0xa2, .y=0x5a, .sp=0x84, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x5a}, {.addr=0x5cc9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5cc9, .value=0x6d, .type=IO_READ},
        {.addr=0x5cca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_013D) {
    const struct CPU_State initial_cpu = {.pc=0xa7d7, .a=0x63, .x=0x2c, .y=0x4e, .sp=0x68, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xa7d7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa7d8, .a=0x63, .x=0x2c, .y=0x4e, .sp=0x67, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x4e}, {.addr=0xa7d7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa7d7, .value=0x6d, .type=IO_READ},
        {.addr=0xa7d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xa7d0, .a=0xab, .x=0x8a, .y=0xb4, .sp=0x8d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0xa7d0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa7d1, .a=0xab, .x=0x8a, .y=0xb4, .sp=0x8c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xb4}, {.addr=0xa7d0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa7d0, .value=0x6d, .type=IO_READ},
        {.addr=0xa7d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x12ae, .a=0x38, .x=0x69, .y=0x1d, .sp=0x8a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x12ae, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x12af, .a=0x38, .x=0x69, .y=0x1d, .sp=0x89, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x1d}, {.addr=0x12ae, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x12ae, .value=0x6d, .type=IO_READ},
        {.addr=0x12af, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x0928, .a=0xf7, .x=0x8b, .y=0xf8, .sp=0x7b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x0928, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0929, .a=0xf7, .x=0x8b, .y=0xf8, .sp=0x7a, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xf8}, {.addr=0x0928, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0928, .value=0x6d, .type=IO_READ},
        {.addr=0x0929, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe107, .a=0xa2, .x=0xcb, .y=0xc8, .sp=0x43, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xe107, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe108, .a=0xa2, .x=0xcb, .y=0xc8, .sp=0x42, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xc8}, {.addr=0xe107, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe107, .value=0x6d, .type=IO_READ},
        {.addr=0xe108, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0142) {
    const struct CPU_State initial_cpu = {.pc=0xcf31, .a=0x5a, .x=0xb7, .y=0x79, .sp=0xeb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xcf31, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcf32, .a=0x5a, .x=0xb7, .y=0x79, .sp=0xea, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x79}, {.addr=0xcf31, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcf31, .value=0x6d, .type=IO_READ},
        {.addr=0xcf32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf05a, .a=0x14, .x=0xf4, .y=0xa0, .sp=0x82, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xf05a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf05b, .a=0x14, .x=0xf4, .y=0xa0, .sp=0x81, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xa0}, {.addr=0xf05a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf05a, .value=0x6d, .type=IO_READ},
        {.addr=0xf05b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5aec, .a=0xca, .x=0x52, .y=0x25, .sp=0xae, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x5aec, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5aed, .a=0xca, .x=0x52, .y=0x25, .sp=0xad, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x25}, {.addr=0x5aec, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5aec, .value=0x6d, .type=IO_READ},
        {.addr=0x5aed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x89d9, .a=0x8e, .x=0xa9, .y=0xf2, .sp=0x28, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x89d9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x89da, .a=0x8e, .x=0xa9, .y=0xf2, .sp=0x27, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xf2}, {.addr=0x89d9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x89d9, .value=0x6d, .type=IO_READ},
        {.addr=0x89da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x54f7, .a=0x16, .x=0x3b, .y=0xcb, .sp=0xf8, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x54f7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x54f8, .a=0x16, .x=0x3b, .y=0xcb, .sp=0xf7, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xcb}, {.addr=0x54f7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x54f7, .value=0x6d, .type=IO_READ},
        {.addr=0x54f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x1512, .a=0x0a, .x=0x02, .y=0x5e, .sp=0xb1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x1512, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1513, .a=0x0a, .x=0x02, .y=0x5e, .sp=0xb0, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x5e}, {.addr=0x1512, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1512, .value=0x6d, .type=IO_READ},
        {.addr=0x1513, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x3372, .a=0xa8, .x=0xce, .y=0x24, .sp=0x57, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x3372, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3373, .a=0xa8, .x=0xce, .y=0x24, .sp=0x56, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x24}, {.addr=0x3372, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3372, .value=0x6d, .type=IO_READ},
        {.addr=0x3373, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x42f4, .a=0xad, .x=0x07, .y=0x5a, .sp=0xdc, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x42f4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x42f5, .a=0xad, .x=0x07, .y=0x5a, .sp=0xdb, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x5a}, {.addr=0x42f4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x42f4, .value=0x6d, .type=IO_READ},
        {.addr=0x42f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x45b2, .a=0x38, .x=0x8f, .y=0x82, .sp=0x93, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x45b2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x45b3, .a=0x38, .x=0x8f, .y=0x82, .sp=0x92, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x82}, {.addr=0x45b2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x45b2, .value=0x6d, .type=IO_READ},
        {.addr=0x45b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xe816, .a=0xef, .x=0x61, .y=0x0b, .sp=0x5e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xe816, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe817, .a=0xef, .x=0x61, .y=0x0b, .sp=0x5d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x0b}, {.addr=0xe816, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe816, .value=0x6d, .type=IO_READ},
        {.addr=0xe817, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x49cb, .a=0x48, .x=0xf3, .y=0xd1, .sp=0x1d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x49cb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x49cc, .a=0x48, .x=0xf3, .y=0xd1, .sp=0x1c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xd1}, {.addr=0x49cb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x49cb, .value=0x6d, .type=IO_READ},
        {.addr=0x49cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_014D) {
    const struct CPU_State initial_cpu = {.pc=0x876b, .a=0xe6, .x=0x9c, .y=0xc5, .sp=0xad, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x876b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x876c, .a=0xe6, .x=0x9c, .y=0xc5, .sp=0xac, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xc5}, {.addr=0x876b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x876b, .value=0x6d, .type=IO_READ},
        {.addr=0x876c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_014E) {
    const struct CPU_State initial_cpu = {.pc=0x6575, .a=0x17, .x=0x61, .y=0x43, .sp=0xbf, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x6575, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6576, .a=0x17, .x=0x61, .y=0x43, .sp=0xbe, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x43}, {.addr=0x6575, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6575, .value=0x6d, .type=IO_READ},
        {.addr=0x6576, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x8728, .a=0xd1, .x=0x32, .y=0x02, .sp=0xdb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x8728, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8729, .a=0xd1, .x=0x32, .y=0x02, .sp=0xda, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x02}, {.addr=0x8728, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8728, .value=0x6d, .type=IO_READ},
        {.addr=0x8729, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x6202, .a=0xa2, .x=0x25, .y=0xdc, .sp=0xed, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x6202, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6203, .a=0xa2, .x=0x25, .y=0xdc, .sp=0xec, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xdc}, {.addr=0x6202, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6202, .value=0x6d, .type=IO_READ},
        {.addr=0x6203, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0151) {
    const struct CPU_State initial_cpu = {.pc=0xa089, .a=0xa3, .x=0x3d, .y=0x15, .sp=0xfd, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xa089, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa08a, .a=0xa3, .x=0x3d, .y=0x15, .sp=0xfc, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x15}, {.addr=0xa089, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa089, .value=0x6d, .type=IO_READ},
        {.addr=0xa08a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0152) {
    const struct CPU_State initial_cpu = {.pc=0x955a, .a=0xb7, .x=0x0c, .y=0xab, .sp=0xc0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x955a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x955b, .a=0xb7, .x=0x0c, .y=0xab, .sp=0xbf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xab}, {.addr=0x955a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x955a, .value=0x6d, .type=IO_READ},
        {.addr=0x955b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0153) {
    const struct CPU_State initial_cpu = {.pc=0xde18, .a=0x6f, .x=0xd3, .y=0x0d, .sp=0x22, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xde18, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xde19, .a=0x6f, .x=0xd3, .y=0x0d, .sp=0x21, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x0d}, {.addr=0xde18, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xde18, .value=0x6d, .type=IO_READ},
        {.addr=0xde19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0154) {
    const struct CPU_State initial_cpu = {.pc=0xe6b8, .a=0x32, .x=0xf9, .y=0x05, .sp=0x73, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0xe6b8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe6b9, .a=0x32, .x=0xf9, .y=0x05, .sp=0x72, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x05}, {.addr=0xe6b8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe6b8, .value=0x6d, .type=IO_READ},
        {.addr=0xe6b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1e71, .a=0x6f, .x=0xea, .y=0x0c, .sp=0x35, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x1e71, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1e72, .a=0x6f, .x=0xea, .y=0x0c, .sp=0x34, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x0c}, {.addr=0x1e71, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1e71, .value=0x6d, .type=IO_READ},
        {.addr=0x1e72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0156) {
    const struct CPU_State initial_cpu = {.pc=0x3f21, .a=0xc8, .x=0x0b, .y=0xe6, .sp=0xca, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x3f21, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3f22, .a=0xc8, .x=0x0b, .y=0xe6, .sp=0xc9, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xe6}, {.addr=0x3f21, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3f21, .value=0x6d, .type=IO_READ},
        {.addr=0x3f22, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0157) {
    const struct CPU_State initial_cpu = {.pc=0xe6e2, .a=0x34, .x=0xb8, .y=0x1f, .sp=0xb7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xe6e2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe6e3, .a=0x34, .x=0xb8, .y=0x1f, .sp=0xb6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x1f}, {.addr=0xe6e2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe6e2, .value=0x6d, .type=IO_READ},
        {.addr=0xe6e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0158) {
    const struct CPU_State initial_cpu = {.pc=0xd2ec, .a=0x4f, .x=0x2e, .y=0x95, .sp=0xa7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xd2ec, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd2ed, .a=0x4f, .x=0x2e, .y=0x95, .sp=0xa6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x95}, {.addr=0xd2ec, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd2ec, .value=0x6d, .type=IO_READ},
        {.addr=0xd2ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0159) {
    const struct CPU_State initial_cpu = {.pc=0x0fd6, .a=0x7d, .x=0x88, .y=0xda, .sp=0xf6, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x0fd6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0fd7, .a=0x7d, .x=0x88, .y=0xda, .sp=0xf5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xda}, {.addr=0x0fd6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0fd6, .value=0x6d, .type=IO_READ},
        {.addr=0x0fd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x12b6, .a=0x85, .x=0xe3, .y=0x91, .sp=0x58, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x12b6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x12b7, .a=0x85, .x=0xe3, .y=0x91, .sp=0x57, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x91}, {.addr=0x12b6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x12b6, .value=0x6d, .type=IO_READ},
        {.addr=0x12b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_015B) {
    const struct CPU_State initial_cpu = {.pc=0x02e5, .a=0x04, .x=0xfb, .y=0x93, .sp=0xd4, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x02e5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x02e6, .a=0x04, .x=0xfb, .y=0x93, .sp=0xd3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x93}, {.addr=0x02e5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x02e5, .value=0x6d, .type=IO_READ},
        {.addr=0x02e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_015C) {
    const struct CPU_State initial_cpu = {.pc=0xb0d0, .a=0x21, .x=0x3b, .y=0x38, .sp=0xc4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xb0d0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb0d1, .a=0x21, .x=0x3b, .y=0x38, .sp=0xc3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x38}, {.addr=0xb0d0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb0d0, .value=0x6d, .type=IO_READ},
        {.addr=0xb0d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_015D) {
    const struct CPU_State initial_cpu = {.pc=0x322e, .a=0x51, .x=0xdb, .y=0x1f, .sp=0x90, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0x322e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x322f, .a=0x51, .x=0xdb, .y=0x1f, .sp=0x8f, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x1f}, {.addr=0x322e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x322e, .value=0x6d, .type=IO_READ},
        {.addr=0x322f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_015E) {
    const struct CPU_State initial_cpu = {.pc=0x7d4f, .a=0x05, .x=0xba, .y=0x3f, .sp=0xd6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x7d4f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7d50, .a=0x05, .x=0xba, .y=0x3f, .sp=0xd5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x3f}, {.addr=0x7d4f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7d4f, .value=0x6d, .type=IO_READ},
        {.addr=0x7d50, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x4f41, .a=0xa4, .x=0x60, .y=0xce, .sp=0x0a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x4f41, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4f42, .a=0xa4, .x=0x60, .y=0xce, .sp=0x09, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xce}, {.addr=0x4f41, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4f41, .value=0x6d, .type=IO_READ},
        {.addr=0x4f42, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0160) {
    const struct CPU_State initial_cpu = {.pc=0x12b3, .a=0xc3, .x=0xd5, .y=0x78, .sp=0x74, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x12b3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x12b4, .a=0xc3, .x=0xd5, .y=0x78, .sp=0x73, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x78}, {.addr=0x12b3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x12b3, .value=0x6d, .type=IO_READ},
        {.addr=0x12b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xbad8, .a=0x5f, .x=0x84, .y=0x63, .sp=0xe9, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0xbad8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbad9, .a=0x5f, .x=0x84, .y=0x63, .sp=0xe8, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x63}, {.addr=0xbad8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbad8, .value=0x6d, .type=IO_READ},
        {.addr=0xbad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x7a77, .a=0x00, .x=0x6b, .y=0x34, .sp=0x3f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x7a77, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7a78, .a=0x00, .x=0x6b, .y=0x34, .sp=0x3e, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x34}, {.addr=0x7a77, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7a77, .value=0x6d, .type=IO_READ},
        {.addr=0x7a78, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0163) {
    const struct CPU_State initial_cpu = {.pc=0xc8fa, .a=0x1e, .x=0xa7, .y=0xe9, .sp=0x63, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xc8fa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc8fb, .a=0x1e, .x=0xa7, .y=0xe9, .sp=0x62, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xe9}, {.addr=0xc8fa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc8fa, .value=0x6d, .type=IO_READ},
        {.addr=0xc8fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0164) {
    const struct CPU_State initial_cpu = {.pc=0x6126, .a=0xc4, .x=0x51, .y=0xe1, .sp=0x3c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x6126, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6127, .a=0xc4, .x=0x51, .y=0xe1, .sp=0x3b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xe1}, {.addr=0x6126, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6126, .value=0x6d, .type=IO_READ},
        {.addr=0x6127, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x20d4, .a=0x45, .x=0x0e, .y=0xce, .sp=0x4a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x20d4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x20d5, .a=0x45, .x=0x0e, .y=0xce, .sp=0x49, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xce}, {.addr=0x20d4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x20d4, .value=0x6d, .type=IO_READ},
        {.addr=0x20d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x99ff, .a=0x13, .x=0xa1, .y=0x3c, .sp=0x43, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x99ff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9a00, .a=0x13, .x=0xa1, .y=0x3c, .sp=0x42, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x3c}, {.addr=0x99ff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x99ff, .value=0x6d, .type=IO_READ},
        {.addr=0x9a00, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0167) {
    const struct CPU_State initial_cpu = {.pc=0x9a84, .a=0x3d, .x=0x25, .y=0x97, .sp=0x62, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x9a84, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9a85, .a=0x3d, .x=0x25, .y=0x97, .sp=0x61, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x97}, {.addr=0x9a84, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9a84, .value=0x6d, .type=IO_READ},
        {.addr=0x9a85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0168) {
    const struct CPU_State initial_cpu = {.pc=0x8cab, .a=0x96, .x=0x9c, .y=0xac, .sp=0x8e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x8cab, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8cac, .a=0x96, .x=0x9c, .y=0xac, .sp=0x8d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xac}, {.addr=0x8cab, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8cab, .value=0x6d, .type=IO_READ},
        {.addr=0x8cac, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0169) {
    const struct CPU_State initial_cpu = {.pc=0xda33, .a=0x7d, .x=0x7b, .y=0xec, .sp=0xa0, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0xda33, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xda34, .a=0x7d, .x=0x7b, .y=0xec, .sp=0x9f, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xec}, {.addr=0xda33, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xda33, .value=0x6d, .type=IO_READ},
        {.addr=0xda34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x1349, .a=0x59, .x=0xfc, .y=0x96, .sp=0x73, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x1349, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x134a, .a=0x59, .x=0xfc, .y=0x96, .sp=0x72, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x96}, {.addr=0x1349, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1349, .value=0x6d, .type=IO_READ},
        {.addr=0x134a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x88fc, .a=0x4e, .x=0xcc, .y=0xd8, .sp=0xba, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x88fc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x88fd, .a=0x4e, .x=0xcc, .y=0xd8, .sp=0xb9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xd8}, {.addr=0x88fc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x88fc, .value=0x6d, .type=IO_READ},
        {.addr=0x88fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x0083, .a=0x65, .x=0x86, .y=0x62, .sp=0xb0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x6d}, {.addr=0x01b0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0084, .a=0x65, .x=0x86, .y=0x62, .sp=0xaf, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x6d}, {.addr=0x01b0, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x0083, .value=0x6d, .type=IO_READ},
        {.addr=0x0084, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_016D) {
    const struct CPU_State initial_cpu = {.pc=0x6b06, .a=0x0e, .x=0x6e, .y=0x5a, .sp=0x93, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x6b06, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6b07, .a=0x0e, .x=0x6e, .y=0x5a, .sp=0x92, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x5a}, {.addr=0x6b06, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6b06, .value=0x6d, .type=IO_READ},
        {.addr=0x6b07, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x706f, .a=0xc9, .x=0xda, .y=0xd0, .sp=0xe5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x706f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7070, .a=0xc9, .x=0xda, .y=0xd0, .sp=0xe4, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xd0}, {.addr=0x706f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x706f, .value=0x6d, .type=IO_READ},
        {.addr=0x7070, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_016F) {
    const struct CPU_State initial_cpu = {.pc=0x244e, .a=0x71, .x=0xf9, .y=0xf4, .sp=0xa4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x244e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x244f, .a=0x71, .x=0xf9, .y=0xf4, .sp=0xa3, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xf4}, {.addr=0x244e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x244e, .value=0x6d, .type=IO_READ},
        {.addr=0x244f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0170) {
    const struct CPU_State initial_cpu = {.pc=0xa4dd, .a=0x1b, .x=0x04, .y=0x2b, .sp=0x98, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xa4dd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa4de, .a=0x1b, .x=0x04, .y=0x2b, .sp=0x97, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x2b}, {.addr=0xa4dd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa4dd, .value=0x6d, .type=IO_READ},
        {.addr=0xa4de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0171) {
    const struct CPU_State initial_cpu = {.pc=0xc03d, .a=0x72, .x=0xd0, .y=0x5c, .sp=0x04, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xc03d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc03e, .a=0x72, .x=0xd0, .y=0x5c, .sp=0x03, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x5c}, {.addr=0xc03d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc03d, .value=0x6d, .type=IO_READ},
        {.addr=0xc03e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0172) {
    const struct CPU_State initial_cpu = {.pc=0xc2d8, .a=0x76, .x=0x70, .y=0x52, .sp=0x9b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0xc2d8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc2d9, .a=0x76, .x=0x70, .y=0x52, .sp=0x9a, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x52}, {.addr=0xc2d8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc2d8, .value=0x6d, .type=IO_READ},
        {.addr=0xc2d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0173) {
    const struct CPU_State initial_cpu = {.pc=0x0905, .a=0xbb, .x=0x69, .y=0x8f, .sp=0xbb, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x0905, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0906, .a=0xbb, .x=0x69, .y=0x8f, .sp=0xba, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x8f}, {.addr=0x0905, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0905, .value=0x6d, .type=IO_READ},
        {.addr=0x0906, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0174) {
    const struct CPU_State initial_cpu = {.pc=0x99ce, .a=0x45, .x=0xe0, .y=0xd3, .sp=0x9e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x99ce, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x99cf, .a=0x45, .x=0xe0, .y=0xd3, .sp=0x9d, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd3}, {.addr=0x99ce, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x99ce, .value=0x6d, .type=IO_READ},
        {.addr=0x99cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0175) {
    const struct CPU_State initial_cpu = {.pc=0x36d2, .a=0xc6, .x=0xe3, .y=0x55, .sp=0x6b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x36d2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x36d3, .a=0xc6, .x=0xe3, .y=0x55, .sp=0x6a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x55}, {.addr=0x36d2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x36d2, .value=0x6d, .type=IO_READ},
        {.addr=0x36d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x3fda, .a=0x7c, .x=0x56, .y=0xae, .sp=0x96, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x3fda, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3fdb, .a=0x7c, .x=0x56, .y=0xae, .sp=0x95, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xae}, {.addr=0x3fda, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3fda, .value=0x6d, .type=IO_READ},
        {.addr=0x3fdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0177) {
    const struct CPU_State initial_cpu = {.pc=0x1e1a, .a=0x92, .x=0xef, .y=0x97, .sp=0x4a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x1e1a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1e1b, .a=0x92, .x=0xef, .y=0x97, .sp=0x49, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x97}, {.addr=0x1e1a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1e1a, .value=0x6d, .type=IO_READ},
        {.addr=0x1e1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0178) {
    const struct CPU_State initial_cpu = {.pc=0x16d2, .a=0x21, .x=0x7e, .y=0xd7, .sp=0xd4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x16d2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x16d3, .a=0x21, .x=0x7e, .y=0xd7, .sp=0xd3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xd7}, {.addr=0x16d2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x16d2, .value=0x6d, .type=IO_READ},
        {.addr=0x16d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x83fc, .a=0xd3, .x=0x5d, .y=0x6c, .sp=0xf2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0x83fc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x83fd, .a=0xd3, .x=0x5d, .y=0x6c, .sp=0xf1, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x6c}, {.addr=0x83fc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x83fc, .value=0x6d, .type=IO_READ},
        {.addr=0x83fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x6db3, .a=0x23, .x=0xaf, .y=0x53, .sp=0xb4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x6db3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6db4, .a=0x23, .x=0xaf, .y=0x53, .sp=0xb3, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x53}, {.addr=0x6db3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6db3, .value=0x6d, .type=IO_READ},
        {.addr=0x6db4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x88e1, .a=0x3f, .x=0xf7, .y=0x5a, .sp=0xbc, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x88e1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x88e2, .a=0x3f, .x=0xf7, .y=0x5a, .sp=0xbb, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x5a}, {.addr=0x88e1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x88e1, .value=0x6d, .type=IO_READ},
        {.addr=0x88e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_017C) {
    const struct CPU_State initial_cpu = {.pc=0xe263, .a=0x0b, .x=0xac, .y=0x14, .sp=0xf8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xe263, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe264, .a=0x0b, .x=0xac, .y=0x14, .sp=0xf7, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x14}, {.addr=0xe263, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe263, .value=0x6d, .type=IO_READ},
        {.addr=0xe264, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_017D) {
    const struct CPU_State initial_cpu = {.pc=0xbf7b, .a=0x8c, .x=0xd5, .y=0xc3, .sp=0x7d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xbf7b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbf7c, .a=0x8c, .x=0xd5, .y=0xc3, .sp=0x7c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xc3}, {.addr=0xbf7b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbf7b, .value=0x6d, .type=IO_READ},
        {.addr=0xbf7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_017E) {
    const struct CPU_State initial_cpu = {.pc=0xe6e5, .a=0xf8, .x=0x65, .y=0x56, .sp=0x32, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xe6e5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe6e6, .a=0xf8, .x=0x65, .y=0x56, .sp=0x31, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x56}, {.addr=0xe6e5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe6e5, .value=0x6d, .type=IO_READ},
        {.addr=0xe6e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_017F) {
    const struct CPU_State initial_cpu = {.pc=0xbc0e, .a=0xa3, .x=0xa1, .y=0xb5, .sp=0x40, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0xbc0e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbc0f, .a=0xa3, .x=0xa1, .y=0xb5, .sp=0x3f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xb5}, {.addr=0xbc0e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbc0e, .value=0x6d, .type=IO_READ},
        {.addr=0xbc0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0180) {
    const struct CPU_State initial_cpu = {.pc=0x908d, .a=0x4d, .x=0x47, .y=0x5c, .sp=0xf4, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x908d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x908e, .a=0x4d, .x=0x47, .y=0x5c, .sp=0xf3, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x5c}, {.addr=0x908d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x908d, .value=0x6d, .type=IO_READ},
        {.addr=0x908e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x5862, .a=0x93, .x=0xfa, .y=0x6c, .sp=0x1b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x5862, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5863, .a=0x93, .x=0xfa, .y=0x6c, .sp=0x1a, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x6c}, {.addr=0x5862, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5862, .value=0x6d, .type=IO_READ},
        {.addr=0x5863, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0182) {
    const struct CPU_State initial_cpu = {.pc=0xf27c, .a=0xf4, .x=0xf6, .y=0x69, .sp=0xdf, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xf27c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf27d, .a=0xf4, .x=0xf6, .y=0x69, .sp=0xde, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x69}, {.addr=0xf27c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf27c, .value=0x6d, .type=IO_READ},
        {.addr=0xf27d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0183) {
    const struct CPU_State initial_cpu = {.pc=0xadd0, .a=0x76, .x=0x88, .y=0x24, .sp=0xf7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xadd0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xadd1, .a=0x76, .x=0x88, .y=0x24, .sp=0xf6, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x24}, {.addr=0xadd0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xadd0, .value=0x6d, .type=IO_READ},
        {.addr=0xadd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0184) {
    const struct CPU_State initial_cpu = {.pc=0xdfff, .a=0x39, .x=0x3f, .y=0x65, .sp=0x5e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xdfff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe000, .a=0x39, .x=0x3f, .y=0x65, .sp=0x5d, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x65}, {.addr=0xdfff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdfff, .value=0x6d, .type=IO_READ},
        {.addr=0xe000, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x97ab, .a=0xbd, .x=0xb6, .y=0x7e, .sp=0x45, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x97ab, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x97ac, .a=0xbd, .x=0xb6, .y=0x7e, .sp=0x44, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x7e}, {.addr=0x97ab, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x97ab, .value=0x6d, .type=IO_READ},
        {.addr=0x97ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0186) {
    const struct CPU_State initial_cpu = {.pc=0x0bb4, .a=0xe6, .x=0x38, .y=0x75, .sp=0x03, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x0bb4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0bb5, .a=0xe6, .x=0x38, .y=0x75, .sp=0x02, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x75}, {.addr=0x0bb4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0bb4, .value=0x6d, .type=IO_READ},
        {.addr=0x0bb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0187) {
    const struct CPU_State initial_cpu = {.pc=0xd924, .a=0x2c, .x=0x9d, .y=0x0c, .sp=0x8a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xd924, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd925, .a=0x2c, .x=0x9d, .y=0x0c, .sp=0x89, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x0c}, {.addr=0xd924, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd924, .value=0x6d, .type=IO_READ},
        {.addr=0xd925, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x8ccb, .a=0x3f, .x=0x23, .y=0xcc, .sp=0x61, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x8ccb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8ccc, .a=0x3f, .x=0x23, .y=0xcc, .sp=0x60, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xcc}, {.addr=0x8ccb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8ccb, .value=0x6d, .type=IO_READ},
        {.addr=0x8ccc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb8dd, .a=0x2b, .x=0x89, .y=0x81, .sp=0xd9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xb8dd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb8de, .a=0x2b, .x=0x89, .y=0x81, .sp=0xd8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x81}, {.addr=0xb8dd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb8dd, .value=0x6d, .type=IO_READ},
        {.addr=0xb8de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_018A) {
    const struct CPU_State initial_cpu = {.pc=0x510b, .a=0x3d, .x=0x84, .y=0x01, .sp=0xcb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x510b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x510c, .a=0x3d, .x=0x84, .y=0x01, .sp=0xca, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x01}, {.addr=0x510b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x510b, .value=0x6d, .type=IO_READ},
        {.addr=0x510c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_018B) {
    const struct CPU_State initial_cpu = {.pc=0xcdc5, .a=0xfe, .x=0x2d, .y=0x81, .sp=0x16, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0xcdc5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcdc6, .a=0xfe, .x=0x2d, .y=0x81, .sp=0x15, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x81}, {.addr=0xcdc5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcdc5, .value=0x6d, .type=IO_READ},
        {.addr=0xcdc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_018C) {
    const struct CPU_State initial_cpu = {.pc=0xc041, .a=0x08, .x=0x8b, .y=0x61, .sp=0x1d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xc041, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc042, .a=0x08, .x=0x8b, .y=0x61, .sp=0x1c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x61}, {.addr=0xc041, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc041, .value=0x6d, .type=IO_READ},
        {.addr=0xc042, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x49e4, .a=0x26, .x=0x69, .y=0xa5, .sp=0xc6, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x49e4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x49e5, .a=0x26, .x=0x69, .y=0xa5, .sp=0xc5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xa5}, {.addr=0x49e4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x49e4, .value=0x6d, .type=IO_READ},
        {.addr=0x49e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_018E) {
    const struct CPU_State initial_cpu = {.pc=0xa14e, .a=0xf6, .x=0x73, .y=0x70, .sp=0x53, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xa14e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa14f, .a=0xf6, .x=0x73, .y=0x70, .sp=0x52, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x70}, {.addr=0xa14e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa14e, .value=0x6d, .type=IO_READ},
        {.addr=0xa14f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_018F) {
    const struct CPU_State initial_cpu = {.pc=0xa880, .a=0x05, .x=0xfb, .y=0x11, .sp=0xc6, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0xa880, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa881, .a=0x05, .x=0xfb, .y=0x11, .sp=0xc5, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x11}, {.addr=0xa880, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa880, .value=0x6d, .type=IO_READ},
        {.addr=0xa881, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0190) {
    const struct CPU_State initial_cpu = {.pc=0x6383, .a=0x18, .x=0xd5, .y=0x3e, .sp=0xdf, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x6383, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6384, .a=0x18, .x=0xd5, .y=0x3e, .sp=0xde, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x3e}, {.addr=0x6383, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6383, .value=0x6d, .type=IO_READ},
        {.addr=0x6384, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0191) {
    const struct CPU_State initial_cpu = {.pc=0x8e60, .a=0x14, .x=0x31, .y=0xc9, .sp=0x36, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x8e60, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8e61, .a=0x14, .x=0x31, .y=0xc9, .sp=0x35, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xc9}, {.addr=0x8e60, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8e60, .value=0x6d, .type=IO_READ},
        {.addr=0x8e61, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x7aa6, .a=0xa2, .x=0x61, .y=0x09, .sp=0xde, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x7aa6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7aa7, .a=0xa2, .x=0x61, .y=0x09, .sp=0xdd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x09}, {.addr=0x7aa6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7aa6, .value=0x6d, .type=IO_READ},
        {.addr=0x7aa7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0193) {
    const struct CPU_State initial_cpu = {.pc=0x3cfc, .a=0x52, .x=0x8c, .y=0x79, .sp=0x47, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x3cfc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3cfd, .a=0x52, .x=0x8c, .y=0x79, .sp=0x46, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x79}, {.addr=0x3cfc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3cfc, .value=0x6d, .type=IO_READ},
        {.addr=0x3cfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0194) {
    const struct CPU_State initial_cpu = {.pc=0x0db4, .a=0xc2, .x=0x73, .y=0x07, .sp=0x53, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x0db4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0db5, .a=0xc2, .x=0x73, .y=0x07, .sp=0x52, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x07}, {.addr=0x0db4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0db4, .value=0x6d, .type=IO_READ},
        {.addr=0x0db5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0195) {
    const struct CPU_State initial_cpu = {.pc=0x411e, .a=0x81, .x=0xe2, .y=0xc7, .sp=0x0c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x411e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x411f, .a=0x81, .x=0xe2, .y=0xc7, .sp=0x0b, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xc7}, {.addr=0x411e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x411e, .value=0x6d, .type=IO_READ},
        {.addr=0x411f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4545, .a=0x8f, .x=0x5d, .y=0x3e, .sp=0x98, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x4545, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4546, .a=0x8f, .x=0x5d, .y=0x3e, .sp=0x97, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x3e}, {.addr=0x4545, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4545, .value=0x6d, .type=IO_READ},
        {.addr=0x4546, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x6768, .a=0xfb, .x=0xa6, .y=0xc9, .sp=0xc1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x6768, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6769, .a=0xfb, .x=0xa6, .y=0xc9, .sp=0xc0, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xc9}, {.addr=0x6768, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6768, .value=0x6d, .type=IO_READ},
        {.addr=0x6769, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0198) {
    const struct CPU_State initial_cpu = {.pc=0x6263, .a=0x27, .x=0x89, .y=0x7e, .sp=0xc5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x6263, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6264, .a=0x27, .x=0x89, .y=0x7e, .sp=0xc4, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x7e}, {.addr=0x6263, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6263, .value=0x6d, .type=IO_READ},
        {.addr=0x6264, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0199) {
    const struct CPU_State initial_cpu = {.pc=0x05df, .a=0x00, .x=0x2a, .y=0xcc, .sp=0x2b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x05df, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x05e0, .a=0x00, .x=0x2a, .y=0xcc, .sp=0x2a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xcc}, {.addr=0x05df, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x05df, .value=0x6d, .type=IO_READ},
        {.addr=0x05e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x3973, .a=0x75, .x=0x84, .y=0xb9, .sp=0x26, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x3973, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3974, .a=0x75, .x=0x84, .y=0xb9, .sp=0x25, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xb9}, {.addr=0x3973, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3973, .value=0x6d, .type=IO_READ},
        {.addr=0x3974, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_019B) {
    const struct CPU_State initial_cpu = {.pc=0x790d, .a=0x71, .x=0xdf, .y=0x3f, .sp=0x89, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x790d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x790e, .a=0x71, .x=0xdf, .y=0x3f, .sp=0x88, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x3f}, {.addr=0x790d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x790d, .value=0x6d, .type=IO_READ},
        {.addr=0x790e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x8c9d, .a=0xce, .x=0x32, .y=0xd6, .sp=0x81, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x8c9d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c9e, .a=0xce, .x=0x32, .y=0xd6, .sp=0x80, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xd6}, {.addr=0x8c9d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c9d, .value=0x6d, .type=IO_READ},
        {.addr=0x8c9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x1064, .a=0xe9, .x=0x5c, .y=0xd2, .sp=0xe9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x1064, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1065, .a=0xe9, .x=0x5c, .y=0xd2, .sp=0xe8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xd2}, {.addr=0x1064, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1064, .value=0x6d, .type=IO_READ},
        {.addr=0x1065, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_019E) {
    const struct CPU_State initial_cpu = {.pc=0xc2e7, .a=0x97, .x=0x61, .y=0x57, .sp=0x91, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0xc2e7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc2e8, .a=0x97, .x=0x61, .y=0x57, .sp=0x90, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x57}, {.addr=0xc2e7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc2e7, .value=0x6d, .type=IO_READ},
        {.addr=0xc2e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_019F) {
    const struct CPU_State initial_cpu = {.pc=0x2f6c, .a=0xd6, .x=0xb3, .y=0xd8, .sp=0xc7, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x2f6c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2f6d, .a=0xd6, .x=0xb3, .y=0xd8, .sp=0xc6, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xd8}, {.addr=0x2f6c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2f6c, .value=0x6d, .type=IO_READ},
        {.addr=0x2f6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x384d, .a=0xe2, .x=0x80, .y=0x24, .sp=0xc0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x384d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x384e, .a=0xe2, .x=0x80, .y=0x24, .sp=0xbf, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x24}, {.addr=0x384d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x384d, .value=0x6d, .type=IO_READ},
        {.addr=0x384e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x6186, .a=0xfb, .x=0xe1, .y=0x8e, .sp=0x01, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x6186, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6187, .a=0xfb, .x=0xe1, .y=0x8e, .sp=0x00, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x8e}, {.addr=0x6186, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6186, .value=0x6d, .type=IO_READ},
        {.addr=0x6187, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x0bf6, .a=0xc3, .x=0x41, .y=0x2c, .sp=0xe5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x0bf6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0bf7, .a=0xc3, .x=0x41, .y=0x2c, .sp=0xe4, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x2c}, {.addr=0x0bf6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0bf6, .value=0x6d, .type=IO_READ},
        {.addr=0x0bf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x2b4f, .a=0xc6, .x=0xc4, .y=0xb1, .sp=0x9b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x2b4f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2b50, .a=0xc6, .x=0xc4, .y=0xb1, .sp=0x9a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xb1}, {.addr=0x2b4f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2b4f, .value=0x6d, .type=IO_READ},
        {.addr=0x2b50, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xbcea, .a=0x24, .x=0xbb, .y=0xbc, .sp=0xdd, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0xbcea, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbceb, .a=0x24, .x=0xbb, .y=0xbc, .sp=0xdc, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xbc}, {.addr=0xbcea, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbcea, .value=0x6d, .type=IO_READ},
        {.addr=0xbceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x1c62, .a=0x81, .x=0x6f, .y=0xec, .sp=0x0e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x1c62, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1c63, .a=0x81, .x=0x6f, .y=0xec, .sp=0x0d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xec}, {.addr=0x1c62, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1c62, .value=0x6d, .type=IO_READ},
        {.addr=0x1c63, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xe9b9, .a=0x9e, .x=0xd3, .y=0x17, .sp=0xff, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xe9b9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe9ba, .a=0x9e, .x=0xd3, .y=0x17, .sp=0xfe, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x17}, {.addr=0xe9b9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe9b9, .value=0x6d, .type=IO_READ},
        {.addr=0xe9ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xc279, .a=0x45, .x=0x52, .y=0x5b, .sp=0x55, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xc279, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc27a, .a=0x45, .x=0x52, .y=0x5b, .sp=0x54, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x5b}, {.addr=0xc279, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc279, .value=0x6d, .type=IO_READ},
        {.addr=0xc27a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x27f6, .a=0x44, .x=0x89, .y=0x16, .sp=0xc7, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x27f6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x27f7, .a=0x44, .x=0x89, .y=0x16, .sp=0xc6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x16}, {.addr=0x27f6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x27f6, .value=0x6d, .type=IO_READ},
        {.addr=0x27f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xfcb0, .a=0x27, .x=0x70, .y=0xff, .sp=0x26, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xfcb0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfcb1, .a=0x27, .x=0x70, .y=0xff, .sp=0x25, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xff}, {.addr=0xfcb0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfcb0, .value=0x6d, .type=IO_READ},
        {.addr=0xfcb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x6243, .a=0xaa, .x=0x2e, .y=0x3c, .sp=0xda, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x6243, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6244, .a=0xaa, .x=0x2e, .y=0x3c, .sp=0xd9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x3c}, {.addr=0x6243, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6243, .value=0x6d, .type=IO_READ},
        {.addr=0x6244, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x1f42, .a=0xc2, .x=0x50, .y=0x4a, .sp=0xc0, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x1f42, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1f43, .a=0xc2, .x=0x50, .y=0x4a, .sp=0xbf, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x4a}, {.addr=0x1f42, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1f42, .value=0x6d, .type=IO_READ},
        {.addr=0x1f43, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xefff, .a=0x3e, .x=0x01, .y=0x2a, .sp=0xb7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xefff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf000, .a=0x3e, .x=0x01, .y=0x2a, .sp=0xb6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x2a}, {.addr=0xefff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xefff, .value=0x6d, .type=IO_READ},
        {.addr=0xf000, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x476e, .a=0x5a, .x=0x64, .y=0x9b, .sp=0x0b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x476e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x476f, .a=0x5a, .x=0x64, .y=0x9b, .sp=0x0a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x9b}, {.addr=0x476e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x476e, .value=0x6d, .type=IO_READ},
        {.addr=0x476f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x7fb5, .a=0xca, .x=0x67, .y=0x31, .sp=0x36, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x7fb5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7fb6, .a=0xca, .x=0x67, .y=0x31, .sp=0x35, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x31}, {.addr=0x7fb5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7fb5, .value=0x6d, .type=IO_READ},
        {.addr=0x7fb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x0364, .a=0x55, .x=0x00, .y=0xa8, .sp=0x14, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x0364, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0365, .a=0x55, .x=0x00, .y=0xa8, .sp=0x13, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xa8}, {.addr=0x0364, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0364, .value=0x6d, .type=IO_READ},
        {.addr=0x0365, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x210a, .a=0x83, .x=0x96, .y=0x23, .sp=0x85, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x210a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x210b, .a=0x83, .x=0x96, .y=0x23, .sp=0x84, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x23}, {.addr=0x210a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x210a, .value=0x6d, .type=IO_READ},
        {.addr=0x210b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x461b, .a=0x75, .x=0x3e, .y=0x9c, .sp=0x13, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x461b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x461c, .a=0x75, .x=0x3e, .y=0x9c, .sp=0x12, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x9c}, {.addr=0x461b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x461b, .value=0x6d, .type=IO_READ},
        {.addr=0x461c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4648, .a=0x12, .x=0x8f, .y=0xcc, .sp=0x4e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x4648, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4649, .a=0x12, .x=0x8f, .y=0xcc, .sp=0x4d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xcc}, {.addr=0x4648, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4648, .value=0x6d, .type=IO_READ},
        {.addr=0x4649, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x78eb, .a=0xff, .x=0xd8, .y=0xfa, .sp=0xa4, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x78eb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x78ec, .a=0xff, .x=0xd8, .y=0xfa, .sp=0xa3, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xfa}, {.addr=0x78eb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x78eb, .value=0x6d, .type=IO_READ},
        {.addr=0x78ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xd74c, .a=0x94, .x=0x9b, .y=0x1d, .sp=0xb1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xd74c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd74d, .a=0x94, .x=0x9b, .y=0x1d, .sp=0xb0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x1d}, {.addr=0xd74c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd74c, .value=0x6d, .type=IO_READ},
        {.addr=0xd74d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x8d5e, .a=0xb3, .x=0xfe, .y=0x6f, .sp=0x77, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x8d5e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8d5f, .a=0xb3, .x=0xfe, .y=0x6f, .sp=0x76, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x6f}, {.addr=0x8d5e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8d5e, .value=0x6d, .type=IO_READ},
        {.addr=0x8d5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xcb86, .a=0x2d, .x=0xab, .y=0xe6, .sp=0x13, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xcb86, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcb87, .a=0x2d, .x=0xab, .y=0xe6, .sp=0x12, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xe6}, {.addr=0xcb86, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcb86, .value=0x6d, .type=IO_READ},
        {.addr=0xcb87, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xaec2, .a=0xb5, .x=0x18, .y=0x07, .sp=0x8e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0xaec2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaec3, .a=0xb5, .x=0x18, .y=0x07, .sp=0x8d, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x07}, {.addr=0xaec2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaec2, .value=0x6d, .type=IO_READ},
        {.addr=0xaec3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x8b15, .a=0x1d, .x=0x76, .y=0x9b, .sp=0x73, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x8b15, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8b16, .a=0x1d, .x=0x76, .y=0x9b, .sp=0x72, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x9b}, {.addr=0x8b15, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8b15, .value=0x6d, .type=IO_READ},
        {.addr=0x8b16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xc32c, .a=0x78, .x=0x15, .y=0xa1, .sp=0xee, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xc32c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc32d, .a=0x78, .x=0x15, .y=0xa1, .sp=0xed, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xa1}, {.addr=0xc32c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc32c, .value=0x6d, .type=IO_READ},
        {.addr=0xc32d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xb5d9, .a=0x30, .x=0x20, .y=0x10, .sp=0x26, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xb5d9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb5da, .a=0x30, .x=0x20, .y=0x10, .sp=0x25, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x10}, {.addr=0xb5d9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb5d9, .value=0x6d, .type=IO_READ},
        {.addr=0xb5da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x3188, .a=0x21, .x=0xda, .y=0x6b, .sp=0xe7, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0x3188, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3189, .a=0x21, .x=0xda, .y=0x6b, .sp=0xe6, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x6b}, {.addr=0x3188, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3188, .value=0x6d, .type=IO_READ},
        {.addr=0x3189, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xd688, .a=0x4b, .x=0x9e, .y=0x66, .sp=0x4a, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0xd688, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd689, .a=0x4b, .x=0x9e, .y=0x66, .sp=0x49, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x66}, {.addr=0xd688, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd688, .value=0x6d, .type=IO_READ},
        {.addr=0xd689, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x9873, .a=0x7f, .x=0xf0, .y=0xc1, .sp=0x29, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0x9873, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9874, .a=0x7f, .x=0xf0, .y=0xc1, .sp=0x28, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xc1}, {.addr=0x9873, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9873, .value=0x6d, .type=IO_READ},
        {.addr=0x9874, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x3969, .a=0x58, .x=0x64, .y=0xca, .sp=0x04, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x3969, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x396a, .a=0x58, .x=0x64, .y=0xca, .sp=0x03, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xca}, {.addr=0x3969, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3969, .value=0x6d, .type=IO_READ},
        {.addr=0x396a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x71fc, .a=0x44, .x=0x2f, .y=0x0e, .sp=0x62, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x71fc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x71fd, .a=0x44, .x=0x2f, .y=0x0e, .sp=0x61, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x0e}, {.addr=0x71fc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x71fc, .value=0x6d, .type=IO_READ},
        {.addr=0x71fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x7f72, .a=0x51, .x=0x47, .y=0xa8, .sp=0x03, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x7f72, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7f73, .a=0x51, .x=0x47, .y=0xa8, .sp=0x02, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xa8}, {.addr=0x7f72, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7f72, .value=0x6d, .type=IO_READ},
        {.addr=0x7f73, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x8175, .a=0xd4, .x=0x40, .y=0x33, .sp=0x8b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x8175, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8176, .a=0xd4, .x=0x40, .y=0x33, .sp=0x8a, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x33}, {.addr=0x8175, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8175, .value=0x6d, .type=IO_READ},
        {.addr=0x8176, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xbd24, .a=0xaa, .x=0xe3, .y=0x09, .sp=0xbf, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xbd24, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbd25, .a=0xaa, .x=0xe3, .y=0x09, .sp=0xbe, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x09}, {.addr=0xbd24, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbd24, .value=0x6d, .type=IO_READ},
        {.addr=0xbd25, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x8b42, .a=0xa1, .x=0x82, .y=0xeb, .sp=0xb1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x8b42, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8b43, .a=0xa1, .x=0x82, .y=0xeb, .sp=0xb0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xeb}, {.addr=0x8b42, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8b42, .value=0x6d, .type=IO_READ},
        {.addr=0x8b43, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x9b83, .a=0xc4, .x=0x5b, .y=0x23, .sp=0x59, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x9b83, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9b84, .a=0xc4, .x=0x5b, .y=0x23, .sp=0x58, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x23}, {.addr=0x9b83, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9b83, .value=0x6d, .type=IO_READ},
        {.addr=0x9b84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x83b8, .a=0x3c, .x=0x2f, .y=0xc6, .sp=0xb4, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x83b8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x83b9, .a=0x3c, .x=0x2f, .y=0xc6, .sp=0xb3, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xc6}, {.addr=0x83b8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x83b8, .value=0x6d, .type=IO_READ},
        {.addr=0x83b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xa060, .a=0x3d, .x=0x61, .y=0x7c, .sp=0x32, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xa060, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa061, .a=0x3d, .x=0x61, .y=0x7c, .sp=0x31, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x7c}, {.addr=0xa060, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa060, .value=0x6d, .type=IO_READ},
        {.addr=0xa061, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x2b9f, .a=0x3a, .x=0xf6, .y=0xa4, .sp=0xad, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x2b9f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2ba0, .a=0x3a, .x=0xf6, .y=0xa4, .sp=0xac, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xa4}, {.addr=0x2b9f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2b9f, .value=0x6d, .type=IO_READ},
        {.addr=0x2ba0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xc430, .a=0x99, .x=0x80, .y=0x60, .sp=0xae, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xc430, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc431, .a=0x99, .x=0x80, .y=0x60, .sp=0xad, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x60}, {.addr=0xc430, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc430, .value=0x6d, .type=IO_READ},
        {.addr=0xc431, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xc22e, .a=0xc8, .x=0x6a, .y=0x1f, .sp=0x45, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0xc22e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc22f, .a=0xc8, .x=0x6a, .y=0x1f, .sp=0x44, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x1f}, {.addr=0xc22e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc22e, .value=0x6d, .type=IO_READ},
        {.addr=0xc22f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x2d20, .a=0xd7, .x=0xea, .y=0xe7, .sp=0x86, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x2d20, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d21, .a=0xd7, .x=0xea, .y=0xe7, .sp=0x85, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xe7}, {.addr=0x2d20, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d20, .value=0x6d, .type=IO_READ},
        {.addr=0x2d21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xa74d, .a=0xf0, .x=0x2e, .y=0x75, .sp=0xeb, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xa74d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa74e, .a=0xf0, .x=0x2e, .y=0x75, .sp=0xea, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x75}, {.addr=0xa74d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa74d, .value=0x6d, .type=IO_READ},
        {.addr=0xa74e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x2eaa, .a=0xc4, .x=0xd3, .y=0x19, .sp=0x64, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x2eaa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2eab, .a=0xc4, .x=0xd3, .y=0x19, .sp=0x63, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x19}, {.addr=0x2eaa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2eaa, .value=0x6d, .type=IO_READ},
        {.addr=0x2eab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x9002, .a=0x6b, .x=0x6e, .y=0xda, .sp=0xff, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x9002, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9003, .a=0x6b, .x=0x6e, .y=0xda, .sp=0xfe, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xda}, {.addr=0x9002, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9002, .value=0x6d, .type=IO_READ},
        {.addr=0x9003, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xb5bc, .a=0xf3, .x=0xdf, .y=0x27, .sp=0x32, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xb5bc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb5bd, .a=0xf3, .x=0xdf, .y=0x27, .sp=0x31, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x27}, {.addr=0xb5bc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb5bc, .value=0x6d, .type=IO_READ},
        {.addr=0xb5bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x3ec3, .a=0x87, .x=0x64, .y=0x0b, .sp=0x5c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x3ec3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3ec4, .a=0x87, .x=0x64, .y=0x0b, .sp=0x5b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x0b}, {.addr=0x3ec3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3ec3, .value=0x6d, .type=IO_READ},
        {.addr=0x3ec4, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xe339, .a=0x59, .x=0xa9, .y=0x33, .sp=0x65, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0xe339, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe33a, .a=0x59, .x=0xa9, .y=0x33, .sp=0x64, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x33}, {.addr=0xe339, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe339, .value=0x6d, .type=IO_READ},
        {.addr=0xe33a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x91a2, .a=0x44, .x=0x6a, .y=0x8d, .sp=0x7f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x91a2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x91a3, .a=0x44, .x=0x6a, .y=0x8d, .sp=0x7e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x8d}, {.addr=0x91a2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x91a2, .value=0x6d, .type=IO_READ},
        {.addr=0x91a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x297f, .a=0xe6, .x=0x99, .y=0xdb, .sp=0x84, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x297f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2980, .a=0xe6, .x=0x99, .y=0xdb, .sp=0x83, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xdb}, {.addr=0x297f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x297f, .value=0x6d, .type=IO_READ},
        {.addr=0x2980, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xc744, .a=0x75, .x=0xb1, .y=0x0f, .sp=0x1a, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0xc744, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc745, .a=0x75, .x=0xb1, .y=0x0f, .sp=0x19, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x0f}, {.addr=0xc744, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc744, .value=0x6d, .type=IO_READ},
        {.addr=0xc745, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x6bc4, .a=0xae, .x=0xb2, .y=0x87, .sp=0x2b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x6bc4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6bc5, .a=0xae, .x=0xb2, .y=0x87, .sp=0x2a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x87}, {.addr=0x6bc4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6bc4, .value=0x6d, .type=IO_READ},
        {.addr=0x6bc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x71ee, .a=0xf1, .x=0xf7, .y=0xe9, .sp=0xc4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x71ee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x71ef, .a=0xf1, .x=0xf7, .y=0xe9, .sp=0xc3, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xe9}, {.addr=0x71ee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x71ee, .value=0x6d, .type=IO_READ},
        {.addr=0x71ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xab89, .a=0x9a, .x=0x4a, .y=0x30, .sp=0xa3, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xab89, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xab8a, .a=0x9a, .x=0x4a, .y=0x30, .sp=0xa2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x30}, {.addr=0xab89, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xab89, .value=0x6d, .type=IO_READ},
        {.addr=0xab8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xca2d, .a=0xc6, .x=0xfa, .y=0xb3, .sp=0xce, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xca2d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xca2e, .a=0xc6, .x=0xfa, .y=0xb3, .sp=0xcd, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xb3}, {.addr=0xca2d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xca2d, .value=0x6d, .type=IO_READ},
        {.addr=0xca2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x7656, .a=0x05, .x=0xc0, .y=0xb4, .sp=0xe7, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0x7656, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7657, .a=0x05, .x=0xc0, .y=0xb4, .sp=0xe6, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xb4}, {.addr=0x7656, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7656, .value=0x6d, .type=IO_READ},
        {.addr=0x7657, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xf89e, .a=0x2b, .x=0xf0, .y=0x2c, .sp=0xce, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xf89e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf89f, .a=0x2b, .x=0xf0, .y=0x2c, .sp=0xcd, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x2c}, {.addr=0xf89e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf89e, .value=0x6d, .type=IO_READ},
        {.addr=0xf89f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xce0b, .a=0x5f, .x=0x15, .y=0xd8, .sp=0x0a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xce0b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xce0c, .a=0x5f, .x=0x15, .y=0xd8, .sp=0x09, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xd8}, {.addr=0xce0b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xce0b, .value=0x6d, .type=IO_READ},
        {.addr=0xce0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x80da, .a=0xcd, .x=0x42, .y=0x74, .sp=0xaf, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x80da, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x80db, .a=0xcd, .x=0x42, .y=0x74, .sp=0xae, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x74}, {.addr=0x80da, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x80da, .value=0x6d, .type=IO_READ},
        {.addr=0x80db, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x60fa, .a=0xdf, .x=0xe4, .y=0xc4, .sp=0x04, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x60fa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x60fb, .a=0xdf, .x=0xe4, .y=0xc4, .sp=0x03, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xc4}, {.addr=0x60fa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x60fa, .value=0x6d, .type=IO_READ},
        {.addr=0x60fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x1657, .a=0xb0, .x=0xbf, .y=0xf7, .sp=0xb3, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x1657, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1658, .a=0xb0, .x=0xbf, .y=0xf7, .sp=0xb2, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xf7}, {.addr=0x1657, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1657, .value=0x6d, .type=IO_READ},
        {.addr=0x1658, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x820a, .a=0xc2, .x=0xf9, .y=0x64, .sp=0x67, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x820a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x820b, .a=0xc2, .x=0xf9, .y=0x64, .sp=0x66, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x64}, {.addr=0x820a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x820a, .value=0x6d, .type=IO_READ},
        {.addr=0x820b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x8170, .a=0x78, .x=0xe2, .y=0xd8, .sp=0x41, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x8170, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8171, .a=0x78, .x=0xe2, .y=0xd8, .sp=0x40, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xd8}, {.addr=0x8170, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8170, .value=0x6d, .type=IO_READ},
        {.addr=0x8171, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xf4e6, .a=0xfd, .x=0xe3, .y=0x84, .sp=0xeb, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xf4e6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf4e7, .a=0xfd, .x=0xe3, .y=0x84, .sp=0xea, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x84}, {.addr=0xf4e6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf4e6, .value=0x6d, .type=IO_READ},
        {.addr=0xf4e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x78ee, .a=0xd0, .x=0x0e, .y=0x03, .sp=0x01, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x78ee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x78ef, .a=0xd0, .x=0x0e, .y=0x03, .sp=0x00, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x03}, {.addr=0x78ee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x78ee, .value=0x6d, .type=IO_READ},
        {.addr=0x78ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xa958, .a=0x83, .x=0xa8, .y=0x70, .sp=0x52, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0xa958, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa959, .a=0x83, .x=0xa8, .y=0x70, .sp=0x51, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x70}, {.addr=0xa958, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa958, .value=0x6d, .type=IO_READ},
        {.addr=0xa959, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x444b, .a=0x1d, .x=0x0b, .y=0x13, .sp=0x5e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x444b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x444c, .a=0x1d, .x=0x0b, .y=0x13, .sp=0x5d, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x13}, {.addr=0x444b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x444b, .value=0x6d, .type=IO_READ},
        {.addr=0x444c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xa948, .a=0x49, .x=0x47, .y=0x4a, .sp=0x7a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xa948, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa949, .a=0x49, .x=0x47, .y=0x4a, .sp=0x79, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x4a}, {.addr=0xa948, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa948, .value=0x6d, .type=IO_READ},
        {.addr=0xa949, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xd746, .a=0xcb, .x=0x25, .y=0x8e, .sp=0xc6, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0xd746, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd747, .a=0xcb, .x=0x25, .y=0x8e, .sp=0xc5, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x8e}, {.addr=0xd746, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd746, .value=0x6d, .type=IO_READ},
        {.addr=0xd747, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x18a4, .a=0xe4, .x=0x28, .y=0xae, .sp=0x33, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x18a4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x18a5, .a=0xe4, .x=0x28, .y=0xae, .sp=0x32, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xae}, {.addr=0x18a4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x18a4, .value=0x6d, .type=IO_READ},
        {.addr=0x18a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xb94f, .a=0x44, .x=0x85, .y=0x7a, .sp=0x2f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0xb94f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb950, .a=0x44, .x=0x85, .y=0x7a, .sp=0x2e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x7a}, {.addr=0xb94f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb94f, .value=0x6d, .type=IO_READ},
        {.addr=0xb950, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x01f7, .a=0x71, .x=0x64, .y=0xb8, .sp=0x16, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x01f7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x01f8, .a=0x71, .x=0x64, .y=0xb8, .sp=0x15, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xb8}, {.addr=0x01f7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x01f7, .value=0x6d, .type=IO_READ},
        {.addr=0x01f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xb0c7, .a=0x37, .x=0x3d, .y=0x04, .sp=0x2b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xb0c7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb0c8, .a=0x37, .x=0x3d, .y=0x04, .sp=0x2a, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x04}, {.addr=0xb0c7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb0c7, .value=0x6d, .type=IO_READ},
        {.addr=0xb0c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x67fa, .a=0x17, .x=0x96, .y=0x13, .sp=0xe8, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x67fa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x67fb, .a=0x17, .x=0x96, .y=0x13, .sp=0xe7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x13}, {.addr=0x67fa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x67fa, .value=0x6d, .type=IO_READ},
        {.addr=0x67fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa197, .a=0x63, .x=0xc8, .y=0xd4, .sp=0xcd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xa197, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa198, .a=0x63, .x=0xc8, .y=0xd4, .sp=0xcc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xd4}, {.addr=0xa197, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa197, .value=0x6d, .type=IO_READ},
        {.addr=0xa198, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xbf15, .a=0xfe, .x=0x9e, .y=0x2e, .sp=0x2d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0xbf15, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbf16, .a=0xfe, .x=0x9e, .y=0x2e, .sp=0x2c, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x2e}, {.addr=0xbf15, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbf15, .value=0x6d, .type=IO_READ},
        {.addr=0xbf16, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x4c10, .a=0x27, .x=0x14, .y=0xd7, .sp=0x3f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x4c10, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4c11, .a=0x27, .x=0x14, .y=0xd7, .sp=0x3e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xd7}, {.addr=0x4c10, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4c10, .value=0x6d, .type=IO_READ},
        {.addr=0x4c11, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xcc50, .a=0x0b, .x=0xc8, .y=0x1e, .sp=0x1f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xcc50, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcc51, .a=0x0b, .x=0xc8, .y=0x1e, .sp=0x1e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x1e}, {.addr=0xcc50, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcc50, .value=0x6d, .type=IO_READ},
        {.addr=0xcc51, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x8463, .a=0x13, .x=0x2b, .y=0x56, .sp=0xec, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x8463, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8464, .a=0x13, .x=0x2b, .y=0x56, .sp=0xeb, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x56}, {.addr=0x8463, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8463, .value=0x6d, .type=IO_READ},
        {.addr=0x8464, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x81a3, .a=0x66, .x=0x1f, .y=0xe9, .sp=0x44, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x81a3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x81a4, .a=0x66, .x=0x1f, .y=0xe9, .sp=0x43, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xe9}, {.addr=0x81a3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x81a3, .value=0x6d, .type=IO_READ},
        {.addr=0x81a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x8c87, .a=0x18, .x=0xe1, .y=0x29, .sp=0x4a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x8c87, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c88, .a=0x18, .x=0xe1, .y=0x29, .sp=0x49, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x29}, {.addr=0x8c87, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c87, .value=0x6d, .type=IO_READ},
        {.addr=0x8c88, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xf6ac, .a=0x77, .x=0x50, .y=0x6a, .sp=0x14, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xf6ac, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf6ad, .a=0x77, .x=0x50, .y=0x6a, .sp=0x13, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x6a}, {.addr=0xf6ac, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf6ac, .value=0x6d, .type=IO_READ},
        {.addr=0xf6ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xf647, .a=0x20, .x=0x6b, .y=0x9d, .sp=0x08, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xf647, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf648, .a=0x20, .x=0x6b, .y=0x9d, .sp=0x07, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x9d}, {.addr=0xf647, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf647, .value=0x6d, .type=IO_READ},
        {.addr=0xf648, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x4a6d, .a=0xa8, .x=0x29, .y=0x2d, .sp=0x10, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x4a6d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4a6e, .a=0xa8, .x=0x29, .y=0x2d, .sp=0x0f, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x2d}, {.addr=0x4a6d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4a6d, .value=0x6d, .type=IO_READ},
        {.addr=0x4a6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x5135, .a=0xe6, .x=0x3e, .y=0xaf, .sp=0x76, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x5135, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5136, .a=0xe6, .x=0x3e, .y=0xaf, .sp=0x75, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xaf}, {.addr=0x5135, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5135, .value=0x6d, .type=IO_READ},
        {.addr=0x5136, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x5fe0, .a=0x4d, .x=0x3f, .y=0x97, .sp=0x8f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x5fe0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5fe1, .a=0x4d, .x=0x3f, .y=0x97, .sp=0x8e, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x97}, {.addr=0x5fe0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5fe0, .value=0x6d, .type=IO_READ},
        {.addr=0x5fe1, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x4ed3, .a=0x9d, .x=0xb2, .y=0x0f, .sp=0x9a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x4ed3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4ed4, .a=0x9d, .x=0xb2, .y=0x0f, .sp=0x99, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x0f}, {.addr=0x4ed3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4ed3, .value=0x6d, .type=IO_READ},
        {.addr=0x4ed4, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x5879, .a=0x83, .x=0x7b, .y=0x7d, .sp=0x9e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x5879, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x587a, .a=0x83, .x=0x7b, .y=0x7d, .sp=0x9d, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x7d}, {.addr=0x5879, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5879, .value=0x6d, .type=IO_READ},
        {.addr=0x587a, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xdfe4, .a=0x19, .x=0x2d, .y=0xc7, .sp=0xb6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xdfe4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdfe5, .a=0x19, .x=0x2d, .y=0xc7, .sp=0xb5, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xc7}, {.addr=0xdfe4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdfe4, .value=0x6d, .type=IO_READ},
        {.addr=0xdfe5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x8242, .a=0xbe, .x=0xf2, .y=0xed, .sp=0x81, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x8242, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8243, .a=0xbe, .x=0xf2, .y=0xed, .sp=0x80, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xed}, {.addr=0x8242, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8242, .value=0x6d, .type=IO_READ},
        {.addr=0x8243, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xbb08, .a=0xc0, .x=0xe5, .y=0x56, .sp=0x67, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xbb08, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbb09, .a=0xc0, .x=0xe5, .y=0x56, .sp=0x66, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x56}, {.addr=0xbb08, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbb08, .value=0x6d, .type=IO_READ},
        {.addr=0xbb09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xf0ff, .a=0xcd, .x=0x02, .y=0x7b, .sp=0xc7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0xf0ff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf100, .a=0xcd, .x=0x02, .y=0x7b, .sp=0xc6, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x7b}, {.addr=0xf0ff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf0ff, .value=0x6d, .type=IO_READ},
        {.addr=0xf100, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xe2cc, .a=0xa1, .x=0xe1, .y=0x63, .sp=0x59, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xe2cc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe2cd, .a=0xa1, .x=0xe1, .y=0x63, .sp=0x58, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x63}, {.addr=0xe2cc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe2cc, .value=0x6d, .type=IO_READ},
        {.addr=0xe2cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xd4de, .a=0x70, .x=0x18, .y=0xe7, .sp=0xf9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xd4de, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd4df, .a=0x70, .x=0x18, .y=0xe7, .sp=0xf8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xe7}, {.addr=0xd4de, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd4de, .value=0x6d, .type=IO_READ},
        {.addr=0xd4df, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xcdd0, .a=0xd2, .x=0x81, .y=0x63, .sp=0xc5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xcdd0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcdd1, .a=0xd2, .x=0x81, .y=0x63, .sp=0xc4, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x63}, {.addr=0xcdd0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcdd0, .value=0x6d, .type=IO_READ},
        {.addr=0xcdd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0200) {
    const struct CPU_State initial_cpu = {.pc=0xa08a, .a=0xbd, .x=0xe6, .y=0x49, .sp=0xc1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xa08a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa08b, .a=0xbd, .x=0xe6, .y=0x49, .sp=0xc0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x49}, {.addr=0xa08a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa08a, .value=0x6d, .type=IO_READ},
        {.addr=0xa08b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0201) {
    const struct CPU_State initial_cpu = {.pc=0x0d4e, .a=0xe2, .x=0x91, .y=0x33, .sp=0x9b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x0d4e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0d4f, .a=0xe2, .x=0x91, .y=0x33, .sp=0x9a, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x33}, {.addr=0x0d4e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0d4e, .value=0x6d, .type=IO_READ},
        {.addr=0x0d4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0202) {
    const struct CPU_State initial_cpu = {.pc=0xdda1, .a=0xf5, .x=0xc0, .y=0xa9, .sp=0x49, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0xdda1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdda2, .a=0xf5, .x=0xc0, .y=0xa9, .sp=0x48, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xa9}, {.addr=0xdda1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdda1, .value=0x6d, .type=IO_READ},
        {.addr=0xdda2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x9abc, .a=0x92, .x=0xf8, .y=0x05, .sp=0xb0, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x9abc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9abd, .a=0x92, .x=0xf8, .y=0x05, .sp=0xaf, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x05}, {.addr=0x9abc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9abc, .value=0x6d, .type=IO_READ},
        {.addr=0x9abd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x1e70, .a=0x8d, .x=0x61, .y=0x1b, .sp=0xa1, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x1e70, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1e71, .a=0x8d, .x=0x61, .y=0x1b, .sp=0xa0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x1b}, {.addr=0x1e70, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1e70, .value=0x6d, .type=IO_READ},
        {.addr=0x1e71, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0205) {
    const struct CPU_State initial_cpu = {.pc=0x84ef, .a=0x59, .x=0x6a, .y=0xc5, .sp=0x3a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x84ef, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x84f0, .a=0x59, .x=0x6a, .y=0xc5, .sp=0x39, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xc5}, {.addr=0x84ef, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x84ef, .value=0x6d, .type=IO_READ},
        {.addr=0x84f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0206) {
    const struct CPU_State initial_cpu = {.pc=0xce67, .a=0x1f, .x=0x0b, .y=0x66, .sp=0x67, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xce67, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xce68, .a=0x1f, .x=0x0b, .y=0x66, .sp=0x66, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x66}, {.addr=0xce67, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xce67, .value=0x6d, .type=IO_READ},
        {.addr=0xce68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x665f, .a=0xa7, .x=0x7b, .y=0x93, .sp=0x13, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x665f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6660, .a=0xa7, .x=0x7b, .y=0x93, .sp=0x12, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x93}, {.addr=0x665f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x665f, .value=0x6d, .type=IO_READ},
        {.addr=0x6660, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0208) {
    const struct CPU_State initial_cpu = {.pc=0x67a7, .a=0xf9, .x=0x88, .y=0xac, .sp=0x96, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x67a7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x67a8, .a=0xf9, .x=0x88, .y=0xac, .sp=0x95, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xac}, {.addr=0x67a7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x67a7, .value=0x6d, .type=IO_READ},
        {.addr=0x67a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0209) {
    const struct CPU_State initial_cpu = {.pc=0x7d1c, .a=0xc7, .x=0x0e, .y=0xfb, .sp=0x61, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x7d1c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7d1d, .a=0xc7, .x=0x0e, .y=0xfb, .sp=0x60, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xfb}, {.addr=0x7d1c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7d1c, .value=0x6d, .type=IO_READ},
        {.addr=0x7d1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xf418, .a=0x6c, .x=0xcc, .y=0xfb, .sp=0x52, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0xf418, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf419, .a=0x6c, .x=0xcc, .y=0xfb, .sp=0x51, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xfb}, {.addr=0xf418, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf418, .value=0x6d, .type=IO_READ},
        {.addr=0xf419, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_020B) {
    const struct CPU_State initial_cpu = {.pc=0xcd20, .a=0xb7, .x=0x87, .y=0xb0, .sp=0xfc, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xcd20, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcd21, .a=0xb7, .x=0x87, .y=0xb0, .sp=0xfb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xb0}, {.addr=0xcd20, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcd20, .value=0x6d, .type=IO_READ},
        {.addr=0xcd21, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_020C) {
    const struct CPU_State initial_cpu = {.pc=0x47a6, .a=0x2e, .x=0x43, .y=0x85, .sp=0x1c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x47a6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x47a7, .a=0x2e, .x=0x43, .y=0x85, .sp=0x1b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x85}, {.addr=0x47a6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x47a6, .value=0x6d, .type=IO_READ},
        {.addr=0x47a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_020D) {
    const struct CPU_State initial_cpu = {.pc=0x448b, .a=0x07, .x=0x5e, .y=0x44, .sp=0x04, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x448b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x448c, .a=0x07, .x=0x5e, .y=0x44, .sp=0x03, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x44}, {.addr=0x448b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x448b, .value=0x6d, .type=IO_READ},
        {.addr=0x448c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_020E) {
    const struct CPU_State initial_cpu = {.pc=0xea38, .a=0x52, .x=0x20, .y=0xc7, .sp=0xf3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xea38, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xea39, .a=0x52, .x=0x20, .y=0xc7, .sp=0xf2, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xc7}, {.addr=0xea38, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xea38, .value=0x6d, .type=IO_READ},
        {.addr=0xea39, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x20fc, .a=0x53, .x=0x40, .y=0x2b, .sp=0x89, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x20fc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x20fd, .a=0x53, .x=0x40, .y=0x2b, .sp=0x88, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x2b}, {.addr=0x20fc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x20fc, .value=0x6d, .type=IO_READ},
        {.addr=0x20fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0210) {
    const struct CPU_State initial_cpu = {.pc=0xcf91, .a=0x16, .x=0x85, .y=0x0a, .sp=0x8b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0xcf91, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcf92, .a=0x16, .x=0x85, .y=0x0a, .sp=0x8a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x0a}, {.addr=0xcf91, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcf91, .value=0x6d, .type=IO_READ},
        {.addr=0xcf92, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0211) {
    const struct CPU_State initial_cpu = {.pc=0xacf3, .a=0xf4, .x=0x1b, .y=0xba, .sp=0xc4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xacf3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xacf4, .a=0xf4, .x=0x1b, .y=0xba, .sp=0xc3, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xba}, {.addr=0xacf3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xacf3, .value=0x6d, .type=IO_READ},
        {.addr=0xacf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xba, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0212) {
    const struct CPU_State initial_cpu = {.pc=0x0413, .a=0xe6, .x=0x8f, .y=0x7d, .sp=0xa3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x0413, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0414, .a=0xe6, .x=0x8f, .y=0x7d, .sp=0xa2, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x7d}, {.addr=0x0413, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0413, .value=0x6d, .type=IO_READ},
        {.addr=0x0414, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0213) {
    const struct CPU_State initial_cpu = {.pc=0x3978, .a=0xf8, .x=0xd1, .y=0x66, .sp=0xca, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x3978, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3979, .a=0xf8, .x=0xd1, .y=0x66, .sp=0xc9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x66}, {.addr=0x3978, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3978, .value=0x6d, .type=IO_READ},
        {.addr=0x3979, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x5d9c, .a=0xde, .x=0xda, .y=0x12, .sp=0xb9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x5d9c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5d9d, .a=0xde, .x=0xda, .y=0x12, .sp=0xb8, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x12}, {.addr=0x5d9c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5d9c, .value=0x6d, .type=IO_READ},
        {.addr=0x5d9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x0b44, .a=0xde, .x=0x82, .y=0x79, .sp=0xc9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x0b44, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0b45, .a=0xde, .x=0x82, .y=0x79, .sp=0xc8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x79}, {.addr=0x0b44, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0b44, .value=0x6d, .type=IO_READ},
        {.addr=0x0b45, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0216) {
    const struct CPU_State initial_cpu = {.pc=0xe839, .a=0xfe, .x=0x99, .y=0x14, .sp=0xcd, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xe839, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe83a, .a=0xfe, .x=0x99, .y=0x14, .sp=0xcc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x14}, {.addr=0xe839, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe839, .value=0x6d, .type=IO_READ},
        {.addr=0xe83a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0217) {
    const struct CPU_State initial_cpu = {.pc=0xfd17, .a=0x24, .x=0xd1, .y=0x0f, .sp=0x67, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xfd17, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfd18, .a=0x24, .x=0xd1, .y=0x0f, .sp=0x66, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x0f}, {.addr=0xfd17, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfd17, .value=0x6d, .type=IO_READ},
        {.addr=0xfd18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0218) {
    const struct CPU_State initial_cpu = {.pc=0x8b63, .a=0xb7, .x=0x57, .y=0x6e, .sp=0x5e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x8b63, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8b64, .a=0xb7, .x=0x57, .y=0x6e, .sp=0x5d, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x6e}, {.addr=0x8b63, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8b63, .value=0x6d, .type=IO_READ},
        {.addr=0x8b64, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7ac6, .a=0x93, .x=0xb6, .y=0x07, .sp=0x66, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x7ac6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7ac7, .a=0x93, .x=0xb6, .y=0x07, .sp=0x65, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x07}, {.addr=0x7ac6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7ac6, .value=0x6d, .type=IO_READ},
        {.addr=0x7ac7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_021A) {
    const struct CPU_State initial_cpu = {.pc=0x3a3c, .a=0xfe, .x=0x17, .y=0x70, .sp=0x10, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x3a3c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3a3d, .a=0xfe, .x=0x17, .y=0x70, .sp=0x0f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x70}, {.addr=0x3a3c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3a3c, .value=0x6d, .type=IO_READ},
        {.addr=0x3a3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_021B) {
    const struct CPU_State initial_cpu = {.pc=0xb821, .a=0x68, .x=0x86, .y=0x61, .sp=0x89, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xb821, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb822, .a=0x68, .x=0x86, .y=0x61, .sp=0x88, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x61}, {.addr=0xb821, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb821, .value=0x6d, .type=IO_READ},
        {.addr=0xb822, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_021C) {
    const struct CPU_State initial_cpu = {.pc=0xb8be, .a=0x91, .x=0xe4, .y=0xa4, .sp=0x70, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xb8be, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb8bf, .a=0x91, .x=0xe4, .y=0xa4, .sp=0x6f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xa4}, {.addr=0xb8be, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb8be, .value=0x6d, .type=IO_READ},
        {.addr=0xb8bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_021D) {
    const struct CPU_State initial_cpu = {.pc=0x08d0, .a=0xd2, .x=0xec, .y=0x8a, .sp=0x4e, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x08d0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x08d1, .a=0xd2, .x=0xec, .y=0x8a, .sp=0x4d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x8a}, {.addr=0x08d0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x08d0, .value=0x6d, .type=IO_READ},
        {.addr=0x08d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_021E) {
    const struct CPU_State initial_cpu = {.pc=0x9dad, .a=0x5a, .x=0x52, .y=0x13, .sp=0x5f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x9dad, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9dae, .a=0x5a, .x=0x52, .y=0x13, .sp=0x5e, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x13}, {.addr=0x9dad, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9dad, .value=0x6d, .type=IO_READ},
        {.addr=0x9dae, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x1460, .a=0xd4, .x=0xd6, .y=0xa7, .sp=0x7f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x1460, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1461, .a=0xd4, .x=0xd6, .y=0xa7, .sp=0x7e, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xa7}, {.addr=0x1460, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1460, .value=0x6d, .type=IO_READ},
        {.addr=0x1461, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0220) {
    const struct CPU_State initial_cpu = {.pc=0xf216, .a=0x84, .x=0xd7, .y=0x09, .sp=0x01, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xf216, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf217, .a=0x84, .x=0xd7, .y=0x09, .sp=0x00, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x09}, {.addr=0xf216, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf216, .value=0x6d, .type=IO_READ},
        {.addr=0xf217, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa06f, .a=0x98, .x=0x3c, .y=0x29, .sp=0x03, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0xa06f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa070, .a=0x98, .x=0x3c, .y=0x29, .sp=0x02, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x29}, {.addr=0xa06f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa06f, .value=0x6d, .type=IO_READ},
        {.addr=0xa070, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8c4c, .a=0x29, .x=0x4c, .y=0x46, .sp=0x20, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x8c4c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c4d, .a=0x29, .x=0x4c, .y=0x46, .sp=0x1f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x46}, {.addr=0x8c4c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c4c, .value=0x6d, .type=IO_READ},
        {.addr=0x8c4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0223) {
    const struct CPU_State initial_cpu = {.pc=0xdb27, .a=0x8f, .x=0xd0, .y=0x97, .sp=0x88, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0xdb27, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdb28, .a=0x8f, .x=0xd0, .y=0x97, .sp=0x87, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x97}, {.addr=0xdb27, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdb27, .value=0x6d, .type=IO_READ},
        {.addr=0xdb28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa8e6, .a=0x02, .x=0xbf, .y=0xaf, .sp=0xcb, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0xa8e6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa8e7, .a=0x02, .x=0xbf, .y=0xaf, .sp=0xca, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xaf}, {.addr=0xa8e6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa8e6, .value=0x6d, .type=IO_READ},
        {.addr=0xa8e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0225) {
    const struct CPU_State initial_cpu = {.pc=0x08e3, .a=0x57, .x=0x4a, .y=0x5e, .sp=0xd8, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x08e3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x08e4, .a=0x57, .x=0x4a, .y=0x5e, .sp=0xd7, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x5e}, {.addr=0x08e3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x08e3, .value=0x6d, .type=IO_READ},
        {.addr=0x08e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0226) {
    const struct CPU_State initial_cpu = {.pc=0xc583, .a=0xab, .x=0x9f, .y=0x8c, .sp=0x69, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0xc583, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc584, .a=0xab, .x=0x9f, .y=0x8c, .sp=0x68, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x8c}, {.addr=0xc583, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc583, .value=0x6d, .type=IO_READ},
        {.addr=0xc584, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0227) {
    const struct CPU_State initial_cpu = {.pc=0x9142, .a=0xe3, .x=0x32, .y=0x54, .sp=0xfd, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x9142, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9143, .a=0xe3, .x=0x32, .y=0x54, .sp=0xfc, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x54}, {.addr=0x9142, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9142, .value=0x6d, .type=IO_READ},
        {.addr=0x9143, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0228) {
    const struct CPU_State initial_cpu = {.pc=0x39f2, .a=0xd0, .x=0x14, .y=0xe3, .sp=0x5b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x39f2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x39f3, .a=0xd0, .x=0x14, .y=0xe3, .sp=0x5a, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xe3}, {.addr=0x39f2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x39f2, .value=0x6d, .type=IO_READ},
        {.addr=0x39f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x7614, .a=0xe0, .x=0xe5, .y=0x29, .sp=0x52, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x7614, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7615, .a=0xe0, .x=0xe5, .y=0x29, .sp=0x51, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x29}, {.addr=0x7614, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7614, .value=0x6d, .type=IO_READ},
        {.addr=0x7615, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x6bbb, .a=0x07, .x=0x11, .y=0x5d, .sp=0xb3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x6bbb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6bbc, .a=0x07, .x=0x11, .y=0x5d, .sp=0xb2, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x5d}, {.addr=0x6bbb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6bbb, .value=0x6d, .type=IO_READ},
        {.addr=0x6bbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x6062, .a=0x1c, .x=0x91, .y=0x74, .sp=0x06, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x6062, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6063, .a=0x1c, .x=0x91, .y=0x74, .sp=0x05, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x74}, {.addr=0x6062, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6062, .value=0x6d, .type=IO_READ},
        {.addr=0x6063, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_022C) {
    const struct CPU_State initial_cpu = {.pc=0xfd33, .a=0x2c, .x=0xa6, .y=0xac, .sp=0x1d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xfd33, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfd34, .a=0x2c, .x=0xa6, .y=0xac, .sp=0x1c, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xac}, {.addr=0xfd33, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfd33, .value=0x6d, .type=IO_READ},
        {.addr=0xfd34, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x1b37, .a=0x70, .x=0xc3, .y=0x2f, .sp=0x9e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x1b37, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1b38, .a=0x70, .x=0xc3, .y=0x2f, .sp=0x9d, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x2f}, {.addr=0x1b37, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1b37, .value=0x6d, .type=IO_READ},
        {.addr=0x1b38, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x836e, .a=0xdf, .x=0x5b, .y=0x03, .sp=0xaf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x836e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x836f, .a=0xdf, .x=0x5b, .y=0x03, .sp=0xae, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x03}, {.addr=0x836e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x836e, .value=0x6d, .type=IO_READ},
        {.addr=0x836f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x296b, .a=0x7b, .x=0x5b, .y=0xed, .sp=0xea, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x296b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x296c, .a=0x7b, .x=0x5b, .y=0xed, .sp=0xe9, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xed}, {.addr=0x296b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x296b, .value=0x6d, .type=IO_READ},
        {.addr=0x296c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0230) {
    const struct CPU_State initial_cpu = {.pc=0xf254, .a=0xf8, .x=0xd8, .y=0x2d, .sp=0x3e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xf254, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf255, .a=0xf8, .x=0xd8, .y=0x2d, .sp=0x3d, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x2d}, {.addr=0xf254, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf254, .value=0x6d, .type=IO_READ},
        {.addr=0xf255, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x3ace, .a=0x63, .x=0x1a, .y=0x03, .sp=0x58, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x3ace, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3acf, .a=0x63, .x=0x1a, .y=0x03, .sp=0x57, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x03}, {.addr=0x3ace, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3ace, .value=0x6d, .type=IO_READ},
        {.addr=0x3acf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0232) {
    const struct CPU_State initial_cpu = {.pc=0x1f9d, .a=0x2b, .x=0x3d, .y=0xdd, .sp=0x71, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x1f9d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1f9e, .a=0x2b, .x=0x3d, .y=0xdd, .sp=0x70, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xdd}, {.addr=0x1f9d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1f9d, .value=0x6d, .type=IO_READ},
        {.addr=0x1f9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0233) {
    const struct CPU_State initial_cpu = {.pc=0x6d3b, .a=0xa3, .x=0xad, .y=0x36, .sp=0xf7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x6d3b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6d3c, .a=0xa3, .x=0xad, .y=0x36, .sp=0xf6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x36}, {.addr=0x6d3b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6d3b, .value=0x6d, .type=IO_READ},
        {.addr=0x6d3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x7459, .a=0x5b, .x=0x15, .y=0x86, .sp=0xa0, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x7459, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x745a, .a=0x5b, .x=0x15, .y=0x86, .sp=0x9f, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x86}, {.addr=0x7459, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7459, .value=0x6d, .type=IO_READ},
        {.addr=0x745a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0235) {
    const struct CPU_State initial_cpu = {.pc=0x1c07, .a=0xdd, .x=0x00, .y=0x06, .sp=0xd7, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0x1c07, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1c08, .a=0xdd, .x=0x00, .y=0x06, .sp=0xd6, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x06}, {.addr=0x1c07, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1c07, .value=0x6d, .type=IO_READ},
        {.addr=0x1c08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x2bf9, .a=0x20, .x=0xa8, .y=0x1b, .sp=0x2f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x2bf9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2bfa, .a=0x20, .x=0xa8, .y=0x1b, .sp=0x2e, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x1b}, {.addr=0x2bf9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2bf9, .value=0x6d, .type=IO_READ},
        {.addr=0x2bfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0237) {
    const struct CPU_State initial_cpu = {.pc=0x1aba, .a=0x92, .x=0xe2, .y=0x90, .sp=0x59, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x1aba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1abb, .a=0x92, .x=0xe2, .y=0x90, .sp=0x58, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x90}, {.addr=0x1aba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1aba, .value=0x6d, .type=IO_READ},
        {.addr=0x1abb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x11f0, .a=0xdb, .x=0x8b, .y=0x55, .sp=0xe4, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x11f0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x11f1, .a=0xdb, .x=0x8b, .y=0x55, .sp=0xe3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x55}, {.addr=0x11f0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x11f0, .value=0x6d, .type=IO_READ},
        {.addr=0x11f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0239) {
    const struct CPU_State initial_cpu = {.pc=0xe74e, .a=0x4d, .x=0x0a, .y=0x11, .sp=0xb0, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xe74e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe74f, .a=0x4d, .x=0x0a, .y=0x11, .sp=0xaf, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x11}, {.addr=0xe74e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe74e, .value=0x6d, .type=IO_READ},
        {.addr=0xe74f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x12f7, .a=0xee, .x=0xba, .y=0xbb, .sp=0x82, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x12f7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x12f8, .a=0xee, .x=0xba, .y=0xbb, .sp=0x81, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xbb}, {.addr=0x12f7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x12f7, .value=0x6d, .type=IO_READ},
        {.addr=0x12f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_023B) {
    const struct CPU_State initial_cpu = {.pc=0x5a57, .a=0xa4, .x=0x43, .y=0xfd, .sp=0xbf, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x5a57, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5a58, .a=0xa4, .x=0x43, .y=0xfd, .sp=0xbe, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xfd}, {.addr=0x5a57, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5a57, .value=0x6d, .type=IO_READ},
        {.addr=0x5a58, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_023C) {
    const struct CPU_State initial_cpu = {.pc=0x1a9c, .a=0xc0, .x=0x42, .y=0x9e, .sp=0x80, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x1a9c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1a9d, .a=0xc0, .x=0x42, .y=0x9e, .sp=0x7f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x9e}, {.addr=0x1a9c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1a9c, .value=0x6d, .type=IO_READ},
        {.addr=0x1a9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x37a2, .a=0x6f, .x=0xcf, .y=0xe2, .sp=0x2c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x37a2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x37a3, .a=0x6f, .x=0xcf, .y=0xe2, .sp=0x2b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xe2}, {.addr=0x37a2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x37a2, .value=0x6d, .type=IO_READ},
        {.addr=0x37a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_023E) {
    const struct CPU_State initial_cpu = {.pc=0x1518, .a=0x5b, .x=0x7a, .y=0x88, .sp=0x4d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x1518, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1519, .a=0x5b, .x=0x7a, .y=0x88, .sp=0x4c, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x88}, {.addr=0x1518, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1518, .value=0x6d, .type=IO_READ},
        {.addr=0x1519, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_023F) {
    const struct CPU_State initial_cpu = {.pc=0xe52f, .a=0x4a, .x=0x73, .y=0x16, .sp=0x93, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xe52f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe530, .a=0x4a, .x=0x73, .y=0x16, .sp=0x92, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x16}, {.addr=0xe52f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe52f, .value=0x6d, .type=IO_READ},
        {.addr=0xe530, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0240) {
    const struct CPU_State initial_cpu = {.pc=0xbb98, .a=0xd5, .x=0xb2, .y=0xe2, .sp=0x8a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xbb98, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbb99, .a=0xd5, .x=0xb2, .y=0xe2, .sp=0x89, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xe2}, {.addr=0xbb98, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbb98, .value=0x6d, .type=IO_READ},
        {.addr=0xbb99, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x461e, .a=0x47, .x=0x67, .y=0xae, .sp=0x3b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x461e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x461f, .a=0x47, .x=0x67, .y=0xae, .sp=0x3a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xae}, {.addr=0x461e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x461e, .value=0x6d, .type=IO_READ},
        {.addr=0x461f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x02d2, .a=0x98, .x=0x4a, .y=0xf0, .sp=0xa8, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x02d2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x02d3, .a=0x98, .x=0x4a, .y=0xf0, .sp=0xa7, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xf0}, {.addr=0x02d2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x02d2, .value=0x6d, .type=IO_READ},
        {.addr=0x02d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0243) {
    const struct CPU_State initial_cpu = {.pc=0x27e2, .a=0x5c, .x=0x08, .y=0x17, .sp=0xba, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x27e2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x27e3, .a=0x5c, .x=0x08, .y=0x17, .sp=0xb9, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x17}, {.addr=0x27e2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x27e2, .value=0x6d, .type=IO_READ},
        {.addr=0x27e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x0fe6, .a=0xe8, .x=0x5d, .y=0xbd, .sp=0xad, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x0fe6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0fe7, .a=0xe8, .x=0x5d, .y=0xbd, .sp=0xac, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xbd}, {.addr=0x0fe6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0fe6, .value=0x6d, .type=IO_READ},
        {.addr=0x0fe7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0245) {
    const struct CPU_State initial_cpu = {.pc=0xe1d2, .a=0x0e, .x=0x52, .y=0xdf, .sp=0xdf, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xe1d2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe1d3, .a=0x0e, .x=0x52, .y=0xdf, .sp=0xde, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xdf}, {.addr=0xe1d2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe1d2, .value=0x6d, .type=IO_READ},
        {.addr=0xe1d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0246) {
    const struct CPU_State initial_cpu = {.pc=0xfa28, .a=0xed, .x=0x29, .y=0x6c, .sp=0x3a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xfa28, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfa29, .a=0xed, .x=0x29, .y=0x6c, .sp=0x39, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x6c}, {.addr=0xfa28, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfa28, .value=0x6d, .type=IO_READ},
        {.addr=0xfa29, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x543d, .a=0xd9, .x=0xb9, .y=0x70, .sp=0x34, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x543d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x543e, .a=0xd9, .x=0xb9, .y=0x70, .sp=0x33, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x70}, {.addr=0x543d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x543d, .value=0x6d, .type=IO_READ},
        {.addr=0x543e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0248) {
    const struct CPU_State initial_cpu = {.pc=0xbe02, .a=0x6c, .x=0x62, .y=0xa9, .sp=0xa0, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0xbe02, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbe03, .a=0x6c, .x=0x62, .y=0xa9, .sp=0x9f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xa9}, {.addr=0xbe02, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbe02, .value=0x6d, .type=IO_READ},
        {.addr=0xbe03, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0249) {
    const struct CPU_State initial_cpu = {.pc=0xc022, .a=0xed, .x=0xdd, .y=0x30, .sp=0xdf, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xc022, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc023, .a=0xed, .x=0xdd, .y=0x30, .sp=0xde, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x30}, {.addr=0xc022, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc022, .value=0x6d, .type=IO_READ},
        {.addr=0xc023, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_024A) {
    const struct CPU_State initial_cpu = {.pc=0xbeb4, .a=0x40, .x=0x50, .y=0xcf, .sp=0x1f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xbeb4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbeb5, .a=0x40, .x=0x50, .y=0xcf, .sp=0x1e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xcf}, {.addr=0xbeb4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbeb4, .value=0x6d, .type=IO_READ},
        {.addr=0xbeb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_024B) {
    const struct CPU_State initial_cpu = {.pc=0x5bca, .a=0x0a, .x=0xdb, .y=0xaa, .sp=0x95, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x5bca, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5bcb, .a=0x0a, .x=0xdb, .y=0xaa, .sp=0x94, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xaa}, {.addr=0x5bca, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5bca, .value=0x6d, .type=IO_READ},
        {.addr=0x5bcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_024C) {
    const struct CPU_State initial_cpu = {.pc=0x357f, .a=0x8b, .x=0xeb, .y=0x9a, .sp=0x23, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x357f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3580, .a=0x8b, .x=0xeb, .y=0x9a, .sp=0x22, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x9a}, {.addr=0x357f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x357f, .value=0x6d, .type=IO_READ},
        {.addr=0x3580, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x3c7b, .a=0xdc, .x=0x3f, .y=0xb4, .sp=0xb8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x3c7b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3c7c, .a=0xdc, .x=0x3f, .y=0xb4, .sp=0xb7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xb4}, {.addr=0x3c7b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3c7b, .value=0x6d, .type=IO_READ},
        {.addr=0x3c7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x7b66, .a=0xa2, .x=0x28, .y=0xdd, .sp=0xb0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x7b66, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7b67, .a=0xa2, .x=0x28, .y=0xdd, .sp=0xaf, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xdd}, {.addr=0x7b66, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7b66, .value=0x6d, .type=IO_READ},
        {.addr=0x7b67, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x274f, .a=0xa8, .x=0x67, .y=0x32, .sp=0x2e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x274f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2750, .a=0xa8, .x=0x67, .y=0x32, .sp=0x2d, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x32}, {.addr=0x274f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x274f, .value=0x6d, .type=IO_READ},
        {.addr=0x2750, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xa517, .a=0xda, .x=0x78, .y=0xa4, .sp=0x4b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xa517, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa518, .a=0xda, .x=0x78, .y=0xa4, .sp=0x4a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xa4}, {.addr=0xa517, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa517, .value=0x6d, .type=IO_READ},
        {.addr=0xa518, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x6d9b, .a=0x0a, .x=0x42, .y=0x45, .sp=0xb7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x6d9b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6d9c, .a=0x0a, .x=0x42, .y=0x45, .sp=0xb6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x45}, {.addr=0x6d9b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6d9b, .value=0x6d, .type=IO_READ},
        {.addr=0x6d9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x158b, .a=0xe3, .x=0x48, .y=0xfa, .sp=0x65, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x158b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x158c, .a=0xe3, .x=0x48, .y=0xfa, .sp=0x64, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xfa}, {.addr=0x158b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x158b, .value=0x6d, .type=IO_READ},
        {.addr=0x158c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe64f, .a=0x9f, .x=0xf0, .y=0xa3, .sp=0x2f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0xe64f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe650, .a=0x9f, .x=0xf0, .y=0xa3, .sp=0x2e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xa3}, {.addr=0xe64f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe64f, .value=0x6d, .type=IO_READ},
        {.addr=0xe650, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0254) {
    const struct CPU_State initial_cpu = {.pc=0xa4ee, .a=0x98, .x=0x84, .y=0xf8, .sp=0x78, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xa4ee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa4ef, .a=0x98, .x=0x84, .y=0xf8, .sp=0x77, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xf8}, {.addr=0xa4ee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa4ee, .value=0x6d, .type=IO_READ},
        {.addr=0xa4ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0255) {
    const struct CPU_State initial_cpu = {.pc=0xa1bc, .a=0xa8, .x=0x16, .y=0x93, .sp=0xae, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xa1bc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa1bd, .a=0xa8, .x=0x16, .y=0x93, .sp=0xad, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x93}, {.addr=0xa1bc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa1bc, .value=0x6d, .type=IO_READ},
        {.addr=0xa1bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0256) {
    const struct CPU_State initial_cpu = {.pc=0x45c7, .a=0x69, .x=0x7b, .y=0x91, .sp=0xc2, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x45c7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x45c8, .a=0x69, .x=0x7b, .y=0x91, .sp=0xc1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x91}, {.addr=0x45c7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x45c7, .value=0x6d, .type=IO_READ},
        {.addr=0x45c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x61c9, .a=0xf4, .x=0xb7, .y=0x2c, .sp=0xeb, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x61c9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x61ca, .a=0xf4, .x=0xb7, .y=0x2c, .sp=0xea, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x2c}, {.addr=0x61c9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x61c9, .value=0x6d, .type=IO_READ},
        {.addr=0x61ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0258) {
    const struct CPU_State initial_cpu = {.pc=0xcb4e, .a=0x56, .x=0xae, .y=0xcf, .sp=0x44, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0xcb4e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcb4f, .a=0x56, .x=0xae, .y=0xcf, .sp=0x43, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xcf}, {.addr=0xcb4e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcb4e, .value=0x6d, .type=IO_READ},
        {.addr=0xcb4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0259) {
    const struct CPU_State initial_cpu = {.pc=0xcc99, .a=0xf1, .x=0xcf, .y=0x0a, .sp=0x0e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xcc99, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcc9a, .a=0xf1, .x=0xcf, .y=0x0a, .sp=0x0d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x0a}, {.addr=0xcc99, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcc99, .value=0x6d, .type=IO_READ},
        {.addr=0xcc9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xefea, .a=0x7a, .x=0x01, .y=0xe0, .sp=0xe8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0xefea, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xefeb, .a=0x7a, .x=0x01, .y=0xe0, .sp=0xe7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xe0}, {.addr=0xefea, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xefea, .value=0x6d, .type=IO_READ},
        {.addr=0xefeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_025B) {
    const struct CPU_State initial_cpu = {.pc=0x8c48, .a=0x93, .x=0x6d, .y=0xde, .sp=0x21, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x8c48, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c49, .a=0x93, .x=0x6d, .y=0xde, .sp=0x20, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xde}, {.addr=0x8c48, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c48, .value=0x6d, .type=IO_READ},
        {.addr=0x8c49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_025C) {
    const struct CPU_State initial_cpu = {.pc=0xc027, .a=0x67, .x=0x3b, .y=0xe8, .sp=0xbf, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xc027, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc028, .a=0x67, .x=0x3b, .y=0xe8, .sp=0xbe, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xe8}, {.addr=0xc027, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc027, .value=0x6d, .type=IO_READ},
        {.addr=0xc028, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_025D) {
    const struct CPU_State initial_cpu = {.pc=0xaf5b, .a=0x76, .x=0xc5, .y=0x5f, .sp=0x22, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xaf5b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaf5c, .a=0x76, .x=0xc5, .y=0x5f, .sp=0x21, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x5f}, {.addr=0xaf5b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaf5b, .value=0x6d, .type=IO_READ},
        {.addr=0xaf5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_025E) {
    const struct CPU_State initial_cpu = {.pc=0xe5ea, .a=0x1d, .x=0xd5, .y=0x17, .sp=0x70, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xe5ea, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe5eb, .a=0x1d, .x=0xd5, .y=0x17, .sp=0x6f, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x17}, {.addr=0xe5ea, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe5ea, .value=0x6d, .type=IO_READ},
        {.addr=0xe5eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_025F) {
    const struct CPU_State initial_cpu = {.pc=0xe8c0, .a=0x76, .x=0xe5, .y=0xd7, .sp=0x0f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xe8c0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe8c1, .a=0x76, .x=0xe5, .y=0xd7, .sp=0x0e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xd7}, {.addr=0xe8c0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe8c0, .value=0x6d, .type=IO_READ},
        {.addr=0xe8c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0260) {
    const struct CPU_State initial_cpu = {.pc=0xbc40, .a=0x1a, .x=0x17, .y=0x06, .sp=0xdd, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0xbc40, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbc41, .a=0x1a, .x=0x17, .y=0x06, .sp=0xdc, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x06}, {.addr=0xbc40, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbc40, .value=0x6d, .type=IO_READ},
        {.addr=0xbc41, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0261) {
    const struct CPU_State initial_cpu = {.pc=0xcae0, .a=0xe2, .x=0xf9, .y=0x3b, .sp=0x06, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xcae0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcae1, .a=0xe2, .x=0xf9, .y=0x3b, .sp=0x05, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x3b}, {.addr=0xcae0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcae0, .value=0x6d, .type=IO_READ},
        {.addr=0xcae1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0262) {
    const struct CPU_State initial_cpu = {.pc=0xe61b, .a=0x72, .x=0x11, .y=0x7d, .sp=0xc9, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xe61b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe61c, .a=0x72, .x=0x11, .y=0x7d, .sp=0xc8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x7d}, {.addr=0xe61b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe61b, .value=0x6d, .type=IO_READ},
        {.addr=0xe61c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0263) {
    const struct CPU_State initial_cpu = {.pc=0xc132, .a=0x96, .x=0x02, .y=0x88, .sp=0xc5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xc132, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc133, .a=0x96, .x=0x02, .y=0x88, .sp=0xc4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x88}, {.addr=0xc132, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc132, .value=0x6d, .type=IO_READ},
        {.addr=0xc133, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x08e0, .a=0x67, .x=0x5c, .y=0xe8, .sp=0xcc, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x08e0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x08e1, .a=0x67, .x=0x5c, .y=0xe8, .sp=0xcb, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xe8}, {.addr=0x08e0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x08e0, .value=0x6d, .type=IO_READ},
        {.addr=0x08e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0265) {
    const struct CPU_State initial_cpu = {.pc=0xad08, .a=0x7f, .x=0x49, .y=0x9d, .sp=0x8b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0xad08, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xad09, .a=0x7f, .x=0x49, .y=0x9d, .sp=0x8a, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x9d}, {.addr=0xad08, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xad08, .value=0x6d, .type=IO_READ},
        {.addr=0xad09, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0266) {
    const struct CPU_State initial_cpu = {.pc=0x5021, .a=0xf5, .x=0xb6, .y=0xc1, .sp=0x61, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x5021, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5022, .a=0xf5, .x=0xb6, .y=0xc1, .sp=0x60, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xc1}, {.addr=0x5021, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5021, .value=0x6d, .type=IO_READ},
        {.addr=0x5022, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0267) {
    const struct CPU_State initial_cpu = {.pc=0x6279, .a=0xee, .x=0x15, .y=0xda, .sp=0x18, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x6279, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x627a, .a=0xee, .x=0x15, .y=0xda, .sp=0x17, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xda}, {.addr=0x6279, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6279, .value=0x6d, .type=IO_READ},
        {.addr=0x627a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x4ca8, .a=0xea, .x=0x13, .y=0x9a, .sp=0x1b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x4ca8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4ca9, .a=0xea, .x=0x13, .y=0x9a, .sp=0x1a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x9a}, {.addr=0x4ca8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca8, .value=0x6d, .type=IO_READ},
        {.addr=0x4ca9, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0269) {
    const struct CPU_State initial_cpu = {.pc=0xfcb6, .a=0xff, .x=0xcd, .y=0x6d, .sp=0xf9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xfcb6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfcb7, .a=0xff, .x=0xcd, .y=0x6d, .sp=0xf8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x6d}, {.addr=0xfcb6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfcb6, .value=0x6d, .type=IO_READ},
        {.addr=0xfcb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_026A) {
    const struct CPU_State initial_cpu = {.pc=0xfaff, .a=0x3c, .x=0xe3, .y=0xee, .sp=0xb3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0xfaff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfb00, .a=0x3c, .x=0xe3, .y=0xee, .sp=0xb2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xee}, {.addr=0xfaff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfaff, .value=0x6d, .type=IO_READ},
        {.addr=0xfb00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_026B) {
    const struct CPU_State initial_cpu = {.pc=0xebc5, .a=0x26, .x=0xf7, .y=0x1e, .sp=0x36, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0xebc5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xebc6, .a=0x26, .x=0xf7, .y=0x1e, .sp=0x35, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x1e}, {.addr=0xebc5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xebc5, .value=0x6d, .type=IO_READ},
        {.addr=0xebc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_026C) {
    const struct CPU_State initial_cpu = {.pc=0xc598, .a=0xc2, .x=0x77, .y=0xcf, .sp=0xec, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0xc598, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc599, .a=0xc2, .x=0x77, .y=0xcf, .sp=0xeb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xcf}, {.addr=0xc598, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc598, .value=0x6d, .type=IO_READ},
        {.addr=0xc599, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x96fb, .a=0xd5, .x=0xbe, .y=0x68, .sp=0x6b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x96fb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x96fc, .a=0xd5, .x=0xbe, .y=0x68, .sp=0x6a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x68}, {.addr=0x96fb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x96fb, .value=0x6d, .type=IO_READ},
        {.addr=0x96fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x75b1, .a=0x1d, .x=0x99, .y=0x42, .sp=0x34, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x75b1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x75b2, .a=0x1d, .x=0x99, .y=0x42, .sp=0x33, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x42}, {.addr=0x75b1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x75b1, .value=0x6d, .type=IO_READ},
        {.addr=0x75b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_026F) {
    const struct CPU_State initial_cpu = {.pc=0xecc9, .a=0x79, .x=0x5e, .y=0x41, .sp=0x27, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0xecc9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xecca, .a=0x79, .x=0x5e, .y=0x41, .sp=0x26, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x41}, {.addr=0xecc9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xecc9, .value=0x6d, .type=IO_READ},
        {.addr=0xecca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0270) {
    const struct CPU_State initial_cpu = {.pc=0x7c37, .a=0x1d, .x=0x33, .y=0x88, .sp=0x2d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x7c37, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7c38, .a=0x1d, .x=0x33, .y=0x88, .sp=0x2c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x88}, {.addr=0x7c37, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7c37, .value=0x6d, .type=IO_READ},
        {.addr=0x7c38, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x284f, .a=0x1d, .x=0xeb, .y=0x5f, .sp=0xcc, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x284f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2850, .a=0x1d, .x=0xeb, .y=0x5f, .sp=0xcb, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x5f}, {.addr=0x284f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x284f, .value=0x6d, .type=IO_READ},
        {.addr=0x2850, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0272) {
    const struct CPU_State initial_cpu = {.pc=0xc722, .a=0x36, .x=0xa1, .y=0xb7, .sp=0x72, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xc722, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc723, .a=0x36, .x=0xa1, .y=0xb7, .sp=0x71, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xb7}, {.addr=0xc722, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc722, .value=0x6d, .type=IO_READ},
        {.addr=0xc723, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0273) {
    const struct CPU_State initial_cpu = {.pc=0xded8, .a=0xc3, .x=0xd8, .y=0xae, .sp=0x78, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xded8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xded9, .a=0xc3, .x=0xd8, .y=0xae, .sp=0x77, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xae}, {.addr=0xded8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xded8, .value=0x6d, .type=IO_READ},
        {.addr=0xded9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0274) {
    const struct CPU_State initial_cpu = {.pc=0xf614, .a=0xc6, .x=0x3d, .y=0x0a, .sp=0xfe, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xf614, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf615, .a=0xc6, .x=0x3d, .y=0x0a, .sp=0xfd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x0a}, {.addr=0xf614, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf614, .value=0x6d, .type=IO_READ},
        {.addr=0xf615, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x4406, .a=0xde, .x=0xa2, .y=0x02, .sp=0x9a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x4406, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4407, .a=0xde, .x=0xa2, .y=0x02, .sp=0x99, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x02}, {.addr=0x4406, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4406, .value=0x6d, .type=IO_READ},
        {.addr=0x4407, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x9367, .a=0xf8, .x=0x57, .y=0x5b, .sp=0xe5, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x9367, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9368, .a=0xf8, .x=0x57, .y=0x5b, .sp=0xe4, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x5b}, {.addr=0x9367, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9367, .value=0x6d, .type=IO_READ},
        {.addr=0x9368, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x9084, .a=0xbe, .x=0x02, .y=0xa1, .sp=0x4e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x9084, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9085, .a=0xbe, .x=0x02, .y=0xa1, .sp=0x4d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xa1}, {.addr=0x9084, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9084, .value=0x6d, .type=IO_READ},
        {.addr=0x9085, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0278) {
    const struct CPU_State initial_cpu = {.pc=0xcc54, .a=0xa8, .x=0x7c, .y=0x7e, .sp=0x40, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0xcc54, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcc55, .a=0xa8, .x=0x7c, .y=0x7e, .sp=0x3f, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x7e}, {.addr=0xcc54, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcc54, .value=0x6d, .type=IO_READ},
        {.addr=0xcc55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0279) {
    const struct CPU_State initial_cpu = {.pc=0xe78c, .a=0xc5, .x=0x57, .y=0x33, .sp=0x1a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0xe78c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe78d, .a=0xc5, .x=0x57, .y=0x33, .sp=0x19, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x33}, {.addr=0xe78c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe78c, .value=0x6d, .type=IO_READ},
        {.addr=0xe78d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x9cd8, .a=0x0b, .x=0xb9, .y=0x9e, .sp=0x5e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x9cd8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9cd9, .a=0x0b, .x=0xb9, .y=0x9e, .sp=0x5d, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x9e}, {.addr=0x9cd8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9cd8, .value=0x6d, .type=IO_READ},
        {.addr=0x9cd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_027B) {
    const struct CPU_State initial_cpu = {.pc=0x7bb7, .a=0xcf, .x=0xf7, .y=0x9e, .sp=0xb2, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x7bb7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7bb8, .a=0xcf, .x=0xf7, .y=0x9e, .sp=0xb1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x9e}, {.addr=0x7bb7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7bb7, .value=0x6d, .type=IO_READ},
        {.addr=0x7bb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_027C) {
    const struct CPU_State initial_cpu = {.pc=0xae4a, .a=0x82, .x=0x76, .y=0xe9, .sp=0xb6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xae4a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xae4b, .a=0x82, .x=0x76, .y=0xe9, .sp=0xb5, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xe9}, {.addr=0xae4a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xae4a, .value=0x6d, .type=IO_READ},
        {.addr=0xae4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x2370, .a=0x14, .x=0x7b, .y=0x39, .sp=0xf4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x2370, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2371, .a=0x14, .x=0x7b, .y=0x39, .sp=0xf3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x39}, {.addr=0x2370, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2370, .value=0x6d, .type=IO_READ},
        {.addr=0x2371, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x84d5, .a=0x60, .x=0x91, .y=0x0f, .sp=0x96, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x84d5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x84d6, .a=0x60, .x=0x91, .y=0x0f, .sp=0x95, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x0f}, {.addr=0x84d5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x84d5, .value=0x6d, .type=IO_READ},
        {.addr=0x84d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_027F) {
    const struct CPU_State initial_cpu = {.pc=0x2427, .a=0x0c, .x=0x0d, .y=0xa3, .sp=0x5f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x2427, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2428, .a=0x0c, .x=0x0d, .y=0xa3, .sp=0x5e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xa3}, {.addr=0x2427, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2427, .value=0x6d, .type=IO_READ},
        {.addr=0x2428, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0280) {
    const struct CPU_State initial_cpu = {.pc=0xd438, .a=0x3a, .x=0x27, .y=0xc0, .sp=0xe5, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0xd438, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd439, .a=0x3a, .x=0x27, .y=0xc0, .sp=0xe4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xc0}, {.addr=0xd438, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd438, .value=0x6d, .type=IO_READ},
        {.addr=0xd439, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x072b, .a=0x26, .x=0xf3, .y=0x87, .sp=0x3b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x072b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x072c, .a=0x26, .x=0xf3, .y=0x87, .sp=0x3a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x87}, {.addr=0x072b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x072b, .value=0x6d, .type=IO_READ},
        {.addr=0x072c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0282) {
    const struct CPU_State initial_cpu = {.pc=0xbfd9, .a=0xc6, .x=0x83, .y=0xe8, .sp=0xfe, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xbfd9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbfda, .a=0xc6, .x=0x83, .y=0xe8, .sp=0xfd, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xe8}, {.addr=0xbfd9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbfd9, .value=0x6d, .type=IO_READ},
        {.addr=0xbfda, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0283) {
    const struct CPU_State initial_cpu = {.pc=0xda33, .a=0xe6, .x=0xa5, .y=0x86, .sp=0xb7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0xda33, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xda34, .a=0xe6, .x=0xa5, .y=0x86, .sp=0xb6, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x86}, {.addr=0xda33, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xda33, .value=0x6d, .type=IO_READ},
        {.addr=0xda34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0284) {
    const struct CPU_State initial_cpu = {.pc=0x786d, .a=0x63, .x=0xab, .y=0x6e, .sp=0xc7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x786d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x786e, .a=0x63, .x=0xab, .y=0x6e, .sp=0xc6, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x6e}, {.addr=0x786d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x786d, .value=0x6d, .type=IO_READ},
        {.addr=0x786e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0285) {
    const struct CPU_State initial_cpu = {.pc=0x1f67, .a=0xc3, .x=0x73, .y=0x6a, .sp=0x69, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x1f67, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1f68, .a=0xc3, .x=0x73, .y=0x6a, .sp=0x68, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x6a}, {.addr=0x1f67, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1f67, .value=0x6d, .type=IO_READ},
        {.addr=0x1f68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0286) {
    const struct CPU_State initial_cpu = {.pc=0xeecd, .a=0xc1, .x=0xca, .y=0x4c, .sp=0x60, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0xeecd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeece, .a=0xc1, .x=0xca, .y=0x4c, .sp=0x5f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x4c}, {.addr=0xeecd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeecd, .value=0x6d, .type=IO_READ},
        {.addr=0xeece, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x1678, .a=0xd7, .x=0xe7, .y=0x0b, .sp=0x33, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x1678, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1679, .a=0xd7, .x=0xe7, .y=0x0b, .sp=0x32, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x0b}, {.addr=0x1678, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1678, .value=0x6d, .type=IO_READ},
        {.addr=0x1679, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xda37, .a=0x5f, .x=0xe4, .y=0x60, .sp=0x14, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0xda37, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xda38, .a=0x5f, .x=0xe4, .y=0x60, .sp=0x13, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x60}, {.addr=0xda37, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xda37, .value=0x6d, .type=IO_READ},
        {.addr=0xda38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0289) {
    const struct CPU_State initial_cpu = {.pc=0x2d5b, .a=0x32, .x=0x6f, .y=0x33, .sp=0xb2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x2d5b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d5c, .a=0x32, .x=0x6f, .y=0x33, .sp=0xb1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x33}, {.addr=0x2d5b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d5b, .value=0x6d, .type=IO_READ},
        {.addr=0x2d5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_028A) {
    const struct CPU_State initial_cpu = {.pc=0xdd7d, .a=0x49, .x=0xd7, .y=0xfd, .sp=0x64, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0xdd7d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdd7e, .a=0x49, .x=0xd7, .y=0xfd, .sp=0x63, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xfd}, {.addr=0xdd7d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdd7d, .value=0x6d, .type=IO_READ},
        {.addr=0xdd7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_028B) {
    const struct CPU_State initial_cpu = {.pc=0xd9fc, .a=0x02, .x=0xe1, .y=0xf2, .sp=0x1c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xd9fc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd9fd, .a=0x02, .x=0xe1, .y=0xf2, .sp=0x1b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xf2}, {.addr=0xd9fc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd9fc, .value=0x6d, .type=IO_READ},
        {.addr=0xd9fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_028C) {
    const struct CPU_State initial_cpu = {.pc=0xa150, .a=0x37, .x=0x3d, .y=0x11, .sp=0xf9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xa150, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa151, .a=0x37, .x=0x3d, .y=0x11, .sp=0xf8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x11}, {.addr=0xa150, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa150, .value=0x6d, .type=IO_READ},
        {.addr=0xa151, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_028D) {
    const struct CPU_State initial_cpu = {.pc=0x074f, .a=0x8a, .x=0xf9, .y=0x39, .sp=0x06, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x074f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0750, .a=0x8a, .x=0xf9, .y=0x39, .sp=0x05, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x39}, {.addr=0x074f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x074f, .value=0x6d, .type=IO_READ},
        {.addr=0x0750, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_028E) {
    const struct CPU_State initial_cpu = {.pc=0xc6fd, .a=0x88, .x=0x05, .y=0x20, .sp=0x89, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xc6fd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc6fe, .a=0x88, .x=0x05, .y=0x20, .sp=0x88, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x20}, {.addr=0xc6fd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc6fd, .value=0x6d, .type=IO_READ},
        {.addr=0xc6fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_028F) {
    const struct CPU_State initial_cpu = {.pc=0x99d8, .a=0x6e, .x=0x1c, .y=0xbe, .sp=0x59, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x99d8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x99d9, .a=0x6e, .x=0x1c, .y=0xbe, .sp=0x58, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xbe}, {.addr=0x99d8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x99d8, .value=0x6d, .type=IO_READ},
        {.addr=0x99d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0290) {
    const struct CPU_State initial_cpu = {.pc=0x86de, .a=0x40, .x=0xcf, .y=0x75, .sp=0x7c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x86de, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x86df, .a=0x40, .x=0xcf, .y=0x75, .sp=0x7b, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x75}, {.addr=0x86de, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x86de, .value=0x6d, .type=IO_READ},
        {.addr=0x86df, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x9d78, .a=0xb5, .x=0x55, .y=0x6e, .sp=0x53, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x9d78, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9d79, .a=0xb5, .x=0x55, .y=0x6e, .sp=0x52, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x6e}, {.addr=0x9d78, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9d78, .value=0x6d, .type=IO_READ},
        {.addr=0x9d79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0292) {
    const struct CPU_State initial_cpu = {.pc=0xbd44, .a=0xe0, .x=0x43, .y=0x8e, .sp=0x0d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0xbd44, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbd45, .a=0xe0, .x=0x43, .y=0x8e, .sp=0x0c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x8e}, {.addr=0xbd44, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbd44, .value=0x6d, .type=IO_READ},
        {.addr=0xbd45, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0293) {
    const struct CPU_State initial_cpu = {.pc=0x88af, .a=0xed, .x=0xb1, .y=0xa0, .sp=0x9e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x88af, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x88b0, .a=0xed, .x=0xb1, .y=0xa0, .sp=0x9d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xa0}, {.addr=0x88af, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x88af, .value=0x6d, .type=IO_READ},
        {.addr=0x88b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0294) {
    const struct CPU_State initial_cpu = {.pc=0x7a10, .a=0x56, .x=0xf5, .y=0xe2, .sp=0xf8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x7a10, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7a11, .a=0x56, .x=0xf5, .y=0xe2, .sp=0xf7, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xe2}, {.addr=0x7a10, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7a10, .value=0x6d, .type=IO_READ},
        {.addr=0x7a11, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x89f9, .a=0x07, .x=0x49, .y=0xef, .sp=0x22, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x89f9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x89fa, .a=0x07, .x=0x49, .y=0xef, .sp=0x21, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xef}, {.addr=0x89f9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x89f9, .value=0x6d, .type=IO_READ},
        {.addr=0x89fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0296) {
    const struct CPU_State initial_cpu = {.pc=0xaea6, .a=0x0b, .x=0x9a, .y=0x89, .sp=0x8f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xaea6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaea7, .a=0x0b, .x=0x9a, .y=0x89, .sp=0x8e, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x89}, {.addr=0xaea6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaea6, .value=0x6d, .type=IO_READ},
        {.addr=0xaea7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x5499, .a=0x75, .x=0x33, .y=0x4d, .sp=0x2e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x5499, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x549a, .a=0x75, .x=0x33, .y=0x4d, .sp=0x2d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x4d}, {.addr=0x5499, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5499, .value=0x6d, .type=IO_READ},
        {.addr=0x549a, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0298) {
    const struct CPU_State initial_cpu = {.pc=0xea5e, .a=0xdc, .x=0x7e, .y=0x6c, .sp=0x29, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xea5e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xea5f, .a=0xdc, .x=0x7e, .y=0x6c, .sp=0x28, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x6c}, {.addr=0xea5e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xea5e, .value=0x6d, .type=IO_READ},
        {.addr=0xea5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x272c, .a=0x4f, .x=0x25, .y=0xd2, .sp=0xc7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x272c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x272d, .a=0x4f, .x=0x25, .y=0xd2, .sp=0xc6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xd2}, {.addr=0x272c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x272c, .value=0x6d, .type=IO_READ},
        {.addr=0x272d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_029A) {
    const struct CPU_State initial_cpu = {.pc=0x9aa0, .a=0xa9, .x=0xd7, .y=0xcd, .sp=0x24, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x9aa0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9aa1, .a=0xa9, .x=0xd7, .y=0xcd, .sp=0x23, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xcd}, {.addr=0x9aa0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9aa0, .value=0x6d, .type=IO_READ},
        {.addr=0x9aa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x40ad, .a=0xd4, .x=0xf4, .y=0xa8, .sp=0xaf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x40ad, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x40ae, .a=0xd4, .x=0xf4, .y=0xa8, .sp=0xae, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xa8}, {.addr=0x40ad, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x40ad, .value=0x6d, .type=IO_READ},
        {.addr=0x40ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_029C) {
    const struct CPU_State initial_cpu = {.pc=0xedb2, .a=0x08, .x=0x00, .y=0x48, .sp=0x5b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xedb2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xedb3, .a=0x08, .x=0x00, .y=0x48, .sp=0x5a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x48}, {.addr=0xedb2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xedb2, .value=0x6d, .type=IO_READ},
        {.addr=0xedb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_029D) {
    const struct CPU_State initial_cpu = {.pc=0x276a, .a=0x0b, .x=0xbc, .y=0xc3, .sp=0x79, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x276a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x276b, .a=0x0b, .x=0xbc, .y=0xc3, .sp=0x78, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xc3}, {.addr=0x276a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x276a, .value=0x6d, .type=IO_READ},
        {.addr=0x276b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x2f7e, .a=0x45, .x=0x6e, .y=0x78, .sp=0x7f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x2f7e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2f7f, .a=0x45, .x=0x6e, .y=0x78, .sp=0x7e, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x78}, {.addr=0x2f7e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2f7e, .value=0x6d, .type=IO_READ},
        {.addr=0x2f7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x84f3, .a=0x31, .x=0x8f, .y=0x7f, .sp=0xd2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x84f3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x84f4, .a=0x31, .x=0x8f, .y=0x7f, .sp=0xd1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x7f}, {.addr=0x84f3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x84f3, .value=0x6d, .type=IO_READ},
        {.addr=0x84f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x8119, .a=0xdc, .x=0xee, .y=0xe8, .sp=0xc9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x8119, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x811a, .a=0xdc, .x=0xee, .y=0xe8, .sp=0xc8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xe8}, {.addr=0x8119, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8119, .value=0x6d, .type=IO_READ},
        {.addr=0x811a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x930c, .a=0x6d, .x=0xd7, .y=0xc1, .sp=0x07, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x930c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x930d, .a=0x6d, .x=0xd7, .y=0xc1, .sp=0x06, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xc1}, {.addr=0x930c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x930c, .value=0x6d, .type=IO_READ},
        {.addr=0x930d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x59e8, .a=0x88, .x=0x62, .y=0x9a, .sp=0xfc, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x59e8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x59e9, .a=0x88, .x=0x62, .y=0x9a, .sp=0xfb, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x9a}, {.addr=0x59e8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x59e8, .value=0x6d, .type=IO_READ},
        {.addr=0x59e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x9568, .a=0x80, .x=0x9c, .y=0x38, .sp=0xb4, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x9568, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9569, .a=0x80, .x=0x9c, .y=0x38, .sp=0xb3, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x38}, {.addr=0x9568, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9568, .value=0x6d, .type=IO_READ},
        {.addr=0x9569, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x2d00, .a=0xb4, .x=0xd2, .y=0x5d, .sp=0x7c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x2d00, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d01, .a=0xb4, .x=0xd2, .y=0x5d, .sp=0x7b, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x5d}, {.addr=0x2d00, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d00, .value=0x6d, .type=IO_READ},
        {.addr=0x2d01, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x3936, .a=0xf2, .x=0x42, .y=0x2a, .sp=0x23, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x3936, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3937, .a=0xf2, .x=0x42, .y=0x2a, .sp=0x22, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x2a}, {.addr=0x3936, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3936, .value=0x6d, .type=IO_READ},
        {.addr=0x3937, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xdd1a, .a=0xf9, .x=0xaf, .y=0xd7, .sp=0x01, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xdd1a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdd1b, .a=0xf9, .x=0xaf, .y=0xd7, .sp=0x00, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xd7}, {.addr=0xdd1a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdd1a, .value=0x6d, .type=IO_READ},
        {.addr=0xdd1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x882c, .a=0x92, .x=0x10, .y=0x6f, .sp=0xaa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x882c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x882d, .a=0x92, .x=0x10, .y=0x6f, .sp=0xa9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x6f}, {.addr=0x882c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x882c, .value=0x6d, .type=IO_READ},
        {.addr=0x882d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x0291, .a=0xa0, .x=0x4b, .y=0x90, .sp=0x45, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x0291, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0292, .a=0xa0, .x=0x4b, .y=0x90, .sp=0x44, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x90}, {.addr=0x0291, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0291, .value=0x6d, .type=IO_READ},
        {.addr=0x0292, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xc7d8, .a=0xfd, .x=0x6d, .y=0xdc, .sp=0xeb, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0xc7d8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc7d9, .a=0xfd, .x=0x6d, .y=0xdc, .sp=0xea, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xdc}, {.addr=0xc7d8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc7d8, .value=0x6d, .type=IO_READ},
        {.addr=0xc7d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xe88c, .a=0x1b, .x=0x24, .y=0x3a, .sp=0xff, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xe88c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe88d, .a=0x1b, .x=0x24, .y=0x3a, .sp=0xfe, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x3a}, {.addr=0xe88c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe88c, .value=0x6d, .type=IO_READ},
        {.addr=0xe88d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xade1, .a=0x26, .x=0x19, .y=0x90, .sp=0x9a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xade1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xade2, .a=0x26, .x=0x19, .y=0x90, .sp=0x99, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x90}, {.addr=0xade1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xade1, .value=0x6d, .type=IO_READ},
        {.addr=0xade2, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x9048, .a=0xf5, .x=0xdf, .y=0x4f, .sp=0x8f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x9048, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9049, .a=0xf5, .x=0xdf, .y=0x4f, .sp=0x8e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x4f}, {.addr=0x9048, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9048, .value=0x6d, .type=IO_READ},
        {.addr=0x9049, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xd9e3, .a=0xd4, .x=0x44, .y=0x36, .sp=0xa6, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0xd9e3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd9e4, .a=0xd4, .x=0x44, .y=0x36, .sp=0xa5, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x36}, {.addr=0xd9e3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd9e3, .value=0x6d, .type=IO_READ},
        {.addr=0xd9e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x9dde, .a=0x7b, .x=0x2e, .y=0x7f, .sp=0x5d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0x9dde, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9ddf, .a=0x7b, .x=0x2e, .y=0x7f, .sp=0x5c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x7f}, {.addr=0x9dde, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9dde, .value=0x6d, .type=IO_READ},
        {.addr=0x9ddf, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x79e8, .a=0x1f, .x=0x63, .y=0x69, .sp=0xb4, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x79e8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x79e9, .a=0x1f, .x=0x63, .y=0x69, .sp=0xb3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x69}, {.addr=0x79e8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x79e8, .value=0x6d, .type=IO_READ},
        {.addr=0x79e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xf2b8, .a=0x88, .x=0x4b, .y=0xde, .sp=0x4d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0xf2b8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf2b9, .a=0x88, .x=0x4b, .y=0xde, .sp=0x4c, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xde}, {.addr=0xf2b8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf2b8, .value=0x6d, .type=IO_READ},
        {.addr=0xf2b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x311b, .a=0x05, .x=0x86, .y=0x06, .sp=0xe3, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x311b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x311c, .a=0x05, .x=0x86, .y=0x06, .sp=0xe2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x06}, {.addr=0x311b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x311b, .value=0x6d, .type=IO_READ},
        {.addr=0x311c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x0231, .a=0x8a, .x=0xa8, .y=0xb0, .sp=0x11, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x0231, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0232, .a=0x8a, .x=0xa8, .y=0xb0, .sp=0x10, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xb0}, {.addr=0x0231, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0231, .value=0x6d, .type=IO_READ},
        {.addr=0x0232, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x9d41, .a=0x10, .x=0x46, .y=0x80, .sp=0x10, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x9d41, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9d42, .a=0x10, .x=0x46, .y=0x80, .sp=0x0f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x80}, {.addr=0x9d41, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9d41, .value=0x6d, .type=IO_READ},
        {.addr=0x9d42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xf9c3, .a=0x45, .x=0x88, .y=0x5e, .sp=0x3b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0xf9c3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf9c4, .a=0x45, .x=0x88, .y=0x5e, .sp=0x3a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x5e}, {.addr=0xf9c3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf9c3, .value=0x6d, .type=IO_READ},
        {.addr=0xf9c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6c16, .a=0x03, .x=0xbd, .y=0x33, .sp=0x89, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x6c16, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6c17, .a=0x03, .x=0xbd, .y=0x33, .sp=0x88, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x33}, {.addr=0x6c16, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6c16, .value=0x6d, .type=IO_READ},
        {.addr=0x6c17, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x50cc, .a=0x29, .x=0x0d, .y=0xc9, .sp=0xfa, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x50cc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x50cd, .a=0x29, .x=0x0d, .y=0xc9, .sp=0xf9, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xc9}, {.addr=0x50cc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x50cc, .value=0x6d, .type=IO_READ},
        {.addr=0x50cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x9a27, .a=0x2d, .x=0x91, .y=0x03, .sp=0x5f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x9a27, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9a28, .a=0x2d, .x=0x91, .y=0x03, .sp=0x5e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x03}, {.addr=0x9a27, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9a27, .value=0x6d, .type=IO_READ},
        {.addr=0x9a28, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3a50, .a=0xa4, .x=0xbb, .y=0x4c, .sp=0x7a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x3a50, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3a51, .a=0xa4, .x=0xbb, .y=0x4c, .sp=0x79, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x4c}, {.addr=0x3a50, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3a50, .value=0x6d, .type=IO_READ},
        {.addr=0x3a51, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x9822, .a=0xeb, .x=0xc1, .y=0x55, .sp=0xb2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x9822, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9823, .a=0xeb, .x=0xc1, .y=0x55, .sp=0xb1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x55}, {.addr=0x9822, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9822, .value=0x6d, .type=IO_READ},
        {.addr=0x9823, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x1098, .a=0x9b, .x=0x22, .y=0x94, .sp=0x97, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0x1098, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1099, .a=0x9b, .x=0x22, .y=0x94, .sp=0x96, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x94}, {.addr=0x1098, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1098, .value=0x6d, .type=IO_READ},
        {.addr=0x1099, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x2da9, .a=0xd9, .x=0x9f, .y=0xb0, .sp=0xe4, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x2da9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2daa, .a=0xd9, .x=0x9f, .y=0xb0, .sp=0xe3, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xb0}, {.addr=0x2da9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2da9, .value=0x6d, .type=IO_READ},
        {.addr=0x2daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x5c1d, .a=0xd5, .x=0xd5, .y=0xa1, .sp=0x96, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x5c1d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5c1e, .a=0xd5, .x=0xd5, .y=0xa1, .sp=0x95, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xa1}, {.addr=0x5c1d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5c1d, .value=0x6d, .type=IO_READ},
        {.addr=0x5c1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xe2b9, .a=0xef, .x=0x6c, .y=0x24, .sp=0x80, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xe2b9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe2ba, .a=0xef, .x=0x6c, .y=0x24, .sp=0x7f, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x24}, {.addr=0xe2b9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe2b9, .value=0x6d, .type=IO_READ},
        {.addr=0xe2ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xa5e1, .a=0xff, .x=0x75, .y=0x6a, .sp=0x5e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xa5e1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa5e2, .a=0xff, .x=0x75, .y=0x6a, .sp=0x5d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x6a}, {.addr=0xa5e1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa5e1, .value=0x6d, .type=IO_READ},
        {.addr=0xa5e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x5d5a, .a=0xac, .x=0x66, .y=0xa1, .sp=0xa9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x5d5a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5d5b, .a=0xac, .x=0x66, .y=0xa1, .sp=0xa8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xa1}, {.addr=0x5d5a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5d5a, .value=0x6d, .type=IO_READ},
        {.addr=0x5d5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x31e0, .a=0x9f, .x=0x28, .y=0x5f, .sp=0xcb, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x31e0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x31e1, .a=0x9f, .x=0x28, .y=0x5f, .sp=0xca, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x5f}, {.addr=0x31e0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x31e0, .value=0x6d, .type=IO_READ},
        {.addr=0x31e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xe953, .a=0x6d, .x=0x00, .y=0xb8, .sp=0xec, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0xe953, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe954, .a=0x6d, .x=0x00, .y=0xb8, .sp=0xeb, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xb8}, {.addr=0xe953, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe953, .value=0x6d, .type=IO_READ},
        {.addr=0xe954, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xeaf1, .a=0x73, .x=0x38, .y=0x5d, .sp=0x0f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xeaf1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeaf2, .a=0x73, .x=0x38, .y=0x5d, .sp=0x0e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x5d}, {.addr=0xeaf1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeaf1, .value=0x6d, .type=IO_READ},
        {.addr=0xeaf2, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x7e54, .a=0x0b, .x=0x92, .y=0x37, .sp=0x59, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x7e54, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7e55, .a=0x0b, .x=0x92, .y=0x37, .sp=0x58, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x37}, {.addr=0x7e54, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7e54, .value=0x6d, .type=IO_READ},
        {.addr=0x7e55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xb3eb, .a=0x6b, .x=0x4e, .y=0x3f, .sp=0xd6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xb3eb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb3ec, .a=0x6b, .x=0x4e, .y=0x3f, .sp=0xd5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x3f}, {.addr=0xb3eb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb3eb, .value=0x6d, .type=IO_READ},
        {.addr=0xb3ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x94a5, .a=0x11, .x=0x88, .y=0xbc, .sp=0xf4, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x94a5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x94a6, .a=0x11, .x=0x88, .y=0xbc, .sp=0xf3, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xbc}, {.addr=0x94a5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x94a5, .value=0x6d, .type=IO_READ},
        {.addr=0x94a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xf979, .a=0x3a, .x=0x8e, .y=0x43, .sp=0x48, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xf979, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf97a, .a=0x3a, .x=0x8e, .y=0x43, .sp=0x47, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x43}, {.addr=0xf979, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf979, .value=0x6d, .type=IO_READ},
        {.addr=0xf97a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd19f, .a=0x8f, .x=0xa9, .y=0xca, .sp=0x7b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xd19f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd1a0, .a=0x8f, .x=0xa9, .y=0xca, .sp=0x7a, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xca}, {.addr=0xd19f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd19f, .value=0x6d, .type=IO_READ},
        {.addr=0xd1a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x4741, .a=0x00, .x=0x7d, .y=0xb2, .sp=0xf4, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x4741, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4742, .a=0x00, .x=0x7d, .y=0xb2, .sp=0xf3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xb2}, {.addr=0x4741, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4741, .value=0x6d, .type=IO_READ},
        {.addr=0x4742, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x68c9, .a=0x46, .x=0x47, .y=0x0e, .sp=0x85, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x68c9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x68ca, .a=0x46, .x=0x47, .y=0x0e, .sp=0x84, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x0e}, {.addr=0x68c9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x68c9, .value=0x6d, .type=IO_READ},
        {.addr=0x68ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xac78, .a=0x56, .x=0xba, .y=0xae, .sp=0xbe, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xac78, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xac79, .a=0x56, .x=0xba, .y=0xae, .sp=0xbd, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xae}, {.addr=0xac78, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xac78, .value=0x6d, .type=IO_READ},
        {.addr=0xac79, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xc568, .a=0x9d, .x=0x6d, .y=0xb6, .sp=0xed, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xc568, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc569, .a=0x9d, .x=0x6d, .y=0xb6, .sp=0xec, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xb6}, {.addr=0xc568, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc568, .value=0x6d, .type=IO_READ},
        {.addr=0xc569, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x7472, .a=0x3f, .x=0x62, .y=0x6a, .sp=0x2e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x7472, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7473, .a=0x3f, .x=0x62, .y=0x6a, .sp=0x2d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x6a}, {.addr=0x7472, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7472, .value=0x6d, .type=IO_READ},
        {.addr=0x7473, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xa870, .a=0x68, .x=0x7d, .y=0x62, .sp=0xf8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xa870, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa871, .a=0x68, .x=0x7d, .y=0x62, .sp=0xf7, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x62}, {.addr=0xa870, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa870, .value=0x6d, .type=IO_READ},
        {.addr=0xa871, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xd91a, .a=0x91, .x=0xbf, .y=0x42, .sp=0xcd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xd91a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd91b, .a=0x91, .x=0xbf, .y=0x42, .sp=0xcc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x42}, {.addr=0xd91a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd91a, .value=0x6d, .type=IO_READ},
        {.addr=0xd91b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x2a32, .a=0x43, .x=0xeb, .y=0x91, .sp=0x30, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x2a32, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2a33, .a=0x43, .x=0xeb, .y=0x91, .sp=0x2f, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x91}, {.addr=0x2a32, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2a32, .value=0x6d, .type=IO_READ},
        {.addr=0x2a33, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x838c, .a=0x58, .x=0xb5, .y=0xc2, .sp=0x61, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x838c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x838d, .a=0x58, .x=0xb5, .y=0xc2, .sp=0x60, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xc2}, {.addr=0x838c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x838c, .value=0x6d, .type=IO_READ},
        {.addr=0x838d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xde61, .a=0xc6, .x=0x8c, .y=0x95, .sp=0x20, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0xde61, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xde62, .a=0xc6, .x=0x8c, .y=0x95, .sp=0x1f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x95}, {.addr=0xde61, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xde61, .value=0x6d, .type=IO_READ},
        {.addr=0xde62, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x7838, .a=0xef, .x=0x00, .y=0x99, .sp=0x61, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x7838, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7839, .a=0xef, .x=0x00, .y=0x99, .sp=0x60, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x99}, {.addr=0x7838, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7838, .value=0x6d, .type=IO_READ},
        {.addr=0x7839, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x1962, .a=0x91, .x=0x5e, .y=0x7d, .sp=0x33, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x1962, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1963, .a=0x91, .x=0x5e, .y=0x7d, .sp=0x32, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x7d}, {.addr=0x1962, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1962, .value=0x6d, .type=IO_READ},
        {.addr=0x1963, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x2561, .a=0xea, .x=0xab, .y=0x6c, .sp=0x07, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x2561, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2562, .a=0xea, .x=0xab, .y=0x6c, .sp=0x06, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x6c}, {.addr=0x2561, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2561, .value=0x6d, .type=IO_READ},
        {.addr=0x2562, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x5977, .a=0x5f, .x=0xba, .y=0x6a, .sp=0x82, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x5977, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5978, .a=0x5f, .x=0xba, .y=0x6a, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x6a}, {.addr=0x5977, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5977, .value=0x6d, .type=IO_READ},
        {.addr=0x5978, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x4504, .a=0xdb, .x=0x76, .y=0xe4, .sp=0xe1, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x4504, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4505, .a=0xdb, .x=0x76, .y=0xe4, .sp=0xe0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xe4}, {.addr=0x4504, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4504, .value=0x6d, .type=IO_READ},
        {.addr=0x4505, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x63f8, .a=0x18, .x=0x81, .y=0x6f, .sp=0x5d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0x63f8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x63f9, .a=0x18, .x=0x81, .y=0x6f, .sp=0x5c, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x6f}, {.addr=0x63f8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x63f8, .value=0x6d, .type=IO_READ},
        {.addr=0x63f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xb930, .a=0xad, .x=0x26, .y=0xae, .sp=0x09, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0xb930, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb931, .a=0xad, .x=0x26, .y=0xae, .sp=0x08, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xae}, {.addr=0xb930, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb930, .value=0x6d, .type=IO_READ},
        {.addr=0xb931, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x026b, .a=0xa1, .x=0x5f, .y=0x6d, .sp=0xa3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x026b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x026c, .a=0xa1, .x=0x5f, .y=0x6d, .sp=0xa2, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x6d}, {.addr=0x026b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x026b, .value=0x6d, .type=IO_READ},
        {.addr=0x026c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x080b, .a=0x99, .x=0x41, .y=0xa8, .sp=0xdb, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x080b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x080c, .a=0x99, .x=0x41, .y=0xa8, .sp=0xda, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xa8}, {.addr=0x080b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x080b, .value=0x6d, .type=IO_READ},
        {.addr=0x080c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xd61e, .a=0xbf, .x=0xa8, .y=0xb0, .sp=0x08, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xd61e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd61f, .a=0xbf, .x=0xa8, .y=0xb0, .sp=0x07, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xb0}, {.addr=0xd61e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd61e, .value=0x6d, .type=IO_READ},
        {.addr=0xd61f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x1420, .a=0x4c, .x=0x32, .y=0xc5, .sp=0x25, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x1420, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1421, .a=0x4c, .x=0x32, .y=0xc5, .sp=0x24, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xc5}, {.addr=0x1420, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1420, .value=0x6d, .type=IO_READ},
        {.addr=0x1421, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xfbad, .a=0x0b, .x=0x10, .y=0x37, .sp=0x5b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xfbad, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfbae, .a=0x0b, .x=0x10, .y=0x37, .sp=0x5a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x37}, {.addr=0xfbad, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfbad, .value=0x6d, .type=IO_READ},
        {.addr=0xfbae, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x9d63, .a=0xaa, .x=0x59, .y=0x36, .sp=0xfa, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x9d63, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9d64, .a=0xaa, .x=0x59, .y=0x36, .sp=0xf9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x36}, {.addr=0x9d63, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9d63, .value=0x6d, .type=IO_READ},
        {.addr=0x9d64, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x8711, .a=0x47, .x=0xc3, .y=0x33, .sp=0x9f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0x8711, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8712, .a=0x47, .x=0xc3, .y=0x33, .sp=0x9e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x33}, {.addr=0x8711, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8711, .value=0x6d, .type=IO_READ},
        {.addr=0x8712, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x7a94, .a=0xd0, .x=0xca, .y=0x23, .sp=0x0b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x7a94, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7a95, .a=0xd0, .x=0xca, .y=0x23, .sp=0x0a, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x23}, {.addr=0x7a94, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7a94, .value=0x6d, .type=IO_READ},
        {.addr=0x7a95, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xa1b8, .a=0xd7, .x=0x8b, .y=0x8a, .sp=0x3c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xa1b8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa1b9, .a=0xd7, .x=0x8b, .y=0x8a, .sp=0x3b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x8a}, {.addr=0xa1b8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa1b8, .value=0x6d, .type=IO_READ},
        {.addr=0xa1b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x36cf, .a=0xb5, .x=0x05, .y=0xc2, .sp=0xb2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x36cf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x36d0, .a=0xb5, .x=0x05, .y=0xc2, .sp=0xb1, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xc2}, {.addr=0x36cf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x36cf, .value=0x6d, .type=IO_READ},
        {.addr=0x36d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xb703, .a=0x81, .x=0x3e, .y=0x75, .sp=0xef, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xb703, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb704, .a=0x81, .x=0x3e, .y=0x75, .sp=0xee, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x75}, {.addr=0xb703, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb703, .value=0x6d, .type=IO_READ},
        {.addr=0xb704, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xf11c, .a=0xa0, .x=0x28, .y=0x27, .sp=0xa7, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xf11c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf11d, .a=0xa0, .x=0x28, .y=0x27, .sp=0xa6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x27}, {.addr=0xf11c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf11c, .value=0x6d, .type=IO_READ},
        {.addr=0xf11d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xbc78, .a=0x5f, .x=0xb4, .y=0xed, .sp=0x54, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xbc78, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbc79, .a=0x5f, .x=0xb4, .y=0xed, .sp=0x53, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xed}, {.addr=0xbc78, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbc78, .value=0x6d, .type=IO_READ},
        {.addr=0xbc79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x012d, .a=0xb7, .x=0xd1, .y=0x2f, .sp=0xe2, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x6d}, {.addr=0x01e2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x012e, .a=0xb7, .x=0xd1, .y=0x2f, .sp=0xe1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x6d}, {.addr=0x01e2, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x012d, .value=0x6d, .type=IO_READ},
        {.addr=0x012e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5fdd, .a=0x98, .x=0xc1, .y=0x81, .sp=0xe2, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x5fdd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5fde, .a=0x98, .x=0xc1, .y=0x81, .sp=0xe1, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x81}, {.addr=0x5fdd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5fdd, .value=0x6d, .type=IO_READ},
        {.addr=0x5fde, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xf193, .a=0x61, .x=0xf9, .y=0xac, .sp=0xc5, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xf193, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf194, .a=0x61, .x=0xf9, .y=0xac, .sp=0xc4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xac}, {.addr=0xf193, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf193, .value=0x6d, .type=IO_READ},
        {.addr=0xf194, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x204a, .a=0x0b, .x=0x55, .y=0xfb, .sp=0x11, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x204a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x204b, .a=0x0b, .x=0x55, .y=0xfb, .sp=0x10, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xfb}, {.addr=0x204a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x204a, .value=0x6d, .type=IO_READ},
        {.addr=0x204b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xa0bf, .a=0x87, .x=0x30, .y=0x2e, .sp=0xee, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xa0bf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa0c0, .a=0x87, .x=0x30, .y=0x2e, .sp=0xed, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x2e}, {.addr=0xa0bf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa0bf, .value=0x6d, .type=IO_READ},
        {.addr=0xa0c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xbb44, .a=0xe7, .x=0x85, .y=0xb0, .sp=0x2a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xbb44, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbb45, .a=0xe7, .x=0x85, .y=0xb0, .sp=0x29, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xb0}, {.addr=0xbb44, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbb44, .value=0x6d, .type=IO_READ},
        {.addr=0xbb45, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xd2bf, .a=0x7b, .x=0xb5, .y=0xe9, .sp=0xfd, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xd2bf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd2c0, .a=0x7b, .x=0xb5, .y=0xe9, .sp=0xfc, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xe9}, {.addr=0xd2bf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd2bf, .value=0x6d, .type=IO_READ},
        {.addr=0xd2c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xdc28, .a=0x5c, .x=0x32, .y=0xfd, .sp=0x3a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xdc28, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdc29, .a=0x5c, .x=0x32, .y=0xfd, .sp=0x39, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xfd}, {.addr=0xdc28, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdc28, .value=0x6d, .type=IO_READ},
        {.addr=0xdc29, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xe07c, .a=0x0f, .x=0x62, .y=0x92, .sp=0xa3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xe07c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe07d, .a=0x0f, .x=0x62, .y=0x92, .sp=0xa2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x92}, {.addr=0xe07c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe07c, .value=0x6d, .type=IO_READ},
        {.addr=0xe07d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xaab2, .a=0x2e, .x=0xa1, .y=0x84, .sp=0xcb, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0xaab2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaab3, .a=0x2e, .x=0xa1, .y=0x84, .sp=0xca, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x84}, {.addr=0xaab2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaab2, .value=0x6d, .type=IO_READ},
        {.addr=0xaab3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x4619, .a=0x99, .x=0x5c, .y=0x22, .sp=0x83, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x4619, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x461a, .a=0x99, .x=0x5c, .y=0x22, .sp=0x82, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x22}, {.addr=0x4619, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4619, .value=0x6d, .type=IO_READ},
        {.addr=0x461a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x4b5e, .a=0x52, .x=0x31, .y=0x64, .sp=0xed, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x4b5e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4b5f, .a=0x52, .x=0x31, .y=0x64, .sp=0xec, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x64}, {.addr=0x4b5e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4b5e, .value=0x6d, .type=IO_READ},
        {.addr=0x4b5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x9311, .a=0xe5, .x=0x83, .y=0xe0, .sp=0x80, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x9311, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9312, .a=0xe5, .x=0x83, .y=0xe0, .sp=0x7f, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xe0}, {.addr=0x9311, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9311, .value=0x6d, .type=IO_READ},
        {.addr=0x9312, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xd0db, .a=0x6f, .x=0xb6, .y=0xdd, .sp=0x3c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xd0db, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd0dc, .a=0x6f, .x=0xb6, .y=0xdd, .sp=0x3b, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xdd}, {.addr=0xd0db, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd0db, .value=0x6d, .type=IO_READ},
        {.addr=0xd0dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x06e2, .a=0x64, .x=0x0b, .y=0x79, .sp=0x8b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x06e2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x06e3, .a=0x64, .x=0x0b, .y=0x79, .sp=0x8a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x79}, {.addr=0x06e2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x06e2, .value=0x6d, .type=IO_READ},
        {.addr=0x06e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x373c, .a=0x59, .x=0xe5, .y=0xd4, .sp=0x44, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x373c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x373d, .a=0x59, .x=0xe5, .y=0xd4, .sp=0x43, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xd4}, {.addr=0x373c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x373c, .value=0x6d, .type=IO_READ},
        {.addr=0x373d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x6a4b, .a=0x5a, .x=0x53, .y=0x36, .sp=0x07, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x6a4b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6a4c, .a=0x5a, .x=0x53, .y=0x36, .sp=0x06, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x36}, {.addr=0x6a4b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6a4b, .value=0x6d, .type=IO_READ},
        {.addr=0x6a4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xdef2, .a=0x5e, .x=0xf9, .y=0x15, .sp=0x82, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xdef2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdef3, .a=0x5e, .x=0xf9, .y=0x15, .sp=0x81, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x15}, {.addr=0xdef2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdef2, .value=0x6d, .type=IO_READ},
        {.addr=0xdef3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xed0b, .a=0x72, .x=0xcf, .y=0xbb, .sp=0x4b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xed0b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xed0c, .a=0x72, .x=0xcf, .y=0xbb, .sp=0x4a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xbb}, {.addr=0xed0b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xed0b, .value=0x6d, .type=IO_READ},
        {.addr=0xed0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xc302, .a=0x65, .x=0x76, .y=0x0f, .sp=0x0d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0xc302, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc303, .a=0x65, .x=0x76, .y=0x0f, .sp=0x0c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x0f}, {.addr=0xc302, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc302, .value=0x6d, .type=IO_READ},
        {.addr=0xc303, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x9c41, .a=0x7f, .x=0x9e, .y=0x86, .sp=0x87, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x9c41, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9c42, .a=0x7f, .x=0x9e, .y=0x86, .sp=0x86, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x86}, {.addr=0x9c41, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9c41, .value=0x6d, .type=IO_READ},
        {.addr=0x9c42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xbedf, .a=0xc6, .x=0x66, .y=0xb3, .sp=0xf4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0xbedf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbee0, .a=0xc6, .x=0x66, .y=0xb3, .sp=0xf3, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xb3}, {.addr=0xbedf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbedf, .value=0x6d, .type=IO_READ},
        {.addr=0xbee0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xa2bb, .a=0xb9, .x=0x1b, .y=0x58, .sp=0x4f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0xa2bb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa2bc, .a=0xb9, .x=0x1b, .y=0x58, .sp=0x4e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x58}, {.addr=0xa2bb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa2bb, .value=0x6d, .type=IO_READ},
        {.addr=0xa2bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x5b36, .a=0x8e, .x=0xdd, .y=0x0d, .sp=0xcd, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x5b36, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5b37, .a=0x8e, .x=0xdd, .y=0x0d, .sp=0xcc, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x0d}, {.addr=0x5b36, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5b36, .value=0x6d, .type=IO_READ},
        {.addr=0x5b37, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb71a, .a=0xca, .x=0xb4, .y=0xc5, .sp=0x5d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0xb71a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb71b, .a=0xca, .x=0xb4, .y=0xc5, .sp=0x5c, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xc5}, {.addr=0xb71a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb71a, .value=0x6d, .type=IO_READ},
        {.addr=0xb71b, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x9d1d, .a=0xb0, .x=0x07, .y=0x1b, .sp=0xdd, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0x9d1d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9d1e, .a=0xb0, .x=0x07, .y=0x1b, .sp=0xdc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x1b}, {.addr=0x9d1d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9d1d, .value=0x6d, .type=IO_READ},
        {.addr=0x9d1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xc410, .a=0x0c, .x=0x60, .y=0x10, .sp=0xc0, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0xc410, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc411, .a=0x0c, .x=0x60, .y=0x10, .sp=0xbf, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x10}, {.addr=0xc410, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc410, .value=0x6d, .type=IO_READ},
        {.addr=0xc411, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x7191, .a=0x32, .x=0x5f, .y=0xe3, .sp=0x8e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x7191, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7192, .a=0x32, .x=0x5f, .y=0xe3, .sp=0x8d, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xe3}, {.addr=0x7191, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7191, .value=0x6d, .type=IO_READ},
        {.addr=0x7192, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x232c, .a=0x17, .x=0xea, .y=0xbc, .sp=0xe9, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x232c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x232d, .a=0x17, .x=0xea, .y=0xbc, .sp=0xe8, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xbc}, {.addr=0x232c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x232c, .value=0x6d, .type=IO_READ},
        {.addr=0x232d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x34c0, .a=0x2d, .x=0xce, .y=0x0c, .sp=0x54, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x34c0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x34c1, .a=0x2d, .x=0xce, .y=0x0c, .sp=0x53, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x0c}, {.addr=0x34c0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x34c0, .value=0x6d, .type=IO_READ},
        {.addr=0x34c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0304) {
    const struct CPU_State initial_cpu = {.pc=0x8f48, .a=0x82, .x=0x52, .y=0x92, .sp=0x2e, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x8f48, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8f49, .a=0x82, .x=0x52, .y=0x92, .sp=0x2d, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x92}, {.addr=0x8f48, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8f48, .value=0x6d, .type=IO_READ},
        {.addr=0x8f49, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x78b7, .a=0x1d, .x=0x5f, .y=0x15, .sp=0xe9, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x78b7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x78b8, .a=0x1d, .x=0x5f, .y=0x15, .sp=0xe8, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x15}, {.addr=0x78b7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x78b7, .value=0x6d, .type=IO_READ},
        {.addr=0x78b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0306) {
    const struct CPU_State initial_cpu = {.pc=0x830e, .a=0xd7, .x=0x8a, .y=0xb9, .sp=0x9a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x830e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x830f, .a=0xd7, .x=0x8a, .y=0xb9, .sp=0x99, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xb9}, {.addr=0x830e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x830e, .value=0x6d, .type=IO_READ},
        {.addr=0x830f, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2a2c, .a=0x8f, .x=0xe5, .y=0xfc, .sp=0x7c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x2a2c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2a2d, .a=0x8f, .x=0xe5, .y=0xfc, .sp=0x7b, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xfc}, {.addr=0x2a2c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2a2c, .value=0x6d, .type=IO_READ},
        {.addr=0x2a2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x0c63, .a=0xcc, .x=0x0c, .y=0xc6, .sp=0x07, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x0c63, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0c64, .a=0xcc, .x=0x0c, .y=0xc6, .sp=0x06, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xc6}, {.addr=0x0c63, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0c63, .value=0x6d, .type=IO_READ},
        {.addr=0x0c64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0309) {
    const struct CPU_State initial_cpu = {.pc=0xac84, .a=0x91, .x=0x96, .y=0x7c, .sp=0xbf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xac84, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xac85, .a=0x91, .x=0x96, .y=0x7c, .sp=0xbe, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x7c}, {.addr=0xac84, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xac84, .value=0x6d, .type=IO_READ},
        {.addr=0xac85, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xe644, .a=0x67, .x=0xda, .y=0x5c, .sp=0xa8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xe644, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe645, .a=0x67, .x=0xda, .y=0x5c, .sp=0xa7, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x5c}, {.addr=0xe644, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe644, .value=0x6d, .type=IO_READ},
        {.addr=0xe645, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x4dcc, .a=0xc9, .x=0xd0, .y=0x87, .sp=0xb1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x4dcc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4dcd, .a=0xc9, .x=0xd0, .y=0x87, .sp=0xb0, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x87}, {.addr=0x4dcc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4dcc, .value=0x6d, .type=IO_READ},
        {.addr=0x4dcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_030C) {
    const struct CPU_State initial_cpu = {.pc=0xab04, .a=0xe4, .x=0x8b, .y=0x7b, .sp=0x06, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xab04, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xab05, .a=0xe4, .x=0x8b, .y=0x7b, .sp=0x05, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x7b}, {.addr=0xab04, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xab04, .value=0x6d, .type=IO_READ},
        {.addr=0xab05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x6186, .a=0x69, .x=0x9a, .y=0x57, .sp=0xa1, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x6186, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6187, .a=0x69, .x=0x9a, .y=0x57, .sp=0xa0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x57}, {.addr=0x6186, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6186, .value=0x6d, .type=IO_READ},
        {.addr=0x6187, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_030E) {
    const struct CPU_State initial_cpu = {.pc=0xf9e5, .a=0x6a, .x=0x6e, .y=0x3f, .sp=0x82, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xf9e5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf9e6, .a=0x6a, .x=0x6e, .y=0x3f, .sp=0x81, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x3f}, {.addr=0xf9e5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf9e5, .value=0x6d, .type=IO_READ},
        {.addr=0xf9e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_030F) {
    const struct CPU_State initial_cpu = {.pc=0x5973, .a=0x84, .x=0x87, .y=0x27, .sp=0x79, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x5973, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5974, .a=0x84, .x=0x87, .y=0x27, .sp=0x78, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x27}, {.addr=0x5973, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5973, .value=0x6d, .type=IO_READ},
        {.addr=0x5974, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x3594, .a=0xc0, .x=0x50, .y=0x77, .sp=0x25, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x3594, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3595, .a=0xc0, .x=0x50, .y=0x77, .sp=0x24, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x77}, {.addr=0x3594, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3594, .value=0x6d, .type=IO_READ},
        {.addr=0x3595, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0311) {
    const struct CPU_State initial_cpu = {.pc=0x1bb1, .a=0x6c, .x=0x92, .y=0x1b, .sp=0xba, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x1bb1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1bb2, .a=0x6c, .x=0x92, .y=0x1b, .sp=0xb9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x1b}, {.addr=0x1bb1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1bb1, .value=0x6d, .type=IO_READ},
        {.addr=0x1bb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0312) {
    const struct CPU_State initial_cpu = {.pc=0x9fda, .a=0xd8, .x=0x60, .y=0x72, .sp=0xf1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x9fda, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9fdb, .a=0xd8, .x=0x60, .y=0x72, .sp=0xf0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x72}, {.addr=0x9fda, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9fda, .value=0x6d, .type=IO_READ},
        {.addr=0x9fdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0313) {
    const struct CPU_State initial_cpu = {.pc=0xa6f9, .a=0x35, .x=0x2a, .y=0x34, .sp=0x60, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0xa6f9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa6fa, .a=0x35, .x=0x2a, .y=0x34, .sp=0x5f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x34}, {.addr=0xa6f9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa6f9, .value=0x6d, .type=IO_READ},
        {.addr=0xa6fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0314) {
    const struct CPU_State initial_cpu = {.pc=0x3823, .a=0xfd, .x=0x2b, .y=0x07, .sp=0x73, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x3823, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3824, .a=0xfd, .x=0x2b, .y=0x07, .sp=0x72, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x07}, {.addr=0x3823, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3823, .value=0x6d, .type=IO_READ},
        {.addr=0x3824, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x4dc9, .a=0xd8, .x=0x1a, .y=0xc7, .sp=0x0c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x4dc9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4dca, .a=0xd8, .x=0x1a, .y=0xc7, .sp=0x0b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xc7}, {.addr=0x4dc9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4dc9, .value=0x6d, .type=IO_READ},
        {.addr=0x4dca, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc12a, .a=0x5c, .x=0xf9, .y=0x95, .sp=0x4a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0xc12a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc12b, .a=0x5c, .x=0xf9, .y=0x95, .sp=0x49, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x95}, {.addr=0xc12a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc12a, .value=0x6d, .type=IO_READ},
        {.addr=0xc12b, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x516c, .a=0x94, .x=0x7f, .y=0x71, .sp=0xf9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x516c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x516d, .a=0x94, .x=0x7f, .y=0x71, .sp=0xf8, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x71}, {.addr=0x516c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x516c, .value=0x6d, .type=IO_READ},
        {.addr=0x516d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0318) {
    const struct CPU_State initial_cpu = {.pc=0xc464, .a=0x4f, .x=0x71, .y=0x97, .sp=0xb6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xc464, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc465, .a=0x4f, .x=0x71, .y=0x97, .sp=0xb5, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x97}, {.addr=0xc464, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc464, .value=0x6d, .type=IO_READ},
        {.addr=0xc465, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0319) {
    const struct CPU_State initial_cpu = {.pc=0xbbcc, .a=0x8c, .x=0xca, .y=0xb0, .sp=0xdf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xbbcc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbbcd, .a=0x8c, .x=0xca, .y=0xb0, .sp=0xde, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xb0}, {.addr=0xbbcc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbbcc, .value=0x6d, .type=IO_READ},
        {.addr=0xbbcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x82a9, .a=0x0f, .x=0x02, .y=0x3c, .sp=0x09, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x82a9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x82aa, .a=0x0f, .x=0x02, .y=0x3c, .sp=0x08, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x3c}, {.addr=0x82a9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x82a9, .value=0x6d, .type=IO_READ},
        {.addr=0x82aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x4afe, .a=0xbd, .x=0xba, .y=0xf4, .sp=0x33, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x4afe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4aff, .a=0xbd, .x=0xba, .y=0xf4, .sp=0x32, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xf4}, {.addr=0x4afe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4afe, .value=0x6d, .type=IO_READ},
        {.addr=0x4aff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_031C) {
    const struct CPU_State initial_cpu = {.pc=0xe871, .a=0xbe, .x=0x79, .y=0x3c, .sp=0x7e, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0xe871, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe872, .a=0xbe, .x=0x79, .y=0x3c, .sp=0x7d, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x3c}, {.addr=0xe871, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe871, .value=0x6d, .type=IO_READ},
        {.addr=0xe872, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_031D) {
    const struct CPU_State initial_cpu = {.pc=0x8e9f, .a=0x31, .x=0x4b, .y=0xc1, .sp=0x37, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x8e9f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8ea0, .a=0x31, .x=0x4b, .y=0xc1, .sp=0x36, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xc1}, {.addr=0x8e9f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8e9f, .value=0x6d, .type=IO_READ},
        {.addr=0x8ea0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_031E) {
    const struct CPU_State initial_cpu = {.pc=0xea38, .a=0x20, .x=0x93, .y=0x95, .sp=0xd3, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xea38, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xea39, .a=0x20, .x=0x93, .y=0x95, .sp=0xd2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x95}, {.addr=0xea38, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xea38, .value=0x6d, .type=IO_READ},
        {.addr=0xea39, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x4133, .a=0x41, .x=0xc6, .y=0x61, .sp=0xb7, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x4133, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4134, .a=0x41, .x=0xc6, .y=0x61, .sp=0xb6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x61}, {.addr=0x4133, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4133, .value=0x6d, .type=IO_READ},
        {.addr=0x4134, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0320) {
    const struct CPU_State initial_cpu = {.pc=0xad5b, .a=0xf8, .x=0x79, .y=0x3b, .sp=0x58, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xad5b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xad5c, .a=0xf8, .x=0x79, .y=0x3b, .sp=0x57, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x3b}, {.addr=0xad5b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xad5b, .value=0x6d, .type=IO_READ},
        {.addr=0xad5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0dba, .a=0x42, .x=0x1f, .y=0xc0, .sp=0x74, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x0dba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0dbb, .a=0x42, .x=0x1f, .y=0xc0, .sp=0x73, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xc0}, {.addr=0x0dba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0dba, .value=0x6d, .type=IO_READ},
        {.addr=0x0dbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x3c3f, .a=0x3d, .x=0x79, .y=0x08, .sp=0x57, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x3c3f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3c40, .a=0x3d, .x=0x79, .y=0x08, .sp=0x56, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x08}, {.addr=0x3c3f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3c3f, .value=0x6d, .type=IO_READ},
        {.addr=0x3c40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0323) {
    const struct CPU_State initial_cpu = {.pc=0xf51c, .a=0x48, .x=0x45, .y=0xd5, .sp=0x88, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0xf51c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf51d, .a=0x48, .x=0x45, .y=0xd5, .sp=0x87, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xd5}, {.addr=0xf51c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf51c, .value=0x6d, .type=IO_READ},
        {.addr=0xf51d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0324) {
    const struct CPU_State initial_cpu = {.pc=0xceee, .a=0x91, .x=0xeb, .y=0x3c, .sp=0xfd, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0xceee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xceef, .a=0x91, .x=0xeb, .y=0x3c, .sp=0xfc, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x3c}, {.addr=0xceee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xceee, .value=0x6d, .type=IO_READ},
        {.addr=0xceef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x89e8, .a=0xf9, .x=0xc8, .y=0x88, .sp=0xe0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x89e8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x89e9, .a=0xf9, .x=0xc8, .y=0x88, .sp=0xdf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x88}, {.addr=0x89e8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x89e8, .value=0x6d, .type=IO_READ},
        {.addr=0x89e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x29e4, .a=0xce, .x=0x35, .y=0xda, .sp=0x54, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x29e4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x29e5, .a=0xce, .x=0x35, .y=0xda, .sp=0x53, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xda}, {.addr=0x29e4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x29e4, .value=0x6d, .type=IO_READ},
        {.addr=0x29e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x8978, .a=0x12, .x=0x32, .y=0xa1, .sp=0x99, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x8978, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8979, .a=0x12, .x=0x32, .y=0xa1, .sp=0x98, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xa1}, {.addr=0x8978, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8978, .value=0x6d, .type=IO_READ},
        {.addr=0x8979, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0328) {
    const struct CPU_State initial_cpu = {.pc=0x326f, .a=0x0b, .x=0x08, .y=0xc9, .sp=0x83, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x326f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3270, .a=0x0b, .x=0x08, .y=0xc9, .sp=0x82, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xc9}, {.addr=0x326f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x326f, .value=0x6d, .type=IO_READ},
        {.addr=0x3270, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf38c, .a=0x74, .x=0x45, .y=0xcc, .sp=0x1b, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0xf38c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf38d, .a=0x74, .x=0x45, .y=0xcc, .sp=0x1a, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xcc}, {.addr=0xf38c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf38c, .value=0x6d, .type=IO_READ},
        {.addr=0xf38d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x53a4, .a=0x18, .x=0x7d, .y=0xd6, .sp=0xa6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x53a4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x53a5, .a=0x18, .x=0x7d, .y=0xd6, .sp=0xa5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xd6}, {.addr=0x53a4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x53a4, .value=0x6d, .type=IO_READ},
        {.addr=0x53a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_032B) {
    const struct CPU_State initial_cpu = {.pc=0xf400, .a=0xdc, .x=0xac, .y=0xf2, .sp=0x00, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xf400, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf401, .a=0xdc, .x=0xac, .y=0xf2, .sp=0xff, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xf2}, {.addr=0xf400, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf400, .value=0x6d, .type=IO_READ},
        {.addr=0xf401, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_032C) {
    const struct CPU_State initial_cpu = {.pc=0x3560, .a=0x20, .x=0x49, .y=0xb3, .sp=0x80, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x3560, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3561, .a=0x20, .x=0x49, .y=0xb3, .sp=0x7f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xb3}, {.addr=0x3560, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3560, .value=0x6d, .type=IO_READ},
        {.addr=0x3561, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_032D) {
    const struct CPU_State initial_cpu = {.pc=0xbe80, .a=0x48, .x=0xdd, .y=0x8b, .sp=0x37, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0xbe80, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbe81, .a=0x48, .x=0xdd, .y=0x8b, .sp=0x36, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x8b}, {.addr=0xbe80, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbe80, .value=0x6d, .type=IO_READ},
        {.addr=0xbe81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_032E) {
    const struct CPU_State initial_cpu = {.pc=0xe0e4, .a=0x88, .x=0x39, .y=0x8f, .sp=0x58, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xe0e4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe0e5, .a=0x88, .x=0x39, .y=0x8f, .sp=0x57, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x8f}, {.addr=0xe0e4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe0e4, .value=0x6d, .type=IO_READ},
        {.addr=0xe0e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_032F) {
    const struct CPU_State initial_cpu = {.pc=0xaf40, .a=0x71, .x=0xd6, .y=0x7b, .sp=0x18, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0xaf40, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xaf41, .a=0x71, .x=0xd6, .y=0x7b, .sp=0x17, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x7b}, {.addr=0xaf40, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xaf40, .value=0x6d, .type=IO_READ},
        {.addr=0xaf41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x4dfd, .a=0x18, .x=0x8b, .y=0x36, .sp=0x23, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x4dfd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4dfe, .a=0x18, .x=0x8b, .y=0x36, .sp=0x22, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x36}, {.addr=0x4dfd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4dfd, .value=0x6d, .type=IO_READ},
        {.addr=0x4dfe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x6a59, .a=0xdc, .x=0xb9, .y=0xf9, .sp=0x9b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x6a59, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6a5a, .a=0xdc, .x=0xb9, .y=0xf9, .sp=0x9a, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xf9}, {.addr=0x6a59, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6a59, .value=0x6d, .type=IO_READ},
        {.addr=0x6a5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0332) {
    const struct CPU_State initial_cpu = {.pc=0x02ba, .a=0x99, .x=0xae, .y=0x51, .sp=0xe2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x02ba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x02bb, .a=0x99, .x=0xae, .y=0x51, .sp=0xe1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x51}, {.addr=0x02ba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x02ba, .value=0x6d, .type=IO_READ},
        {.addr=0x02bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x51, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0333) {
    const struct CPU_State initial_cpu = {.pc=0xa21d, .a=0x06, .x=0xd2, .y=0xb5, .sp=0xf9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xa21d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa21e, .a=0x06, .x=0xd2, .y=0xb5, .sp=0xf8, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xb5}, {.addr=0xa21d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa21d, .value=0x6d, .type=IO_READ},
        {.addr=0xa21e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0334) {
    const struct CPU_State initial_cpu = {.pc=0xca3f, .a=0x72, .x=0x52, .y=0x2c, .sp=0x5a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0xca3f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xca40, .a=0x72, .x=0x52, .y=0x2c, .sp=0x59, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x2c}, {.addr=0xca3f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xca3f, .value=0x6d, .type=IO_READ},
        {.addr=0xca40, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x5aa3, .a=0xc6, .x=0xda, .y=0x55, .sp=0xa2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x5aa3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5aa4, .a=0xc6, .x=0xda, .y=0x55, .sp=0xa1, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x55}, {.addr=0x5aa3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5aa3, .value=0x6d, .type=IO_READ},
        {.addr=0x5aa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3385, .a=0xca, .x=0xa6, .y=0xeb, .sp=0xde, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x3385, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3386, .a=0xca, .x=0xa6, .y=0xeb, .sp=0xdd, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xeb}, {.addr=0x3385, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3385, .value=0x6d, .type=IO_READ},
        {.addr=0x3386, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0337) {
    const struct CPU_State initial_cpu = {.pc=0x3f4f, .a=0xfc, .x=0xaa, .y=0x9d, .sp=0xac, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x3f4f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3f50, .a=0xfc, .x=0xaa, .y=0x9d, .sp=0xab, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x9d}, {.addr=0x3f4f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3f4f, .value=0x6d, .type=IO_READ},
        {.addr=0x3f50, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0338) {
    const struct CPU_State initial_cpu = {.pc=0xa50e, .a=0x42, .x=0xa9, .y=0x43, .sp=0x46, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xa50e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa50f, .a=0x42, .x=0xa9, .y=0x43, .sp=0x45, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x43}, {.addr=0xa50e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa50e, .value=0x6d, .type=IO_READ},
        {.addr=0xa50f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0339) {
    const struct CPU_State initial_cpu = {.pc=0xc036, .a=0x6b, .x=0xaa, .y=0xc6, .sp=0xa7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xc036, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc037, .a=0x6b, .x=0xaa, .y=0xc6, .sp=0xa6, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xc6}, {.addr=0xc036, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc036, .value=0x6d, .type=IO_READ},
        {.addr=0xc037, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x6999, .a=0x3c, .x=0xb4, .y=0xbe, .sp=0x5a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x6999, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x699a, .a=0x3c, .x=0xb4, .y=0xbe, .sp=0x59, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xbe}, {.addr=0x6999, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6999, .value=0x6d, .type=IO_READ},
        {.addr=0x699a, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x90fe, .a=0x52, .x=0xfe, .y=0x59, .sp=0xd5, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0x90fe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x90ff, .a=0x52, .x=0xfe, .y=0x59, .sp=0xd4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x59}, {.addr=0x90fe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x90fe, .value=0x6d, .type=IO_READ},
        {.addr=0x90ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_033C) {
    const struct CPU_State initial_cpu = {.pc=0xc3e0, .a=0x95, .x=0xf9, .y=0x42, .sp=0x68, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xc3e0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc3e1, .a=0x95, .x=0xf9, .y=0x42, .sp=0x67, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x42}, {.addr=0xc3e0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc3e0, .value=0x6d, .type=IO_READ},
        {.addr=0xc3e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_033D) {
    const struct CPU_State initial_cpu = {.pc=0x36be, .a=0xd0, .x=0x57, .y=0x55, .sp=0xd7, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0x36be, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x36bf, .a=0xd0, .x=0x57, .y=0x55, .sp=0xd6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x55}, {.addr=0x36be, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x36be, .value=0x6d, .type=IO_READ},
        {.addr=0x36bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x99bd, .a=0x5a, .x=0xb2, .y=0x2f, .sp=0x98, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x99bd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x99be, .a=0x5a, .x=0xb2, .y=0x2f, .sp=0x97, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x2f}, {.addr=0x99bd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x99bd, .value=0x6d, .type=IO_READ},
        {.addr=0x99be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_033F) {
    const struct CPU_State initial_cpu = {.pc=0xffd6, .a=0x8c, .x=0x70, .y=0x59, .sp=0x08, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xffd6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xffd7, .a=0x8c, .x=0x70, .y=0x59, .sp=0x07, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x59}, {.addr=0xffd6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xffd6, .value=0x6d, .type=IO_READ},
        {.addr=0xffd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0340) {
    const struct CPU_State initial_cpu = {.pc=0xc268, .a=0xa3, .x=0x1d, .y=0xd7, .sp=0xb1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xc268, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc269, .a=0xa3, .x=0x1d, .y=0xd7, .sp=0xb0, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xd7}, {.addr=0xc268, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc268, .value=0x6d, .type=IO_READ},
        {.addr=0xc269, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0341) {
    const struct CPU_State initial_cpu = {.pc=0xf538, .a=0x0c, .x=0x19, .y=0x27, .sp=0x56, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xf538, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf539, .a=0x0c, .x=0x19, .y=0x27, .sp=0x55, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x27}, {.addr=0xf538, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf538, .value=0x6d, .type=IO_READ},
        {.addr=0xf539, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0342) {
    const struct CPU_State initial_cpu = {.pc=0xb478, .a=0xd0, .x=0xed, .y=0x87, .sp=0x5b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xb478, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb479, .a=0xd0, .x=0xed, .y=0x87, .sp=0x5a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x87}, {.addr=0xb478, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb478, .value=0x6d, .type=IO_READ},
        {.addr=0xb479, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0343) {
    const struct CPU_State initial_cpu = {.pc=0xdc02, .a=0x89, .x=0x4b, .y=0x46, .sp=0xef, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xdc02, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdc03, .a=0x89, .x=0x4b, .y=0x46, .sp=0xee, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x46}, {.addr=0xdc02, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdc02, .value=0x6d, .type=IO_READ},
        {.addr=0xdc03, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x124f, .a=0x0d, .x=0xc7, .y=0xd3, .sp=0x98, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x124f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1250, .a=0x0d, .x=0xc7, .y=0xd3, .sp=0x97, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xd3}, {.addr=0x124f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x124f, .value=0x6d, .type=IO_READ},
        {.addr=0x1250, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x9fba, .a=0x9c, .x=0x98, .y=0x23, .sp=0x8e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x9fba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9fbb, .a=0x9c, .x=0x98, .y=0x23, .sp=0x8d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x23}, {.addr=0x9fba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9fba, .value=0x6d, .type=IO_READ},
        {.addr=0x9fbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0b68, .a=0x08, .x=0x50, .y=0xf6, .sp=0x68, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x0b68, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0b69, .a=0x08, .x=0x50, .y=0xf6, .sp=0x67, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xf6}, {.addr=0x0b68, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0b68, .value=0x6d, .type=IO_READ},
        {.addr=0x0b69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x5827, .a=0x7c, .x=0xba, .y=0x03, .sp=0xf1, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x5827, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5828, .a=0x7c, .x=0xba, .y=0x03, .sp=0xf0, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x03}, {.addr=0x5827, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5827, .value=0x6d, .type=IO_READ},
        {.addr=0x5828, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0348) {
    const struct CPU_State initial_cpu = {.pc=0xe528, .a=0xab, .x=0xbb, .y=0xf9, .sp=0xa3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xe528, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe529, .a=0xab, .x=0xbb, .y=0xf9, .sp=0xa2, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xf9}, {.addr=0xe528, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe528, .value=0x6d, .type=IO_READ},
        {.addr=0xe529, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0349) {
    const struct CPU_State initial_cpu = {.pc=0xe11d, .a=0xf4, .x=0x34, .y=0xd5, .sp=0x92, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xe11d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe11e, .a=0xf4, .x=0x34, .y=0xd5, .sp=0x91, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xd5}, {.addr=0xe11d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe11d, .value=0x6d, .type=IO_READ},
        {.addr=0xe11e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x5304, .a=0x41, .x=0xff, .y=0x14, .sp=0xed, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x5304, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5305, .a=0x41, .x=0xff, .y=0x14, .sp=0xec, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x14}, {.addr=0x5304, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5304, .value=0x6d, .type=IO_READ},
        {.addr=0x5305, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x23cf, .a=0x00, .x=0xcc, .y=0x9e, .sp=0xbc, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x23cf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x23d0, .a=0x00, .x=0xcc, .y=0x9e, .sp=0xbb, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x9e}, {.addr=0x23cf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x23cf, .value=0x6d, .type=IO_READ},
        {.addr=0x23d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x86ad, .a=0xc3, .x=0xce, .y=0x3f, .sp=0xd8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x86ad, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x86ae, .a=0xc3, .x=0xce, .y=0x3f, .sp=0xd7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x3f}, {.addr=0x86ad, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x86ad, .value=0x6d, .type=IO_READ},
        {.addr=0x86ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x20f2, .a=0x2a, .x=0x15, .y=0xc8, .sp=0x11, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x20f2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x20f3, .a=0x2a, .x=0x15, .y=0xc8, .sp=0x10, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xc8}, {.addr=0x20f2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x20f2, .value=0x6d, .type=IO_READ},
        {.addr=0x20f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x8688, .a=0xe1, .x=0xc8, .y=0x0b, .sp=0x87, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x8688, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8689, .a=0xe1, .x=0xc8, .y=0x0b, .sp=0x86, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x0b}, {.addr=0x8688, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8688, .value=0x6d, .type=IO_READ},
        {.addr=0x8689, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x672a, .a=0x45, .x=0x61, .y=0xb2, .sp=0x6a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x672a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x672b, .a=0x45, .x=0x61, .y=0xb2, .sp=0x69, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xb2}, {.addr=0x672a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x672a, .value=0x6d, .type=IO_READ},
        {.addr=0x672b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0350) {
    const struct CPU_State initial_cpu = {.pc=0xb6b8, .a=0x94, .x=0x70, .y=0xf3, .sp=0x50, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0xb6b8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb6b9, .a=0x94, .x=0x70, .y=0xf3, .sp=0x4f, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xf3}, {.addr=0xb6b8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb6b8, .value=0x6d, .type=IO_READ},
        {.addr=0xb6b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x6244, .a=0x35, .x=0x55, .y=0xd7, .sp=0xf2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0x6244, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6245, .a=0x35, .x=0x55, .y=0xd7, .sp=0xf1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xd7}, {.addr=0x6244, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6244, .value=0x6d, .type=IO_READ},
        {.addr=0x6245, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0352) {
    const struct CPU_State initial_cpu = {.pc=0xebf0, .a=0xde, .x=0x33, .y=0x5a, .sp=0xfc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xebf0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xebf1, .a=0xde, .x=0x33, .y=0x5a, .sp=0xfb, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x5a}, {.addr=0xebf0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xebf0, .value=0x6d, .type=IO_READ},
        {.addr=0xebf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0353) {
    const struct CPU_State initial_cpu = {.pc=0xa1e2, .a=0x03, .x=0xbc, .y=0x40, .sp=0x68, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xa1e2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa1e3, .a=0x03, .x=0xbc, .y=0x40, .sp=0x67, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x40}, {.addr=0xa1e2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa1e2, .value=0x6d, .type=IO_READ},
        {.addr=0xa1e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0354) {
    const struct CPU_State initial_cpu = {.pc=0x0e2c, .a=0x17, .x=0x30, .y=0x09, .sp=0xb1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x0e2c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0e2d, .a=0x17, .x=0x30, .y=0x09, .sp=0xb0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x09}, {.addr=0x0e2c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0e2c, .value=0x6d, .type=IO_READ},
        {.addr=0x0e2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x9584, .a=0x74, .x=0xf5, .y=0x40, .sp=0xa8, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x9584, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9585, .a=0x74, .x=0xf5, .y=0x40, .sp=0xa7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x40}, {.addr=0x9584, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9584, .value=0x6d, .type=IO_READ},
        {.addr=0x9585, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0356) {
    const struct CPU_State initial_cpu = {.pc=0x45cd, .a=0xdb, .x=0xa9, .y=0x99, .sp=0x1f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0x45cd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x45ce, .a=0xdb, .x=0xa9, .y=0x99, .sp=0x1e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x99}, {.addr=0x45cd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x45cd, .value=0x6d, .type=IO_READ},
        {.addr=0x45ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x5381, .a=0x6f, .x=0x08, .y=0x31, .sp=0x20, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x5381, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5382, .a=0x6f, .x=0x08, .y=0x31, .sp=0x1f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x31}, {.addr=0x5381, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5381, .value=0x6d, .type=IO_READ},
        {.addr=0x5382, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x40f5, .a=0x25, .x=0x34, .y=0xc7, .sp=0x82, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x40f5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x40f6, .a=0x25, .x=0x34, .y=0xc7, .sp=0x81, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xc7}, {.addr=0x40f5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x40f5, .value=0x6d, .type=IO_READ},
        {.addr=0x40f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0359) {
    const struct CPU_State initial_cpu = {.pc=0xf08d, .a=0x25, .x=0x40, .y=0x4e, .sp=0xb9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xf08d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf08e, .a=0x25, .x=0x40, .y=0x4e, .sp=0xb8, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x4e}, {.addr=0xf08d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf08d, .value=0x6d, .type=IO_READ},
        {.addr=0xf08e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x7ccc, .a=0xae, .x=0x9d, .y=0xbc, .sp=0x34, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x7ccc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7ccd, .a=0xae, .x=0x9d, .y=0xbc, .sp=0x33, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xbc}, {.addr=0x7ccc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7ccc, .value=0x6d, .type=IO_READ},
        {.addr=0x7ccd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_035B) {
    const struct CPU_State initial_cpu = {.pc=0xb4c1, .a=0xf4, .x=0xdf, .y=0x88, .sp=0xa2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0xb4c1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb4c2, .a=0xf4, .x=0xdf, .y=0x88, .sp=0xa1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x88}, {.addr=0xb4c1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb4c1, .value=0x6d, .type=IO_READ},
        {.addr=0xb4c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x195d, .a=0xe5, .x=0xc5, .y=0xbd, .sp=0xbb, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x195d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x195e, .a=0xe5, .x=0xc5, .y=0xbd, .sp=0xba, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xbd}, {.addr=0x195d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x195d, .value=0x6d, .type=IO_READ},
        {.addr=0x195e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_035D) {
    const struct CPU_State initial_cpu = {.pc=0x01a8, .a=0x6a, .x=0x5d, .y=0xc5, .sp=0x88, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x01a8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x01a9, .a=0x6a, .x=0x5d, .y=0xc5, .sp=0x87, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xc5}, {.addr=0x01a8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x01a8, .value=0x6d, .type=IO_READ},
        {.addr=0x01a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_035E) {
    const struct CPU_State initial_cpu = {.pc=0x0b20, .a=0x71, .x=0x3f, .y=0x1d, .sp=0x94, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x0b20, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0b21, .a=0x71, .x=0x3f, .y=0x1d, .sp=0x93, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x1d}, {.addr=0x0b20, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0b20, .value=0x6d, .type=IO_READ},
        {.addr=0x0b21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_035F) {
    const struct CPU_State initial_cpu = {.pc=0xb6e1, .a=0x1e, .x=0x66, .y=0x06, .sp=0xe4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xb6e1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb6e2, .a=0x1e, .x=0x66, .y=0x06, .sp=0xe3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x06}, {.addr=0xb6e1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb6e1, .value=0x6d, .type=IO_READ},
        {.addr=0xb6e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0360) {
    const struct CPU_State initial_cpu = {.pc=0xb9fa, .a=0xc3, .x=0xe3, .y=0x2c, .sp=0xc4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xb9fa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb9fb, .a=0xc3, .x=0xe3, .y=0x2c, .sp=0xc3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x2c}, {.addr=0xb9fa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb9fa, .value=0x6d, .type=IO_READ},
        {.addr=0xb9fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0361) {
    const struct CPU_State initial_cpu = {.pc=0xa07d, .a=0x44, .x=0x53, .y=0xe8, .sp=0x65, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0xa07d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa07e, .a=0x44, .x=0x53, .y=0xe8, .sp=0x64, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xe8}, {.addr=0xa07d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa07d, .value=0x6d, .type=IO_READ},
        {.addr=0xa07e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0362) {
    const struct CPU_State initial_cpu = {.pc=0xeeda, .a=0xc1, .x=0xa2, .y=0x5c, .sp=0x09, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0xeeda, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeedb, .a=0xc1, .x=0xa2, .y=0x5c, .sp=0x08, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x5c}, {.addr=0xeeda, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeeda, .value=0x6d, .type=IO_READ},
        {.addr=0xeedb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x8299, .a=0x06, .x=0x4c, .y=0xde, .sp=0xbc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x8299, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x829a, .a=0x06, .x=0x4c, .y=0xde, .sp=0xbb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xde}, {.addr=0x8299, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8299, .value=0x6d, .type=IO_READ},
        {.addr=0x829a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x5630, .a=0x47, .x=0x9f, .y=0x00, .sp=0x75, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x5630, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5631, .a=0x47, .x=0x9f, .y=0x00, .sp=0x74, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x5630, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5630, .value=0x6d, .type=IO_READ},
        {.addr=0x5631, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x5788, .a=0x01, .x=0xf3, .y=0xcf, .sp=0x62, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x5788, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5789, .a=0x01, .x=0xf3, .y=0xcf, .sp=0x61, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xcf}, {.addr=0x5788, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5788, .value=0x6d, .type=IO_READ},
        {.addr=0x5789, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x98f0, .a=0x46, .x=0x08, .y=0xf3, .sp=0xc3, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x98f0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x98f1, .a=0x46, .x=0x08, .y=0xf3, .sp=0xc2, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xf3}, {.addr=0x98f0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x98f0, .value=0x6d, .type=IO_READ},
        {.addr=0x98f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0367) {
    const struct CPU_State initial_cpu = {.pc=0x4b35, .a=0x62, .x=0xbb, .y=0x95, .sp=0xa3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x4b35, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4b36, .a=0x62, .x=0xbb, .y=0x95, .sp=0xa2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x95}, {.addr=0x4b35, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4b35, .value=0x6d, .type=IO_READ},
        {.addr=0x4b36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0368) {
    const struct CPU_State initial_cpu = {.pc=0xe47f, .a=0xe9, .x=0x99, .y=0x50, .sp=0x88, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0xe47f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe480, .a=0xe9, .x=0x99, .y=0x50, .sp=0x87, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x50}, {.addr=0xe47f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe47f, .value=0x6d, .type=IO_READ},
        {.addr=0xe480, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x6088, .a=0x2a, .x=0x3b, .y=0x38, .sp=0x31, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x6088, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6089, .a=0x2a, .x=0x3b, .y=0x38, .sp=0x30, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x38}, {.addr=0x6088, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6088, .value=0x6d, .type=IO_READ},
        {.addr=0x6089, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x86a1, .a=0x58, .x=0x62, .y=0x5d, .sp=0x2b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x86a1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x86a2, .a=0x58, .x=0x62, .y=0x5d, .sp=0x2a, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x5d}, {.addr=0x86a1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x86a1, .value=0x6d, .type=IO_READ},
        {.addr=0x86a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_036B) {
    const struct CPU_State initial_cpu = {.pc=0x9608, .a=0xfd, .x=0x57, .y=0x40, .sp=0x65, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x9608, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9609, .a=0xfd, .x=0x57, .y=0x40, .sp=0x64, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x40}, {.addr=0x9608, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9608, .value=0x6d, .type=IO_READ},
        {.addr=0x9609, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x29de, .a=0x07, .x=0x4a, .y=0x75, .sp=0x97, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0x29de, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x29df, .a=0x07, .x=0x4a, .y=0x75, .sp=0x96, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x75}, {.addr=0x29de, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x29de, .value=0x6d, .type=IO_READ},
        {.addr=0x29df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x4238, .a=0x81, .x=0x36, .y=0x09, .sp=0x76, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x4238, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4239, .a=0x81, .x=0x36, .y=0x09, .sp=0x75, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x09}, {.addr=0x4238, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4238, .value=0x6d, .type=IO_READ},
        {.addr=0x4239, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_036E) {
    const struct CPU_State initial_cpu = {.pc=0x41d3, .a=0x90, .x=0xc0, .y=0x5f, .sp=0x83, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x41d3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x41d4, .a=0x90, .x=0xc0, .y=0x5f, .sp=0x82, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x5f}, {.addr=0x41d3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x41d3, .value=0x6d, .type=IO_READ},
        {.addr=0x41d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_036F) {
    const struct CPU_State initial_cpu = {.pc=0xf9ed, .a=0xfa, .x=0xa1, .y=0x4c, .sp=0x45, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0xf9ed, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf9ee, .a=0xfa, .x=0xa1, .y=0x4c, .sp=0x44, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x4c}, {.addr=0xf9ed, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf9ed, .value=0x6d, .type=IO_READ},
        {.addr=0xf9ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x2d12, .a=0xa0, .x=0x93, .y=0xe8, .sp=0x4d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x2d12, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2d13, .a=0xa0, .x=0x93, .y=0xe8, .sp=0x4c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xe8}, {.addr=0x2d12, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2d12, .value=0x6d, .type=IO_READ},
        {.addr=0x2d13, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa902, .a=0xac, .x=0x2d, .y=0x6b, .sp=0xb2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0xa902, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa903, .a=0xac, .x=0x2d, .y=0x6b, .sp=0xb1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x6b}, {.addr=0xa902, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa902, .value=0x6d, .type=IO_READ},
        {.addr=0xa903, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0372) {
    const struct CPU_State initial_cpu = {.pc=0xf679, .a=0xb2, .x=0xb8, .y=0xb2, .sp=0x2a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xf679, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf67a, .a=0xb2, .x=0xb8, .y=0xb2, .sp=0x29, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xb2}, {.addr=0xf679, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf679, .value=0x6d, .type=IO_READ},
        {.addr=0xf67a, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0373) {
    const struct CPU_State initial_cpu = {.pc=0x5340, .a=0xae, .x=0x85, .y=0xef, .sp=0x64, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x5340, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5341, .a=0xae, .x=0x85, .y=0xef, .sp=0x63, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xef}, {.addr=0x5340, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5340, .value=0x6d, .type=IO_READ},
        {.addr=0x5341, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x8fd7, .a=0x00, .x=0x1d, .y=0xaa, .sp=0x2a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x8fd7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8fd8, .a=0x00, .x=0x1d, .y=0xaa, .sp=0x29, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xaa}, {.addr=0x8fd7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8fd7, .value=0x6d, .type=IO_READ},
        {.addr=0x8fd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0375) {
    const struct CPU_State initial_cpu = {.pc=0x04d3, .a=0x71, .x=0x86, .y=0x4a, .sp=0xda, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x04d3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x04d4, .a=0x71, .x=0x86, .y=0x4a, .sp=0xd9, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x4a}, {.addr=0x04d3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x04d3, .value=0x6d, .type=IO_READ},
        {.addr=0x04d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0376) {
    const struct CPU_State initial_cpu = {.pc=0x437b, .a=0xfc, .x=0x02, .y=0x4e, .sp=0xa9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x437b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x437c, .a=0xfc, .x=0x02, .y=0x4e, .sp=0xa8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x4e}, {.addr=0x437b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x437b, .value=0x6d, .type=IO_READ},
        {.addr=0x437c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x7292, .a=0xfc, .x=0xb2, .y=0xd3, .sp=0x9c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x7292, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7293, .a=0xfc, .x=0xb2, .y=0xd3, .sp=0x9b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xd3}, {.addr=0x7292, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7292, .value=0x6d, .type=IO_READ},
        {.addr=0x7293, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0378) {
    const struct CPU_State initial_cpu = {.pc=0xd562, .a=0xc5, .x=0x59, .y=0xa1, .sp=0x4e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xd562, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd563, .a=0xc5, .x=0x59, .y=0xa1, .sp=0x4d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xa1}, {.addr=0xd562, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd562, .value=0x6d, .type=IO_READ},
        {.addr=0xd563, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0379) {
    const struct CPU_State initial_cpu = {.pc=0x7748, .a=0x2c, .x=0xc8, .y=0xed, .sp=0xa1, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x7748, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7749, .a=0x2c, .x=0xc8, .y=0xed, .sp=0xa0, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xed}, {.addr=0x7748, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7748, .value=0x6d, .type=IO_READ},
        {.addr=0x7749, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_037A) {
    const struct CPU_State initial_cpu = {.pc=0x71fb, .a=0x52, .x=0x67, .y=0xfe, .sp=0x08, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x71fb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0x52, .x=0x67, .y=0xfe, .sp=0x07, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xfe}, {.addr=0x71fb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x71fb, .value=0x6d, .type=IO_READ},
        {.addr=0x71fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_037B) {
    const struct CPU_State initial_cpu = {.pc=0xb323, .a=0x1a, .x=0x8e, .y=0xca, .sp=0x3c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xb323, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb324, .a=0x1a, .x=0x8e, .y=0xca, .sp=0x3b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xca}, {.addr=0xb323, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb323, .value=0x6d, .type=IO_READ},
        {.addr=0xb324, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x980c, .a=0xd1, .x=0x75, .y=0x7b, .sp=0x9b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x980c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x980d, .a=0xd1, .x=0x75, .y=0x7b, .sp=0x9a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x7b}, {.addr=0x980c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x980c, .value=0x6d, .type=IO_READ},
        {.addr=0x980d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_037D) {
    const struct CPU_State initial_cpu = {.pc=0xea1e, .a=0x57, .x=0xce, .y=0xab, .sp=0xb9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xea1e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xea1f, .a=0x57, .x=0xce, .y=0xab, .sp=0xb8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xab}, {.addr=0xea1e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xea1e, .value=0x6d, .type=IO_READ},
        {.addr=0xea1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_037E) {
    const struct CPU_State initial_cpu = {.pc=0x245b, .a=0x96, .x=0x4b, .y=0x2e, .sp=0x92, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x245b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x245c, .a=0x96, .x=0x4b, .y=0x2e, .sp=0x91, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x2e}, {.addr=0x245b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x245b, .value=0x6d, .type=IO_READ},
        {.addr=0x245c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_037F) {
    const struct CPU_State initial_cpu = {.pc=0x9582, .a=0x43, .x=0x3e, .y=0x88, .sp=0x4c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x9582, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9583, .a=0x43, .x=0x3e, .y=0x88, .sp=0x4b, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x88}, {.addr=0x9582, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9582, .value=0x6d, .type=IO_READ},
        {.addr=0x9583, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x46d4, .a=0x63, .x=0xa1, .y=0xed, .sp=0x3f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x46d4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x46d5, .a=0x63, .x=0xa1, .y=0xed, .sp=0x3e, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xed}, {.addr=0x46d4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x46d4, .value=0x6d, .type=IO_READ},
        {.addr=0x46d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x34c4, .a=0xe4, .x=0x30, .y=0x7a, .sp=0xdf, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x34c4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x34c5, .a=0xe4, .x=0x30, .y=0x7a, .sp=0xde, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x7a}, {.addr=0x34c4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x34c4, .value=0x6d, .type=IO_READ},
        {.addr=0x34c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0382) {
    const struct CPU_State initial_cpu = {.pc=0xba25, .a=0xed, .x=0xe6, .y=0x52, .sp=0x43, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xba25, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xba26, .a=0xed, .x=0xe6, .y=0x52, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x52}, {.addr=0xba25, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xba25, .value=0x6d, .type=IO_READ},
        {.addr=0xba26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x52, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0383) {
    const struct CPU_State initial_cpu = {.pc=0x06f2, .a=0xe7, .x=0x9e, .y=0x58, .sp=0xe5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x06f2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x06f3, .a=0xe7, .x=0x9e, .y=0x58, .sp=0xe4, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x58}, {.addr=0x06f2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x06f2, .value=0x6d, .type=IO_READ},
        {.addr=0x06f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8265, .a=0x02, .x=0x84, .y=0x30, .sp=0xa5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x8265, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8266, .a=0x02, .x=0x84, .y=0x30, .sp=0xa4, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x30}, {.addr=0x8265, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8265, .value=0x6d, .type=IO_READ},
        {.addr=0x8266, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0385) {
    const struct CPU_State initial_cpu = {.pc=0x766e, .a=0x67, .x=0x32, .y=0xae, .sp=0x15, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0x766e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x766f, .a=0x67, .x=0x32, .y=0xae, .sp=0x14, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xae}, {.addr=0x766e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x766e, .value=0x6d, .type=IO_READ},
        {.addr=0x766f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3a26, .a=0x6c, .x=0x19, .y=0x49, .sp=0x7d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x3a26, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3a27, .a=0x6c, .x=0x19, .y=0x49, .sp=0x7c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x49}, {.addr=0x3a26, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3a26, .value=0x6d, .type=IO_READ},
        {.addr=0x3a27, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0387) {
    const struct CPU_State initial_cpu = {.pc=0xcf94, .a=0x54, .x=0x89, .y=0x5e, .sp=0x5c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0xcf94, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcf95, .a=0x54, .x=0x89, .y=0x5e, .sp=0x5b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x5e}, {.addr=0xcf94, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcf94, .value=0x6d, .type=IO_READ},
        {.addr=0xcf95, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0388) {
    const struct CPU_State initial_cpu = {.pc=0x7d11, .a=0x7b, .x=0x62, .y=0x8d, .sp=0x8b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x7d11, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7d12, .a=0x7b, .x=0x62, .y=0x8d, .sp=0x8a, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x8d}, {.addr=0x7d11, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7d11, .value=0x6d, .type=IO_READ},
        {.addr=0x7d12, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x1cbe, .a=0xd5, .x=0x87, .y=0x3e, .sp=0x78, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x1cbe, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1cbf, .a=0xd5, .x=0x87, .y=0x3e, .sp=0x77, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x3e}, {.addr=0x1cbe, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1cbe, .value=0x6d, .type=IO_READ},
        {.addr=0x1cbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_038A) {
    const struct CPU_State initial_cpu = {.pc=0xfcdb, .a=0xc9, .x=0xa5, .y=0xe9, .sp=0xb9, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xfcdb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfcdc, .a=0xc9, .x=0xa5, .y=0xe9, .sp=0xb8, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xe9}, {.addr=0xfcdb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfcdb, .value=0x6d, .type=IO_READ},
        {.addr=0xfcdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x0e38, .a=0x44, .x=0xa6, .y=0x43, .sp=0x94, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x0e38, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0e39, .a=0x44, .x=0xa6, .y=0x43, .sp=0x93, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x43}, {.addr=0x0e38, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0e38, .value=0x6d, .type=IO_READ},
        {.addr=0x0e39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x1072, .a=0xb8, .x=0xfc, .y=0x67, .sp=0x87, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x1072, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1073, .a=0xb8, .x=0xfc, .y=0x67, .sp=0x86, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x67}, {.addr=0x1072, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1072, .value=0x6d, .type=IO_READ},
        {.addr=0x1073, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_038D) {
    const struct CPU_State initial_cpu = {.pc=0xf8e3, .a=0xb4, .x=0x7b, .y=0x6d, .sp=0x25, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0xf8e3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf8e4, .a=0xb4, .x=0x7b, .y=0x6d, .sp=0x24, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x6d}, {.addr=0xf8e3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf8e3, .value=0x6d, .type=IO_READ},
        {.addr=0xf8e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_038E) {
    const struct CPU_State initial_cpu = {.pc=0x62ba, .a=0x10, .x=0x8b, .y=0x34, .sp=0x7a, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x62ba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x62bb, .a=0x10, .x=0x8b, .y=0x34, .sp=0x79, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x34}, {.addr=0x62ba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x62ba, .value=0x6d, .type=IO_READ},
        {.addr=0x62bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_038F) {
    const struct CPU_State initial_cpu = {.pc=0xc50e, .a=0x62, .x=0x4c, .y=0x1c, .sp=0x3e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xc50e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc50f, .a=0x62, .x=0x4c, .y=0x1c, .sp=0x3d, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x1c}, {.addr=0xc50e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc50e, .value=0x6d, .type=IO_READ},
        {.addr=0xc50f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0390) {
    const struct CPU_State initial_cpu = {.pc=0x6db8, .a=0x87, .x=0xa0, .y=0x32, .sp=0xa8, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x6db8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6db9, .a=0x87, .x=0xa0, .y=0x32, .sp=0xa7, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x32}, {.addr=0x6db8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6db8, .value=0x6d, .type=IO_READ},
        {.addr=0x6db9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x137a, .a=0x64, .x=0x80, .y=0xa9, .sp=0xbd, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x137a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x137b, .a=0x64, .x=0x80, .y=0xa9, .sp=0xbc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xa9}, {.addr=0x137a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x137a, .value=0x6d, .type=IO_READ},
        {.addr=0x137b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0392) {
    const struct CPU_State initial_cpu = {.pc=0x194e, .a=0x6b, .x=0x59, .y=0xef, .sp=0x02, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x194e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x194f, .a=0x6b, .x=0x59, .y=0xef, .sp=0x01, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xef}, {.addr=0x194e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x194e, .value=0x6d, .type=IO_READ},
        {.addr=0x194f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0393) {
    const struct CPU_State initial_cpu = {.pc=0xb879, .a=0xc3, .x=0x8c, .y=0x34, .sp=0xc4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xb879, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb87a, .a=0xc3, .x=0x8c, .y=0x34, .sp=0xc3, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x34}, {.addr=0xb879, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb879, .value=0x6d, .type=IO_READ},
        {.addr=0xb87a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0394) {
    const struct CPU_State initial_cpu = {.pc=0xdada, .a=0x36, .x=0xf2, .y=0xdc, .sp=0x12, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xdada, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdadb, .a=0x36, .x=0xf2, .y=0xdc, .sp=0x11, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xdc}, {.addr=0xdada, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdada, .value=0x6d, .type=IO_READ},
        {.addr=0xdadb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0395) {
    const struct CPU_State initial_cpu = {.pc=0xe57c, .a=0x36, .x=0x24, .y=0x4f, .sp=0x78, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xe57c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe57d, .a=0x36, .x=0x24, .y=0x4f, .sp=0x77, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x4f}, {.addr=0xe57c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe57c, .value=0x6d, .type=IO_READ},
        {.addr=0xe57d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x6b1a, .a=0x6d, .x=0x18, .y=0x6c, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x6b1a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6b1b, .a=0x6d, .x=0x18, .y=0x6c, .sp=0x27, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x6c}, {.addr=0x6b1a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6b1a, .value=0x6d, .type=IO_READ},
        {.addr=0x6b1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0397) {
    const struct CPU_State initial_cpu = {.pc=0xae87, .a=0x33, .x=0x17, .y=0x62, .sp=0x2a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xae87, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xae88, .a=0x33, .x=0x17, .y=0x62, .sp=0x29, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x62}, {.addr=0xae87, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xae87, .value=0x6d, .type=IO_READ},
        {.addr=0xae88, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8744, .a=0x5a, .x=0x53, .y=0x9a, .sp=0x42, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x8744, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8745, .a=0x5a, .x=0x53, .y=0x9a, .sp=0x41, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x9a}, {.addr=0x8744, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8744, .value=0x6d, .type=IO_READ},
        {.addr=0x8745, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x1720, .a=0xc1, .x=0x23, .y=0x8f, .sp=0x7a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x1720, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1721, .a=0xc1, .x=0x23, .y=0x8f, .sp=0x79, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x8f}, {.addr=0x1720, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1720, .value=0x6d, .type=IO_READ},
        {.addr=0x1721, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x4581, .a=0x70, .x=0x6a, .y=0x31, .sp=0x68, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x4581, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4582, .a=0x70, .x=0x6a, .y=0x31, .sp=0x67, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x31}, {.addr=0x4581, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4581, .value=0x6d, .type=IO_READ},
        {.addr=0x4582, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x01c9, .a=0x14, .x=0x95, .y=0x92, .sp=0x64, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x01c9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x01ca, .a=0x14, .x=0x95, .y=0x92, .sp=0x63, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x92}, {.addr=0x01c9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x01c9, .value=0x6d, .type=IO_READ},
        {.addr=0x01ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_039C) {
    const struct CPU_State initial_cpu = {.pc=0x47aa, .a=0xe8, .x=0xf3, .y=0x9d, .sp=0xd2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0x47aa, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x47ab, .a=0xe8, .x=0xf3, .y=0x9d, .sp=0xd1, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x9d}, {.addr=0x47aa, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x47aa, .value=0x6d, .type=IO_READ},
        {.addr=0x47ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_039D) {
    const struct CPU_State initial_cpu = {.pc=0x6668, .a=0xe7, .x=0xca, .y=0x33, .sp=0xb0, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x6668, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6669, .a=0xe7, .x=0xca, .y=0x33, .sp=0xaf, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x33}, {.addr=0x6668, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6668, .value=0x6d, .type=IO_READ},
        {.addr=0x6669, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_039E) {
    const struct CPU_State initial_cpu = {.pc=0x3037, .a=0x2b, .x=0x83, .y=0x49, .sp=0x8a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x3037, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3038, .a=0x2b, .x=0x83, .y=0x49, .sp=0x89, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x49}, {.addr=0x3037, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3037, .value=0x6d, .type=IO_READ},
        {.addr=0x3038, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3353, .a=0x19, .x=0xda, .y=0x41, .sp=0xce, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x3353, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3354, .a=0x19, .x=0xda, .y=0x41, .sp=0xcd, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x41}, {.addr=0x3353, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3353, .value=0x6d, .type=IO_READ},
        {.addr=0x3354, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x0e23, .a=0xb5, .x=0x79, .y=0x55, .sp=0x1b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x0e23, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0e24, .a=0xb5, .x=0x79, .y=0x55, .sp=0x1a, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x55}, {.addr=0x0e23, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0e23, .value=0x6d, .type=IO_READ},
        {.addr=0x0e24, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x6399, .a=0xe5, .x=0xc7, .y=0x1d, .sp=0x69, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0x6399, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x639a, .a=0xe5, .x=0xc7, .y=0x1d, .sp=0x68, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x1d}, {.addr=0x6399, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6399, .value=0x6d, .type=IO_READ},
        {.addr=0x639a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x1646, .a=0xe0, .x=0x58, .y=0x7b, .sp=0x0e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x1646, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1647, .a=0xe0, .x=0x58, .y=0x7b, .sp=0x0d, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x7b}, {.addr=0x1646, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1646, .value=0x6d, .type=IO_READ},
        {.addr=0x1647, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x16bd, .a=0xdd, .x=0x7a, .y=0x1e, .sp=0x5f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x16bd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x16be, .a=0xdd, .x=0x7a, .y=0x1e, .sp=0x5e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x1e}, {.addr=0x16bd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x16bd, .value=0x6d, .type=IO_READ},
        {.addr=0x16be, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xfb3f, .a=0x21, .x=0x58, .y=0x5e, .sp=0xa9, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0xfb3f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfb40, .a=0x21, .x=0x58, .y=0x5e, .sp=0xa8, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x5e}, {.addr=0xfb3f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfb3f, .value=0x6d, .type=IO_READ},
        {.addr=0xfb40, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xeced, .a=0x67, .x=0x0c, .y=0x0f, .sp=0x06, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xeced, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xecee, .a=0x67, .x=0x0c, .y=0x0f, .sp=0x05, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x0f}, {.addr=0xeced, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xeced, .value=0x6d, .type=IO_READ},
        {.addr=0xecee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x9f96, .a=0xaf, .x=0x35, .y=0xfc, .sp=0xde, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x9f96, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9f97, .a=0xaf, .x=0x35, .y=0xfc, .sp=0xdd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xfc}, {.addr=0x9f96, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9f96, .value=0x6d, .type=IO_READ},
        {.addr=0x9f97, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x0b01, .a=0x99, .x=0x5f, .y=0x85, .sp=0x7e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x0b01, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0b02, .a=0x99, .x=0x5f, .y=0x85, .sp=0x7d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x85}, {.addr=0x0b01, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0b01, .value=0x6d, .type=IO_READ},
        {.addr=0x0b02, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x99cb, .a=0x75, .x=0x9b, .y=0x90, .sp=0x47, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x99cb, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x99cc, .a=0x75, .x=0x9b, .y=0x90, .sp=0x46, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x90}, {.addr=0x99cb, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x99cb, .value=0x6d, .type=IO_READ},
        {.addr=0x99cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x9e19, .a=0x03, .x=0x87, .y=0x16, .sp=0xac, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x9e19, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9e1a, .a=0x03, .x=0x87, .y=0x16, .sp=0xab, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x16}, {.addr=0x9e19, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9e19, .value=0x6d, .type=IO_READ},
        {.addr=0x9e1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x9ff1, .a=0xa3, .x=0x48, .y=0xe1, .sp=0xf6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x9ff1, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9ff2, .a=0xa3, .x=0x48, .y=0xe1, .sp=0xf5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xe1}, {.addr=0x9ff1, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9ff1, .value=0x6d, .type=IO_READ},
        {.addr=0x9ff2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x534e, .a=0xf8, .x=0xea, .y=0x64, .sp=0x94, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x534e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x534f, .a=0xf8, .x=0xea, .y=0x64, .sp=0x93, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x64}, {.addr=0x534e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x534e, .value=0x6d, .type=IO_READ},
        {.addr=0x534f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcf94, .a=0xf8, .x=0x09, .y=0x4c, .sp=0xfb, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xcf94, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcf95, .a=0xf8, .x=0x09, .y=0x4c, .sp=0xfa, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x4c}, {.addr=0xcf94, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcf94, .value=0x6d, .type=IO_READ},
        {.addr=0xcf95, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x647c, .a=0x98, .x=0x71, .y=0x90, .sp=0xf4, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x647c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0x98, .x=0x71, .y=0x90, .sp=0xf3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x90}, {.addr=0x647c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x647c, .value=0x6d, .type=IO_READ},
        {.addr=0x647d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x97b7, .a=0x7f, .x=0x80, .y=0xb0, .sp=0x9d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0x97b7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x97b8, .a=0x7f, .x=0x80, .y=0xb0, .sp=0x9c, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xb0}, {.addr=0x97b7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x97b7, .value=0x6d, .type=IO_READ},
        {.addr=0x97b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x2e84, .a=0xea, .x=0xb0, .y=0x4c, .sp=0xbc, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x2e84, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2e85, .a=0xea, .x=0xb0, .y=0x4c, .sp=0xbb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x4c}, {.addr=0x2e84, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2e84, .value=0x6d, .type=IO_READ},
        {.addr=0x2e85, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xcce5, .a=0xa1, .x=0x49, .y=0xd8, .sp=0xf7, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xcce5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcce6, .a=0xa1, .x=0x49, .y=0xd8, .sp=0xf6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xd8}, {.addr=0xcce5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcce5, .value=0x6d, .type=IO_READ},
        {.addr=0xcce6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x1d11, .a=0x8f, .x=0xe1, .y=0xc6, .sp=0x0a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x1d11, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1d12, .a=0x8f, .x=0xe1, .y=0xc6, .sp=0x09, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xc6}, {.addr=0x1d11, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1d11, .value=0x6d, .type=IO_READ},
        {.addr=0x1d12, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xff09, .a=0xb9, .x=0x83, .y=0xad, .sp=0xfc, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xff09, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xff0a, .a=0xb9, .x=0x83, .y=0xad, .sp=0xfb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xad}, {.addr=0xff09, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xff09, .value=0x6d, .type=IO_READ},
        {.addr=0xff0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xbb4e, .a=0xcc, .x=0x60, .y=0x0f, .sp=0xa6, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0xbb4e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbb4f, .a=0xcc, .x=0x60, .y=0x0f, .sp=0xa5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x0f}, {.addr=0xbb4e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbb4e, .value=0x6d, .type=IO_READ},
        {.addr=0xbb4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x6aff, .a=0xdd, .x=0xa6, .y=0x0c, .sp=0xf1, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x6aff, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6b00, .a=0xdd, .x=0xa6, .y=0x0c, .sp=0xf0, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x0c}, {.addr=0x6aff, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6aff, .value=0x6d, .type=IO_READ},
        {.addr=0x6b00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x0d45, .a=0x6b, .x=0x98, .y=0x2e, .sp=0x49, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x0d45, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0d46, .a=0x6b, .x=0x98, .y=0x2e, .sp=0x48, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x2e}, {.addr=0x0d45, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0d45, .value=0x6d, .type=IO_READ},
        {.addr=0x0d46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xb0ee, .a=0xcc, .x=0x39, .y=0x50, .sp=0x81, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0xb0ee, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb0ef, .a=0xcc, .x=0x39, .y=0x50, .sp=0x80, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x50}, {.addr=0xb0ee, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb0ee, .value=0x6d, .type=IO_READ},
        {.addr=0xb0ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x1c27, .a=0xc9, .x=0x35, .y=0x39, .sp=0x5f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x1c27, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1c28, .a=0xc9, .x=0x35, .y=0x39, .sp=0x5e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x39}, {.addr=0x1c27, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1c27, .value=0x6d, .type=IO_READ},
        {.addr=0x1c28, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xf45d, .a=0x4d, .x=0x9c, .y=0xe2, .sp=0x09, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0xf45d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf45e, .a=0x4d, .x=0x9c, .y=0xe2, .sp=0x08, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xe2}, {.addr=0xf45d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf45d, .value=0x6d, .type=IO_READ},
        {.addr=0xf45e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xbda2, .a=0x4a, .x=0x8d, .y=0xe1, .sp=0x35, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xbda2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbda3, .a=0x4a, .x=0x8d, .y=0xe1, .sp=0x34, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xe1}, {.addr=0xbda2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbda2, .value=0x6d, .type=IO_READ},
        {.addr=0xbda3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x9aa2, .a=0x71, .x=0xed, .y=0x83, .sp=0xfc, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x9aa2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9aa3, .a=0x71, .x=0xed, .y=0x83, .sp=0xfb, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x83}, {.addr=0x9aa2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9aa2, .value=0x6d, .type=IO_READ},
        {.addr=0x9aa3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x040e, .a=0xba, .x=0x6a, .y=0x09, .sp=0x34, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x040e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x040f, .a=0xba, .x=0x6a, .y=0x09, .sp=0x33, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x09}, {.addr=0x040e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x040e, .value=0x6d, .type=IO_READ},
        {.addr=0x040f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xb848, .a=0x07, .x=0x21, .y=0x3b, .sp=0x59, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xb848, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb849, .a=0x07, .x=0x21, .y=0x3b, .sp=0x58, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x3b}, {.addr=0xb848, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb848, .value=0x6d, .type=IO_READ},
        {.addr=0xb849, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xf563, .a=0x4c, .x=0x93, .y=0x1c, .sp=0xc1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xf563, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf564, .a=0x4c, .x=0x93, .y=0x1c, .sp=0xc0, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x1c}, {.addr=0xf563, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf563, .value=0x6d, .type=IO_READ},
        {.addr=0xf564, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x7c90, .a=0x17, .x=0x57, .y=0x3a, .sp=0xae, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x7c90, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7c91, .a=0x17, .x=0x57, .y=0x3a, .sp=0xad, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x3a}, {.addr=0x7c90, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7c90, .value=0x6d, .type=IO_READ},
        {.addr=0x7c91, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x7256, .a=0xb0, .x=0xe9, .y=0x44, .sp=0x8f, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x7256, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7257, .a=0xb0, .x=0xe9, .y=0x44, .sp=0x8e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x44}, {.addr=0x7256, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7256, .value=0x6d, .type=IO_READ},
        {.addr=0x7257, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x63e3, .a=0xd5, .x=0x08, .y=0x1e, .sp=0x77, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x63e3, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x63e4, .a=0xd5, .x=0x08, .y=0x1e, .sp=0x76, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x1e}, {.addr=0x63e3, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x63e3, .value=0x6d, .type=IO_READ},
        {.addr=0x63e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x749a, .a=0x3c, .x=0xf8, .y=0xd4, .sp=0x89, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x749a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x749b, .a=0x3c, .x=0xf8, .y=0xd4, .sp=0x88, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xd4}, {.addr=0x749a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x749a, .value=0x6d, .type=IO_READ},
        {.addr=0x749b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xffcd, .a=0x6b, .x=0x38, .y=0x16, .sp=0xd5, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0xffcd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xffce, .a=0x6b, .x=0x38, .y=0x16, .sp=0xd4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x16}, {.addr=0xffcd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xffcd, .value=0x6d, .type=IO_READ},
        {.addr=0xffce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x2a2f, .a=0x19, .x=0x0a, .y=0x0a, .sp=0xa9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x2a2f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2a30, .a=0x19, .x=0x0a, .y=0x0a, .sp=0xa8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x0a}, {.addr=0x2a2f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2a2f, .value=0x6d, .type=IO_READ},
        {.addr=0x2a30, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x86cc, .a=0x20, .x=0xcf, .y=0x10, .sp=0xde, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x86cc, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x86cd, .a=0x20, .x=0xcf, .y=0x10, .sp=0xdd, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x10}, {.addr=0x86cc, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x86cc, .value=0x6d, .type=IO_READ},
        {.addr=0x86cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xc416, .a=0xeb, .x=0xd9, .y=0xf7, .sp=0xa3, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xc416, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc417, .a=0xeb, .x=0xd9, .y=0xf7, .sp=0xa2, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xf7}, {.addr=0xc416, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc416, .value=0x6d, .type=IO_READ},
        {.addr=0xc417, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x706e, .a=0xb8, .x=0xe7, .y=0x35, .sp=0x5c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x706e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x706f, .a=0xb8, .x=0xe7, .y=0x35, .sp=0x5b, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x35}, {.addr=0x706e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x706e, .value=0x6d, .type=IO_READ},
        {.addr=0x706f, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xc9d0, .a=0xce, .x=0xd9, .y=0x78, .sp=0x6a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0xc9d0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xc9d1, .a=0xce, .x=0xd9, .y=0x78, .sp=0x69, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x78}, {.addr=0xc9d0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xc9d0, .value=0x6d, .type=IO_READ},
        {.addr=0xc9d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xde4a, .a=0x70, .x=0xfc, .y=0x21, .sp=0x17, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xde4a, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xde4b, .a=0x70, .x=0xfc, .y=0x21, .sp=0x16, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x21}, {.addr=0xde4a, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xde4a, .value=0x6d, .type=IO_READ},
        {.addr=0xde4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xd47b, .a=0xdd, .x=0xa1, .y=0xed, .sp=0xf6, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0xd47b, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd47c, .a=0xdd, .x=0xa1, .y=0xed, .sp=0xf5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xed}, {.addr=0xd47b, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd47b, .value=0x6d, .type=IO_READ},
        {.addr=0xd47c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x1f52, .a=0x38, .x=0x31, .y=0xa3, .sp=0xa3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x1f52, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1f53, .a=0x38, .x=0x31, .y=0xa3, .sp=0xa2, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xa3}, {.addr=0x1f52, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1f52, .value=0x6d, .type=IO_READ},
        {.addr=0x1f53, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x5626, .a=0xd4, .x=0xc0, .y=0xb6, .sp=0xd4, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x5626, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5627, .a=0xd4, .x=0xc0, .y=0xb6, .sp=0xd3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xb6}, {.addr=0x5626, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5626, .value=0x6d, .type=IO_READ},
        {.addr=0x5627, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x8017, .a=0x7f, .x=0x5d, .y=0xe3, .sp=0xf4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x8017, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8018, .a=0x7f, .x=0x5d, .y=0xe3, .sp=0xf3, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xe3}, {.addr=0x8017, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8017, .value=0x6d, .type=IO_READ},
        {.addr=0x8018, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xce25, .a=0xcb, .x=0x6c, .y=0xa2, .sp=0x54, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xce25, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xce26, .a=0xcb, .x=0x6c, .y=0xa2, .sp=0x53, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xa2}, {.addr=0xce25, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xce25, .value=0x6d, .type=IO_READ},
        {.addr=0xce26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x8daf, .a=0x4a, .x=0x29, .y=0x3b, .sp=0xcd, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x8daf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8db0, .a=0x4a, .x=0x29, .y=0x3b, .sp=0xcc, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x3b}, {.addr=0x8daf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8daf, .value=0x6d, .type=IO_READ},
        {.addr=0x8db0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x4771, .a=0x21, .x=0x23, .y=0x13, .sp=0x96, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x4771, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4772, .a=0x21, .x=0x23, .y=0x13, .sp=0x95, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x13}, {.addr=0x4771, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4771, .value=0x6d, .type=IO_READ},
        {.addr=0x4772, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x13, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x5e30, .a=0x7c, .x=0x87, .y=0x6a, .sp=0xcb, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x5e30, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5e31, .a=0x7c, .x=0x87, .y=0x6a, .sp=0xca, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x6a}, {.addr=0x5e30, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5e30, .value=0x6d, .type=IO_READ},
        {.addr=0x5e31, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xce27, .a=0xb7, .x=0x2c, .y=0x8d, .sp=0xf7, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xce27, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xce28, .a=0xb7, .x=0x2c, .y=0x8d, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x8d}, {.addr=0xce27, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xce27, .value=0x6d, .type=IO_READ},
        {.addr=0xce28, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xb120, .a=0x44, .x=0x9e, .y=0xfe, .sp=0x3c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xb120, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xb121, .a=0x44, .x=0x9e, .y=0xfe, .sp=0x3b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xfe}, {.addr=0xb120, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xb120, .value=0x6d, .type=IO_READ},
        {.addr=0xb121, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x3126, .a=0x72, .x=0x66, .y=0x92, .sp=0x86, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x3126, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3127, .a=0x72, .x=0x66, .y=0x92, .sp=0x85, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x92}, {.addr=0x3126, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3126, .value=0x6d, .type=IO_READ},
        {.addr=0x3127, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x09a6, .a=0x83, .x=0xa8, .y=0x29, .sp=0x93, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x09a6, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x09a7, .a=0x83, .x=0xa8, .y=0x29, .sp=0x92, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x29}, {.addr=0x09a6, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x09a6, .value=0x6d, .type=IO_READ},
        {.addr=0x09a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xd4df, .a=0x2a, .x=0x4d, .y=0x2a, .sp=0x73, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0xd4df, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd4e0, .a=0x2a, .x=0x4d, .y=0x2a, .sp=0x72, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x2a}, {.addr=0xd4df, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd4df, .value=0x6d, .type=IO_READ},
        {.addr=0xd4e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x805f, .a=0x7a, .x=0x44, .y=0xef, .sp=0x73, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x805f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8060, .a=0x7a, .x=0x44, .y=0xef, .sp=0x72, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xef}, {.addr=0x805f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x805f, .value=0x6d, .type=IO_READ},
        {.addr=0x8060, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x56ea, .a=0x71, .x=0x4f, .y=0xfd, .sp=0xb5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x56ea, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x56eb, .a=0x71, .x=0x4f, .y=0xfd, .sp=0xb4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xfd}, {.addr=0x56ea, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x56ea, .value=0x6d, .type=IO_READ},
        {.addr=0x56eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xa48c, .a=0x52, .x=0x43, .y=0xf6, .sp=0xf0, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0xa48c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa48d, .a=0x52, .x=0x43, .y=0xf6, .sp=0xef, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf6}, {.addr=0xa48c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa48c, .value=0x6d, .type=IO_READ},
        {.addr=0xa48d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x0d81, .a=0x4e, .x=0x35, .y=0x0c, .sp=0x2b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x0d81, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0d82, .a=0x4e, .x=0x35, .y=0x0c, .sp=0x2a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x0c}, {.addr=0x0d81, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0d81, .value=0x6d, .type=IO_READ},
        {.addr=0x0d82, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x4518, .a=0x18, .x=0x20, .y=0x98, .sp=0x91, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x4518, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4519, .a=0x18, .x=0x20, .y=0x98, .sp=0x90, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x98}, {.addr=0x4518, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4518, .value=0x6d, .type=IO_READ},
        {.addr=0x4519, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xcfaf, .a=0xea, .x=0x5d, .y=0x46, .sp=0x9a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0xcfaf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcfb0, .a=0xea, .x=0x5d, .y=0x46, .sp=0x99, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x46}, {.addr=0xcfaf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcfaf, .value=0x6d, .type=IO_READ},
        {.addr=0xcfb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x0dc7, .a=0x3b, .x=0xba, .y=0xe2, .sp=0x09, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x0dc7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0dc8, .a=0x3b, .x=0xba, .y=0xe2, .sp=0x08, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xe2}, {.addr=0x0dc7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0dc7, .value=0x6d, .type=IO_READ},
        {.addr=0x0dc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x6206, .a=0x01, .x=0x11, .y=0xe4, .sp=0x25, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x6206, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6207, .a=0x01, .x=0x11, .y=0xe4, .sp=0x24, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xe4}, {.addr=0x6206, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6206, .value=0x6d, .type=IO_READ},
        {.addr=0x6207, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xf9dd, .a=0xe1, .x=0xcd, .y=0xbb, .sp=0x2d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0xf9dd, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf9de, .a=0xe1, .x=0xcd, .y=0xbb, .sp=0x2c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xbb}, {.addr=0xf9dd, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf9dd, .value=0x6d, .type=IO_READ},
        {.addr=0xf9de, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x2f0c, .a=0xd4, .x=0x6e, .y=0xf3, .sp=0x2f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x2f0c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2f0d, .a=0xd4, .x=0x6e, .y=0xf3, .sp=0x2e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xf3}, {.addr=0x2f0c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2f0c, .value=0x6d, .type=IO_READ},
        {.addr=0x2f0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x1263, .a=0x48, .x=0x61, .y=0x90, .sp=0x88, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x1263, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x1264, .a=0x48, .x=0x61, .y=0x90, .sp=0x87, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x90}, {.addr=0x1263, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x1263, .value=0x6d, .type=IO_READ},
        {.addr=0x1264, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xdeea, .a=0xc4, .x=0x8e, .y=0x53, .sp=0xe3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0xdeea, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdeeb, .a=0xc4, .x=0x8e, .y=0x53, .sp=0xe2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x53}, {.addr=0xdeea, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdeea, .value=0x6d, .type=IO_READ},
        {.addr=0xdeeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xe09e, .a=0x81, .x=0x3c, .y=0xcf, .sp=0x04, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xe09e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe09f, .a=0x81, .x=0x3c, .y=0xcf, .sp=0x03, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xcf}, {.addr=0xe09e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe09e, .value=0x6d, .type=IO_READ},
        {.addr=0xe09f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xfd77, .a=0x4b, .x=0xf1, .y=0x87, .sp=0x1d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xfd77, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfd78, .a=0x4b, .x=0xf1, .y=0x87, .sp=0x1c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x87}, {.addr=0xfd77, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfd77, .value=0x6d, .type=IO_READ},
        {.addr=0xfd78, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x6ca2, .a=0x8c, .x=0xbb, .y=0xa9, .sp=0x10, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x6ca2, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x6ca3, .a=0x8c, .x=0xbb, .y=0xa9, .sp=0x0f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xa9}, {.addr=0x6ca2, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x6ca2, .value=0x6d, .type=IO_READ},
        {.addr=0x6ca3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x059c, .a=0x71, .x=0xcb, .y=0x37, .sp=0x4f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x059c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x059d, .a=0x71, .x=0xcb, .y=0x37, .sp=0x4e, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x37}, {.addr=0x059c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x059c, .value=0x6d, .type=IO_READ},
        {.addr=0x059d, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x5656, .a=0x85, .x=0x60, .y=0x1b, .sp=0x88, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x5656, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5657, .a=0x85, .x=0x60, .y=0x1b, .sp=0x87, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x1b}, {.addr=0x5656, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5656, .value=0x6d, .type=IO_READ},
        {.addr=0x5657, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_6D, _6D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xf163, .a=0xd1, .x=0x7d, .y=0xed, .sp=0xf1, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0xf163, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf164, .a=0xd1, .x=0x7d, .y=0xed, .sp=0xf0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xed}, {.addr=0xf163, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf163, .value=0x6d, .type=IO_READ},
        {.addr=0xf164, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("6D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
