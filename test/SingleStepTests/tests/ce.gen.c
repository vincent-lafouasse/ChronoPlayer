#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_CE, _CE_0000) {
    const struct CPU_State initial_cpu = {.pc=0x8989, .a=0x15, .x=0x87, .y=0x2e, .sp=0x15, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x83}, {.addr=0x8989, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x898a, .a=0x15, .x=0x83, .y=0x2e, .sp=0x16, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x83}, {.addr=0x8989, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8989, .value=0xce, .type=IO_READ},
        {.addr=0x898a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0001) {
    const struct CPU_State initial_cpu = {.pc=0x8a8e, .a=0x6c, .x=0x3b, .y=0xf7, .sp=0x06, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x05}, {.addr=0x8a8e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8a8f, .a=0x6c, .x=0x05, .y=0xf7, .sp=0x07, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x05}, {.addr=0x8a8e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8a8e, .value=0xce, .type=IO_READ},
        {.addr=0x8a8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0002) {
    const struct CPU_State initial_cpu = {.pc=0x1289, .a=0xe5, .x=0x4c, .y=0x3a, .sp=0x99, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xf9}, {.addr=0x1289, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x128a, .a=0xe5, .x=0xf9, .y=0x3a, .sp=0x9a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xf9}, {.addr=0x1289, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1289, .value=0xce, .type=IO_READ},
        {.addr=0x128a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4c28, .a=0x66, .x=0x80, .y=0x03, .sp=0xce, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x44}, {.addr=0x4c28, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4c29, .a=0x66, .x=0x44, .y=0x03, .sp=0xcf, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x44}, {.addr=0x4c28, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4c28, .value=0xce, .type=IO_READ},
        {.addr=0x4c29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0004) {
    const struct CPU_State initial_cpu = {.pc=0xe3fa, .a=0x31, .x=0xda, .y=0x46, .sp=0xd4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x57}, {.addr=0xe3fa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe3fb, .a=0x31, .x=0x57, .y=0x46, .sp=0xd5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x57}, {.addr=0xe3fa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe3fa, .value=0xce, .type=IO_READ},
        {.addr=0xe3fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0005) {
    const struct CPU_State initial_cpu = {.pc=0xb97e, .a=0x5c, .x=0x1f, .y=0x30, .sp=0x1d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0xf0}, {.addr=0xb97e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb97f, .a=0x5c, .x=0xf0, .y=0x30, .sp=0x1e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xf0}, {.addr=0xb97e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb97e, .value=0xce, .type=IO_READ},
        {.addr=0xb97f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0006) {
    const struct CPU_State initial_cpu = {.pc=0xa93b, .a=0x23, .x=0xf1, .y=0xaf, .sp=0x03, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x79}, {.addr=0xa93b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa93c, .a=0x23, .x=0x79, .y=0xaf, .sp=0x04, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x79}, {.addr=0xa93b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa93b, .value=0xce, .type=IO_READ},
        {.addr=0xa93c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0007) {
    const struct CPU_State initial_cpu = {.pc=0x81a3, .a=0x0d, .x=0xcf, .y=0xd6, .sp=0x50, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x0c}, {.addr=0x81a3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x81a4, .a=0x0d, .x=0x0c, .y=0xd6, .sp=0x51, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x0c}, {.addr=0x81a3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x81a3, .value=0xce, .type=IO_READ},
        {.addr=0x81a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0008) {
    const struct CPU_State initial_cpu = {.pc=0xf54a, .a=0xd4, .x=0x6d, .y=0xd1, .sp=0xed, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xe1}, {.addr=0xf54a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf54b, .a=0xd4, .x=0xe1, .y=0xd1, .sp=0xee, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xe1}, {.addr=0xf54a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf54a, .value=0xce, .type=IO_READ},
        {.addr=0xf54b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0009) {
    const struct CPU_State initial_cpu = {.pc=0x39b1, .a=0x81, .x=0x4a, .y=0xcf, .sp=0x6f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x5e}, {.addr=0x39b1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x39b2, .a=0x81, .x=0x5e, .y=0xcf, .sp=0x70, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x5e}, {.addr=0x39b1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x39b1, .value=0xce, .type=IO_READ},
        {.addr=0x39b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_000A) {
    const struct CPU_State initial_cpu = {.pc=0x9c50, .a=0x8a, .x=0xe9, .y=0xde, .sp=0x29, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xa4}, {.addr=0x9c50, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9c51, .a=0x8a, .x=0xa4, .y=0xde, .sp=0x2a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xa4}, {.addr=0x9c50, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9c50, .value=0xce, .type=IO_READ},
        {.addr=0x9c51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_000B) {
    const struct CPU_State initial_cpu = {.pc=0x0bd0, .a=0x0b, .x=0x57, .y=0x8b, .sp=0xa7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x5f}, {.addr=0x0bd0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0bd1, .a=0x0b, .x=0x5f, .y=0x8b, .sp=0xa8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x5f}, {.addr=0x0bd0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0bd0, .value=0xce, .type=IO_READ},
        {.addr=0x0bd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_000C) {
    const struct CPU_State initial_cpu = {.pc=0xbb37, .a=0xd6, .x=0x4b, .y=0x72, .sp=0xa3, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x1c}, {.addr=0xbb37, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbb38, .a=0xd6, .x=0x1c, .y=0x72, .sp=0xa4, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x1c}, {.addr=0xbb37, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbb37, .value=0xce, .type=IO_READ},
        {.addr=0xbb38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_000D) {
    const struct CPU_State initial_cpu = {.pc=0x422c, .a=0x41, .x=0x1f, .y=0x2a, .sp=0x54, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x18}, {.addr=0x422c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x422d, .a=0x41, .x=0x18, .y=0x2a, .sp=0x55, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x18}, {.addr=0x422c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x422c, .value=0xce, .type=IO_READ},
        {.addr=0x422d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_000E) {
    const struct CPU_State initial_cpu = {.pc=0x4c21, .a=0x3d, .x=0x30, .y=0x13, .sp=0xfb, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x89}, {.addr=0x4c21, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4c22, .a=0x3d, .x=0x89, .y=0x13, .sp=0xfc, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x89}, {.addr=0x4c21, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4c21, .value=0xce, .type=IO_READ},
        {.addr=0x4c22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_000F) {
    const struct CPU_State initial_cpu = {.pc=0x9a96, .a=0x58, .x=0x17, .y=0xec, .sp=0x1b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x09}, {.addr=0x9a96, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9a97, .a=0x58, .x=0x09, .y=0xec, .sp=0x1c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x09}, {.addr=0x9a96, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9a96, .value=0xce, .type=IO_READ},
        {.addr=0x9a97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0010) {
    const struct CPU_State initial_cpu = {.pc=0x143c, .a=0xb9, .x=0x19, .y=0x05, .sp=0x48, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x81}, {.addr=0x143c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x143d, .a=0xb9, .x=0x81, .y=0x05, .sp=0x49, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x81}, {.addr=0x143c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x143c, .value=0xce, .type=IO_READ},
        {.addr=0x143d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0011) {
    const struct CPU_State initial_cpu = {.pc=0xeceb, .a=0xbc, .x=0x42, .y=0xcd, .sp=0x6f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xb9}, {.addr=0xeceb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xecec, .a=0xbc, .x=0xb9, .y=0xcd, .sp=0x70, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xb9}, {.addr=0xeceb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeceb, .value=0xce, .type=IO_READ},
        {.addr=0xecec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0012) {
    const struct CPU_State initial_cpu = {.pc=0x107c, .a=0xb4, .x=0x72, .y=0xcf, .sp=0x9c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xdf}, {.addr=0x107c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x107d, .a=0xb4, .x=0xdf, .y=0xcf, .sp=0x9d, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xdf}, {.addr=0x107c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x107c, .value=0xce, .type=IO_READ},
        {.addr=0x107d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0013) {
    const struct CPU_State initial_cpu = {.pc=0x1f45, .a=0xc5, .x=0xf0, .y=0xa9, .sp=0x24, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x10}, {.addr=0x1f45, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1f46, .a=0xc5, .x=0x10, .y=0xa9, .sp=0x25, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x10}, {.addr=0x1f45, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1f45, .value=0xce, .type=IO_READ},
        {.addr=0x1f46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0014) {
    const struct CPU_State initial_cpu = {.pc=0x22f8, .a=0xaf, .x=0x6d, .y=0xc6, .sp=0xe4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x36}, {.addr=0x22f8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x22f9, .a=0xaf, .x=0x36, .y=0xc6, .sp=0xe5, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x36}, {.addr=0x22f8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x22f8, .value=0xce, .type=IO_READ},
        {.addr=0x22f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0015) {
    const struct CPU_State initial_cpu = {.pc=0x649b, .a=0xa6, .x=0xad, .y=0xac, .sp=0x3d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x86}, {.addr=0x649b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x649c, .a=0xa6, .x=0x86, .y=0xac, .sp=0x3e, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x86}, {.addr=0x649b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x649b, .value=0xce, .type=IO_READ},
        {.addr=0x649c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0016) {
    const struct CPU_State initial_cpu = {.pc=0xe3e8, .a=0xae, .x=0x31, .y=0x1d, .sp=0x60, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x38}, {.addr=0xe3e8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe3e9, .a=0xae, .x=0x38, .y=0x1d, .sp=0x61, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x38}, {.addr=0xe3e8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe3e8, .value=0xce, .type=IO_READ},
        {.addr=0xe3e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0017) {
    const struct CPU_State initial_cpu = {.pc=0x9e39, .a=0xf6, .x=0x1e, .y=0x0e, .sp=0x7a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xac}, {.addr=0x9e39, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9e3a, .a=0xf6, .x=0xac, .y=0x0e, .sp=0x7b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xac}, {.addr=0x9e39, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9e39, .value=0xce, .type=IO_READ},
        {.addr=0x9e3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0018) {
    const struct CPU_State initial_cpu = {.pc=0xa96b, .a=0x79, .x=0x2e, .y=0x3c, .sp=0xd1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x2d}, {.addr=0xa96b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa96c, .a=0x79, .x=0x2d, .y=0x3c, .sp=0xd2, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x2d}, {.addr=0xa96b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa96b, .value=0xce, .type=IO_READ},
        {.addr=0xa96c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1ba0, .a=0x66, .x=0x7c, .y=0xb4, .sp=0xa4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x80}, {.addr=0x1ba0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1ba1, .a=0x66, .x=0x80, .y=0xb4, .sp=0xa5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x80}, {.addr=0x1ba0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1ba0, .value=0xce, .type=IO_READ},
        {.addr=0x1ba1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_001A) {
    const struct CPU_State initial_cpu = {.pc=0xbf32, .a=0x17, .x=0xfa, .y=0xa0, .sp=0xce, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x0a}, {.addr=0xbf32, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbf33, .a=0x17, .x=0x0a, .y=0xa0, .sp=0xcf, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x0a}, {.addr=0xbf32, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbf32, .value=0xce, .type=IO_READ},
        {.addr=0xbf33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_001B) {
    const struct CPU_State initial_cpu = {.pc=0x5809, .a=0xcd, .x=0x6f, .y=0x1e, .sp=0x80, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xe2}, {.addr=0x5809, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x580a, .a=0xcd, .x=0xe2, .y=0x1e, .sp=0x81, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xe2}, {.addr=0x5809, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5809, .value=0xce, .type=IO_READ},
        {.addr=0x580a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_001C) {
    const struct CPU_State initial_cpu = {.pc=0xa188, .a=0xe0, .x=0x0c, .y=0xb2, .sp=0x7a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xa7}, {.addr=0xa188, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa189, .a=0xe0, .x=0xa7, .y=0xb2, .sp=0x7b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa7}, {.addr=0xa188, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa188, .value=0xce, .type=IO_READ},
        {.addr=0xa189, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_001D) {
    const struct CPU_State initial_cpu = {.pc=0x7c56, .a=0x5d, .x=0x91, .y=0xf2, .sp=0x81, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x82}, {.addr=0x7c56, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7c57, .a=0x5d, .x=0x82, .y=0xf2, .sp=0x82, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x82}, {.addr=0x7c56, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7c56, .value=0xce, .type=IO_READ},
        {.addr=0x7c57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_001E) {
    const struct CPU_State initial_cpu = {.pc=0x77fb, .a=0xad, .x=0x5e, .y=0xfb, .sp=0xbf, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xef}, {.addr=0x77fb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x77fc, .a=0xad, .x=0xef, .y=0xfb, .sp=0xc0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xef}, {.addr=0x77fb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x77fb, .value=0xce, .type=IO_READ},
        {.addr=0x77fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_001F) {
    const struct CPU_State initial_cpu = {.pc=0x776e, .a=0x06, .x=0x4a, .y=0x84, .sp=0x62, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x11}, {.addr=0x776e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x776f, .a=0x06, .x=0x11, .y=0x84, .sp=0x63, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x11}, {.addr=0x776e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x776e, .value=0xce, .type=IO_READ},
        {.addr=0x776f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0020) {
    const struct CPU_State initial_cpu = {.pc=0x2926, .a=0xb3, .x=0x93, .y=0xe4, .sp=0xf9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x36}, {.addr=0x2926, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2927, .a=0xb3, .x=0x36, .y=0xe4, .sp=0xfa, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x36}, {.addr=0x2926, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2926, .value=0xce, .type=IO_READ},
        {.addr=0x2927, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0021) {
    const struct CPU_State initial_cpu = {.pc=0x62cd, .a=0xcb, .x=0xed, .y=0xfc, .sp=0x4c, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x37}, {.addr=0x62cd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x62ce, .a=0xcb, .x=0x37, .y=0xfc, .sp=0x4d, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x37}, {.addr=0x62cd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x62cd, .value=0xce, .type=IO_READ},
        {.addr=0x62ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0022) {
    const struct CPU_State initial_cpu = {.pc=0x0bd7, .a=0xb5, .x=0x5e, .y=0xb8, .sp=0x8e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xd3}, {.addr=0x0bd7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0bd8, .a=0xb5, .x=0xd3, .y=0xb8, .sp=0x8f, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xd3}, {.addr=0x0bd7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0bd7, .value=0xce, .type=IO_READ},
        {.addr=0x0bd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0023) {
    const struct CPU_State initial_cpu = {.pc=0xd2d5, .a=0x66, .x=0xf0, .y=0x03, .sp=0x0b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x92}, {.addr=0xd2d5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd2d6, .a=0x66, .x=0x92, .y=0x03, .sp=0x0c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x92}, {.addr=0xd2d5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd2d5, .value=0xce, .type=IO_READ},
        {.addr=0xd2d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0024) {
    const struct CPU_State initial_cpu = {.pc=0x21c3, .a=0x8d, .x=0xdf, .y=0xb2, .sp=0xc5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x0f}, {.addr=0x21c3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x21c4, .a=0x8d, .x=0x0f, .y=0xb2, .sp=0xc6, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x0f}, {.addr=0x21c3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x21c3, .value=0xce, .type=IO_READ},
        {.addr=0x21c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0025) {
    const struct CPU_State initial_cpu = {.pc=0x820f, .a=0xc4, .x=0xf3, .y=0x45, .sp=0x5b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xf8}, {.addr=0x820f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8210, .a=0xc4, .x=0xf8, .y=0x45, .sp=0x5c, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xf8}, {.addr=0x820f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x820f, .value=0xce, .type=IO_READ},
        {.addr=0x8210, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0026) {
    const struct CPU_State initial_cpu = {.pc=0x4104, .a=0x0f, .x=0x75, .y=0x0d, .sp=0x1a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x07}, {.addr=0x4104, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4105, .a=0x0f, .x=0x07, .y=0x0d, .sp=0x1b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x07}, {.addr=0x4104, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4104, .value=0xce, .type=IO_READ},
        {.addr=0x4105, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0027) {
    const struct CPU_State initial_cpu = {.pc=0x7482, .a=0x65, .x=0x0c, .y=0x0c, .sp=0xd2, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x9c}, {.addr=0x7482, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7483, .a=0x65, .x=0x9c, .y=0x0c, .sp=0xd3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x9c}, {.addr=0x7482, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7482, .value=0xce, .type=IO_READ},
        {.addr=0x7483, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0028) {
    const struct CPU_State initial_cpu = {.pc=0x0c89, .a=0x87, .x=0x82, .y=0xc9, .sp=0x2b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xfa}, {.addr=0x0c89, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0c8a, .a=0x87, .x=0xfa, .y=0xc9, .sp=0x2c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xfa}, {.addr=0x0c89, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0c89, .value=0xce, .type=IO_READ},
        {.addr=0x0c8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0029) {
    const struct CPU_State initial_cpu = {.pc=0x9b1f, .a=0x79, .x=0x9a, .y=0x07, .sp=0xe8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xdc}, {.addr=0x9b1f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9b20, .a=0x79, .x=0xdc, .y=0x07, .sp=0xe9, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xdc}, {.addr=0x9b1f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9b1f, .value=0xce, .type=IO_READ},
        {.addr=0x9b20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_002A) {
    const struct CPU_State initial_cpu = {.pc=0x8af3, .a=0xe4, .x=0x50, .y=0xaf, .sp=0x5c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x7a}, {.addr=0x8af3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8af4, .a=0xe4, .x=0x7a, .y=0xaf, .sp=0x5d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x7a}, {.addr=0x8af3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8af3, .value=0xce, .type=IO_READ},
        {.addr=0x8af4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_002B) {
    const struct CPU_State initial_cpu = {.pc=0x3e31, .a=0x78, .x=0x65, .y=0xd4, .sp=0x3e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xae}, {.addr=0x3e31, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3e32, .a=0x78, .x=0xae, .y=0xd4, .sp=0x3f, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xae}, {.addr=0x3e31, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3e31, .value=0xce, .type=IO_READ},
        {.addr=0x3e32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_002C) {
    const struct CPU_State initial_cpu = {.pc=0x17c7, .a=0x19, .x=0x6b, .y=0x22, .sp=0xbe, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xc4}, {.addr=0x17c7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x17c8, .a=0x19, .x=0xc4, .y=0x22, .sp=0xbf, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xc4}, {.addr=0x17c7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x17c7, .value=0xce, .type=IO_READ},
        {.addr=0x17c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_002D) {
    const struct CPU_State initial_cpu = {.pc=0x2d69, .a=0xb0, .x=0x62, .y=0xc9, .sp=0x31, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x8c}, {.addr=0x2d69, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2d6a, .a=0xb0, .x=0x8c, .y=0xc9, .sp=0x32, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x8c}, {.addr=0x2d69, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2d69, .value=0xce, .type=IO_READ},
        {.addr=0x2d6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_002E) {
    const struct CPU_State initial_cpu = {.pc=0x58be, .a=0x88, .x=0x3b, .y=0xd9, .sp=0x60, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xef}, {.addr=0x58be, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x58bf, .a=0x88, .x=0xef, .y=0xd9, .sp=0x61, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xef}, {.addr=0x58be, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x58be, .value=0xce, .type=IO_READ},
        {.addr=0x58bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_002F) {
    const struct CPU_State initial_cpu = {.pc=0x290b, .a=0x81, .x=0xbe, .y=0x60, .sp=0xe5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xc8}, {.addr=0x290b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x290c, .a=0x81, .x=0xc8, .y=0x60, .sp=0xe6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xc8}, {.addr=0x290b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x290b, .value=0xce, .type=IO_READ},
        {.addr=0x290c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0030) {
    const struct CPU_State initial_cpu = {.pc=0x036e, .a=0x04, .x=0x19, .y=0x2a, .sp=0x30, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xf6}, {.addr=0x036e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x036f, .a=0x04, .x=0xf6, .y=0x2a, .sp=0x31, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xf6}, {.addr=0x036e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x036e, .value=0xce, .type=IO_READ},
        {.addr=0x036f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0031) {
    const struct CPU_State initial_cpu = {.pc=0xe3a6, .a=0xc7, .x=0x8f, .y=0x51, .sp=0x35, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x81}, {.addr=0xe3a6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe3a7, .a=0xc7, .x=0x81, .y=0x51, .sp=0x36, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x81}, {.addr=0xe3a6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe3a6, .value=0xce, .type=IO_READ},
        {.addr=0xe3a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0032) {
    const struct CPU_State initial_cpu = {.pc=0x95b1, .a=0x5b, .x=0x55, .y=0x69, .sp=0x03, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x93}, {.addr=0x95b1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x95b2, .a=0x5b, .x=0x93, .y=0x69, .sp=0x04, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x93}, {.addr=0x95b1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x95b1, .value=0xce, .type=IO_READ},
        {.addr=0x95b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0033) {
    const struct CPU_State initial_cpu = {.pc=0x0cd0, .a=0xea, .x=0x0d, .y=0x6e, .sp=0xe6, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x4d}, {.addr=0x0cd0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0cd1, .a=0xea, .x=0x4d, .y=0x6e, .sp=0xe7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x4d}, {.addr=0x0cd0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0cd0, .value=0xce, .type=IO_READ},
        {.addr=0x0cd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0034) {
    const struct CPU_State initial_cpu = {.pc=0x39c9, .a=0x7f, .x=0xb5, .y=0x21, .sp=0xd6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x58}, {.addr=0x39c9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x39ca, .a=0x7f, .x=0x58, .y=0x21, .sp=0xd7, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x58}, {.addr=0x39c9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x39c9, .value=0xce, .type=IO_READ},
        {.addr=0x39ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0035) {
    const struct CPU_State initial_cpu = {.pc=0xd3e6, .a=0x46, .x=0x01, .y=0xf5, .sp=0x07, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x91}, {.addr=0xd3e6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd3e7, .a=0x46, .x=0x91, .y=0xf5, .sp=0x08, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x91}, {.addr=0xd3e6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd3e6, .value=0xce, .type=IO_READ},
        {.addr=0xd3e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0036) {
    const struct CPU_State initial_cpu = {.pc=0x2b20, .a=0x1e, .x=0x16, .y=0x54, .sp=0x66, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x28}, {.addr=0x2b20, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2b21, .a=0x1e, .x=0x28, .y=0x54, .sp=0x67, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x28}, {.addr=0x2b20, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2b20, .value=0xce, .type=IO_READ},
        {.addr=0x2b21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0037) {
    const struct CPU_State initial_cpu = {.pc=0xd4b6, .a=0x52, .x=0x42, .y=0xe1, .sp=0x80, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xb4}, {.addr=0xd4b6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd4b7, .a=0x52, .x=0xb4, .y=0xe1, .sp=0x81, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xb4}, {.addr=0xd4b6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd4b6, .value=0xce, .type=IO_READ},
        {.addr=0xd4b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0038) {
    const struct CPU_State initial_cpu = {.pc=0xccf1, .a=0x78, .x=0xef, .y=0x6e, .sp=0xac, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x3e}, {.addr=0xccf1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xccf2, .a=0x78, .x=0x3e, .y=0x6e, .sp=0xad, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x3e}, {.addr=0xccf1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xccf1, .value=0xce, .type=IO_READ},
        {.addr=0xccf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0039) {
    const struct CPU_State initial_cpu = {.pc=0x16f6, .a=0x7c, .x=0x70, .y=0x91, .sp=0xc0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xa1}, {.addr=0x16f6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x16f7, .a=0x7c, .x=0xa1, .y=0x91, .sp=0xc1, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xa1}, {.addr=0x16f6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x16f6, .value=0xce, .type=IO_READ},
        {.addr=0x16f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_003A) {
    const struct CPU_State initial_cpu = {.pc=0x9ff5, .a=0x55, .x=0xd3, .y=0x4e, .sp=0x57, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xbd}, {.addr=0x9ff5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9ff6, .a=0x55, .x=0xbd, .y=0x4e, .sp=0x58, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xbd}, {.addr=0x9ff5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9ff5, .value=0xce, .type=IO_READ},
        {.addr=0x9ff6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_003B) {
    const struct CPU_State initial_cpu = {.pc=0x7a3b, .a=0x48, .x=0xeb, .y=0xc2, .sp=0x60, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x92}, {.addr=0x7a3b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7a3c, .a=0x48, .x=0x92, .y=0xc2, .sp=0x61, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x92}, {.addr=0x7a3b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7a3b, .value=0xce, .type=IO_READ},
        {.addr=0x7a3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_003C) {
    const struct CPU_State initial_cpu = {.pc=0xbdbc, .a=0x2a, .x=0x79, .y=0xda, .sp=0x0d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x0e}, {.addr=0xbdbc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbdbd, .a=0x2a, .x=0x0e, .y=0xda, .sp=0x0e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x0e}, {.addr=0xbdbc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbdbc, .value=0xce, .type=IO_READ},
        {.addr=0xbdbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_003D) {
    const struct CPU_State initial_cpu = {.pc=0x716e, .a=0x9d, .x=0xd9, .y=0xc0, .sp=0xc9, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x68}, {.addr=0x716e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x716f, .a=0x9d, .x=0x68, .y=0xc0, .sp=0xca, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x68}, {.addr=0x716e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x716e, .value=0xce, .type=IO_READ},
        {.addr=0x716f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_003E) {
    const struct CPU_State initial_cpu = {.pc=0xcbb8, .a=0xd2, .x=0xac, .y=0x82, .sp=0x87, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xc4}, {.addr=0xcbb8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcbb9, .a=0xd2, .x=0xc4, .y=0x82, .sp=0x88, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xc4}, {.addr=0xcbb8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcbb8, .value=0xce, .type=IO_READ},
        {.addr=0xcbb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_003F) {
    const struct CPU_State initial_cpu = {.pc=0xd68f, .a=0x5e, .x=0x26, .y=0x66, .sp=0x91, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x8f}, {.addr=0xd68f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd690, .a=0x5e, .x=0x8f, .y=0x66, .sp=0x92, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x8f}, {.addr=0xd68f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd68f, .value=0xce, .type=IO_READ},
        {.addr=0xd690, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0040) {
    const struct CPU_State initial_cpu = {.pc=0x7c97, .a=0x1a, .x=0xbd, .y=0xaf, .sp=0x32, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xf3}, {.addr=0x7c97, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7c98, .a=0x1a, .x=0xf3, .y=0xaf, .sp=0x33, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xf3}, {.addr=0x7c97, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7c97, .value=0xce, .type=IO_READ},
        {.addr=0x7c98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0041) {
    const struct CPU_State initial_cpu = {.pc=0x6aaa, .a=0x27, .x=0x5f, .y=0x3c, .sp=0xa0, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x5a}, {.addr=0x6aaa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6aab, .a=0x27, .x=0x5a, .y=0x3c, .sp=0xa1, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x5a}, {.addr=0x6aaa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6aaa, .value=0xce, .type=IO_READ},
        {.addr=0x6aab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0042) {
    const struct CPU_State initial_cpu = {.pc=0x26d3, .a=0xd1, .x=0xab, .y=0xd8, .sp=0x8f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xa3}, {.addr=0x26d3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x26d4, .a=0xd1, .x=0xa3, .y=0xd8, .sp=0x90, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xa3}, {.addr=0x26d3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x26d3, .value=0xce, .type=IO_READ},
        {.addr=0x26d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0043) {
    const struct CPU_State initial_cpu = {.pc=0x7521, .a=0x16, .x=0x18, .y=0xf2, .sp=0x29, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x5b}, {.addr=0x7521, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7522, .a=0x16, .x=0x5b, .y=0xf2, .sp=0x2a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x5b}, {.addr=0x7521, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7521, .value=0xce, .type=IO_READ},
        {.addr=0x7522, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0044) {
    const struct CPU_State initial_cpu = {.pc=0x7bd2, .a=0x9e, .x=0x2b, .y=0x31, .sp=0x21, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x1b}, {.addr=0x7bd2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7bd3, .a=0x9e, .x=0x1b, .y=0x31, .sp=0x22, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x1b}, {.addr=0x7bd2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7bd2, .value=0xce, .type=IO_READ},
        {.addr=0x7bd3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0045) {
    const struct CPU_State initial_cpu = {.pc=0xbee4, .a=0xba, .x=0x3a, .y=0xe2, .sp=0x57, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x7e}, {.addr=0xbee4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbee5, .a=0xba, .x=0x7e, .y=0xe2, .sp=0x58, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x7e}, {.addr=0xbee4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbee4, .value=0xce, .type=IO_READ},
        {.addr=0xbee5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0046) {
    const struct CPU_State initial_cpu = {.pc=0xda75, .a=0x03, .x=0x25, .y=0xdf, .sp=0x2b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x73}, {.addr=0xda75, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xda76, .a=0x03, .x=0x73, .y=0xdf, .sp=0x2c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x73}, {.addr=0xda75, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xda75, .value=0xce, .type=IO_READ},
        {.addr=0xda76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0047) {
    const struct CPU_State initial_cpu = {.pc=0x6265, .a=0x60, .x=0xa4, .y=0x89, .sp=0xe9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x6e}, {.addr=0x6265, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6266, .a=0x60, .x=0x6e, .y=0x89, .sp=0xea, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x6e}, {.addr=0x6265, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6265, .value=0xce, .type=IO_READ},
        {.addr=0x6266, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0048) {
    const struct CPU_State initial_cpu = {.pc=0x304d, .a=0x41, .x=0x6f, .y=0xfd, .sp=0x75, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x30}, {.addr=0x304d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x304e, .a=0x41, .x=0x30, .y=0xfd, .sp=0x76, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x30}, {.addr=0x304d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x304d, .value=0xce, .type=IO_READ},
        {.addr=0x304e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0049) {
    const struct CPU_State initial_cpu = {.pc=0x852c, .a=0xb7, .x=0xf6, .y=0x0e, .sp=0x3b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x62}, {.addr=0x852c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x852d, .a=0xb7, .x=0x62, .y=0x0e, .sp=0x3c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x62}, {.addr=0x852c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x852c, .value=0xce, .type=IO_READ},
        {.addr=0x852d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_004A) {
    const struct CPU_State initial_cpu = {.pc=0xe845, .a=0x01, .x=0x1a, .y=0x7a, .sp=0x36, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x98}, {.addr=0xe845, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe846, .a=0x01, .x=0x98, .y=0x7a, .sp=0x37, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x98}, {.addr=0xe845, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe845, .value=0xce, .type=IO_READ},
        {.addr=0xe846, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_004B) {
    const struct CPU_State initial_cpu = {.pc=0x0378, .a=0xa9, .x=0x99, .y=0xa3, .sp=0xda, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x3d}, {.addr=0x0378, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0379, .a=0xa9, .x=0x3d, .y=0xa3, .sp=0xdb, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x3d}, {.addr=0x0378, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0378, .value=0xce, .type=IO_READ},
        {.addr=0x0379, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_004C) {
    const struct CPU_State initial_cpu = {.pc=0x47d7, .a=0xe8, .x=0xa2, .y=0xb1, .sp=0x0e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x19}, {.addr=0x47d7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x47d8, .a=0xe8, .x=0x19, .y=0xb1, .sp=0x0f, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x19}, {.addr=0x47d7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x47d7, .value=0xce, .type=IO_READ},
        {.addr=0x47d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_004D) {
    const struct CPU_State initial_cpu = {.pc=0x2a9c, .a=0xb6, .x=0x6b, .y=0xb0, .sp=0xb6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xc5}, {.addr=0x2a9c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2a9d, .a=0xb6, .x=0xc5, .y=0xb0, .sp=0xb7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xc5}, {.addr=0x2a9c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2a9c, .value=0xce, .type=IO_READ},
        {.addr=0x2a9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_004E) {
    const struct CPU_State initial_cpu = {.pc=0x262d, .a=0xb7, .x=0x9c, .y=0x53, .sp=0xf8, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x1b}, {.addr=0x262d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x262e, .a=0xb7, .x=0x1b, .y=0x53, .sp=0xf9, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x1b}, {.addr=0x262d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x262d, .value=0xce, .type=IO_READ},
        {.addr=0x262e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_004F) {
    const struct CPU_State initial_cpu = {.pc=0x7a30, .a=0xbb, .x=0xe8, .y=0xa2, .sp=0xa6, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x48}, {.addr=0x7a30, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7a31, .a=0xbb, .x=0x48, .y=0xa2, .sp=0xa7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x48}, {.addr=0x7a30, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7a30, .value=0xce, .type=IO_READ},
        {.addr=0x7a31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0050) {
    const struct CPU_State initial_cpu = {.pc=0x9b97, .a=0x31, .x=0x87, .y=0x1e, .sp=0x33, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x72}, {.addr=0x9b97, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9b98, .a=0x31, .x=0x72, .y=0x1e, .sp=0x34, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x72}, {.addr=0x9b97, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9b97, .value=0xce, .type=IO_READ},
        {.addr=0x9b98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0051) {
    const struct CPU_State initial_cpu = {.pc=0x2ab6, .a=0xf2, .x=0xd8, .y=0x95, .sp=0xe1, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x62}, {.addr=0x2ab6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2ab7, .a=0xf2, .x=0x62, .y=0x95, .sp=0xe2, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x62}, {.addr=0x2ab6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2ab6, .value=0xce, .type=IO_READ},
        {.addr=0x2ab7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0052) {
    const struct CPU_State initial_cpu = {.pc=0x2fde, .a=0xdd, .x=0xb5, .y=0x9c, .sp=0x5b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x1b}, {.addr=0x2fde, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2fdf, .a=0xdd, .x=0x1b, .y=0x9c, .sp=0x5c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x1b}, {.addr=0x2fde, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2fde, .value=0xce, .type=IO_READ},
        {.addr=0x2fdf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2419, .a=0xba, .x=0x96, .y=0x78, .sp=0x36, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x56}, {.addr=0x2419, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x241a, .a=0xba, .x=0x56, .y=0x78, .sp=0x37, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x56}, {.addr=0x2419, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2419, .value=0xce, .type=IO_READ},
        {.addr=0x241a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0054) {
    const struct CPU_State initial_cpu = {.pc=0x7a94, .a=0x83, .x=0xb3, .y=0x2d, .sp=0x28, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xba}, {.addr=0x7a94, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7a95, .a=0x83, .x=0xba, .y=0x2d, .sp=0x29, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xba}, {.addr=0x7a94, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7a94, .value=0xce, .type=IO_READ},
        {.addr=0x7a95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0055) {
    const struct CPU_State initial_cpu = {.pc=0x355b, .a=0xff, .x=0x9c, .y=0x3a, .sp=0x5d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x38}, {.addr=0x355b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x355c, .a=0xff, .x=0x38, .y=0x3a, .sp=0x5e, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x38}, {.addr=0x355b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x355b, .value=0xce, .type=IO_READ},
        {.addr=0x355c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0056) {
    const struct CPU_State initial_cpu = {.pc=0xd8b6, .a=0xd7, .x=0xae, .y=0x4e, .sp=0x20, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x23}, {.addr=0xd8b6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd8b7, .a=0xd7, .x=0x23, .y=0x4e, .sp=0x21, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x23}, {.addr=0xd8b6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd8b6, .value=0xce, .type=IO_READ},
        {.addr=0xd8b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0057) {
    const struct CPU_State initial_cpu = {.pc=0x1d36, .a=0xfd, .x=0xbc, .y=0xab, .sp=0x32, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x43}, {.addr=0x1d36, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1d37, .a=0xfd, .x=0x43, .y=0xab, .sp=0x33, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x43}, {.addr=0x1d36, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1d36, .value=0xce, .type=IO_READ},
        {.addr=0x1d37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0058) {
    const struct CPU_State initial_cpu = {.pc=0x4a89, .a=0xbe, .x=0xf9, .y=0x50, .sp=0x51, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x8f}, {.addr=0x4a89, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4a8a, .a=0xbe, .x=0x8f, .y=0x50, .sp=0x52, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x8f}, {.addr=0x4a89, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4a89, .value=0xce, .type=IO_READ},
        {.addr=0x4a8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0059) {
    const struct CPU_State initial_cpu = {.pc=0xc3ab, .a=0x6f, .x=0xa9, .y=0x9f, .sp=0x3d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xbf}, {.addr=0xc3ab, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc3ac, .a=0x6f, .x=0xbf, .y=0x9f, .sp=0x3e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xbf}, {.addr=0xc3ab, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc3ab, .value=0xce, .type=IO_READ},
        {.addr=0xc3ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_005A) {
    const struct CPU_State initial_cpu = {.pc=0x422a, .a=0x86, .x=0x33, .y=0x97, .sp=0x34, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x11}, {.addr=0x422a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x422b, .a=0x86, .x=0x11, .y=0x97, .sp=0x35, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x11}, {.addr=0x422a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x422a, .value=0xce, .type=IO_READ},
        {.addr=0x422b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_005B) {
    const struct CPU_State initial_cpu = {.pc=0x7267, .a=0xf0, .x=0x14, .y=0x08, .sp=0xba, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x72}, {.addr=0x7267, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7268, .a=0xf0, .x=0x72, .y=0x08, .sp=0xbb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x72}, {.addr=0x7267, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7267, .value=0xce, .type=IO_READ},
        {.addr=0x7268, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_005C) {
    const struct CPU_State initial_cpu = {.pc=0x0a12, .a=0xf5, .x=0x03, .y=0xec, .sp=0xe4, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x72}, {.addr=0x0a12, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0a13, .a=0xf5, .x=0x72, .y=0xec, .sp=0xe5, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x72}, {.addr=0x0a12, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0a12, .value=0xce, .type=IO_READ},
        {.addr=0x0a13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_005D) {
    const struct CPU_State initial_cpu = {.pc=0x2d15, .a=0x74, .x=0xb6, .y=0x4b, .sp=0x5a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xeb}, {.addr=0x2d15, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2d16, .a=0x74, .x=0xeb, .y=0x4b, .sp=0x5b, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xeb}, {.addr=0x2d15, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2d15, .value=0xce, .type=IO_READ},
        {.addr=0x2d16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_005E) {
    const struct CPU_State initial_cpu = {.pc=0xa5b8, .a=0x03, .x=0x73, .y=0xa9, .sp=0x73, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xfc}, {.addr=0xa5b8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa5b9, .a=0x03, .x=0xfc, .y=0xa9, .sp=0x74, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xfc}, {.addr=0xa5b8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa5b8, .value=0xce, .type=IO_READ},
        {.addr=0xa5b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_005F) {
    const struct CPU_State initial_cpu = {.pc=0x55b4, .a=0xe2, .x=0x07, .y=0x49, .sp=0x92, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x89}, {.addr=0x55b4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x55b5, .a=0xe2, .x=0x89, .y=0x49, .sp=0x93, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x89}, {.addr=0x55b4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x55b4, .value=0xce, .type=IO_READ},
        {.addr=0x55b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0060) {
    const struct CPU_State initial_cpu = {.pc=0x493c, .a=0x06, .x=0x08, .y=0x79, .sp=0x10, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x12}, {.addr=0x493c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x493d, .a=0x06, .x=0x12, .y=0x79, .sp=0x11, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x12}, {.addr=0x493c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x493c, .value=0xce, .type=IO_READ},
        {.addr=0x493d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0061) {
    const struct CPU_State initial_cpu = {.pc=0xcf05, .a=0x00, .x=0xb7, .y=0x6c, .sp=0xf8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x17}, {.addr=0xcf05, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcf06, .a=0x00, .x=0x17, .y=0x6c, .sp=0xf9, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x17}, {.addr=0xcf05, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcf05, .value=0xce, .type=IO_READ},
        {.addr=0xcf06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0062) {
    const struct CPU_State initial_cpu = {.pc=0x002d, .a=0x8c, .x=0x06, .y=0xbd, .sp=0x9e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xce}, {.addr=0x019f, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x002e, .a=0x8c, .x=0xd1, .y=0xbd, .sp=0x9f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xce}, {.addr=0x019f, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x002d, .value=0xce, .type=IO_READ},
        {.addr=0x002e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0063) {
    const struct CPU_State initial_cpu = {.pc=0xf798, .a=0x5d, .x=0x5a, .y=0x4f, .sp=0x31, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xeb}, {.addr=0xf798, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf799, .a=0x5d, .x=0xeb, .y=0x4f, .sp=0x32, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xeb}, {.addr=0xf798, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf798, .value=0xce, .type=IO_READ},
        {.addr=0xf799, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0064) {
    const struct CPU_State initial_cpu = {.pc=0xf17f, .a=0x58, .x=0x34, .y=0xf9, .sp=0x9d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x3f}, {.addr=0xf17f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf180, .a=0x58, .x=0x3f, .y=0xf9, .sp=0x9e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x3f}, {.addr=0xf17f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf17f, .value=0xce, .type=IO_READ},
        {.addr=0xf180, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0065) {
    const struct CPU_State initial_cpu = {.pc=0xb3d4, .a=0xa7, .x=0x9e, .y=0x5e, .sp=0x12, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x29}, {.addr=0xb3d4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb3d5, .a=0xa7, .x=0x29, .y=0x5e, .sp=0x13, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x29}, {.addr=0xb3d4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb3d4, .value=0xce, .type=IO_READ},
        {.addr=0xb3d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0066) {
    const struct CPU_State initial_cpu = {.pc=0x29f3, .a=0x86, .x=0x87, .y=0x84, .sp=0x20, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x34}, {.addr=0x29f3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x29f4, .a=0x86, .x=0x34, .y=0x84, .sp=0x21, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x34}, {.addr=0x29f3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x29f3, .value=0xce, .type=IO_READ},
        {.addr=0x29f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0067) {
    const struct CPU_State initial_cpu = {.pc=0x6a82, .a=0x32, .x=0xd1, .y=0xac, .sp=0x23, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x0a}, {.addr=0x6a82, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6a83, .a=0x32, .x=0x0a, .y=0xac, .sp=0x24, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x0a}, {.addr=0x6a82, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6a82, .value=0xce, .type=IO_READ},
        {.addr=0x6a83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0068) {
    const struct CPU_State initial_cpu = {.pc=0x9ff8, .a=0x9f, .x=0xf9, .y=0xbe, .sp=0xc4, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x89}, {.addr=0x9ff8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9ff9, .a=0x9f, .x=0x89, .y=0xbe, .sp=0xc5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x89}, {.addr=0x9ff8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9ff8, .value=0xce, .type=IO_READ},
        {.addr=0x9ff9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0069) {
    const struct CPU_State initial_cpu = {.pc=0xf525, .a=0x21, .x=0x31, .y=0x0b, .sp=0x72, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x2f}, {.addr=0xf525, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf526, .a=0x21, .x=0x2f, .y=0x0b, .sp=0x73, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x2f}, {.addr=0xf525, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf525, .value=0xce, .type=IO_READ},
        {.addr=0xf526, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_006A) {
    const struct CPU_State initial_cpu = {.pc=0xd35d, .a=0x06, .x=0xe7, .y=0xf2, .sp=0x70, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xe3}, {.addr=0xd35d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd35e, .a=0x06, .x=0xe3, .y=0xf2, .sp=0x71, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xe3}, {.addr=0xd35d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd35d, .value=0xce, .type=IO_READ},
        {.addr=0xd35e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_006B) {
    const struct CPU_State initial_cpu = {.pc=0xe4f2, .a=0x59, .x=0xa4, .y=0xec, .sp=0xa6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x7b}, {.addr=0xe4f2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe4f3, .a=0x59, .x=0x7b, .y=0xec, .sp=0xa7, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x7b}, {.addr=0xe4f2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe4f2, .value=0xce, .type=IO_READ},
        {.addr=0xe4f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_006C) {
    const struct CPU_State initial_cpu = {.pc=0xce69, .a=0xfd, .x=0x70, .y=0xe5, .sp=0x6d, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x66}, {.addr=0xce69, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xce6a, .a=0xfd, .x=0x66, .y=0xe5, .sp=0x6e, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x66}, {.addr=0xce69, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xce69, .value=0xce, .type=IO_READ},
        {.addr=0xce6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_006D) {
    const struct CPU_State initial_cpu = {.pc=0x8de9, .a=0x6b, .x=0x8f, .y=0x9a, .sp=0x42, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xb2}, {.addr=0x8de9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8dea, .a=0x6b, .x=0xb2, .y=0x9a, .sp=0x43, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xb2}, {.addr=0x8de9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8de9, .value=0xce, .type=IO_READ},
        {.addr=0x8dea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_006E) {
    const struct CPU_State initial_cpu = {.pc=0xc7a1, .a=0x61, .x=0x4f, .y=0xda, .sp=0x55, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xc6}, {.addr=0xc7a1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc7a2, .a=0x61, .x=0xc6, .y=0xda, .sp=0x56, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xc6}, {.addr=0xc7a1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc7a1, .value=0xce, .type=IO_READ},
        {.addr=0xc7a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_006F) {
    const struct CPU_State initial_cpu = {.pc=0x50ae, .a=0x3d, .x=0x78, .y=0xf5, .sp=0xbb, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x66}, {.addr=0x50ae, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x50af, .a=0x3d, .x=0x66, .y=0xf5, .sp=0xbc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x66}, {.addr=0x50ae, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x50ae, .value=0xce, .type=IO_READ},
        {.addr=0x50af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0070) {
    const struct CPU_State initial_cpu = {.pc=0x0224, .a=0x60, .x=0x2d, .y=0x09, .sp=0x3c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xf6}, {.addr=0x0224, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0225, .a=0x60, .x=0xf6, .y=0x09, .sp=0x3d, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xf6}, {.addr=0x0224, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0224, .value=0xce, .type=IO_READ},
        {.addr=0x0225, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0071) {
    const struct CPU_State initial_cpu = {.pc=0x18f2, .a=0xdc, .x=0xad, .y=0xe2, .sp=0xc5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x06}, {.addr=0x18f2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x18f3, .a=0xdc, .x=0x06, .y=0xe2, .sp=0xc6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x06}, {.addr=0x18f2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x18f2, .value=0xce, .type=IO_READ},
        {.addr=0x18f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0072) {
    const struct CPU_State initial_cpu = {.pc=0xd053, .a=0x3f, .x=0x28, .y=0x1b, .sp=0x86, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x4e}, {.addr=0xd053, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd054, .a=0x3f, .x=0x4e, .y=0x1b, .sp=0x87, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x4e}, {.addr=0xd053, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd053, .value=0xce, .type=IO_READ},
        {.addr=0xd054, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0073) {
    const struct CPU_State initial_cpu = {.pc=0x07f4, .a=0xe6, .x=0xcd, .y=0x18, .sp=0xa8, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x2c}, {.addr=0x07f4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x07f5, .a=0xe6, .x=0x2c, .y=0x18, .sp=0xa9, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x2c}, {.addr=0x07f4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x07f4, .value=0xce, .type=IO_READ},
        {.addr=0x07f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0074) {
    const struct CPU_State initial_cpu = {.pc=0x0cd5, .a=0x04, .x=0xb4, .y=0x0b, .sp=0x3b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xb4}, {.addr=0x0cd5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0cd6, .a=0x04, .x=0xb4, .y=0x0b, .sp=0x3c, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xb4}, {.addr=0x0cd5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0cd5, .value=0xce, .type=IO_READ},
        {.addr=0x0cd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0075) {
    const struct CPU_State initial_cpu = {.pc=0x83d6, .a=0x2f, .x=0xcc, .y=0xf3, .sp=0xb1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x94}, {.addr=0x83d6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x83d7, .a=0x2f, .x=0x94, .y=0xf3, .sp=0xb2, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x94}, {.addr=0x83d6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x83d6, .value=0xce, .type=IO_READ},
        {.addr=0x83d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0076) {
    const struct CPU_State initial_cpu = {.pc=0x5675, .a=0xc3, .x=0x34, .y=0xec, .sp=0x38, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x7f}, {.addr=0x5675, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5676, .a=0xc3, .x=0x7f, .y=0xec, .sp=0x39, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x7f}, {.addr=0x5675, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5675, .value=0xce, .type=IO_READ},
        {.addr=0x5676, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0077) {
    const struct CPU_State initial_cpu = {.pc=0xf647, .a=0x30, .x=0xc1, .y=0x48, .sp=0x56, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x21}, {.addr=0xf647, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf648, .a=0x30, .x=0x21, .y=0x48, .sp=0x57, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x21}, {.addr=0xf647, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf647, .value=0xce, .type=IO_READ},
        {.addr=0xf648, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0078) {
    const struct CPU_State initial_cpu = {.pc=0x1e92, .a=0x9d, .x=0x78, .y=0x70, .sp=0xdf, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xc1}, {.addr=0x1e92, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1e93, .a=0x9d, .x=0xc1, .y=0x70, .sp=0xe0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xc1}, {.addr=0x1e92, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1e92, .value=0xce, .type=IO_READ},
        {.addr=0x1e93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0079) {
    const struct CPU_State initial_cpu = {.pc=0xa185, .a=0x63, .x=0x86, .y=0xe4, .sp=0x87, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x93}, {.addr=0xa185, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa186, .a=0x63, .x=0x93, .y=0xe4, .sp=0x88, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x93}, {.addr=0xa185, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa185, .value=0xce, .type=IO_READ},
        {.addr=0xa186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_007A) {
    const struct CPU_State initial_cpu = {.pc=0x180e, .a=0x28, .x=0x62, .y=0x95, .sp=0xc4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x27}, {.addr=0x180e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x180f, .a=0x28, .x=0x27, .y=0x95, .sp=0xc5, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x27}, {.addr=0x180e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x180e, .value=0xce, .type=IO_READ},
        {.addr=0x180f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_007B) {
    const struct CPU_State initial_cpu = {.pc=0xd9a7, .a=0xfc, .x=0x6d, .y=0x3c, .sp=0xc5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xff}, {.addr=0xd9a7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd9a8, .a=0xfc, .x=0xff, .y=0x3c, .sp=0xc6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xff}, {.addr=0xd9a7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd9a7, .value=0xce, .type=IO_READ},
        {.addr=0xd9a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_007C) {
    const struct CPU_State initial_cpu = {.pc=0xf931, .a=0x86, .x=0x3e, .y=0x2b, .sp=0xb3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xe5}, {.addr=0xf931, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf932, .a=0x86, .x=0xe5, .y=0x2b, .sp=0xb4, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xe5}, {.addr=0xf931, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf931, .value=0xce, .type=IO_READ},
        {.addr=0xf932, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_007D) {
    const struct CPU_State initial_cpu = {.pc=0x3806, .a=0x8e, .x=0x31, .y=0xcd, .sp=0x2b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x3a}, {.addr=0x3806, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3807, .a=0x8e, .x=0x3a, .y=0xcd, .sp=0x2c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x3a}, {.addr=0x3806, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3806, .value=0xce, .type=IO_READ},
        {.addr=0x3807, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_007E) {
    const struct CPU_State initial_cpu = {.pc=0x042a, .a=0x44, .x=0xe4, .y=0x3f, .sp=0xac, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x71}, {.addr=0x042a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x042b, .a=0x44, .x=0x71, .y=0x3f, .sp=0xad, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x71}, {.addr=0x042a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x042a, .value=0xce, .type=IO_READ},
        {.addr=0x042b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_007F) {
    const struct CPU_State initial_cpu = {.pc=0x00be, .a=0x95, .x=0x90, .y=0x2b, .sp=0xc3, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xce}, {.addr=0x01c4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x00bf, .a=0x95, .x=0x6d, .y=0x2b, .sp=0xc4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xce}, {.addr=0x01c4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x00be, .value=0xce, .type=IO_READ},
        {.addr=0x00bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0080) {
    const struct CPU_State initial_cpu = {.pc=0x6a95, .a=0xaf, .x=0x39, .y=0x27, .sp=0x40, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xde}, {.addr=0x6a95, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6a96, .a=0xaf, .x=0xde, .y=0x27, .sp=0x41, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xde}, {.addr=0x6a95, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6a95, .value=0xce, .type=IO_READ},
        {.addr=0x6a96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0081) {
    const struct CPU_State initial_cpu = {.pc=0xccfe, .a=0x65, .x=0xdf, .y=0xe7, .sp=0x3b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x1d}, {.addr=0xccfe, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xccff, .a=0x65, .x=0x1d, .y=0xe7, .sp=0x3c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x1d}, {.addr=0xccfe, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xccfe, .value=0xce, .type=IO_READ},
        {.addr=0xccff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0082) {
    const struct CPU_State initial_cpu = {.pc=0x8a0e, .a=0x34, .x=0xc7, .y=0x94, .sp=0x7f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xc6}, {.addr=0x8a0e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8a0f, .a=0x34, .x=0xc6, .y=0x94, .sp=0x80, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xc6}, {.addr=0x8a0e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8a0e, .value=0xce, .type=IO_READ},
        {.addr=0x8a0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0083) {
    const struct CPU_State initial_cpu = {.pc=0x2dff, .a=0xe7, .x=0xb0, .y=0xcc, .sp=0x96, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x82}, {.addr=0x2dff, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2e00, .a=0xe7, .x=0x82, .y=0xcc, .sp=0x97, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x82}, {.addr=0x2dff, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2dff, .value=0xce, .type=IO_READ},
        {.addr=0x2e00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0084) {
    const struct CPU_State initial_cpu = {.pc=0x9af6, .a=0x54, .x=0x90, .y=0x03, .sp=0x61, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x5a}, {.addr=0x9af6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9af7, .a=0x54, .x=0x5a, .y=0x03, .sp=0x62, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x5a}, {.addr=0x9af6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9af6, .value=0xce, .type=IO_READ},
        {.addr=0x9af7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0085) {
    const struct CPU_State initial_cpu = {.pc=0xab44, .a=0xc0, .x=0xab, .y=0x91, .sp=0x41, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x24}, {.addr=0xab44, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xab45, .a=0xc0, .x=0x24, .y=0x91, .sp=0x42, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x24}, {.addr=0xab44, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xab44, .value=0xce, .type=IO_READ},
        {.addr=0xab45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0086) {
    const struct CPU_State initial_cpu = {.pc=0xcc21, .a=0x79, .x=0xe0, .y=0x3d, .sp=0x7c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x5c}, {.addr=0xcc21, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcc22, .a=0x79, .x=0x5c, .y=0x3d, .sp=0x7d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x5c}, {.addr=0xcc21, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcc21, .value=0xce, .type=IO_READ},
        {.addr=0xcc22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0087) {
    const struct CPU_State initial_cpu = {.pc=0xeef4, .a=0x70, .x=0x5d, .y=0x22, .sp=0x13, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x62}, {.addr=0xeef4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeef5, .a=0x70, .x=0x62, .y=0x22, .sp=0x14, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x62}, {.addr=0xeef4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeef4, .value=0xce, .type=IO_READ},
        {.addr=0xeef5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0088) {
    const struct CPU_State initial_cpu = {.pc=0x47df, .a=0x83, .x=0x01, .y=0xa3, .sp=0xce, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xbd}, {.addr=0x47df, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x47e0, .a=0x83, .x=0xbd, .y=0xa3, .sp=0xcf, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xbd}, {.addr=0x47df, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x47df, .value=0xce, .type=IO_READ},
        {.addr=0x47e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0089) {
    const struct CPU_State initial_cpu = {.pc=0xcca3, .a=0x15, .x=0x53, .y=0xb4, .sp=0x3e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xea}, {.addr=0xcca3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcca4, .a=0x15, .x=0xea, .y=0xb4, .sp=0x3f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xea}, {.addr=0xcca3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcca3, .value=0xce, .type=IO_READ},
        {.addr=0xcca4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_008A) {
    const struct CPU_State initial_cpu = {.pc=0xe152, .a=0x1e, .x=0xdc, .y=0x6f, .sp=0xf1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xf2}, {.addr=0xe152, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe153, .a=0x1e, .x=0xf2, .y=0x6f, .sp=0xf2, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xf2}, {.addr=0xe152, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe152, .value=0xce, .type=IO_READ},
        {.addr=0xe153, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_008B) {
    const struct CPU_State initial_cpu = {.pc=0xa26b, .a=0xd7, .x=0x0a, .y=0xa6, .sp=0x6b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xfb}, {.addr=0xa26b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa26c, .a=0xd7, .x=0xfb, .y=0xa6, .sp=0x6c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xfb}, {.addr=0xa26b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa26b, .value=0xce, .type=IO_READ},
        {.addr=0xa26c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3c52, .a=0x5b, .x=0x6b, .y=0x66, .sp=0xe2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x4d}, {.addr=0x3c52, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3c53, .a=0x5b, .x=0x4d, .y=0x66, .sp=0xe3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x4d}, {.addr=0x3c52, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3c52, .value=0xce, .type=IO_READ},
        {.addr=0x3c53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_008D) {
    const struct CPU_State initial_cpu = {.pc=0x678f, .a=0xb0, .x=0xdf, .y=0x0f, .sp=0xbe, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xb9}, {.addr=0x678f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6790, .a=0xb0, .x=0xb9, .y=0x0f, .sp=0xbf, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xb9}, {.addr=0x678f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x678f, .value=0xce, .type=IO_READ},
        {.addr=0x6790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_008E) {
    const struct CPU_State initial_cpu = {.pc=0x3ccd, .a=0x8c, .x=0x0d, .y=0xe5, .sp=0x25, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x91}, {.addr=0x3ccd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3cce, .a=0x8c, .x=0x91, .y=0xe5, .sp=0x26, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x91}, {.addr=0x3ccd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3ccd, .value=0xce, .type=IO_READ},
        {.addr=0x3cce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_008F) {
    const struct CPU_State initial_cpu = {.pc=0x9273, .a=0x72, .x=0x0e, .y=0xad, .sp=0xd6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x43}, {.addr=0x9273, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9274, .a=0x72, .x=0x43, .y=0xad, .sp=0xd7, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x43}, {.addr=0x9273, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9273, .value=0xce, .type=IO_READ},
        {.addr=0x9274, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0090) {
    const struct CPU_State initial_cpu = {.pc=0x6a4b, .a=0x7a, .x=0x0c, .y=0x8d, .sp=0x0b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xe2}, {.addr=0x6a4b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6a4c, .a=0x7a, .x=0xe2, .y=0x8d, .sp=0x0c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xe2}, {.addr=0x6a4b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6a4b, .value=0xce, .type=IO_READ},
        {.addr=0x6a4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0091) {
    const struct CPU_State initial_cpu = {.pc=0x5fa1, .a=0xa2, .x=0x13, .y=0x61, .sp=0xcc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x31}, {.addr=0x5fa1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5fa2, .a=0xa2, .x=0x31, .y=0x61, .sp=0xcd, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x31}, {.addr=0x5fa1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5fa1, .value=0xce, .type=IO_READ},
        {.addr=0x5fa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0092) {
    const struct CPU_State initial_cpu = {.pc=0x41b7, .a=0xd4, .x=0xd6, .y=0x79, .sp=0x7b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x33}, {.addr=0x41b7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x41b8, .a=0xd4, .x=0x33, .y=0x79, .sp=0x7c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x33}, {.addr=0x41b7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x41b7, .value=0xce, .type=IO_READ},
        {.addr=0x41b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0093) {
    const struct CPU_State initial_cpu = {.pc=0x84d9, .a=0xca, .x=0x9b, .y=0x40, .sp=0x98, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xde}, {.addr=0x84d9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x84da, .a=0xca, .x=0xde, .y=0x40, .sp=0x99, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xde}, {.addr=0x84d9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x84d9, .value=0xce, .type=IO_READ},
        {.addr=0x84da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0094) {
    const struct CPU_State initial_cpu = {.pc=0xd7ef, .a=0x52, .x=0x1c, .y=0xab, .sp=0xb9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xc0}, {.addr=0xd7ef, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd7f0, .a=0x52, .x=0xc0, .y=0xab, .sp=0xba, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xc0}, {.addr=0xd7ef, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd7ef, .value=0xce, .type=IO_READ},
        {.addr=0xd7f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0095) {
    const struct CPU_State initial_cpu = {.pc=0x63ba, .a=0xb7, .x=0x45, .y=0x8b, .sp=0x38, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xec}, {.addr=0x63ba, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x63bb, .a=0xb7, .x=0xec, .y=0x8b, .sp=0x39, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xec}, {.addr=0x63ba, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x63ba, .value=0xce, .type=IO_READ},
        {.addr=0x63bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0096) {
    const struct CPU_State initial_cpu = {.pc=0x4e7d, .a=0xaa, .x=0x6d, .y=0x6a, .sp=0xa9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x04}, {.addr=0x4e7d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4e7e, .a=0xaa, .x=0x04, .y=0x6a, .sp=0xaa, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x04}, {.addr=0x4e7d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4e7d, .value=0xce, .type=IO_READ},
        {.addr=0x4e7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0097) {
    const struct CPU_State initial_cpu = {.pc=0xbd14, .a=0x31, .x=0x3f, .y=0x53, .sp=0x5f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xc0}, {.addr=0xbd14, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbd15, .a=0x31, .x=0xc0, .y=0x53, .sp=0x60, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xc0}, {.addr=0xbd14, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbd14, .value=0xce, .type=IO_READ},
        {.addr=0xbd15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0098) {
    const struct CPU_State initial_cpu = {.pc=0xde95, .a=0x3d, .x=0x86, .y=0xf7, .sp=0xc0, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x43}, {.addr=0xde95, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xde96, .a=0x3d, .x=0x43, .y=0xf7, .sp=0xc1, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x43}, {.addr=0xde95, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xde95, .value=0xce, .type=IO_READ},
        {.addr=0xde96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0099) {
    const struct CPU_State initial_cpu = {.pc=0xbe82, .a=0x6c, .x=0xd9, .y=0x41, .sp=0x1f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x03}, {.addr=0xbe82, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbe83, .a=0x6c, .x=0x03, .y=0x41, .sp=0x20, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x03}, {.addr=0xbe82, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbe82, .value=0xce, .type=IO_READ},
        {.addr=0xbe83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_009A) {
    const struct CPU_State initial_cpu = {.pc=0x877c, .a=0x53, .x=0x99, .y=0x4f, .sp=0x7b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x9e}, {.addr=0x877c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x877d, .a=0x53, .x=0x9e, .y=0x4f, .sp=0x7c, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x9e}, {.addr=0x877c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x877c, .value=0xce, .type=IO_READ},
        {.addr=0x877d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_009B) {
    const struct CPU_State initial_cpu = {.pc=0xa539, .a=0x5f, .x=0xb3, .y=0x87, .sp=0x6c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xc6}, {.addr=0xa539, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa53a, .a=0x5f, .x=0xc6, .y=0x87, .sp=0x6d, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xc6}, {.addr=0xa539, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa539, .value=0xce, .type=IO_READ},
        {.addr=0xa53a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_009C) {
    const struct CPU_State initial_cpu = {.pc=0x6e20, .a=0x1f, .x=0xda, .y=0xa7, .sp=0x94, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x3a}, {.addr=0x6e20, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6e21, .a=0x1f, .x=0x3a, .y=0xa7, .sp=0x95, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x3a}, {.addr=0x6e20, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6e20, .value=0xce, .type=IO_READ},
        {.addr=0x6e21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_009D) {
    const struct CPU_State initial_cpu = {.pc=0xbfb5, .a=0x2a, .x=0xc2, .y=0xef, .sp=0x8b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xc6}, {.addr=0xbfb5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbfb6, .a=0x2a, .x=0xc6, .y=0xef, .sp=0x8c, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xc6}, {.addr=0xbfb5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbfb5, .value=0xce, .type=IO_READ},
        {.addr=0xbfb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_009E) {
    const struct CPU_State initial_cpu = {.pc=0xa85d, .a=0x86, .x=0xb6, .y=0x61, .sp=0xf0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xa5}, {.addr=0xa85d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa85e, .a=0x86, .x=0xa5, .y=0x61, .sp=0xf1, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xa5}, {.addr=0xa85d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa85d, .value=0xce, .type=IO_READ},
        {.addr=0xa85e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_009F) {
    const struct CPU_State initial_cpu = {.pc=0x38c6, .a=0xde, .x=0xbe, .y=0x32, .sp=0x54, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xdc}, {.addr=0x38c6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x38c7, .a=0xde, .x=0xdc, .y=0x32, .sp=0x55, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xdc}, {.addr=0x38c6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x38c6, .value=0xce, .type=IO_READ},
        {.addr=0x38c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xac5c, .a=0x61, .x=0x83, .y=0x1d, .sp=0x06, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x81}, {.addr=0xac5c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xac5d, .a=0x61, .x=0x81, .y=0x1d, .sp=0x07, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x81}, {.addr=0xac5c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xac5c, .value=0xce, .type=IO_READ},
        {.addr=0xac5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x7935, .a=0x4e, .x=0xdb, .y=0x96, .sp=0x35, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x06}, {.addr=0x7935, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7936, .a=0x4e, .x=0x06, .y=0x96, .sp=0x36, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x06}, {.addr=0x7935, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7935, .value=0xce, .type=IO_READ},
        {.addr=0x7936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x7a60, .a=0x18, .x=0x4a, .y=0xa2, .sp=0xc0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xb7}, {.addr=0x7a60, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7a61, .a=0x18, .x=0xb7, .y=0xa2, .sp=0xc1, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xb7}, {.addr=0x7a60, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7a60, .value=0xce, .type=IO_READ},
        {.addr=0x7a61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xb926, .a=0x82, .x=0x5f, .y=0x09, .sp=0x75, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x57}, {.addr=0xb926, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb927, .a=0x82, .x=0x57, .y=0x09, .sp=0x76, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x57}, {.addr=0xb926, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb926, .value=0xce, .type=IO_READ},
        {.addr=0xb927, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x3c82, .a=0x1f, .x=0x8e, .y=0xa3, .sp=0x12, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x7a}, {.addr=0x3c82, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3c83, .a=0x1f, .x=0x7a, .y=0xa3, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x7a}, {.addr=0x3c82, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3c82, .value=0xce, .type=IO_READ},
        {.addr=0x3c83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x8e0c, .a=0x72, .x=0x0f, .y=0xa2, .sp=0x41, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xd2}, {.addr=0x8e0c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8e0d, .a=0x72, .x=0xd2, .y=0xa2, .sp=0x42, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xd2}, {.addr=0x8e0c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8e0c, .value=0xce, .type=IO_READ},
        {.addr=0x8e0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xf147, .a=0x20, .x=0xfc, .y=0xfa, .sp=0x27, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x54}, {.addr=0xf147, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf148, .a=0x20, .x=0x54, .y=0xfa, .sp=0x28, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x54}, {.addr=0xf147, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf147, .value=0xce, .type=IO_READ},
        {.addr=0xf148, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x6973, .a=0x10, .x=0xc1, .y=0x0b, .sp=0xcb, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x02}, {.addr=0x6973, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6974, .a=0x10, .x=0x02, .y=0x0b, .sp=0xcc, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x02}, {.addr=0x6973, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6973, .value=0xce, .type=IO_READ},
        {.addr=0x6974, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x735a, .a=0x54, .x=0xb0, .y=0x4f, .sp=0x59, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x3d}, {.addr=0x735a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x735b, .a=0x54, .x=0x3d, .y=0x4f, .sp=0x5a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x3d}, {.addr=0x735a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x735a, .value=0xce, .type=IO_READ},
        {.addr=0x735b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xcd30, .a=0xff, .x=0x3d, .y=0x2e, .sp=0x65, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xf4}, {.addr=0xcd30, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcd31, .a=0xff, .x=0xf4, .y=0x2e, .sp=0x66, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xf4}, {.addr=0xcd30, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcd30, .value=0xce, .type=IO_READ},
        {.addr=0xcd31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xf95b, .a=0x77, .x=0x0d, .y=0xd9, .sp=0x05, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x89}, {.addr=0xf95b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf95c, .a=0x77, .x=0x89, .y=0xd9, .sp=0x06, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x89}, {.addr=0xf95b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf95b, .value=0xce, .type=IO_READ},
        {.addr=0xf95c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x7c9d, .a=0x9d, .x=0x1e, .y=0x4b, .sp=0xe7, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x91}, {.addr=0x7c9d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7c9e, .a=0x9d, .x=0x91, .y=0x4b, .sp=0xe8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x91}, {.addr=0x7c9d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7c9d, .value=0xce, .type=IO_READ},
        {.addr=0x7c9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x9b1f, .a=0x7c, .x=0xf2, .y=0x1d, .sp=0x62, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xd2}, {.addr=0x9b1f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9b20, .a=0x7c, .x=0xd2, .y=0x1d, .sp=0x63, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xd2}, {.addr=0x9b1f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9b1f, .value=0xce, .type=IO_READ},
        {.addr=0x9b20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x988e, .a=0x68, .x=0x30, .y=0x8c, .sp=0x56, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xd7}, {.addr=0x988e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x988f, .a=0x68, .x=0xd7, .y=0x8c, .sp=0x57, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xd7}, {.addr=0x988e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x988e, .value=0xce, .type=IO_READ},
        {.addr=0x988f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xcd10, .a=0x43, .x=0x89, .y=0xee, .sp=0x78, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x7b}, {.addr=0xcd10, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcd11, .a=0x43, .x=0x7b, .y=0xee, .sp=0x79, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x7b}, {.addr=0xcd10, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcd10, .value=0xce, .type=IO_READ},
        {.addr=0xcd11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xa57e, .a=0x58, .x=0xeb, .y=0x19, .sp=0xc9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x16}, {.addr=0xa57e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa57f, .a=0x58, .x=0x16, .y=0x19, .sp=0xca, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x16}, {.addr=0xa57e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa57e, .value=0xce, .type=IO_READ},
        {.addr=0xa57f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xbffa, .a=0xb7, .x=0x6b, .y=0x87, .sp=0x7c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xd7}, {.addr=0xbffa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbffb, .a=0xb7, .x=0xd7, .y=0x87, .sp=0x7d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xd7}, {.addr=0xbffa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbffa, .value=0xce, .type=IO_READ},
        {.addr=0xbffb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x3c3f, .a=0x03, .x=0x13, .y=0xae, .sp=0xc6, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x01}, {.addr=0x3c3f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3c40, .a=0x03, .x=0x01, .y=0xae, .sp=0xc7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x01}, {.addr=0x3c3f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3c3f, .value=0xce, .type=IO_READ},
        {.addr=0x3c40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xfd49, .a=0xde, .x=0x80, .y=0x02, .sp=0x13, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x37}, {.addr=0xfd49, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfd4a, .a=0xde, .x=0x37, .y=0x02, .sp=0x14, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x37}, {.addr=0xfd49, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfd49, .value=0xce, .type=IO_READ},
        {.addr=0xfd4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x42eb, .a=0x81, .x=0xa8, .y=0x18, .sp=0xf5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x4a}, {.addr=0x42eb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x42ec, .a=0x81, .x=0x4a, .y=0x18, .sp=0xf6, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x4a}, {.addr=0x42eb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x42eb, .value=0xce, .type=IO_READ},
        {.addr=0x42ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xdbac, .a=0x85, .x=0x6c, .y=0xd2, .sp=0x6f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x63}, {.addr=0xdbac, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdbad, .a=0x85, .x=0x63, .y=0xd2, .sp=0x70, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x63}, {.addr=0xdbac, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdbac, .value=0xce, .type=IO_READ},
        {.addr=0xdbad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x4b28, .a=0xaa, .x=0xb8, .y=0xcf, .sp=0x83, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x50}, {.addr=0x4b28, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4b29, .a=0xaa, .x=0x50, .y=0xcf, .sp=0x84, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x50}, {.addr=0x4b28, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4b28, .value=0xce, .type=IO_READ},
        {.addr=0x4b29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xd44a, .a=0x64, .x=0x26, .y=0xe7, .sp=0x77, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xf9}, {.addr=0xd44a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd44b, .a=0x64, .x=0xf9, .y=0xe7, .sp=0x78, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xf9}, {.addr=0xd44a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd44a, .value=0xce, .type=IO_READ},
        {.addr=0xd44b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xcb57, .a=0x4f, .x=0x8e, .y=0xde, .sp=0xb2, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x15}, {.addr=0xcb57, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcb58, .a=0x4f, .x=0x15, .y=0xde, .sp=0xb3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x15}, {.addr=0xcb57, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcb57, .value=0xce, .type=IO_READ},
        {.addr=0xcb58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xe225, .a=0xae, .x=0x0c, .y=0x59, .sp=0x57, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xe9}, {.addr=0xe225, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe226, .a=0xae, .x=0xe9, .y=0x59, .sp=0x58, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xe9}, {.addr=0xe225, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe225, .value=0xce, .type=IO_READ},
        {.addr=0xe226, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xfafa, .a=0x9f, .x=0x65, .y=0x5d, .sp=0xc9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x50}, {.addr=0xfafa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfafb, .a=0x9f, .x=0x50, .y=0x5d, .sp=0xca, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x50}, {.addr=0xfafa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfafa, .value=0xce, .type=IO_READ},
        {.addr=0xfafb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x1096, .a=0x35, .x=0x0e, .y=0xef, .sp=0x26, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x7a}, {.addr=0x1096, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1097, .a=0x35, .x=0x7a, .y=0xef, .sp=0x27, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x7a}, {.addr=0x1096, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1096, .value=0xce, .type=IO_READ},
        {.addr=0x1097, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x10cf, .a=0xc3, .x=0x1a, .y=0x5b, .sp=0x5a, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xa8}, {.addr=0x10cf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x10d0, .a=0xc3, .x=0xa8, .y=0x5b, .sp=0x5b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xa8}, {.addr=0x10cf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x10cf, .value=0xce, .type=IO_READ},
        {.addr=0x10d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x13be, .a=0x00, .x=0x47, .y=0x7c, .sp=0x0d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x81}, {.addr=0x13be, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x13bf, .a=0x00, .x=0x81, .y=0x7c, .sp=0x0e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x81}, {.addr=0x13be, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x13be, .value=0xce, .type=IO_READ},
        {.addr=0x13bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xb0a5, .a=0xf6, .x=0xfe, .y=0x45, .sp=0xa5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x1b}, {.addr=0xb0a5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb0a6, .a=0xf6, .x=0x1b, .y=0x45, .sp=0xa6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x1b}, {.addr=0xb0a5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb0a5, .value=0xce, .type=IO_READ},
        {.addr=0xb0a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x873a, .a=0x47, .x=0xde, .y=0x2a, .sp=0xe0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x8a}, {.addr=0x873a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x873b, .a=0x47, .x=0x8a, .y=0x2a, .sp=0xe1, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x8a}, {.addr=0x873a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x873a, .value=0xce, .type=IO_READ},
        {.addr=0x873b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x878a, .a=0x70, .x=0x72, .y=0xff, .sp=0x44, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x69}, {.addr=0x878a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x878b, .a=0x70, .x=0x69, .y=0xff, .sp=0x45, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x69}, {.addr=0x878a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x878a, .value=0xce, .type=IO_READ},
        {.addr=0x878b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x0c24, .a=0xb0, .x=0x6f, .y=0x3d, .sp=0x63, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x6e}, {.addr=0x0c24, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0c25, .a=0xb0, .x=0x6e, .y=0x3d, .sp=0x64, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x6e}, {.addr=0x0c24, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0c24, .value=0xce, .type=IO_READ},
        {.addr=0x0c25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x69a3, .a=0x08, .x=0x67, .y=0xf3, .sp=0xae, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x66}, {.addr=0x69a3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x69a4, .a=0x08, .x=0x66, .y=0xf3, .sp=0xaf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x66}, {.addr=0x69a3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x69a3, .value=0xce, .type=IO_READ},
        {.addr=0x69a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xeeec, .a=0x03, .x=0x4d, .y=0x13, .sp=0x8a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x50}, {.addr=0xeeec, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeeed, .a=0x03, .x=0x50, .y=0x13, .sp=0x8b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x50}, {.addr=0xeeec, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeeec, .value=0xce, .type=IO_READ},
        {.addr=0xeeed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x4721, .a=0x36, .x=0x96, .y=0x33, .sp=0x3c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x4a}, {.addr=0x4721, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4722, .a=0x36, .x=0x4a, .y=0x33, .sp=0x3d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x4a}, {.addr=0x4721, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4721, .value=0xce, .type=IO_READ},
        {.addr=0x4722, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0d47, .a=0x5e, .x=0x6b, .y=0x0a, .sp=0x2f, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x28}, {.addr=0x0d47, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0d48, .a=0x5e, .x=0x28, .y=0x0a, .sp=0x30, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x28}, {.addr=0x0d47, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0d47, .value=0xce, .type=IO_READ},
        {.addr=0x0d48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x639d, .a=0xf2, .x=0xec, .y=0xbf, .sp=0x5f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xa1}, {.addr=0x639d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x639e, .a=0xf2, .x=0xa1, .y=0xbf, .sp=0x60, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xa1}, {.addr=0x639d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x639d, .value=0xce, .type=IO_READ},
        {.addr=0x639e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x8961, .a=0x19, .x=0x8a, .y=0xad, .sp=0x2c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x2d}, {.addr=0x8961, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8962, .a=0x19, .x=0x2d, .y=0xad, .sp=0x2d, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x2d}, {.addr=0x8961, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8961, .value=0xce, .type=IO_READ},
        {.addr=0x8962, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x6b37, .a=0x36, .x=0x79, .y=0x40, .sp=0xab, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x60}, {.addr=0x6b37, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6b38, .a=0x36, .x=0x60, .y=0x40, .sp=0xac, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x60}, {.addr=0x6b37, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6b37, .value=0xce, .type=IO_READ},
        {.addr=0x6b38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x024d, .a=0x79, .x=0x8b, .y=0x72, .sp=0xd1, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x04}, {.addr=0x024d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x024e, .a=0x79, .x=0x04, .y=0x72, .sp=0xd2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x04}, {.addr=0x024d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x024d, .value=0xce, .type=IO_READ},
        {.addr=0x024e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xda6e, .a=0xa9, .x=0x98, .y=0x75, .sp=0xf4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x25}, {.addr=0xda6e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xda6f, .a=0xa9, .x=0x25, .y=0x75, .sp=0xf5, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x25}, {.addr=0xda6e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xda6e, .value=0xce, .type=IO_READ},
        {.addr=0xda6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x7951, .a=0x96, .x=0x54, .y=0x38, .sp=0xb9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xd3}, {.addr=0x7951, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7952, .a=0x96, .x=0xd3, .y=0x38, .sp=0xba, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xd3}, {.addr=0x7951, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7951, .value=0xce, .type=IO_READ},
        {.addr=0x7952, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x113e, .a=0x18, .x=0x34, .y=0xcb, .sp=0xde, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x84}, {.addr=0x113e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x113f, .a=0x18, .x=0x84, .y=0xcb, .sp=0xdf, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x84}, {.addr=0x113e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x113e, .value=0xce, .type=IO_READ},
        {.addr=0x113f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x1306, .a=0x4e, .x=0x7e, .y=0x85, .sp=0x4d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x14}, {.addr=0x1306, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1307, .a=0x4e, .x=0x14, .y=0x85, .sp=0x4e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x14}, {.addr=0x1306, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1306, .value=0xce, .type=IO_READ},
        {.addr=0x1307, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x4be7, .a=0x48, .x=0x00, .y=0x8b, .sp=0xfb, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x94}, {.addr=0x4be7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4be8, .a=0x48, .x=0x94, .y=0x8b, .sp=0xfc, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x94}, {.addr=0x4be7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4be7, .value=0xce, .type=IO_READ},
        {.addr=0x4be8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xf95e, .a=0x87, .x=0x60, .y=0x1e, .sp=0x34, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xc7}, {.addr=0xf95e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf95f, .a=0x87, .x=0xc7, .y=0x1e, .sp=0x35, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xc7}, {.addr=0xf95e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf95e, .value=0xce, .type=IO_READ},
        {.addr=0xf95f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xed75, .a=0x97, .x=0x0d, .y=0x3b, .sp=0xf3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x18}, {.addr=0xed75, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xed76, .a=0x97, .x=0x18, .y=0x3b, .sp=0xf4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x18}, {.addr=0xed75, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xed75, .value=0xce, .type=IO_READ},
        {.addr=0xed76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x0059, .a=0xe1, .x=0x5b, .y=0xb6, .sp=0xfc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0xce}, {.addr=0x01fd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x005a, .a=0xe1, .x=0x4d, .y=0xb6, .sp=0xfd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xce}, {.addr=0x01fd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0059, .value=0xce, .type=IO_READ},
        {.addr=0x005a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xccb3, .a=0xb9, .x=0x20, .y=0x1f, .sp=0x69, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xea}, {.addr=0xccb3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xccb4, .a=0xb9, .x=0xea, .y=0x1f, .sp=0x6a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xea}, {.addr=0xccb3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xccb3, .value=0xce, .type=IO_READ},
        {.addr=0xccb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9f70, .a=0xd3, .x=0x37, .y=0x5a, .sp=0xfd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xd5}, {.addr=0x9f70, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9f71, .a=0xd3, .x=0xd5, .y=0x5a, .sp=0xfe, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xd5}, {.addr=0x9f70, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9f70, .value=0xce, .type=IO_READ},
        {.addr=0x9f71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xb9cb, .a=0xc5, .x=0xe5, .y=0xa7, .sp=0x5d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x20}, {.addr=0xb9cb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb9cc, .a=0xc5, .x=0x20, .y=0xa7, .sp=0x5e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x20}, {.addr=0xb9cb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb9cb, .value=0xce, .type=IO_READ},
        {.addr=0xb9cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xc34f, .a=0x98, .x=0x35, .y=0x14, .sp=0x94, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xf6}, {.addr=0xc34f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc350, .a=0x98, .x=0xf6, .y=0x14, .sp=0x95, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xf6}, {.addr=0xc34f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc34f, .value=0xce, .type=IO_READ},
        {.addr=0xc350, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xd3d7, .a=0x0f, .x=0x13, .y=0x93, .sp=0x99, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x4a}, {.addr=0xd3d7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd3d8, .a=0x0f, .x=0x4a, .y=0x93, .sp=0x9a, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x4a}, {.addr=0xd3d7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd3d7, .value=0xce, .type=IO_READ},
        {.addr=0xd3d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x8a90, .a=0xfd, .x=0xb8, .y=0x93, .sp=0x00, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x56}, {.addr=0x8a90, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8a91, .a=0xfd, .x=0x56, .y=0x93, .sp=0x01, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x56}, {.addr=0x8a90, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8a90, .value=0xce, .type=IO_READ},
        {.addr=0x8a91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x8256, .a=0x1f, .x=0x5c, .y=0x17, .sp=0x40, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xbd}, {.addr=0x8256, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8257, .a=0x1f, .x=0xbd, .y=0x17, .sp=0x41, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xbd}, {.addr=0x8256, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8256, .value=0xce, .type=IO_READ},
        {.addr=0x8257, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa1d0, .a=0x57, .x=0xf1, .y=0x05, .sp=0xf2, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xb5}, {.addr=0xa1d0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa1d1, .a=0x57, .x=0xb5, .y=0x05, .sp=0xf3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xb5}, {.addr=0xa1d0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa1d0, .value=0xce, .type=IO_READ},
        {.addr=0xa1d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1afb, .a=0xec, .x=0x35, .y=0x21, .sp=0x5e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x71}, {.addr=0x1afb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1afc, .a=0xec, .x=0x71, .y=0x21, .sp=0x5f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x71}, {.addr=0x1afb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1afb, .value=0xce, .type=IO_READ},
        {.addr=0x1afc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x652b, .a=0xbf, .x=0x9c, .y=0xdd, .sp=0xf4, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xc6}, {.addr=0x652b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x652c, .a=0xbf, .x=0xc6, .y=0xdd, .sp=0xf5, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xc6}, {.addr=0x652b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x652b, .value=0xce, .type=IO_READ},
        {.addr=0x652c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xa28d, .a=0x8b, .x=0x06, .y=0x5e, .sp=0xc0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x60}, {.addr=0xa28d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa28e, .a=0x8b, .x=0x60, .y=0x5e, .sp=0xc1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x60}, {.addr=0xa28d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa28d, .value=0xce, .type=IO_READ},
        {.addr=0xa28e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xabdf, .a=0x19, .x=0x5e, .y=0xc1, .sp=0x78, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x82}, {.addr=0xabdf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xabe0, .a=0x19, .x=0x82, .y=0xc1, .sp=0x79, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x82}, {.addr=0xabdf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xabdf, .value=0xce, .type=IO_READ},
        {.addr=0xabe0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x3fa9, .a=0xe3, .x=0xb8, .y=0x4a, .sp=0xee, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x52}, {.addr=0x3fa9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3faa, .a=0xe3, .x=0x52, .y=0x4a, .sp=0xef, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x52}, {.addr=0x3fa9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3fa9, .value=0xce, .type=IO_READ},
        {.addr=0x3faa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x7084, .a=0x01, .x=0x62, .y=0xaf, .sp=0x01, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xbe}, {.addr=0x7084, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7085, .a=0x01, .x=0xbe, .y=0xaf, .sp=0x02, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xbe}, {.addr=0x7084, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7084, .value=0xce, .type=IO_READ},
        {.addr=0x7085, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb293, .a=0x5f, .x=0x2e, .y=0xea, .sp=0x90, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xa8}, {.addr=0xb293, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb294, .a=0x5f, .x=0xa8, .y=0xea, .sp=0x91, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xa8}, {.addr=0xb293, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb293, .value=0xce, .type=IO_READ},
        {.addr=0xb294, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x35fc, .a=0xbe, .x=0x81, .y=0x7e, .sp=0x71, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x37}, {.addr=0x35fc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x35fd, .a=0xbe, .x=0x37, .y=0x7e, .sp=0x72, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x37}, {.addr=0x35fc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x35fc, .value=0xce, .type=IO_READ},
        {.addr=0x35fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xa58f, .a=0xf1, .x=0x3a, .y=0x6c, .sp=0xe5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xcb}, {.addr=0xa58f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa590, .a=0xf1, .x=0xcb, .y=0x6c, .sp=0xe6, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xcb}, {.addr=0xa58f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa58f, .value=0xce, .type=IO_READ},
        {.addr=0xa590, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x249c, .a=0xa2, .x=0xd3, .y=0x7d, .sp=0xed, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xc3}, {.addr=0x249c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x249d, .a=0xa2, .x=0xc3, .y=0x7d, .sp=0xee, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xc3}, {.addr=0x249c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x249c, .value=0xce, .type=IO_READ},
        {.addr=0x249d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x6207, .a=0x4c, .x=0xf8, .y=0xb6, .sp=0x3f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x8a}, {.addr=0x6207, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6208, .a=0x4c, .x=0x8a, .y=0xb6, .sp=0x40, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x8a}, {.addr=0x6207, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6207, .value=0xce, .type=IO_READ},
        {.addr=0x6208, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xce15, .a=0xc4, .x=0xff, .y=0x49, .sp=0x07, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x7f}, {.addr=0xce15, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xce16, .a=0xc4, .x=0x7f, .y=0x49, .sp=0x08, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x7f}, {.addr=0xce15, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xce15, .value=0xce, .type=IO_READ},
        {.addr=0xce16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xf039, .a=0x05, .x=0xa0, .y=0x24, .sp=0xef, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x55}, {.addr=0xf039, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf03a, .a=0x05, .x=0x55, .y=0x24, .sp=0xf0, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x55}, {.addr=0xf039, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf039, .value=0xce, .type=IO_READ},
        {.addr=0xf03a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xb522, .a=0xbc, .x=0x45, .y=0x41, .sp=0x67, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xbb}, {.addr=0xb522, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb523, .a=0xbc, .x=0xbb, .y=0x41, .sp=0x68, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xbb}, {.addr=0xb522, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb522, .value=0xce, .type=IO_READ},
        {.addr=0xb523, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xc930, .a=0x1f, .x=0x7c, .y=0xe1, .sp=0xad, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x09}, {.addr=0xc930, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc931, .a=0x1f, .x=0x09, .y=0xe1, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x09}, {.addr=0xc930, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc930, .value=0xce, .type=IO_READ},
        {.addr=0xc931, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x5fb3, .a=0x1e, .x=0xf4, .y=0x69, .sp=0xcc, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xaf}, {.addr=0x5fb3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5fb4, .a=0x1e, .x=0xaf, .y=0x69, .sp=0xcd, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xaf}, {.addr=0x5fb3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5fb3, .value=0xce, .type=IO_READ},
        {.addr=0x5fb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x06c6, .a=0x68, .x=0xaf, .y=0x63, .sp=0x43, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xbe}, {.addr=0x06c6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x06c7, .a=0x68, .x=0xbe, .y=0x63, .sp=0x44, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xbe}, {.addr=0x06c6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x06c6, .value=0xce, .type=IO_READ},
        {.addr=0x06c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xcc37, .a=0x9c, .x=0xf2, .y=0x63, .sp=0x19, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xad}, {.addr=0xcc37, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcc38, .a=0x9c, .x=0xad, .y=0x63, .sp=0x1a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xad}, {.addr=0xcc37, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcc37, .value=0xce, .type=IO_READ},
        {.addr=0xcc38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x8160, .a=0xac, .x=0x99, .y=0x63, .sp=0x5e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x41}, {.addr=0x8160, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8161, .a=0xac, .x=0x41, .y=0x63, .sp=0x5f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x41}, {.addr=0x8160, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8160, .value=0xce, .type=IO_READ},
        {.addr=0x8161, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x3aff, .a=0xff, .x=0xe6, .y=0x8e, .sp=0x31, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xc6}, {.addr=0x3aff, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3b00, .a=0xff, .x=0xc6, .y=0x8e, .sp=0x32, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xc6}, {.addr=0x3aff, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3aff, .value=0xce, .type=IO_READ},
        {.addr=0x3b00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x55a3, .a=0x7c, .x=0x2d, .y=0x82, .sp=0x01, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x61}, {.addr=0x55a3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x55a4, .a=0x7c, .x=0x61, .y=0x82, .sp=0x02, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x61}, {.addr=0x55a3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x55a3, .value=0xce, .type=IO_READ},
        {.addr=0x55a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x08f0, .a=0x7e, .x=0x94, .y=0xe7, .sp=0xe2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xc8}, {.addr=0x08f0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x08f1, .a=0x7e, .x=0xc8, .y=0xe7, .sp=0xe3, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xc8}, {.addr=0x08f0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x08f0, .value=0xce, .type=IO_READ},
        {.addr=0x08f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x7371, .a=0xf4, .x=0xa5, .y=0x1d, .sp=0xd0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x62}, {.addr=0x7371, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7372, .a=0xf4, .x=0x62, .y=0x1d, .sp=0xd1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x62}, {.addr=0x7371, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7371, .value=0xce, .type=IO_READ},
        {.addr=0x7372, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xa305, .a=0x27, .x=0x33, .y=0xa0, .sp=0xe4, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x52}, {.addr=0xa305, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa306, .a=0x27, .x=0x52, .y=0xa0, .sp=0xe5, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x52}, {.addr=0xa305, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa305, .value=0xce, .type=IO_READ},
        {.addr=0xa306, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x258f, .a=0x78, .x=0x5d, .y=0x9f, .sp=0x6c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xb0}, {.addr=0x258f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2590, .a=0x78, .x=0xb0, .y=0x9f, .sp=0x6d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xb0}, {.addr=0x258f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x258f, .value=0xce, .type=IO_READ},
        {.addr=0x2590, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xfa68, .a=0x47, .x=0xe0, .y=0x5e, .sp=0x0c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x0d}, {.addr=0xfa68, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfa69, .a=0x47, .x=0x0d, .y=0x5e, .sp=0x0d, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x0d}, {.addr=0xfa68, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfa68, .value=0xce, .type=IO_READ},
        {.addr=0xfa69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xbadf, .a=0x92, .x=0xbf, .y=0x8a, .sp=0x31, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x52}, {.addr=0xbadf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbae0, .a=0x92, .x=0x52, .y=0x8a, .sp=0x32, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x52}, {.addr=0xbadf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbadf, .value=0xce, .type=IO_READ},
        {.addr=0xbae0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xdffe, .a=0x70, .x=0xeb, .y=0x65, .sp=0x0c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xfd}, {.addr=0xdffe, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdfff, .a=0x70, .x=0xfd, .y=0x65, .sp=0x0d, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xfd}, {.addr=0xdffe, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdffe, .value=0xce, .type=IO_READ},
        {.addr=0xdfff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xd498, .a=0x28, .x=0x33, .y=0xf7, .sp=0xd4, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xfb}, {.addr=0xd498, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd499, .a=0x28, .x=0xfb, .y=0xf7, .sp=0xd5, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xfb}, {.addr=0xd498, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd498, .value=0xce, .type=IO_READ},
        {.addr=0xd499, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x4d3c, .a=0x77, .x=0x98, .y=0x01, .sp=0x94, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xc9}, {.addr=0x4d3c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4d3d, .a=0x77, .x=0xc9, .y=0x01, .sp=0x95, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xc9}, {.addr=0x4d3c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4d3c, .value=0xce, .type=IO_READ},
        {.addr=0x4d3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xebd7, .a=0x5f, .x=0x3e, .y=0xfa, .sp=0x8d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x8b}, {.addr=0xebd7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xebd8, .a=0x5f, .x=0x8b, .y=0xfa, .sp=0x8e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x8b}, {.addr=0xebd7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xebd7, .value=0xce, .type=IO_READ},
        {.addr=0xebd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x68d0, .a=0xe9, .x=0xec, .y=0x8b, .sp=0xbc, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x40}, {.addr=0x68d0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x68d1, .a=0xe9, .x=0x40, .y=0x8b, .sp=0xbd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x40}, {.addr=0x68d0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x68d0, .value=0xce, .type=IO_READ},
        {.addr=0x68d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x33e7, .a=0x38, .x=0xc4, .y=0x39, .sp=0x85, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xec}, {.addr=0x33e7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x33e8, .a=0x38, .x=0xec, .y=0x39, .sp=0x86, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xec}, {.addr=0x33e7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x33e7, .value=0xce, .type=IO_READ},
        {.addr=0x33e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x2e9f, .a=0x23, .x=0xd9, .y=0xb7, .sp=0x04, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xfb}, {.addr=0x2e9f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2ea0, .a=0x23, .x=0xfb, .y=0xb7, .sp=0x05, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xfb}, {.addr=0x2e9f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2e9f, .value=0xce, .type=IO_READ},
        {.addr=0x2ea0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x216b, .a=0x6e, .x=0xbb, .y=0x5a, .sp=0xa8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xe5}, {.addr=0x216b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x216c, .a=0x6e, .x=0xe5, .y=0x5a, .sp=0xa9, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xe5}, {.addr=0x216b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x216b, .value=0xce, .type=IO_READ},
        {.addr=0x216c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x364e, .a=0x7f, .x=0x97, .y=0x3b, .sp=0x82, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xe1}, {.addr=0x364e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x364f, .a=0x7f, .x=0xe1, .y=0x3b, .sp=0x83, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xe1}, {.addr=0x364e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x364e, .value=0xce, .type=IO_READ},
        {.addr=0x364f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x54e5, .a=0xce, .x=0xce, .y=0x4c, .sp=0xc7, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x04}, {.addr=0x54e5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x54e6, .a=0xce, .x=0x04, .y=0x4c, .sp=0xc8, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x04}, {.addr=0x54e5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x54e5, .value=0xce, .type=IO_READ},
        {.addr=0x54e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xc61c, .a=0x73, .x=0x84, .y=0x6d, .sp=0x8f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x27}, {.addr=0xc61c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc61d, .a=0x73, .x=0x27, .y=0x6d, .sp=0x90, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x27}, {.addr=0xc61c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc61c, .value=0xce, .type=IO_READ},
        {.addr=0xc61d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xb2cf, .a=0x74, .x=0xfe, .y=0xe5, .sp=0x6f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x40}, {.addr=0xb2cf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb2d0, .a=0x74, .x=0x40, .y=0xe5, .sp=0x70, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x40}, {.addr=0xb2cf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb2cf, .value=0xce, .type=IO_READ},
        {.addr=0xb2d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0100) {
    const struct CPU_State initial_cpu = {.pc=0x7e31, .a=0xa9, .x=0x2c, .y=0x51, .sp=0xaf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x78}, {.addr=0x7e31, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7e32, .a=0xa9, .x=0x78, .y=0x51, .sp=0xb0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x78}, {.addr=0x7e31, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7e31, .value=0xce, .type=IO_READ},
        {.addr=0x7e32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0101) {
    const struct CPU_State initial_cpu = {.pc=0x3cad, .a=0x3d, .x=0x3d, .y=0x86, .sp=0x2b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x9f}, {.addr=0x3cad, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3cae, .a=0x3d, .x=0x9f, .y=0x86, .sp=0x2c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x9f}, {.addr=0x3cad, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3cad, .value=0xce, .type=IO_READ},
        {.addr=0x3cae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0102) {
    const struct CPU_State initial_cpu = {.pc=0xcb5d, .a=0x98, .x=0xd6, .y=0x4d, .sp=0x5b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x6f}, {.addr=0xcb5d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcb5e, .a=0x98, .x=0x6f, .y=0x4d, .sp=0x5c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x6f}, {.addr=0xcb5d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcb5d, .value=0xce, .type=IO_READ},
        {.addr=0xcb5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0103) {
    const struct CPU_State initial_cpu = {.pc=0x83f8, .a=0x04, .x=0x4a, .y=0x06, .sp=0x20, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xbc}, {.addr=0x83f8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x83f9, .a=0x04, .x=0xbc, .y=0x06, .sp=0x21, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xbc}, {.addr=0x83f8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x83f8, .value=0xce, .type=IO_READ},
        {.addr=0x83f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0104) {
    const struct CPU_State initial_cpu = {.pc=0x6771, .a=0xcd, .x=0x10, .y=0x57, .sp=0x6e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x88}, {.addr=0x6771, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6772, .a=0xcd, .x=0x88, .y=0x57, .sp=0x6f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x88}, {.addr=0x6771, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6771, .value=0xce, .type=IO_READ},
        {.addr=0x6772, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0105) {
    const struct CPU_State initial_cpu = {.pc=0xc349, .a=0x29, .x=0x92, .y=0xda, .sp=0x0a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x7d}, {.addr=0xc349, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc34a, .a=0x29, .x=0x7d, .y=0xda, .sp=0x0b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x7d}, {.addr=0xc349, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc349, .value=0xce, .type=IO_READ},
        {.addr=0xc34a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0106) {
    const struct CPU_State initial_cpu = {.pc=0x1b47, .a=0x61, .x=0x6c, .y=0x10, .sp=0xb2, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xfb}, {.addr=0x1b47, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1b48, .a=0x61, .x=0xfb, .y=0x10, .sp=0xb3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xfb}, {.addr=0x1b47, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1b47, .value=0xce, .type=IO_READ},
        {.addr=0x1b48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0107) {
    const struct CPU_State initial_cpu = {.pc=0xea5b, .a=0xf4, .x=0x45, .y=0xa3, .sp=0x4f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xec}, {.addr=0xea5b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xea5c, .a=0xf4, .x=0xec, .y=0xa3, .sp=0x50, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xec}, {.addr=0xea5b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xea5b, .value=0xce, .type=IO_READ},
        {.addr=0xea5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0108) {
    const struct CPU_State initial_cpu = {.pc=0x2713, .a=0x5a, .x=0x84, .y=0xa6, .sp=0x18, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xe6}, {.addr=0x2713, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2714, .a=0x5a, .x=0xe6, .y=0xa6, .sp=0x19, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xe6}, {.addr=0x2713, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2713, .value=0xce, .type=IO_READ},
        {.addr=0x2714, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0109) {
    const struct CPU_State initial_cpu = {.pc=0x8762, .a=0x50, .x=0xd5, .y=0x7c, .sp=0xf0, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x18}, {.addr=0x8762, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8763, .a=0x50, .x=0x18, .y=0x7c, .sp=0xf1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x18}, {.addr=0x8762, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8762, .value=0xce, .type=IO_READ},
        {.addr=0x8763, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_010A) {
    const struct CPU_State initial_cpu = {.pc=0xe354, .a=0xae, .x=0x0e, .y=0x33, .sp=0x5a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x09}, {.addr=0xe354, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe355, .a=0xae, .x=0x09, .y=0x33, .sp=0x5b, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x09}, {.addr=0xe354, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe354, .value=0xce, .type=IO_READ},
        {.addr=0xe355, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1cb4, .a=0xea, .x=0xbf, .y=0x32, .sp=0x73, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xae}, {.addr=0x1cb4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1cb5, .a=0xea, .x=0xae, .y=0x32, .sp=0x74, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xae}, {.addr=0x1cb4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1cb4, .value=0xce, .type=IO_READ},
        {.addr=0x1cb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_010C) {
    const struct CPU_State initial_cpu = {.pc=0x8a9f, .a=0x11, .x=0x9d, .y=0x69, .sp=0x67, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x79}, {.addr=0x8a9f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8aa0, .a=0x11, .x=0x79, .y=0x69, .sp=0x68, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x79}, {.addr=0x8a9f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8a9f, .value=0xce, .type=IO_READ},
        {.addr=0x8aa0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_010D) {
    const struct CPU_State initial_cpu = {.pc=0x90ee, .a=0xd7, .x=0x8d, .y=0x43, .sp=0xde, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x67}, {.addr=0x90ee, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x90ef, .a=0xd7, .x=0x67, .y=0x43, .sp=0xdf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x67}, {.addr=0x90ee, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x90ee, .value=0xce, .type=IO_READ},
        {.addr=0x90ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_010E) {
    const struct CPU_State initial_cpu = {.pc=0xd9ae, .a=0xd5, .x=0x12, .y=0x5a, .sp=0x0c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x69}, {.addr=0xd9ae, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd9af, .a=0xd5, .x=0x69, .y=0x5a, .sp=0x0d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x69}, {.addr=0xd9ae, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd9ae, .value=0xce, .type=IO_READ},
        {.addr=0xd9af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_010F) {
    const struct CPU_State initial_cpu = {.pc=0x1cd5, .a=0x7b, .x=0x9c, .y=0x8f, .sp=0x6b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x39}, {.addr=0x1cd5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1cd6, .a=0x7b, .x=0x39, .y=0x8f, .sp=0x6c, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x39}, {.addr=0x1cd5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1cd5, .value=0xce, .type=IO_READ},
        {.addr=0x1cd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0110) {
    const struct CPU_State initial_cpu = {.pc=0x03ee, .a=0xe9, .x=0xd5, .y=0x27, .sp=0xcc, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x38}, {.addr=0x03ee, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x03ef, .a=0xe9, .x=0x38, .y=0x27, .sp=0xcd, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x38}, {.addr=0x03ee, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x03ee, .value=0xce, .type=IO_READ},
        {.addr=0x03ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0111) {
    const struct CPU_State initial_cpu = {.pc=0x6f43, .a=0x49, .x=0x49, .y=0x2e, .sp=0x5a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x7c}, {.addr=0x6f43, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6f44, .a=0x49, .x=0x7c, .y=0x2e, .sp=0x5b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x7c}, {.addr=0x6f43, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6f43, .value=0xce, .type=IO_READ},
        {.addr=0x6f44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0112) {
    const struct CPU_State initial_cpu = {.pc=0xe732, .a=0x85, .x=0x32, .y=0x41, .sp=0xf7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x50}, {.addr=0xe732, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe733, .a=0x85, .x=0x50, .y=0x41, .sp=0xf8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x50}, {.addr=0xe732, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe732, .value=0xce, .type=IO_READ},
        {.addr=0xe733, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0113) {
    const struct CPU_State initial_cpu = {.pc=0xe03e, .a=0x6e, .x=0x48, .y=0xfd, .sp=0xa2, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x23}, {.addr=0xe03e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe03f, .a=0x6e, .x=0x23, .y=0xfd, .sp=0xa3, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x23}, {.addr=0xe03e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe03e, .value=0xce, .type=IO_READ},
        {.addr=0xe03f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0114) {
    const struct CPU_State initial_cpu = {.pc=0x90c4, .a=0x95, .x=0x4e, .y=0x32, .sp=0x1b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xee}, {.addr=0x90c4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x90c5, .a=0x95, .x=0xee, .y=0x32, .sp=0x1c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xee}, {.addr=0x90c4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x90c4, .value=0xce, .type=IO_READ},
        {.addr=0x90c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0115) {
    const struct CPU_State initial_cpu = {.pc=0x04d9, .a=0x6e, .x=0x88, .y=0x41, .sp=0xf0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x59}, {.addr=0x04d9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x04da, .a=0x6e, .x=0x59, .y=0x41, .sp=0xf1, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x59}, {.addr=0x04d9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x04d9, .value=0xce, .type=IO_READ},
        {.addr=0x04da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0116) {
    const struct CPU_State initial_cpu = {.pc=0xeab7, .a=0x42, .x=0x06, .y=0x7b, .sp=0xb2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x07}, {.addr=0xeab7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeab8, .a=0x42, .x=0x07, .y=0x7b, .sp=0xb3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x07}, {.addr=0xeab7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeab7, .value=0xce, .type=IO_READ},
        {.addr=0xeab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0117) {
    const struct CPU_State initial_cpu = {.pc=0x78c9, .a=0xfa, .x=0xdc, .y=0x3a, .sp=0xd4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xdd}, {.addr=0x78c9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x78ca, .a=0xfa, .x=0xdd, .y=0x3a, .sp=0xd5, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xdd}, {.addr=0x78c9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x78c9, .value=0xce, .type=IO_READ},
        {.addr=0x78ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0118) {
    const struct CPU_State initial_cpu = {.pc=0x0f87, .a=0x68, .x=0x46, .y=0x87, .sp=0xc5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xb3}, {.addr=0x0f87, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0f88, .a=0x68, .x=0xb3, .y=0x87, .sp=0xc6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xb3}, {.addr=0x0f87, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0f87, .value=0xce, .type=IO_READ},
        {.addr=0x0f88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0119) {
    const struct CPU_State initial_cpu = {.pc=0x8998, .a=0x0d, .x=0x7c, .y=0xbb, .sp=0x4f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x2c}, {.addr=0x8998, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8999, .a=0x0d, .x=0x2c, .y=0xbb, .sp=0x50, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x2c}, {.addr=0x8998, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8998, .value=0xce, .type=IO_READ},
        {.addr=0x8999, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_011A) {
    const struct CPU_State initial_cpu = {.pc=0x6a2c, .a=0x08, .x=0x6d, .y=0xc0, .sp=0x1d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x4c}, {.addr=0x6a2c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6a2d, .a=0x08, .x=0x4c, .y=0xc0, .sp=0x1e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x4c}, {.addr=0x6a2c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6a2c, .value=0xce, .type=IO_READ},
        {.addr=0x6a2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_011B) {
    const struct CPU_State initial_cpu = {.pc=0xe8aa, .a=0xa5, .x=0xfe, .y=0x24, .sp=0x10, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xbe}, {.addr=0xe8aa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe8ab, .a=0xa5, .x=0xbe, .y=0x24, .sp=0x11, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xbe}, {.addr=0xe8aa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe8aa, .value=0xce, .type=IO_READ},
        {.addr=0xe8ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_011C) {
    const struct CPU_State initial_cpu = {.pc=0xf2a1, .a=0x5b, .x=0x28, .y=0x46, .sp=0x0f, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x99}, {.addr=0xf2a1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf2a2, .a=0x5b, .x=0x99, .y=0x46, .sp=0x10, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x99}, {.addr=0xf2a1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf2a1, .value=0xce, .type=IO_READ},
        {.addr=0xf2a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_011D) {
    const struct CPU_State initial_cpu = {.pc=0x372a, .a=0x90, .x=0x69, .y=0xcf, .sp=0x3d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x372a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x372b, .a=0x90, .x=0x00, .y=0xcf, .sp=0x3e, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x372a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x372a, .value=0xce, .type=IO_READ},
        {.addr=0x372b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_011E) {
    const struct CPU_State initial_cpu = {.pc=0xc76f, .a=0xe8, .x=0x5a, .y=0x9f, .sp=0xf4, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xe5}, {.addr=0xc76f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc770, .a=0xe8, .x=0xe5, .y=0x9f, .sp=0xf5, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe5}, {.addr=0xc76f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc76f, .value=0xce, .type=IO_READ},
        {.addr=0xc770, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_011F) {
    const struct CPU_State initial_cpu = {.pc=0x4c80, .a=0x46, .x=0xe8, .y=0x46, .sp=0x1e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x48}, {.addr=0x4c80, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4c81, .a=0x46, .x=0x48, .y=0x46, .sp=0x1f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x48}, {.addr=0x4c80, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4c80, .value=0xce, .type=IO_READ},
        {.addr=0x4c81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0120) {
    const struct CPU_State initial_cpu = {.pc=0x03d7, .a=0x91, .x=0xa9, .y=0xdb, .sp=0xb5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x0b}, {.addr=0x03d7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x03d8, .a=0x91, .x=0x0b, .y=0xdb, .sp=0xb6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x0b}, {.addr=0x03d7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x03d7, .value=0xce, .type=IO_READ},
        {.addr=0x03d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0121) {
    const struct CPU_State initial_cpu = {.pc=0xdee7, .a=0x84, .x=0xf0, .y=0x6a, .sp=0xc3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x93}, {.addr=0xdee7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdee8, .a=0x84, .x=0x93, .y=0x6a, .sp=0xc4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x93}, {.addr=0xdee7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdee7, .value=0xce, .type=IO_READ},
        {.addr=0xdee8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0122) {
    const struct CPU_State initial_cpu = {.pc=0x0ec5, .a=0xbd, .x=0x06, .y=0x6c, .sp=0x5d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x67}, {.addr=0x0ec5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0ec6, .a=0xbd, .x=0x67, .y=0x6c, .sp=0x5e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x67}, {.addr=0x0ec5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0ec5, .value=0xce, .type=IO_READ},
        {.addr=0x0ec6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0123) {
    const struct CPU_State initial_cpu = {.pc=0x68dd, .a=0xa3, .x=0x4e, .y=0xd2, .sp=0x83, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x09}, {.addr=0x68dd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x68de, .a=0xa3, .x=0x09, .y=0xd2, .sp=0x84, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x09}, {.addr=0x68dd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x68dd, .value=0xce, .type=IO_READ},
        {.addr=0x68de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0124) {
    const struct CPU_State initial_cpu = {.pc=0x082e, .a=0xeb, .x=0x23, .y=0xf6, .sp=0xd7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xf1}, {.addr=0x082e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x082f, .a=0xeb, .x=0xf1, .y=0xf6, .sp=0xd8, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xf1}, {.addr=0x082e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x082e, .value=0xce, .type=IO_READ},
        {.addr=0x082f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0125) {
    const struct CPU_State initial_cpu = {.pc=0x0497, .a=0x50, .x=0x6e, .y=0x54, .sp=0x76, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0xab}, {.addr=0x0497, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0498, .a=0x50, .x=0xab, .y=0x54, .sp=0x77, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xab}, {.addr=0x0497, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0497, .value=0xce, .type=IO_READ},
        {.addr=0x0498, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0126) {
    const struct CPU_State initial_cpu = {.pc=0x5dd8, .a=0x70, .x=0xa9, .y=0x4d, .sp=0xe6, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xfd}, {.addr=0x5dd8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5dd9, .a=0x70, .x=0xfd, .y=0x4d, .sp=0xe7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xfd}, {.addr=0x5dd8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5dd8, .value=0xce, .type=IO_READ},
        {.addr=0x5dd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0127) {
    const struct CPU_State initial_cpu = {.pc=0x090c, .a=0x8c, .x=0x64, .y=0xfd, .sp=0x5b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x90}, {.addr=0x090c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x090d, .a=0x8c, .x=0x90, .y=0xfd, .sp=0x5c, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x90}, {.addr=0x090c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x090c, .value=0xce, .type=IO_READ},
        {.addr=0x090d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3699, .a=0xa6, .x=0x56, .y=0x70, .sp=0x02, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x72}, {.addr=0x3699, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x369a, .a=0xa6, .x=0x72, .y=0x70, .sp=0x03, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x72}, {.addr=0x3699, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3699, .value=0xce, .type=IO_READ},
        {.addr=0x369a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0129) {
    const struct CPU_State initial_cpu = {.pc=0xf92d, .a=0x59, .x=0x4a, .y=0xbe, .sp=0x8e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xef}, {.addr=0xf92d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf92e, .a=0x59, .x=0xef, .y=0xbe, .sp=0x8f, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xef}, {.addr=0xf92d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf92d, .value=0xce, .type=IO_READ},
        {.addr=0xf92e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_012A) {
    const struct CPU_State initial_cpu = {.pc=0xcbc4, .a=0x11, .x=0x1d, .y=0x24, .sp=0x29, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xec}, {.addr=0xcbc4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcbc5, .a=0x11, .x=0xec, .y=0x24, .sp=0x2a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xec}, {.addr=0xcbc4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcbc4, .value=0xce, .type=IO_READ},
        {.addr=0xcbc5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_012B) {
    const struct CPU_State initial_cpu = {.pc=0xd319, .a=0x3d, .x=0xde, .y=0x86, .sp=0x68, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x44}, {.addr=0xd319, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd31a, .a=0x3d, .x=0x44, .y=0x86, .sp=0x69, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x44}, {.addr=0xd319, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd319, .value=0xce, .type=IO_READ},
        {.addr=0xd31a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_012C) {
    const struct CPU_State initial_cpu = {.pc=0xc5c1, .a=0x3c, .x=0xee, .y=0x2a, .sp=0x86, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x17}, {.addr=0xc5c1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc5c2, .a=0x3c, .x=0x17, .y=0x2a, .sp=0x87, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x17}, {.addr=0xc5c1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc5c1, .value=0xce, .type=IO_READ},
        {.addr=0xc5c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_012D) {
    const struct CPU_State initial_cpu = {.pc=0x0e2a, .a=0x40, .x=0x82, .y=0x6a, .sp=0x87, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x3d}, {.addr=0x0e2a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0e2b, .a=0x40, .x=0x3d, .y=0x6a, .sp=0x88, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x3d}, {.addr=0x0e2a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0e2a, .value=0xce, .type=IO_READ},
        {.addr=0x0e2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_012E) {
    const struct CPU_State initial_cpu = {.pc=0x7bf5, .a=0xc6, .x=0xcc, .y=0x06, .sp=0x41, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x6c}, {.addr=0x7bf5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7bf6, .a=0xc6, .x=0x6c, .y=0x06, .sp=0x42, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x6c}, {.addr=0x7bf5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7bf5, .value=0xce, .type=IO_READ},
        {.addr=0x7bf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0142, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_012F) {
    const struct CPU_State initial_cpu = {.pc=0xb909, .a=0xee, .x=0xaa, .y=0x0e, .sp=0x68, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x79}, {.addr=0xb909, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb90a, .a=0xee, .x=0x79, .y=0x0e, .sp=0x69, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x79}, {.addr=0xb909, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb909, .value=0xce, .type=IO_READ},
        {.addr=0xb90a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0130) {
    const struct CPU_State initial_cpu = {.pc=0xe26b, .a=0xd9, .x=0xa5, .y=0x58, .sp=0x6b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x4f}, {.addr=0xe26b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe26c, .a=0xd9, .x=0x4f, .y=0x58, .sp=0x6c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x4f}, {.addr=0xe26b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe26b, .value=0xce, .type=IO_READ},
        {.addr=0xe26c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0131) {
    const struct CPU_State initial_cpu = {.pc=0xae35, .a=0x92, .x=0x80, .y=0x9a, .sp=0xf1, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xcf}, {.addr=0xae35, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xae36, .a=0x92, .x=0xcf, .y=0x9a, .sp=0xf2, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xcf}, {.addr=0xae35, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xae35, .value=0xce, .type=IO_READ},
        {.addr=0xae36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0132) {
    const struct CPU_State initial_cpu = {.pc=0x5ee6, .a=0xa8, .x=0xca, .y=0xf7, .sp=0xf4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xcf}, {.addr=0x5ee6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5ee7, .a=0xa8, .x=0xcf, .y=0xf7, .sp=0xf5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xcf}, {.addr=0x5ee6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5ee6, .value=0xce, .type=IO_READ},
        {.addr=0x5ee7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0133) {
    const struct CPU_State initial_cpu = {.pc=0x0c03, .a=0x80, .x=0xfc, .y=0x8a, .sp=0x32, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x01}, {.addr=0x0c03, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0c04, .a=0x80, .x=0x01, .y=0x8a, .sp=0x33, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x01}, {.addr=0x0c03, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0c03, .value=0xce, .type=IO_READ},
        {.addr=0x0c04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0134) {
    const struct CPU_State initial_cpu = {.pc=0x6abc, .a=0x91, .x=0x55, .y=0xf9, .sp=0xfe, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xb5}, {.addr=0x6abc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6abd, .a=0x91, .x=0xb5, .y=0xf9, .sp=0xff, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xb5}, {.addr=0x6abc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6abc, .value=0xce, .type=IO_READ},
        {.addr=0x6abd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0135) {
    const struct CPU_State initial_cpu = {.pc=0x98e5, .a=0x95, .x=0x4d, .y=0x17, .sp=0x57, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xec}, {.addr=0x98e5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x98e6, .a=0x95, .x=0xec, .y=0x17, .sp=0x58, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xec}, {.addr=0x98e5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x98e5, .value=0xce, .type=IO_READ},
        {.addr=0x98e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0136) {
    const struct CPU_State initial_cpu = {.pc=0x4e65, .a=0x39, .x=0x88, .y=0xbf, .sp=0x96, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x7c}, {.addr=0x4e65, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4e66, .a=0x39, .x=0x7c, .y=0xbf, .sp=0x97, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x7c}, {.addr=0x4e65, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4e65, .value=0xce, .type=IO_READ},
        {.addr=0x4e66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0137) {
    const struct CPU_State initial_cpu = {.pc=0x99d8, .a=0xab, .x=0x54, .y=0x2f, .sp=0x1b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x23}, {.addr=0x99d8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x99d9, .a=0xab, .x=0x23, .y=0x2f, .sp=0x1c, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x23}, {.addr=0x99d8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x99d8, .value=0xce, .type=IO_READ},
        {.addr=0x99d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0138) {
    const struct CPU_State initial_cpu = {.pc=0x929e, .a=0x8f, .x=0xf8, .y=0x6f, .sp=0x1c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x80}, {.addr=0x929e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x929f, .a=0x8f, .x=0x80, .y=0x6f, .sp=0x1d, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x80}, {.addr=0x929e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x929e, .value=0xce, .type=IO_READ},
        {.addr=0x929f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0139) {
    const struct CPU_State initial_cpu = {.pc=0x6dc5, .a=0x74, .x=0x00, .y=0xa1, .sp=0x01, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xbf}, {.addr=0x6dc5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6dc6, .a=0x74, .x=0xbf, .y=0xa1, .sp=0x02, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xbf}, {.addr=0x6dc5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6dc5, .value=0xce, .type=IO_READ},
        {.addr=0x6dc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_013A) {
    const struct CPU_State initial_cpu = {.pc=0x3680, .a=0xdc, .x=0x5a, .y=0x94, .sp=0xbb, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x78}, {.addr=0x3680, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3681, .a=0xdc, .x=0x78, .y=0x94, .sp=0xbc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x78}, {.addr=0x3680, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3680, .value=0xce, .type=IO_READ},
        {.addr=0x3681, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_013B) {
    const struct CPU_State initial_cpu = {.pc=0xfed8, .a=0xff, .x=0x92, .y=0x0d, .sp=0xc4, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x8b}, {.addr=0xfed8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfed9, .a=0xff, .x=0x8b, .y=0x0d, .sp=0xc5, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x8b}, {.addr=0xfed8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfed8, .value=0xce, .type=IO_READ},
        {.addr=0xfed9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_013C) {
    const struct CPU_State initial_cpu = {.pc=0x97c0, .a=0x3e, .x=0x65, .y=0x5b, .sp=0x4e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x6b}, {.addr=0x97c0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0x3e, .x=0x6b, .y=0x5b, .sp=0x4f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x6b}, {.addr=0x97c0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x97c0, .value=0xce, .type=IO_READ},
        {.addr=0x97c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_013D) {
    const struct CPU_State initial_cpu = {.pc=0xfca4, .a=0xa2, .x=0x4c, .y=0x5a, .sp=0xd3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x16}, {.addr=0xfca4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfca5, .a=0xa2, .x=0x16, .y=0x5a, .sp=0xd4, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x16}, {.addr=0xfca4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfca4, .value=0xce, .type=IO_READ},
        {.addr=0xfca5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_013E) {
    const struct CPU_State initial_cpu = {.pc=0xa08d, .a=0xd5, .x=0x2f, .y=0xe1, .sp=0x12, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x30}, {.addr=0xa08d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa08e, .a=0xd5, .x=0x30, .y=0xe1, .sp=0x13, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x30}, {.addr=0xa08d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa08d, .value=0xce, .type=IO_READ},
        {.addr=0xa08e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_013F) {
    const struct CPU_State initial_cpu = {.pc=0xbe6b, .a=0x41, .x=0xd7, .y=0x90, .sp=0x1c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x3d}, {.addr=0xbe6b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbe6c, .a=0x41, .x=0x3d, .y=0x90, .sp=0x1d, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x3d}, {.addr=0xbe6b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbe6b, .value=0xce, .type=IO_READ},
        {.addr=0xbe6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0140) {
    const struct CPU_State initial_cpu = {.pc=0xeaa3, .a=0xf8, .x=0xd1, .y=0x82, .sp=0x5b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x09}, {.addr=0xeaa3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeaa4, .a=0xf8, .x=0x09, .y=0x82, .sp=0x5c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x09}, {.addr=0xeaa3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeaa3, .value=0xce, .type=IO_READ},
        {.addr=0xeaa4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0141) {
    const struct CPU_State initial_cpu = {.pc=0x3ceb, .a=0xc8, .x=0x05, .y=0xf0, .sp=0x52, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x84}, {.addr=0x3ceb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3cec, .a=0xc8, .x=0x84, .y=0xf0, .sp=0x53, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x84}, {.addr=0x3ceb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3ceb, .value=0xce, .type=IO_READ},
        {.addr=0x3cec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0142) {
    const struct CPU_State initial_cpu = {.pc=0xbf6a, .a=0xa9, .x=0x49, .y=0xd9, .sp=0xef, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x3d}, {.addr=0xbf6a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbf6b, .a=0xa9, .x=0x3d, .y=0xd9, .sp=0xf0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x3d}, {.addr=0xbf6a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbf6a, .value=0xce, .type=IO_READ},
        {.addr=0xbf6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf402, .a=0x99, .x=0xa4, .y=0x10, .sp=0x3b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x3c}, {.addr=0xf402, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf403, .a=0x99, .x=0x3c, .y=0x10, .sp=0x3c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x3c}, {.addr=0xf402, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf402, .value=0xce, .type=IO_READ},
        {.addr=0xf403, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd9cb, .a=0x86, .x=0x08, .y=0xb7, .sp=0xb8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x72}, {.addr=0xd9cb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd9cc, .a=0x86, .x=0x72, .y=0xb7, .sp=0xb9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x72}, {.addr=0xd9cb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd9cb, .value=0xce, .type=IO_READ},
        {.addr=0xd9cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0145) {
    const struct CPU_State initial_cpu = {.pc=0x5223, .a=0x79, .x=0xc0, .y=0xe5, .sp=0x81, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x13}, {.addr=0x5223, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5224, .a=0x79, .x=0x13, .y=0xe5, .sp=0x82, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x13}, {.addr=0x5223, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5223, .value=0xce, .type=IO_READ},
        {.addr=0x5224, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0146) {
    const struct CPU_State initial_cpu = {.pc=0x7fb4, .a=0xf9, .x=0x37, .y=0xe2, .sp=0x04, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x5f}, {.addr=0x7fb4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7fb5, .a=0xf9, .x=0x5f, .y=0xe2, .sp=0x05, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x5f}, {.addr=0x7fb4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7fb4, .value=0xce, .type=IO_READ},
        {.addr=0x7fb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0147) {
    const struct CPU_State initial_cpu = {.pc=0x9ef2, .a=0xcb, .x=0x9c, .y=0x22, .sp=0x1e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x15}, {.addr=0x9ef2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9ef3, .a=0xcb, .x=0x15, .y=0x22, .sp=0x1f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x15}, {.addr=0x9ef2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9ef2, .value=0xce, .type=IO_READ},
        {.addr=0x9ef3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0148) {
    const struct CPU_State initial_cpu = {.pc=0x599b, .a=0xec, .x=0xd3, .y=0x33, .sp=0x0f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x4d}, {.addr=0x599b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x599c, .a=0xec, .x=0x4d, .y=0x33, .sp=0x10, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x4d}, {.addr=0x599b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x599b, .value=0xce, .type=IO_READ},
        {.addr=0x599c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0149) {
    const struct CPU_State initial_cpu = {.pc=0x77b2, .a=0xaa, .x=0xfc, .y=0xb9, .sp=0x30, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x58}, {.addr=0x77b2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x77b3, .a=0xaa, .x=0x58, .y=0xb9, .sp=0x31, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x58}, {.addr=0x77b2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x77b2, .value=0xce, .type=IO_READ},
        {.addr=0x77b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_014A) {
    const struct CPU_State initial_cpu = {.pc=0x997c, .a=0xf5, .x=0x03, .y=0xed, .sp=0x3e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x21}, {.addr=0x997c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x997d, .a=0xf5, .x=0x21, .y=0xed, .sp=0x3f, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x21}, {.addr=0x997c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x997c, .value=0xce, .type=IO_READ},
        {.addr=0x997d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_014B) {
    const struct CPU_State initial_cpu = {.pc=0x9718, .a=0x48, .x=0xab, .y=0x68, .sp=0x19, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xa5}, {.addr=0x9718, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9719, .a=0x48, .x=0xa5, .y=0x68, .sp=0x1a, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xa5}, {.addr=0x9718, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9718, .value=0xce, .type=IO_READ},
        {.addr=0x9719, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_014C) {
    const struct CPU_State initial_cpu = {.pc=0x8b03, .a=0x1a, .x=0x9f, .y=0x13, .sp=0x73, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x19}, {.addr=0x8b03, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8b04, .a=0x1a, .x=0x19, .y=0x13, .sp=0x74, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x19}, {.addr=0x8b03, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8b03, .value=0xce, .type=IO_READ},
        {.addr=0x8b04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_014D) {
    const struct CPU_State initial_cpu = {.pc=0xb9f7, .a=0x91, .x=0x32, .y=0xac, .sp=0x81, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xdd}, {.addr=0xb9f7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb9f8, .a=0x91, .x=0xdd, .y=0xac, .sp=0x82, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xdd}, {.addr=0xb9f7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb9f7, .value=0xce, .type=IO_READ},
        {.addr=0xb9f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_014E) {
    const struct CPU_State initial_cpu = {.pc=0xe550, .a=0xed, .x=0x38, .y=0xc6, .sp=0x4d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x38}, {.addr=0xe550, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe551, .a=0xed, .x=0x38, .y=0xc6, .sp=0x4e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x38}, {.addr=0xe550, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe550, .value=0xce, .type=IO_READ},
        {.addr=0xe551, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_014F) {
    const struct CPU_State initial_cpu = {.pc=0xb4e2, .a=0xca, .x=0x74, .y=0x18, .sp=0x05, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xbc}, {.addr=0xb4e2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb4e3, .a=0xca, .x=0xbc, .y=0x18, .sp=0x06, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xbc}, {.addr=0xb4e2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb4e2, .value=0xce, .type=IO_READ},
        {.addr=0xb4e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0150) {
    const struct CPU_State initial_cpu = {.pc=0x8ecf, .a=0x35, .x=0x36, .y=0x72, .sp=0xe5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xd1}, {.addr=0x8ecf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8ed0, .a=0x35, .x=0xd1, .y=0x72, .sp=0xe6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xd1}, {.addr=0x8ecf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8ecf, .value=0xce, .type=IO_READ},
        {.addr=0x8ed0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0151) {
    const struct CPU_State initial_cpu = {.pc=0x9c15, .a=0xf8, .x=0x33, .y=0x05, .sp=0x4e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x43}, {.addr=0x9c15, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9c16, .a=0xf8, .x=0x43, .y=0x05, .sp=0x4f, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x43}, {.addr=0x9c15, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9c15, .value=0xce, .type=IO_READ},
        {.addr=0x9c16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0152) {
    const struct CPU_State initial_cpu = {.pc=0x0a57, .a=0x82, .x=0xf6, .y=0x5e, .sp=0x23, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xf0}, {.addr=0x0a57, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0a58, .a=0x82, .x=0xf0, .y=0x5e, .sp=0x24, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xf0}, {.addr=0x0a57, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0a57, .value=0xce, .type=IO_READ},
        {.addr=0x0a58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0153) {
    const struct CPU_State initial_cpu = {.pc=0x4188, .a=0x0d, .x=0x85, .y=0x9e, .sp=0x7a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xe9}, {.addr=0x4188, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4189, .a=0x0d, .x=0xe9, .y=0x9e, .sp=0x7b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xe9}, {.addr=0x4188, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4188, .value=0xce, .type=IO_READ},
        {.addr=0x4189, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0154) {
    const struct CPU_State initial_cpu = {.pc=0x8be9, .a=0x2e, .x=0x49, .y=0x97, .sp=0x25, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x5d}, {.addr=0x8be9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8bea, .a=0x2e, .x=0x5d, .y=0x97, .sp=0x26, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x5d}, {.addr=0x8be9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8be9, .value=0xce, .type=IO_READ},
        {.addr=0x8bea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1a5e, .a=0x56, .x=0x5c, .y=0x97, .sp=0x22, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x54}, {.addr=0x1a5e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1a5f, .a=0x56, .x=0x54, .y=0x97, .sp=0x23, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x54}, {.addr=0x1a5e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1a5e, .value=0xce, .type=IO_READ},
        {.addr=0x1a5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0156) {
    const struct CPU_State initial_cpu = {.pc=0xeda3, .a=0x50, .x=0x90, .y=0xd9, .sp=0x62, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xcd}, {.addr=0xeda3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeda4, .a=0x50, .x=0xcd, .y=0xd9, .sp=0x63, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xcd}, {.addr=0xeda3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeda3, .value=0xce, .type=IO_READ},
        {.addr=0xeda4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0157) {
    const struct CPU_State initial_cpu = {.pc=0x1c2b, .a=0xf0, .x=0x89, .y=0x05, .sp=0x82, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xd0}, {.addr=0x1c2b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1c2c, .a=0xf0, .x=0xd0, .y=0x05, .sp=0x83, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xd0}, {.addr=0x1c2b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1c2b, .value=0xce, .type=IO_READ},
        {.addr=0x1c2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0158) {
    const struct CPU_State initial_cpu = {.pc=0x2db2, .a=0x60, .x=0xfe, .y=0x72, .sp=0x65, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x2a}, {.addr=0x2db2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2db3, .a=0x60, .x=0x2a, .y=0x72, .sp=0x66, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x2a}, {.addr=0x2db2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2db2, .value=0xce, .type=IO_READ},
        {.addr=0x2db3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0159) {
    const struct CPU_State initial_cpu = {.pc=0x6656, .a=0x21, .x=0xa2, .y=0x54, .sp=0xc0, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x5e}, {.addr=0x6656, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6657, .a=0x21, .x=0x5e, .y=0x54, .sp=0xc1, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x5e}, {.addr=0x6656, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6656, .value=0xce, .type=IO_READ},
        {.addr=0x6657, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_015A) {
    const struct CPU_State initial_cpu = {.pc=0xe3bd, .a=0xe9, .x=0xda, .y=0x77, .sp=0xf7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x5e}, {.addr=0xe3bd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe3be, .a=0xe9, .x=0x5e, .y=0x77, .sp=0xf8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x5e}, {.addr=0xe3bd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe3bd, .value=0xce, .type=IO_READ},
        {.addr=0xe3be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_015B) {
    const struct CPU_State initial_cpu = {.pc=0xefcc, .a=0x66, .x=0xa0, .y=0x68, .sp=0x37, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x7d}, {.addr=0xefcc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xefcd, .a=0x66, .x=0x7d, .y=0x68, .sp=0x38, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x7d}, {.addr=0xefcc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xefcc, .value=0xce, .type=IO_READ},
        {.addr=0xefcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_015C) {
    const struct CPU_State initial_cpu = {.pc=0x993b, .a=0xb5, .x=0x5f, .y=0xd2, .sp=0xff, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xe4}, {.addr=0x993b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x993c, .a=0xb5, .x=0xe4, .y=0xd2, .sp=0x00, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xe4}, {.addr=0x993b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x993b, .value=0xce, .type=IO_READ},
        {.addr=0x993c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_015D) {
    const struct CPU_State initial_cpu = {.pc=0xb35b, .a=0x68, .x=0x99, .y=0x14, .sp=0xaa, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xb7}, {.addr=0xb35b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb35c, .a=0x68, .x=0xb7, .y=0x14, .sp=0xab, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xb7}, {.addr=0xb35b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb35b, .value=0xce, .type=IO_READ},
        {.addr=0xb35c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_015E) {
    const struct CPU_State initial_cpu = {.pc=0x6329, .a=0xb3, .x=0x8c, .y=0x78, .sp=0xe6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x02}, {.addr=0x6329, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x632a, .a=0xb3, .x=0x02, .y=0x78, .sp=0xe7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x02}, {.addr=0x6329, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6329, .value=0xce, .type=IO_READ},
        {.addr=0x632a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_015F) {
    const struct CPU_State initial_cpu = {.pc=0xc014, .a=0x2c, .x=0xee, .y=0x10, .sp=0x88, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x32}, {.addr=0xc014, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc015, .a=0x2c, .x=0x32, .y=0x10, .sp=0x89, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x32}, {.addr=0xc014, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc014, .value=0xce, .type=IO_READ},
        {.addr=0xc015, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0160) {
    const struct CPU_State initial_cpu = {.pc=0x7783, .a=0x4f, .x=0x7c, .y=0x78, .sp=0xcd, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xdb}, {.addr=0x7783, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7784, .a=0x4f, .x=0xdb, .y=0x78, .sp=0xce, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xdb}, {.addr=0x7783, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7783, .value=0xce, .type=IO_READ},
        {.addr=0x7784, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0161) {
    const struct CPU_State initial_cpu = {.pc=0x8b77, .a=0xb4, .x=0x6d, .y=0xf9, .sp=0xc1, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x83}, {.addr=0x8b77, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8b78, .a=0xb4, .x=0x83, .y=0xf9, .sp=0xc2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x83}, {.addr=0x8b77, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8b77, .value=0xce, .type=IO_READ},
        {.addr=0x8b78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0162) {
    const struct CPU_State initial_cpu = {.pc=0x5483, .a=0x2e, .x=0x54, .y=0xb9, .sp=0x5c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xb6}, {.addr=0x5483, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5484, .a=0x2e, .x=0xb6, .y=0xb9, .sp=0x5d, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xb6}, {.addr=0x5483, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5483, .value=0xce, .type=IO_READ},
        {.addr=0x5484, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0163) {
    const struct CPU_State initial_cpu = {.pc=0xdd93, .a=0x4e, .x=0x15, .y=0xc7, .sp=0x84, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xbd}, {.addr=0xdd93, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdd94, .a=0x4e, .x=0xbd, .y=0xc7, .sp=0x85, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xbd}, {.addr=0xdd93, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdd93, .value=0xce, .type=IO_READ},
        {.addr=0xdd94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0164) {
    const struct CPU_State initial_cpu = {.pc=0x763b, .a=0xff, .x=0x53, .y=0x4f, .sp=0x16, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xa3}, {.addr=0x763b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x763c, .a=0xff, .x=0xa3, .y=0x4f, .sp=0x17, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xa3}, {.addr=0x763b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x763b, .value=0xce, .type=IO_READ},
        {.addr=0x763c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0165) {
    const struct CPU_State initial_cpu = {.pc=0x856b, .a=0x89, .x=0x48, .y=0x23, .sp=0xb5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x68}, {.addr=0x856b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x856c, .a=0x89, .x=0x68, .y=0x23, .sp=0xb6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x68}, {.addr=0x856b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x856b, .value=0xce, .type=IO_READ},
        {.addr=0x856c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0166) {
    const struct CPU_State initial_cpu = {.pc=0x34f3, .a=0x71, .x=0xd7, .y=0x77, .sp=0xba, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x8e}, {.addr=0x34f3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x34f4, .a=0x71, .x=0x8e, .y=0x77, .sp=0xbb, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x8e}, {.addr=0x34f3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x34f3, .value=0xce, .type=IO_READ},
        {.addr=0x34f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0167) {
    const struct CPU_State initial_cpu = {.pc=0xe9cc, .a=0xfd, .x=0x12, .y=0x32, .sp=0xa4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x31}, {.addr=0xe9cc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe9cd, .a=0xfd, .x=0x31, .y=0x32, .sp=0xa5, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x31}, {.addr=0xe9cc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe9cc, .value=0xce, .type=IO_READ},
        {.addr=0xe9cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0168) {
    const struct CPU_State initial_cpu = {.pc=0xc24a, .a=0x77, .x=0x8b, .y=0x3e, .sp=0x9d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x43}, {.addr=0xc24a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc24b, .a=0x77, .x=0x43, .y=0x3e, .sp=0x9e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x43}, {.addr=0xc24a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc24a, .value=0xce, .type=IO_READ},
        {.addr=0xc24b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0169) {
    const struct CPU_State initial_cpu = {.pc=0x494b, .a=0x66, .x=0x99, .y=0x98, .sp=0x8d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x64}, {.addr=0x494b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x494c, .a=0x66, .x=0x64, .y=0x98, .sp=0x8e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x64}, {.addr=0x494b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x494b, .value=0xce, .type=IO_READ},
        {.addr=0x494c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_016A) {
    const struct CPU_State initial_cpu = {.pc=0xe5db, .a=0x65, .x=0x2c, .y=0x71, .sp=0x2c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x58}, {.addr=0xe5db, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe5dc, .a=0x65, .x=0x58, .y=0x71, .sp=0x2d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x58}, {.addr=0xe5db, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe5db, .value=0xce, .type=IO_READ},
        {.addr=0xe5dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_016B) {
    const struct CPU_State initial_cpu = {.pc=0x4d42, .a=0x38, .x=0x1e, .y=0x7d, .sp=0x33, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xc3}, {.addr=0x4d42, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4d43, .a=0x38, .x=0xc3, .y=0x7d, .sp=0x34, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xc3}, {.addr=0x4d42, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4d42, .value=0xce, .type=IO_READ},
        {.addr=0x4d43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_016C) {
    const struct CPU_State initial_cpu = {.pc=0x0cac, .a=0xd7, .x=0xa1, .y=0x14, .sp=0x7f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x4c}, {.addr=0x0cac, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0cad, .a=0xd7, .x=0x4c, .y=0x14, .sp=0x80, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x4c}, {.addr=0x0cac, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0cac, .value=0xce, .type=IO_READ},
        {.addr=0x0cad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_016D) {
    const struct CPU_State initial_cpu = {.pc=0xa58a, .a=0x32, .x=0x1e, .y=0x84, .sp=0x47, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xac}, {.addr=0xa58a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa58b, .a=0x32, .x=0xac, .y=0x84, .sp=0x48, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xac}, {.addr=0xa58a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa58a, .value=0xce, .type=IO_READ},
        {.addr=0xa58b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_016E) {
    const struct CPU_State initial_cpu = {.pc=0x8672, .a=0xb2, .x=0xf4, .y=0xc4, .sp=0x2a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x81}, {.addr=0x8672, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8673, .a=0xb2, .x=0x81, .y=0xc4, .sp=0x2b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x81}, {.addr=0x8672, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8672, .value=0xce, .type=IO_READ},
        {.addr=0x8673, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_016F) {
    const struct CPU_State initial_cpu = {.pc=0xdb86, .a=0x16, .x=0x5b, .y=0x1d, .sp=0xe7, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xef}, {.addr=0xdb86, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdb87, .a=0x16, .x=0xef, .y=0x1d, .sp=0xe8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xef}, {.addr=0xdb86, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdb86, .value=0xce, .type=IO_READ},
        {.addr=0xdb87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0170) {
    const struct CPU_State initial_cpu = {.pc=0xf78d, .a=0x92, .x=0x30, .y=0x9c, .sp=0xe5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xe4}, {.addr=0xf78d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf78e, .a=0x92, .x=0xe4, .y=0x9c, .sp=0xe6, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xe4}, {.addr=0xf78d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf78d, .value=0xce, .type=IO_READ},
        {.addr=0xf78e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0171) {
    const struct CPU_State initial_cpu = {.pc=0xffca, .a=0x5d, .x=0x23, .y=0x2b, .sp=0x80, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xc5}, {.addr=0xffca, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xffcb, .a=0x5d, .x=0xc5, .y=0x2b, .sp=0x81, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc5}, {.addr=0xffca, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xffca, .value=0xce, .type=IO_READ},
        {.addr=0xffcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0172) {
    const struct CPU_State initial_cpu = {.pc=0x4e5b, .a=0x7c, .x=0x59, .y=0x24, .sp=0xd6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xf4}, {.addr=0x4e5b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4e5c, .a=0x7c, .x=0xf4, .y=0x24, .sp=0xd7, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xf4}, {.addr=0x4e5b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4e5b, .value=0xce, .type=IO_READ},
        {.addr=0x4e5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0173) {
    const struct CPU_State initial_cpu = {.pc=0x726b, .a=0x51, .x=0x8c, .y=0x51, .sp=0x33, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xed}, {.addr=0x726b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x726c, .a=0x51, .x=0xed, .y=0x51, .sp=0x34, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xed}, {.addr=0x726b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x726b, .value=0xce, .type=IO_READ},
        {.addr=0x726c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0174) {
    const struct CPU_State initial_cpu = {.pc=0x0691, .a=0x53, .x=0x4d, .y=0x4d, .sp=0x33, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x8c}, {.addr=0x0691, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0692, .a=0x53, .x=0x8c, .y=0x4d, .sp=0x34, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x8c}, {.addr=0x0691, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0691, .value=0xce, .type=IO_READ},
        {.addr=0x0692, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0175) {
    const struct CPU_State initial_cpu = {.pc=0x6b80, .a=0x59, .x=0x5f, .y=0x76, .sp=0x40, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xfc}, {.addr=0x6b80, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6b81, .a=0x59, .x=0xfc, .y=0x76, .sp=0x41, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xfc}, {.addr=0x6b80, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6b80, .value=0xce, .type=IO_READ},
        {.addr=0x6b81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0176) {
    const struct CPU_State initial_cpu = {.pc=0xa18e, .a=0xa3, .x=0xfe, .y=0x0e, .sp=0xb3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xf4}, {.addr=0xa18e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa18f, .a=0xa3, .x=0xf4, .y=0x0e, .sp=0xb4, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xf4}, {.addr=0xa18e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa18e, .value=0xce, .type=IO_READ},
        {.addr=0xa18f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0177) {
    const struct CPU_State initial_cpu = {.pc=0xf6a1, .a=0xc1, .x=0xb0, .y=0xd1, .sp=0xd4, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xda}, {.addr=0xf6a1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf6a2, .a=0xc1, .x=0xda, .y=0xd1, .sp=0xd5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xda}, {.addr=0xf6a1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf6a1, .value=0xce, .type=IO_READ},
        {.addr=0xf6a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0178) {
    const struct CPU_State initial_cpu = {.pc=0x6996, .a=0x01, .x=0x38, .y=0x0d, .sp=0xda, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xc2}, {.addr=0x6996, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6997, .a=0x01, .x=0xc2, .y=0x0d, .sp=0xdb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xc2}, {.addr=0x6996, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6996, .value=0xce, .type=IO_READ},
        {.addr=0x6997, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0179) {
    const struct CPU_State initial_cpu = {.pc=0x8cfe, .a=0x0e, .x=0x36, .y=0x45, .sp=0x0e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x78}, {.addr=0x8cfe, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8cff, .a=0x0e, .x=0x78, .y=0x45, .sp=0x0f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x78}, {.addr=0x8cfe, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8cfe, .value=0xce, .type=IO_READ},
        {.addr=0x8cff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_017A) {
    const struct CPU_State initial_cpu = {.pc=0x975f, .a=0xb9, .x=0x20, .y=0x51, .sp=0x8b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xea}, {.addr=0x975f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9760, .a=0xb9, .x=0xea, .y=0x51, .sp=0x8c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xea}, {.addr=0x975f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x975f, .value=0xce, .type=IO_READ},
        {.addr=0x9760, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_017B) {
    const struct CPU_State initial_cpu = {.pc=0xd54c, .a=0x75, .x=0x9a, .y=0x0f, .sp=0xf1, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x40}, {.addr=0xd54c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd54d, .a=0x75, .x=0x40, .y=0x0f, .sp=0xf2, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x40}, {.addr=0xd54c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd54c, .value=0xce, .type=IO_READ},
        {.addr=0xd54d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_017C) {
    const struct CPU_State initial_cpu = {.pc=0xde4e, .a=0xc2, .x=0x2f, .y=0xc6, .sp=0x8e, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x15}, {.addr=0xde4e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xde4f, .a=0xc2, .x=0x15, .y=0xc6, .sp=0x8f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x15}, {.addr=0xde4e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xde4e, .value=0xce, .type=IO_READ},
        {.addr=0xde4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_017D) {
    const struct CPU_State initial_cpu = {.pc=0x4290, .a=0xb3, .x=0x9d, .y=0xee, .sp=0xe6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xd3}, {.addr=0x4290, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4291, .a=0xb3, .x=0xd3, .y=0xee, .sp=0xe7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xd3}, {.addr=0x4290, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4290, .value=0xce, .type=IO_READ},
        {.addr=0x4291, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_017E) {
    const struct CPU_State initial_cpu = {.pc=0xbcea, .a=0x66, .x=0xa5, .y=0x51, .sp=0x5f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x41}, {.addr=0xbcea, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbceb, .a=0x66, .x=0x41, .y=0x51, .sp=0x60, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x41}, {.addr=0xbcea, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbcea, .value=0xce, .type=IO_READ},
        {.addr=0xbceb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_017F) {
    const struct CPU_State initial_cpu = {.pc=0x1dce, .a=0x5b, .x=0xae, .y=0xa6, .sp=0xe3, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x52}, {.addr=0x1dce, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1dcf, .a=0x5b, .x=0x52, .y=0xa6, .sp=0xe4, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x52}, {.addr=0x1dce, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1dce, .value=0xce, .type=IO_READ},
        {.addr=0x1dcf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0180) {
    const struct CPU_State initial_cpu = {.pc=0x3d3e, .a=0x20, .x=0xf9, .y=0x86, .sp=0xcf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xe0}, {.addr=0x3d3e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3d3f, .a=0x20, .x=0xe0, .y=0x86, .sp=0xd0, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xe0}, {.addr=0x3d3e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3d3e, .value=0xce, .type=IO_READ},
        {.addr=0x3d3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0181) {
    const struct CPU_State initial_cpu = {.pc=0x31f4, .a=0xea, .x=0x07, .y=0x0d, .sp=0xda, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x91}, {.addr=0x31f4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x31f5, .a=0xea, .x=0x91, .y=0x0d, .sp=0xdb, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x91}, {.addr=0x31f4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x31f4, .value=0xce, .type=IO_READ},
        {.addr=0x31f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0182) {
    const struct CPU_State initial_cpu = {.pc=0xcf6d, .a=0x14, .x=0x7f, .y=0x91, .sp=0xd5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x2e}, {.addr=0xcf6d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcf6e, .a=0x14, .x=0x2e, .y=0x91, .sp=0xd6, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x2e}, {.addr=0xcf6d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcf6d, .value=0xce, .type=IO_READ},
        {.addr=0xcf6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0183) {
    const struct CPU_State initial_cpu = {.pc=0x9b67, .a=0x7a, .x=0x24, .y=0xd7, .sp=0x07, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x47}, {.addr=0x9b67, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9b68, .a=0x7a, .x=0x47, .y=0xd7, .sp=0x08, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x47}, {.addr=0x9b67, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9b67, .value=0xce, .type=IO_READ},
        {.addr=0x9b68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0184) {
    const struct CPU_State initial_cpu = {.pc=0x7475, .a=0x78, .x=0xdd, .y=0x6c, .sp=0x18, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x89}, {.addr=0x7475, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7476, .a=0x78, .x=0x89, .y=0x6c, .sp=0x19, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x89}, {.addr=0x7475, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7475, .value=0xce, .type=IO_READ},
        {.addr=0x7476, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0185) {
    const struct CPU_State initial_cpu = {.pc=0x7898, .a=0xa0, .x=0x2d, .y=0xa6, .sp=0x02, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x14}, {.addr=0x7898, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7899, .a=0xa0, .x=0x14, .y=0xa6, .sp=0x03, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x14}, {.addr=0x7898, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7898, .value=0xce, .type=IO_READ},
        {.addr=0x7899, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb597, .a=0x32, .x=0xc7, .y=0x54, .sp=0xb1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xc3}, {.addr=0xb597, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb598, .a=0x32, .x=0xc3, .y=0x54, .sp=0xb2, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xc3}, {.addr=0xb597, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb597, .value=0xce, .type=IO_READ},
        {.addr=0xb598, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0187) {
    const struct CPU_State initial_cpu = {.pc=0xd1fb, .a=0x88, .x=0xd9, .y=0xbd, .sp=0x80, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x6a}, {.addr=0xd1fb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd1fc, .a=0x88, .x=0x6a, .y=0xbd, .sp=0x81, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x6a}, {.addr=0xd1fb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd1fb, .value=0xce, .type=IO_READ},
        {.addr=0xd1fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0188) {
    const struct CPU_State initial_cpu = {.pc=0x4931, .a=0xfe, .x=0xc1, .y=0xeb, .sp=0xf3, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x72}, {.addr=0x4931, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4932, .a=0xfe, .x=0x72, .y=0xeb, .sp=0xf4, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x72}, {.addr=0x4931, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4931, .value=0xce, .type=IO_READ},
        {.addr=0x4932, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0189) {
    const struct CPU_State initial_cpu = {.pc=0x038f, .a=0xf7, .x=0x63, .y=0xfc, .sp=0xc8, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xe4}, {.addr=0x038f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0390, .a=0xf7, .x=0xe4, .y=0xfc, .sp=0xc9, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xe4}, {.addr=0x038f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x038f, .value=0xce, .type=IO_READ},
        {.addr=0x0390, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_018A) {
    const struct CPU_State initial_cpu = {.pc=0x5d85, .a=0x4a, .x=0xfc, .y=0x81, .sp=0xf3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x7b}, {.addr=0x5d85, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5d86, .a=0x4a, .x=0x7b, .y=0x81, .sp=0xf4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x7b}, {.addr=0x5d85, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5d85, .value=0xce, .type=IO_READ},
        {.addr=0x5d86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_018B) {
    const struct CPU_State initial_cpu = {.pc=0xd09f, .a=0x58, .x=0xb1, .y=0x06, .sp=0x10, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xb7}, {.addr=0xd09f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd0a0, .a=0x58, .x=0xb7, .y=0x06, .sp=0x11, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xb7}, {.addr=0xd09f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd09f, .value=0xce, .type=IO_READ},
        {.addr=0xd0a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_018C) {
    const struct CPU_State initial_cpu = {.pc=0xcc56, .a=0x1f, .x=0x3b, .y=0xcf, .sp=0x86, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x60}, {.addr=0xcc56, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcc57, .a=0x1f, .x=0x60, .y=0xcf, .sp=0x87, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x60}, {.addr=0xcc56, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcc56, .value=0xce, .type=IO_READ},
        {.addr=0xcc57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_018D) {
    const struct CPU_State initial_cpu = {.pc=0x6367, .a=0x7a, .x=0x5c, .y=0x43, .sp=0xb8, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x16}, {.addr=0x6367, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6368, .a=0x7a, .x=0x16, .y=0x43, .sp=0xb9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x16}, {.addr=0x6367, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6367, .value=0xce, .type=IO_READ},
        {.addr=0x6368, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_018E) {
    const struct CPU_State initial_cpu = {.pc=0x4b9b, .a=0xef, .x=0x19, .y=0x1f, .sp=0xb9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x88}, {.addr=0x4b9b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4b9c, .a=0xef, .x=0x88, .y=0x1f, .sp=0xba, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x88}, {.addr=0x4b9b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4b9b, .value=0xce, .type=IO_READ},
        {.addr=0x4b9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_018F) {
    const struct CPU_State initial_cpu = {.pc=0xe098, .a=0xc1, .x=0x6d, .y=0x58, .sp=0x2c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xca}, {.addr=0xe098, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe099, .a=0xc1, .x=0xca, .y=0x58, .sp=0x2d, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xca}, {.addr=0xe098, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe098, .value=0xce, .type=IO_READ},
        {.addr=0xe099, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0190) {
    const struct CPU_State initial_cpu = {.pc=0x2d6a, .a=0xcc, .x=0x80, .y=0x90, .sp=0xdd, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xb0}, {.addr=0x2d6a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2d6b, .a=0xcc, .x=0xb0, .y=0x90, .sp=0xde, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xb0}, {.addr=0x2d6a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2d6a, .value=0xce, .type=IO_READ},
        {.addr=0x2d6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0191) {
    const struct CPU_State initial_cpu = {.pc=0x96ad, .a=0x40, .x=0x06, .y=0xbb, .sp=0xe8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xed}, {.addr=0x96ad, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x96ae, .a=0x40, .x=0xed, .y=0xbb, .sp=0xe9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xed}, {.addr=0x96ad, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x96ad, .value=0xce, .type=IO_READ},
        {.addr=0x96ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0192) {
    const struct CPU_State initial_cpu = {.pc=0x2341, .a=0x1b, .x=0x75, .y=0xd5, .sp=0xc7, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x4e}, {.addr=0x2341, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2342, .a=0x1b, .x=0x4e, .y=0xd5, .sp=0xc8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x4e}, {.addr=0x2341, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2341, .value=0xce, .type=IO_READ},
        {.addr=0x2342, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0193) {
    const struct CPU_State initial_cpu = {.pc=0x3639, .a=0xe6, .x=0x34, .y=0x6d, .sp=0x03, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x12}, {.addr=0x3639, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x363a, .a=0xe6, .x=0x12, .y=0x6d, .sp=0x04, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x12}, {.addr=0x3639, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3639, .value=0xce, .type=IO_READ},
        {.addr=0x363a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0194) {
    const struct CPU_State initial_cpu = {.pc=0xb898, .a=0x37, .x=0x6a, .y=0x1f, .sp=0x95, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xd2}, {.addr=0xb898, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb899, .a=0x37, .x=0xd2, .y=0x1f, .sp=0x96, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xd2}, {.addr=0xb898, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb898, .value=0xce, .type=IO_READ},
        {.addr=0xb899, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0195) {
    const struct CPU_State initial_cpu = {.pc=0xba26, .a=0x68, .x=0xca, .y=0xaa, .sp=0x89, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x52}, {.addr=0xba26, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xba27, .a=0x68, .x=0x52, .y=0xaa, .sp=0x8a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x52}, {.addr=0xba26, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xba26, .value=0xce, .type=IO_READ},
        {.addr=0xba27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0196) {
    const struct CPU_State initial_cpu = {.pc=0x20e2, .a=0xc2, .x=0xce, .y=0x6a, .sp=0xb8, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x65}, {.addr=0x20e2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x20e3, .a=0xc2, .x=0x65, .y=0x6a, .sp=0xb9, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x65}, {.addr=0x20e2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x20e2, .value=0xce, .type=IO_READ},
        {.addr=0x20e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0197) {
    const struct CPU_State initial_cpu = {.pc=0x4859, .a=0xa8, .x=0x4a, .y=0x87, .sp=0xb5, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xf0}, {.addr=0x4859, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x485a, .a=0xa8, .x=0xf0, .y=0x87, .sp=0xb6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xf0}, {.addr=0x4859, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4859, .value=0xce, .type=IO_READ},
        {.addr=0x485a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0198) {
    const struct CPU_State initial_cpu = {.pc=0x9a55, .a=0x52, .x=0x22, .y=0x06, .sp=0x4c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x10}, {.addr=0x9a55, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9a56, .a=0x52, .x=0x10, .y=0x06, .sp=0x4d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x10}, {.addr=0x9a55, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9a55, .value=0xce, .type=IO_READ},
        {.addr=0x9a56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0199) {
    const struct CPU_State initial_cpu = {.pc=0xd50b, .a=0x49, .x=0x98, .y=0x9c, .sp=0x7b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x8b}, {.addr=0xd50b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd50c, .a=0x49, .x=0x8b, .y=0x9c, .sp=0x7c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x8b}, {.addr=0xd50b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd50b, .value=0xce, .type=IO_READ},
        {.addr=0xd50c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_019A) {
    const struct CPU_State initial_cpu = {.pc=0x1368, .a=0x70, .x=0x3a, .y=0xe6, .sp=0x61, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x66}, {.addr=0x1368, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1369, .a=0x70, .x=0x66, .y=0xe6, .sp=0x62, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x66}, {.addr=0x1368, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1368, .value=0xce, .type=IO_READ},
        {.addr=0x1369, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_019B) {
    const struct CPU_State initial_cpu = {.pc=0xbd31, .a=0x6e, .x=0x53, .y=0x37, .sp=0x89, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x3e}, {.addr=0xbd31, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbd32, .a=0x6e, .x=0x3e, .y=0x37, .sp=0x8a, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x3e}, {.addr=0xbd31, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbd31, .value=0xce, .type=IO_READ},
        {.addr=0xbd32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_019C) {
    const struct CPU_State initial_cpu = {.pc=0x486b, .a=0x02, .x=0x5c, .y=0x36, .sp=0xb2, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xe6}, {.addr=0x486b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x486c, .a=0x02, .x=0xe6, .y=0x36, .sp=0xb3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xe6}, {.addr=0x486b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x486b, .value=0xce, .type=IO_READ},
        {.addr=0x486c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_019D) {
    const struct CPU_State initial_cpu = {.pc=0x8e56, .a=0x2c, .x=0x29, .y=0xea, .sp=0x7d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x4d}, {.addr=0x8e56, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8e57, .a=0x2c, .x=0x4d, .y=0xea, .sp=0x7e, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x4d}, {.addr=0x8e56, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8e56, .value=0xce, .type=IO_READ},
        {.addr=0x8e57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_019E) {
    const struct CPU_State initial_cpu = {.pc=0x0ce6, .a=0x31, .x=0x67, .y=0x8a, .sp=0xbb, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x93}, {.addr=0x0ce6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0ce7, .a=0x31, .x=0x93, .y=0x8a, .sp=0xbc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x93}, {.addr=0x0ce6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0ce6, .value=0xce, .type=IO_READ},
        {.addr=0x0ce7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_019F) {
    const struct CPU_State initial_cpu = {.pc=0x7bb0, .a=0x83, .x=0xd9, .y=0x46, .sp=0x92, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x94}, {.addr=0x7bb0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7bb1, .a=0x83, .x=0x94, .y=0x46, .sp=0x93, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x94}, {.addr=0x7bb0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7bb0, .value=0xce, .type=IO_READ},
        {.addr=0x7bb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x0d28, .a=0x86, .x=0xf8, .y=0x09, .sp=0xc2, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x1d}, {.addr=0x0d28, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0d29, .a=0x86, .x=0x1d, .y=0x09, .sp=0xc3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x1d}, {.addr=0x0d28, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0d28, .value=0xce, .type=IO_READ},
        {.addr=0x0d29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3b97, .a=0x75, .x=0xf2, .y=0xa0, .sp=0x9f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xc1}, {.addr=0x3b97, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3b98, .a=0x75, .x=0xc1, .y=0xa0, .sp=0xa0, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xc1}, {.addr=0x3b97, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3b97, .value=0xce, .type=IO_READ},
        {.addr=0x3b98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x7f27, .a=0xd2, .x=0x7b, .y=0xc7, .sp=0xf2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xf9}, {.addr=0x7f27, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7f28, .a=0xd2, .x=0xf9, .y=0xc7, .sp=0xf3, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xf9}, {.addr=0x7f27, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7f27, .value=0xce, .type=IO_READ},
        {.addr=0x7f28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x90f8, .a=0x7a, .x=0x39, .y=0xf2, .sp=0x09, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xf0}, {.addr=0x90f8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x90f9, .a=0x7a, .x=0xf0, .y=0xf2, .sp=0x0a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xf0}, {.addr=0x90f8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x90f8, .value=0xce, .type=IO_READ},
        {.addr=0x90f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xdb65, .a=0x54, .x=0xca, .y=0x5f, .sp=0x3c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x7d}, {.addr=0xdb65, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdb66, .a=0x54, .x=0x7d, .y=0x5f, .sp=0x3d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x7d}, {.addr=0xdb65, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdb65, .value=0xce, .type=IO_READ},
        {.addr=0xdb66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xc281, .a=0x00, .x=0x28, .y=0xed, .sp=0x82, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xc1}, {.addr=0xc281, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc282, .a=0x00, .x=0xc1, .y=0xed, .sp=0x83, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xc1}, {.addr=0xc281, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc281, .value=0xce, .type=IO_READ},
        {.addr=0xc282, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xc767, .a=0x9d, .x=0x21, .y=0x7a, .sp=0x80, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x54}, {.addr=0xc767, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc768, .a=0x9d, .x=0x54, .y=0x7a, .sp=0x81, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x54}, {.addr=0xc767, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc767, .value=0xce, .type=IO_READ},
        {.addr=0xc768, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xcf07, .a=0xac, .x=0x94, .y=0xc6, .sp=0xc9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x60}, {.addr=0xcf07, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcf08, .a=0xac, .x=0x60, .y=0xc6, .sp=0xca, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x60}, {.addr=0xcf07, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcf07, .value=0xce, .type=IO_READ},
        {.addr=0xcf08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xf8bc, .a=0xc8, .x=0xe4, .y=0x45, .sp=0x52, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x11}, {.addr=0xf8bc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf8bd, .a=0xc8, .x=0x11, .y=0x45, .sp=0x53, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x11}, {.addr=0xf8bc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf8bc, .value=0xce, .type=IO_READ},
        {.addr=0xf8bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x81a0, .a=0x14, .x=0xf5, .y=0x0d, .sp=0xe9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x2b}, {.addr=0x81a0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x81a1, .a=0x14, .x=0x2b, .y=0x0d, .sp=0xea, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x2b}, {.addr=0x81a0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x81a0, .value=0xce, .type=IO_READ},
        {.addr=0x81a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x6178, .a=0xc1, .x=0x1b, .y=0x02, .sp=0x15, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xd6}, {.addr=0x6178, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6179, .a=0xc1, .x=0xd6, .y=0x02, .sp=0x16, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xd6}, {.addr=0x6178, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6178, .value=0xce, .type=IO_READ},
        {.addr=0x6179, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xb200, .a=0x80, .x=0xec, .y=0xfb, .sp=0xa3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x2c}, {.addr=0xb200, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb201, .a=0x80, .x=0x2c, .y=0xfb, .sp=0xa4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x2c}, {.addr=0xb200, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb200, .value=0xce, .type=IO_READ},
        {.addr=0xb201, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xb9e4, .a=0x44, .x=0x00, .y=0x26, .sp=0x43, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x0c}, {.addr=0xb9e4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb9e5, .a=0x44, .x=0x0c, .y=0x26, .sp=0x44, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x0c}, {.addr=0xb9e4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb9e4, .value=0xce, .type=IO_READ},
        {.addr=0xb9e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x9f4e, .a=0x34, .x=0x16, .y=0x95, .sp=0xf5, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x1b}, {.addr=0x9f4e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9f4f, .a=0x34, .x=0x1b, .y=0x95, .sp=0xf6, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x1b}, {.addr=0x9f4e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9f4e, .value=0xce, .type=IO_READ},
        {.addr=0x9f4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x1117, .a=0x05, .x=0x39, .y=0xfa, .sp=0xa6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x10}, {.addr=0x1117, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1118, .a=0x05, .x=0x10, .y=0xfa, .sp=0xa7, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x10}, {.addr=0x1117, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1117, .value=0xce, .type=IO_READ},
        {.addr=0x1118, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x3687, .a=0x1f, .x=0xba, .y=0x9b, .sp=0x0f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x1a}, {.addr=0x3687, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3688, .a=0x1f, .x=0x1a, .y=0x9b, .sp=0x10, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x1a}, {.addr=0x3687, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3687, .value=0xce, .type=IO_READ},
        {.addr=0x3688, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xca46, .a=0x8c, .x=0x50, .y=0x8d, .sp=0xd2, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x01}, {.addr=0xca46, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xca47, .a=0x8c, .x=0x01, .y=0x8d, .sp=0xd3, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x01}, {.addr=0xca46, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xca46, .value=0xce, .type=IO_READ},
        {.addr=0xca47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xa9c8, .a=0x34, .x=0x9a, .y=0x43, .sp=0x25, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x04}, {.addr=0xa9c8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa9c9, .a=0x34, .x=0x04, .y=0x43, .sp=0x26, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x04}, {.addr=0xa9c8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa9c8, .value=0xce, .type=IO_READ},
        {.addr=0xa9c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x30cf, .a=0xbb, .x=0x9c, .y=0xe7, .sp=0xf5, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x22}, {.addr=0x30cf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x30d0, .a=0xbb, .x=0x22, .y=0xe7, .sp=0xf6, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x22}, {.addr=0x30cf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x30cf, .value=0xce, .type=IO_READ},
        {.addr=0x30d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x491e, .a=0x67, .x=0x77, .y=0xff, .sp=0x91, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xf9}, {.addr=0x491e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x491f, .a=0x67, .x=0xf9, .y=0xff, .sp=0x92, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xf9}, {.addr=0x491e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x491e, .value=0xce, .type=IO_READ},
        {.addr=0x491f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x44db, .a=0xab, .x=0x1f, .y=0x19, .sp=0x96, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x1e}, {.addr=0x44db, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x44dc, .a=0xab, .x=0x1e, .y=0x19, .sp=0x97, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x1e}, {.addr=0x44db, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x44db, .value=0xce, .type=IO_READ},
        {.addr=0x44dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xa28d, .a=0xb4, .x=0x87, .y=0xfc, .sp=0x29, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xbf}, {.addr=0xa28d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa28e, .a=0xb4, .x=0xbf, .y=0xfc, .sp=0x2a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xbf}, {.addr=0xa28d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa28d, .value=0xce, .type=IO_READ},
        {.addr=0xa28e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x7f20, .a=0x0d, .x=0x99, .y=0x2b, .sp=0x2e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x45}, {.addr=0x7f20, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7f21, .a=0x0d, .x=0x45, .y=0x2b, .sp=0x2f, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x45}, {.addr=0x7f20, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7f20, .value=0xce, .type=IO_READ},
        {.addr=0x7f21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x862e, .a=0x5b, .x=0x7f, .y=0x43, .sp=0x1e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x04}, {.addr=0x862e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x862f, .a=0x5b, .x=0x04, .y=0x43, .sp=0x1f, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x04}, {.addr=0x862e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x862e, .value=0xce, .type=IO_READ},
        {.addr=0x862f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x4b0b, .a=0xa5, .x=0xf3, .y=0x9b, .sp=0x7a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x53}, {.addr=0x4b0b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4b0c, .a=0xa5, .x=0x53, .y=0x9b, .sp=0x7b, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x53}, {.addr=0x4b0b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4b0b, .value=0xce, .type=IO_READ},
        {.addr=0x4b0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xebb3, .a=0xbc, .x=0x61, .y=0x42, .sp=0xfb, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x0d}, {.addr=0xebb3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xebb4, .a=0xbc, .x=0x0d, .y=0x42, .sp=0xfc, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x0d}, {.addr=0xebb3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xebb3, .value=0xce, .type=IO_READ},
        {.addr=0xebb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x42b0, .a=0x99, .x=0x14, .y=0x14, .sp=0x62, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xcb}, {.addr=0x42b0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x42b1, .a=0x99, .x=0xcb, .y=0x14, .sp=0x63, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xcb}, {.addr=0x42b0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x42b0, .value=0xce, .type=IO_READ},
        {.addr=0x42b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x1160, .a=0xdc, .x=0xe4, .y=0x9a, .sp=0x3a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xa0}, {.addr=0x1160, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1161, .a=0xdc, .x=0xa0, .y=0x9a, .sp=0x3b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xa0}, {.addr=0x1160, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1160, .value=0xce, .type=IO_READ},
        {.addr=0x1161, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x782d, .a=0x2c, .x=0x57, .y=0x88, .sp=0x36, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xd7}, {.addr=0x782d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x782e, .a=0x2c, .x=0xd7, .y=0x88, .sp=0x37, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xd7}, {.addr=0x782d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x782d, .value=0xce, .type=IO_READ},
        {.addr=0x782e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xf6a3, .a=0x8a, .x=0xd7, .y=0x23, .sp=0xd6, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xb7}, {.addr=0xf6a3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf6a4, .a=0x8a, .x=0xb7, .y=0x23, .sp=0xd7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xb7}, {.addr=0xf6a3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf6a3, .value=0xce, .type=IO_READ},
        {.addr=0xf6a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x3a51, .a=0x8e, .x=0x6f, .y=0x92, .sp=0x87, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x93}, {.addr=0x3a51, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3a52, .a=0x8e, .x=0x93, .y=0x92, .sp=0x88, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x93}, {.addr=0x3a51, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3a51, .value=0xce, .type=IO_READ},
        {.addr=0x3a52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0d1c, .a=0xf5, .x=0xa6, .y=0xa8, .sp=0x4b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x5f}, {.addr=0x0d1c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0d1d, .a=0xf5, .x=0x5f, .y=0xa8, .sp=0x4c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x5f}, {.addr=0x0d1c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0d1c, .value=0xce, .type=IO_READ},
        {.addr=0x0d1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x7d09, .a=0xc9, .x=0xcb, .y=0x4c, .sp=0x71, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xd5}, {.addr=0x7d09, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7d0a, .a=0xc9, .x=0xd5, .y=0x4c, .sp=0x72, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xd5}, {.addr=0x7d09, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7d09, .value=0xce, .type=IO_READ},
        {.addr=0x7d0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x94f3, .a=0x3e, .x=0xc8, .y=0x8c, .sp=0xe5, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x6e}, {.addr=0x94f3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x94f4, .a=0x3e, .x=0x6e, .y=0x8c, .sp=0xe6, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x6e}, {.addr=0x94f3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x94f3, .value=0xce, .type=IO_READ},
        {.addr=0x94f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x194f, .a=0xac, .x=0x11, .y=0xf6, .sp=0x67, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x59}, {.addr=0x194f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1950, .a=0xac, .x=0x59, .y=0xf6, .sp=0x68, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x59}, {.addr=0x194f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x194f, .value=0xce, .type=IO_READ},
        {.addr=0x1950, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x2644, .a=0xea, .x=0x31, .y=0xb7, .sp=0x0c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x3f}, {.addr=0x2644, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2645, .a=0xea, .x=0x3f, .y=0xb7, .sp=0x0d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x3f}, {.addr=0x2644, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2644, .value=0xce, .type=IO_READ},
        {.addr=0x2645, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x35ed, .a=0x3a, .x=0x03, .y=0x30, .sp=0x03, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x0d}, {.addr=0x35ed, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x35ee, .a=0x3a, .x=0x0d, .y=0x30, .sp=0x04, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x0d}, {.addr=0x35ed, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x35ed, .value=0xce, .type=IO_READ},
        {.addr=0x35ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x0bef, .a=0xea, .x=0x46, .y=0xb0, .sp=0x0a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x7b}, {.addr=0x0bef, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0bf0, .a=0xea, .x=0x7b, .y=0xb0, .sp=0x0b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x7b}, {.addr=0x0bef, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0bef, .value=0xce, .type=IO_READ},
        {.addr=0x0bf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xa629, .a=0xbb, .x=0x61, .y=0x3b, .sp=0x48, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x10}, {.addr=0xa629, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa62a, .a=0xbb, .x=0x10, .y=0x3b, .sp=0x49, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x10}, {.addr=0xa629, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa629, .value=0xce, .type=IO_READ},
        {.addr=0xa62a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x69ca, .a=0x76, .x=0x6f, .y=0x27, .sp=0x6a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x66}, {.addr=0x69ca, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x69cb, .a=0x76, .x=0x66, .y=0x27, .sp=0x6b, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x66}, {.addr=0x69ca, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x69ca, .value=0xce, .type=IO_READ},
        {.addr=0x69cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x381c, .a=0xbd, .x=0x56, .y=0xa2, .sp=0x4e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xea}, {.addr=0x381c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x381d, .a=0xbd, .x=0xea, .y=0xa2, .sp=0x4f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xea}, {.addr=0x381c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x381c, .value=0xce, .type=IO_READ},
        {.addr=0x381d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x5315, .a=0x2b, .x=0x46, .y=0xee, .sp=0x63, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x2f}, {.addr=0x5315, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5316, .a=0x2b, .x=0x2f, .y=0xee, .sp=0x64, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x2f}, {.addr=0x5315, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5315, .value=0xce, .type=IO_READ},
        {.addr=0x5316, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x4bff, .a=0x4b, .x=0xea, .y=0x44, .sp=0x09, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x0f}, {.addr=0x4bff, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4c00, .a=0x4b, .x=0x0f, .y=0x44, .sp=0x0a, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x0f}, {.addr=0x4bff, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4bff, .value=0xce, .type=IO_READ},
        {.addr=0x4c00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xd9b6, .a=0xff, .x=0xe6, .y=0xa9, .sp=0x6e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xcd}, {.addr=0xd9b6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd9b7, .a=0xff, .x=0xcd, .y=0xa9, .sp=0x6f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xcd}, {.addr=0xd9b6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd9b6, .value=0xce, .type=IO_READ},
        {.addr=0xd9b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x4161, .a=0xd1, .x=0x4e, .y=0x7e, .sp=0x73, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xa1}, {.addr=0x4161, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4162, .a=0xd1, .x=0xa1, .y=0x7e, .sp=0x74, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xa1}, {.addr=0x4161, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4161, .value=0xce, .type=IO_READ},
        {.addr=0x4162, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xfa78, .a=0xb6, .x=0x07, .y=0x2d, .sp=0x6b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xe1}, {.addr=0xfa78, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfa79, .a=0xb6, .x=0xe1, .y=0x2d, .sp=0x6c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xe1}, {.addr=0xfa78, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfa78, .value=0xce, .type=IO_READ},
        {.addr=0xfa79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x1f78, .a=0x59, .x=0x65, .y=0x22, .sp=0x53, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xa3}, {.addr=0x1f78, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1f79, .a=0x59, .x=0xa3, .y=0x22, .sp=0x54, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xa3}, {.addr=0x1f78, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1f78, .value=0xce, .type=IO_READ},
        {.addr=0x1f79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x6f5c, .a=0xf7, .x=0x02, .y=0xa7, .sp=0xcf, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x5c}, {.addr=0x6f5c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6f5d, .a=0xf7, .x=0x5c, .y=0xa7, .sp=0xd0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x5c}, {.addr=0x6f5c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6f5c, .value=0xce, .type=IO_READ},
        {.addr=0x6f5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x8de2, .a=0x49, .x=0x17, .y=0xfa, .sp=0x8f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xd5}, {.addr=0x8de2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8de3, .a=0x49, .x=0xd5, .y=0xfa, .sp=0x90, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xd5}, {.addr=0x8de2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8de2, .value=0xce, .type=IO_READ},
        {.addr=0x8de3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xb78f, .a=0x26, .x=0x5b, .y=0xa7, .sp=0x91, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x2a}, {.addr=0xb78f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb790, .a=0x26, .x=0x2a, .y=0xa7, .sp=0x92, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x2a}, {.addr=0xb78f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb78f, .value=0xce, .type=IO_READ},
        {.addr=0xb790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x7fb1, .a=0x0c, .x=0x1e, .y=0x81, .sp=0x35, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x55}, {.addr=0x7fb1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7fb2, .a=0x0c, .x=0x55, .y=0x81, .sp=0x36, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x55}, {.addr=0x7fb1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7fb1, .value=0xce, .type=IO_READ},
        {.addr=0x7fb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x9282, .a=0x0d, .x=0xe7, .y=0x87, .sp=0x9f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x68}, {.addr=0x9282, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9283, .a=0x0d, .x=0x68, .y=0x87, .sp=0xa0, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x68}, {.addr=0x9282, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9282, .value=0xce, .type=IO_READ},
        {.addr=0x9283, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xe57a, .a=0xcc, .x=0x35, .y=0xaf, .sp=0xc1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xd5}, {.addr=0xe57a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe57b, .a=0xcc, .x=0xd5, .y=0xaf, .sp=0xc2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xd5}, {.addr=0xe57a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe57a, .value=0xce, .type=IO_READ},
        {.addr=0xe57b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x4b03, .a=0xb4, .x=0x36, .y=0xf1, .sp=0x06, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x42}, {.addr=0x4b03, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4b04, .a=0xb4, .x=0x42, .y=0xf1, .sp=0x07, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x42}, {.addr=0x4b03, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4b03, .value=0xce, .type=IO_READ},
        {.addr=0x4b04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xc0f2, .a=0xcd, .x=0x71, .y=0x9f, .sp=0x1e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xac}, {.addr=0xc0f2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc0f3, .a=0xcd, .x=0xac, .y=0x9f, .sp=0x1f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xac}, {.addr=0xc0f2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc0f2, .value=0xce, .type=IO_READ},
        {.addr=0xc0f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x38bd, .a=0x76, .x=0x22, .y=0xce, .sp=0xe3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xef}, {.addr=0x38bd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x38be, .a=0x76, .x=0xef, .y=0xce, .sp=0xe4, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xef}, {.addr=0x38bd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x38bd, .value=0xce, .type=IO_READ},
        {.addr=0x38be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xecb5, .a=0xc0, .x=0x92, .y=0x65, .sp=0x45, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x27}, {.addr=0xecb5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xecb6, .a=0xc0, .x=0x27, .y=0x65, .sp=0x46, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x27}, {.addr=0xecb5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xecb5, .value=0xce, .type=IO_READ},
        {.addr=0xecb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xb823, .a=0xaa, .x=0xd1, .y=0x0e, .sp=0xbc, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x8c}, {.addr=0xb823, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb824, .a=0xaa, .x=0x8c, .y=0x0e, .sp=0xbd, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x8c}, {.addr=0xb823, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb823, .value=0xce, .type=IO_READ},
        {.addr=0xb824, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x75e4, .a=0x14, .x=0x3a, .y=0x0e, .sp=0x26, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x7b}, {.addr=0x75e4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x75e5, .a=0x14, .x=0x7b, .y=0x0e, .sp=0x27, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x7b}, {.addr=0x75e4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x75e4, .value=0xce, .type=IO_READ},
        {.addr=0x75e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x9e1d, .a=0x7b, .x=0xf9, .y=0xc2, .sp=0x9b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xc0}, {.addr=0x9e1d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9e1e, .a=0x7b, .x=0xc0, .y=0xc2, .sp=0x9c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xc0}, {.addr=0x9e1d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9e1d, .value=0xce, .type=IO_READ},
        {.addr=0x9e1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xfe43, .a=0xb7, .x=0xae, .y=0x58, .sp=0x98, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xd4}, {.addr=0xfe43, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfe44, .a=0xb7, .x=0xd4, .y=0x58, .sp=0x99, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xd4}, {.addr=0xfe43, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfe43, .value=0xce, .type=IO_READ},
        {.addr=0xfe44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xf6a7, .a=0x51, .x=0xdb, .y=0xe0, .sp=0xde, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x35}, {.addr=0xf6a7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf6a8, .a=0x51, .x=0x35, .y=0xe0, .sp=0xdf, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x35}, {.addr=0xf6a7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf6a7, .value=0xce, .type=IO_READ},
        {.addr=0xf6a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xf881, .a=0x16, .x=0x76, .y=0x32, .sp=0x71, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xf2}, {.addr=0xf881, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf882, .a=0x16, .x=0xf2, .y=0x32, .sp=0x72, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xf2}, {.addr=0xf881, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf881, .value=0xce, .type=IO_READ},
        {.addr=0xf882, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x5cb3, .a=0xe9, .x=0xcf, .y=0x68, .sp=0xdf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xe7}, {.addr=0x5cb3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5cb4, .a=0xe9, .x=0xe7, .y=0x68, .sp=0xe0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xe7}, {.addr=0x5cb3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5cb3, .value=0xce, .type=IO_READ},
        {.addr=0x5cb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xa781, .a=0x51, .x=0xce, .y=0x94, .sp=0xbf, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x85}, {.addr=0xa781, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa782, .a=0x51, .x=0x85, .y=0x94, .sp=0xc0, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x85}, {.addr=0xa781, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa781, .value=0xce, .type=IO_READ},
        {.addr=0xa782, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xab77, .a=0xf8, .x=0xc6, .y=0x13, .sp=0x35, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x54}, {.addr=0xab77, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xab78, .a=0xf8, .x=0x54, .y=0x13, .sp=0x36, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x54}, {.addr=0xab77, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xab77, .value=0xce, .type=IO_READ},
        {.addr=0xab78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x997d, .a=0x5b, .x=0x78, .y=0x04, .sp=0xd7, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x79}, {.addr=0x997d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x997e, .a=0x5b, .x=0x79, .y=0x04, .sp=0xd8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x79}, {.addr=0x997d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x997d, .value=0xce, .type=IO_READ},
        {.addr=0x997e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x8cbb, .a=0xce, .x=0x1d, .y=0x40, .sp=0xc1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x83}, {.addr=0x8cbb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8cbc, .a=0xce, .x=0x83, .y=0x40, .sp=0xc2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x83}, {.addr=0x8cbb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8cbb, .value=0xce, .type=IO_READ},
        {.addr=0x8cbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xe372, .a=0x3d, .x=0xca, .y=0x03, .sp=0x33, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x81}, {.addr=0xe372, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe373, .a=0x3d, .x=0x81, .y=0x03, .sp=0x34, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x81}, {.addr=0xe372, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe372, .value=0xce, .type=IO_READ},
        {.addr=0xe373, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0134, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x259c, .a=0x8d, .x=0x00, .y=0xba, .sp=0xdc, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x7e}, {.addr=0x259c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x259d, .a=0x8d, .x=0x7e, .y=0xba, .sp=0xdd, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x7e}, {.addr=0x259c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x259c, .value=0xce, .type=IO_READ},
        {.addr=0x259d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xc700, .a=0x47, .x=0x68, .y=0x81, .sp=0x4d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xb4}, {.addr=0xc700, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc701, .a=0x47, .x=0xb4, .y=0x81, .sp=0x4e, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xb4}, {.addr=0xc700, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc700, .value=0xce, .type=IO_READ},
        {.addr=0xc701, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x2c23, .a=0x10, .x=0x0d, .y=0x89, .sp=0x15, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x85}, {.addr=0x2c23, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2c24, .a=0x10, .x=0x85, .y=0x89, .sp=0x16, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x85}, {.addr=0x2c23, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2c23, .value=0xce, .type=IO_READ},
        {.addr=0x2c24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xc7d3, .a=0x64, .x=0x0e, .y=0x67, .sp=0xee, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xc2}, {.addr=0xc7d3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc7d4, .a=0x64, .x=0xc2, .y=0x67, .sp=0xef, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xc2}, {.addr=0xc7d3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc7d3, .value=0xce, .type=IO_READ},
        {.addr=0xc7d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x7430, .a=0x0d, .x=0xee, .y=0x59, .sp=0xaa, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x1a}, {.addr=0x7430, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7431, .a=0x0d, .x=0x1a, .y=0x59, .sp=0xab, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x1a}, {.addr=0x7430, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7430, .value=0xce, .type=IO_READ},
        {.addr=0x7431, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x34bd, .a=0x0d, .x=0x55, .y=0x2f, .sp=0x23, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x44}, {.addr=0x34bd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x34be, .a=0x0d, .x=0x44, .y=0x2f, .sp=0x24, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x44}, {.addr=0x34bd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x34bd, .value=0xce, .type=IO_READ},
        {.addr=0x34be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x60b4, .a=0x3e, .x=0xa0, .y=0xf9, .sp=0x05, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xf5}, {.addr=0x60b4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x60b5, .a=0x3e, .x=0xf5, .y=0xf9, .sp=0x06, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xf5}, {.addr=0x60b4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x60b4, .value=0xce, .type=IO_READ},
        {.addr=0x60b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x8dee, .a=0xd3, .x=0xfb, .y=0x36, .sp=0x2d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xda}, {.addr=0x8dee, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8def, .a=0xd3, .x=0xda, .y=0x36, .sp=0x2e, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xda}, {.addr=0x8dee, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8dee, .value=0xce, .type=IO_READ},
        {.addr=0x8def, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x3cf7, .a=0x66, .x=0x54, .y=0xc3, .sp=0x73, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x25}, {.addr=0x3cf7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3cf8, .a=0x66, .x=0x25, .y=0xc3, .sp=0x74, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x25}, {.addr=0x3cf7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3cf7, .value=0xce, .type=IO_READ},
        {.addr=0x3cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xa8e0, .a=0x8f, .x=0x74, .y=0x48, .sp=0x0a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x1f}, {.addr=0xa8e0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa8e1, .a=0x8f, .x=0x1f, .y=0x48, .sp=0x0b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x1f}, {.addr=0xa8e0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa8e0, .value=0xce, .type=IO_READ},
        {.addr=0xa8e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x259e, .a=0x60, .x=0xed, .y=0x0d, .sp=0x42, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x2d}, {.addr=0x259e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x259f, .a=0x60, .x=0x2d, .y=0x0d, .sp=0x43, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x2d}, {.addr=0x259e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x259e, .value=0xce, .type=IO_READ},
        {.addr=0x259f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x2c28, .a=0xcf, .x=0x32, .y=0x48, .sp=0x4d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xe3}, {.addr=0x2c28, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2c29, .a=0xcf, .x=0xe3, .y=0x48, .sp=0x4e, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xe3}, {.addr=0x2c28, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2c28, .value=0xce, .type=IO_READ},
        {.addr=0x2c29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xf11c, .a=0x11, .x=0xfa, .y=0x10, .sp=0x61, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x3b}, {.addr=0xf11c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf11d, .a=0x11, .x=0x3b, .y=0x10, .sp=0x62, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x3b}, {.addr=0xf11c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf11c, .value=0xce, .type=IO_READ},
        {.addr=0xf11d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x476f, .a=0xd5, .x=0x7a, .y=0xa2, .sp=0x5c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xa3}, {.addr=0x476f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4770, .a=0xd5, .x=0xa3, .y=0xa2, .sp=0x5d, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xa3}, {.addr=0x476f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x476f, .value=0xce, .type=IO_READ},
        {.addr=0x4770, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x1996, .a=0xf0, .x=0xf3, .y=0x90, .sp=0x1c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x9f}, {.addr=0x1996, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1997, .a=0xf0, .x=0x9f, .y=0x90, .sp=0x1d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x9f}, {.addr=0x1996, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1996, .value=0xce, .type=IO_READ},
        {.addr=0x1997, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xc788, .a=0x12, .x=0x72, .y=0x82, .sp=0xfd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x40}, {.addr=0xc788, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc789, .a=0x12, .x=0x40, .y=0x82, .sp=0xfe, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x40}, {.addr=0xc788, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc788, .value=0xce, .type=IO_READ},
        {.addr=0xc789, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x927a, .a=0x80, .x=0x1e, .y=0xc9, .sp=0xb1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xa6}, {.addr=0x927a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x927b, .a=0x80, .x=0xa6, .y=0xc9, .sp=0xb2, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xa6}, {.addr=0x927a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x927a, .value=0xce, .type=IO_READ},
        {.addr=0x927b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xc9e9, .a=0x9f, .x=0x1d, .y=0xf9, .sp=0x6a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x13}, {.addr=0xc9e9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc9ea, .a=0x9f, .x=0x13, .y=0xf9, .sp=0x6b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x13}, {.addr=0xc9e9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc9e9, .value=0xce, .type=IO_READ},
        {.addr=0xc9ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x24a5, .a=0x68, .x=0x28, .y=0xdb, .sp=0x98, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x18}, {.addr=0x24a5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x24a6, .a=0x68, .x=0x18, .y=0xdb, .sp=0x99, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x18}, {.addr=0x24a5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x24a5, .value=0xce, .type=IO_READ},
        {.addr=0x24a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xb71c, .a=0x2b, .x=0xf5, .y=0xa5, .sp=0x2c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x9a}, {.addr=0xb71c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb71d, .a=0x2b, .x=0x9a, .y=0xa5, .sp=0x2d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x9a}, {.addr=0xb71c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb71c, .value=0xce, .type=IO_READ},
        {.addr=0xb71d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x2fd1, .a=0x46, .x=0xbe, .y=0xb4, .sp=0xdd, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xc5}, {.addr=0x2fd1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2fd2, .a=0x46, .x=0xc5, .y=0xb4, .sp=0xde, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xc5}, {.addr=0x2fd1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2fd1, .value=0xce, .type=IO_READ},
        {.addr=0x2fd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x125b, .a=0x9d, .x=0x82, .y=0x1f, .sp=0x54, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xb8}, {.addr=0x125b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x125c, .a=0x9d, .x=0xb8, .y=0x1f, .sp=0x55, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xb8}, {.addr=0x125b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x125b, .value=0xce, .type=IO_READ},
        {.addr=0x125c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x4719, .a=0x0b, .x=0x7c, .y=0x43, .sp=0x54, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x90}, {.addr=0x4719, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x471a, .a=0x0b, .x=0x90, .y=0x43, .sp=0x55, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x90}, {.addr=0x4719, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4719, .value=0xce, .type=IO_READ},
        {.addr=0x471a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xec08, .a=0xde, .x=0xcb, .y=0xa3, .sp=0xcf, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x92}, {.addr=0xec08, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xec09, .a=0xde, .x=0x92, .y=0xa3, .sp=0xd0, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x92}, {.addr=0xec08, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xec08, .value=0xce, .type=IO_READ},
        {.addr=0xec09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xfe71, .a=0x8c, .x=0x13, .y=0xe8, .sp=0x07, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x19}, {.addr=0xfe71, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfe72, .a=0x8c, .x=0x19, .y=0xe8, .sp=0x08, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x19}, {.addr=0xfe71, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfe71, .value=0xce, .type=IO_READ},
        {.addr=0xfe72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x3333, .a=0xaa, .x=0x3f, .y=0x5f, .sp=0x62, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x7a}, {.addr=0x3333, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3334, .a=0xaa, .x=0x7a, .y=0x5f, .sp=0x63, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x7a}, {.addr=0x3333, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3333, .value=0xce, .type=IO_READ},
        {.addr=0x3334, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x0a0e, .a=0xda, .x=0xd7, .y=0x27, .sp=0xb3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xcf}, {.addr=0x0a0e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0a0f, .a=0xda, .x=0xcf, .y=0x27, .sp=0xb4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xcf}, {.addr=0x0a0e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0a0e, .value=0xce, .type=IO_READ},
        {.addr=0x0a0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0200) {
    const struct CPU_State initial_cpu = {.pc=0x7d3a, .a=0x21, .x=0x19, .y=0x07, .sp=0x7b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xf1}, {.addr=0x7d3a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7d3b, .a=0x21, .x=0xf1, .y=0x07, .sp=0x7c, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xf1}, {.addr=0x7d3a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7d3a, .value=0xce, .type=IO_READ},
        {.addr=0x7d3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0201) {
    const struct CPU_State initial_cpu = {.pc=0xf746, .a=0xd1, .x=0x6c, .y=0xb1, .sp=0x17, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x77}, {.addr=0xf746, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf747, .a=0xd1, .x=0x77, .y=0xb1, .sp=0x18, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x77}, {.addr=0xf746, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf746, .value=0xce, .type=IO_READ},
        {.addr=0xf747, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0202) {
    const struct CPU_State initial_cpu = {.pc=0x1f6a, .a=0xac, .x=0x7f, .y=0xf0, .sp=0x1a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xd2}, {.addr=0x1f6a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1f6b, .a=0xac, .x=0xd2, .y=0xf0, .sp=0x1b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xd2}, {.addr=0x1f6a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1f6a, .value=0xce, .type=IO_READ},
        {.addr=0x1f6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0203) {
    const struct CPU_State initial_cpu = {.pc=0x6308, .a=0x6e, .x=0x50, .y=0x65, .sp=0x6b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xd4}, {.addr=0x6308, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6309, .a=0x6e, .x=0xd4, .y=0x65, .sp=0x6c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xd4}, {.addr=0x6308, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6308, .value=0xce, .type=IO_READ},
        {.addr=0x6309, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0204) {
    const struct CPU_State initial_cpu = {.pc=0x769e, .a=0x4b, .x=0xd9, .y=0xe5, .sp=0x6a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xf8}, {.addr=0x769e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x769f, .a=0x4b, .x=0xf8, .y=0xe5, .sp=0x6b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xf8}, {.addr=0x769e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x769e, .value=0xce, .type=IO_READ},
        {.addr=0x769f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0205) {
    const struct CPU_State initial_cpu = {.pc=0x7620, .a=0xbb, .x=0x10, .y=0x3f, .sp=0xdc, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x5d}, {.addr=0x7620, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7621, .a=0xbb, .x=0x5d, .y=0x3f, .sp=0xdd, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x5d}, {.addr=0x7620, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7620, .value=0xce, .type=IO_READ},
        {.addr=0x7621, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0206) {
    const struct CPU_State initial_cpu = {.pc=0xe6c2, .a=0xc7, .x=0xd2, .y=0x9d, .sp=0x80, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xd5}, {.addr=0xe6c2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe6c3, .a=0xc7, .x=0xd5, .y=0x9d, .sp=0x81, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xd5}, {.addr=0xe6c2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe6c2, .value=0xce, .type=IO_READ},
        {.addr=0xe6c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0207) {
    const struct CPU_State initial_cpu = {.pc=0x6ddf, .a=0xfc, .x=0xba, .y=0x8a, .sp=0x0f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x0b}, {.addr=0x6ddf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6de0, .a=0xfc, .x=0x0b, .y=0x8a, .sp=0x10, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x0b}, {.addr=0x6ddf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6ddf, .value=0xce, .type=IO_READ},
        {.addr=0x6de0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0208) {
    const struct CPU_State initial_cpu = {.pc=0xea33, .a=0xcf, .x=0x4d, .y=0x20, .sp=0x14, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x85}, {.addr=0xea33, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xea34, .a=0xcf, .x=0x85, .y=0x20, .sp=0x15, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x85}, {.addr=0xea33, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xea33, .value=0xce, .type=IO_READ},
        {.addr=0xea34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0209) {
    const struct CPU_State initial_cpu = {.pc=0xbf4d, .a=0xcd, .x=0xfe, .y=0xa0, .sp=0xb7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x0e}, {.addr=0xbf4d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbf4e, .a=0xcd, .x=0x0e, .y=0xa0, .sp=0xb8, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x0e}, {.addr=0xbf4d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbf4d, .value=0xce, .type=IO_READ},
        {.addr=0xbf4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_020A) {
    const struct CPU_State initial_cpu = {.pc=0xe2df, .a=0xf2, .x=0xf2, .y=0xa3, .sp=0x38, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xd6}, {.addr=0xe2df, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe2e0, .a=0xf2, .x=0xd6, .y=0xa3, .sp=0x39, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xd6}, {.addr=0xe2df, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe2df, .value=0xce, .type=IO_READ},
        {.addr=0xe2e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_020B) {
    const struct CPU_State initial_cpu = {.pc=0xc5e1, .a=0xd3, .x=0xdc, .y=0xdb, .sp=0x79, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x55}, {.addr=0xc5e1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc5e2, .a=0xd3, .x=0x55, .y=0xdb, .sp=0x7a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x55}, {.addr=0xc5e1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc5e1, .value=0xce, .type=IO_READ},
        {.addr=0xc5e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_020C) {
    const struct CPU_State initial_cpu = {.pc=0x16ae, .a=0x0d, .x=0x4e, .y=0x98, .sp=0x27, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x30}, {.addr=0x16ae, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x16af, .a=0x0d, .x=0x30, .y=0x98, .sp=0x28, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x30}, {.addr=0x16ae, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x16ae, .value=0xce, .type=IO_READ},
        {.addr=0x16af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_020D) {
    const struct CPU_State initial_cpu = {.pc=0xc0b7, .a=0x4b, .x=0xa1, .y=0xc2, .sp=0xd5, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x61}, {.addr=0xc0b7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc0b8, .a=0x4b, .x=0x61, .y=0xc2, .sp=0xd6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x61}, {.addr=0xc0b7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc0b7, .value=0xce, .type=IO_READ},
        {.addr=0xc0b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_020E) {
    const struct CPU_State initial_cpu = {.pc=0xb303, .a=0x8a, .x=0xcd, .y=0x70, .sp=0xdb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x16}, {.addr=0xb303, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb304, .a=0x8a, .x=0x16, .y=0x70, .sp=0xdc, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x16}, {.addr=0xb303, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb303, .value=0xce, .type=IO_READ},
        {.addr=0xb304, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_020F) {
    const struct CPU_State initial_cpu = {.pc=0x3348, .a=0xae, .x=0x0d, .y=0x6e, .sp=0xc2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xaa}, {.addr=0x3348, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3349, .a=0xae, .x=0xaa, .y=0x6e, .sp=0xc3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xaa}, {.addr=0x3348, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3348, .value=0xce, .type=IO_READ},
        {.addr=0x3349, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0210) {
    const struct CPU_State initial_cpu = {.pc=0xdd3f, .a=0xb0, .x=0x7a, .y=0xb1, .sp=0x4a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x66}, {.addr=0xdd3f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdd40, .a=0xb0, .x=0x66, .y=0xb1, .sp=0x4b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x66}, {.addr=0xdd3f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdd3f, .value=0xce, .type=IO_READ},
        {.addr=0xdd40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0211) {
    const struct CPU_State initial_cpu = {.pc=0x6dfb, .a=0x97, .x=0x7f, .y=0xe1, .sp=0xf2, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x56}, {.addr=0x6dfb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6dfc, .a=0x97, .x=0x56, .y=0xe1, .sp=0xf3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x56}, {.addr=0x6dfb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6dfb, .value=0xce, .type=IO_READ},
        {.addr=0x6dfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0212) {
    const struct CPU_State initial_cpu = {.pc=0x3e89, .a=0x17, .x=0xdf, .y=0xd8, .sp=0x1f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x97}, {.addr=0x3e89, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3e8a, .a=0x17, .x=0x97, .y=0xd8, .sp=0x20, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x97}, {.addr=0x3e89, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3e89, .value=0xce, .type=IO_READ},
        {.addr=0x3e8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0213) {
    const struct CPU_State initial_cpu = {.pc=0x889b, .a=0x28, .x=0x2e, .y=0xe1, .sp=0x2f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x52}, {.addr=0x889b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x889c, .a=0x28, .x=0x52, .y=0xe1, .sp=0x30, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x52}, {.addr=0x889b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x889b, .value=0xce, .type=IO_READ},
        {.addr=0x889c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0214) {
    const struct CPU_State initial_cpu = {.pc=0x1af1, .a=0x8e, .x=0x95, .y=0x72, .sp=0xee, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x8c}, {.addr=0x1af1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1af2, .a=0x8e, .x=0x8c, .y=0x72, .sp=0xef, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x8c}, {.addr=0x1af1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1af1, .value=0xce, .type=IO_READ},
        {.addr=0x1af2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0215) {
    const struct CPU_State initial_cpu = {.pc=0x55b9, .a=0xc3, .x=0x66, .y=0x39, .sp=0xb6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x9f}, {.addr=0x55b9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x55ba, .a=0xc3, .x=0x9f, .y=0x39, .sp=0xb7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x9f}, {.addr=0x55b9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x55b9, .value=0xce, .type=IO_READ},
        {.addr=0x55ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0216) {
    const struct CPU_State initial_cpu = {.pc=0x7bbc, .a=0xe2, .x=0x67, .y=0xa4, .sp=0xa0, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x26}, {.addr=0x7bbc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7bbd, .a=0xe2, .x=0x26, .y=0xa4, .sp=0xa1, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x26}, {.addr=0x7bbc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7bbc, .value=0xce, .type=IO_READ},
        {.addr=0x7bbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0217) {
    const struct CPU_State initial_cpu = {.pc=0x7e0e, .a=0x3d, .x=0x7a, .y=0x37, .sp=0x9b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x80}, {.addr=0x7e0e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7e0f, .a=0x3d, .x=0x80, .y=0x37, .sp=0x9c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x80}, {.addr=0x7e0e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7e0e, .value=0xce, .type=IO_READ},
        {.addr=0x7e0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0218) {
    const struct CPU_State initial_cpu = {.pc=0x2dfd, .a=0x22, .x=0xd4, .y=0xf5, .sp=0xbf, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x11}, {.addr=0x2dfd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2dfe, .a=0x22, .x=0x11, .y=0xf5, .sp=0xc0, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x11}, {.addr=0x2dfd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2dfd, .value=0xce, .type=IO_READ},
        {.addr=0x2dfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c0, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0219) {
    const struct CPU_State initial_cpu = {.pc=0x49ff, .a=0xbc, .x=0xd8, .y=0xd0, .sp=0x8e, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x9d}, {.addr=0x49ff, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4a00, .a=0xbc, .x=0x9d, .y=0xd0, .sp=0x8f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x9d}, {.addr=0x49ff, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x49ff, .value=0xce, .type=IO_READ},
        {.addr=0x4a00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_021A) {
    const struct CPU_State initial_cpu = {.pc=0x793e, .a=0x4d, .x=0x80, .y=0xc8, .sp=0x1e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xc3}, {.addr=0x793e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x793f, .a=0x4d, .x=0xc3, .y=0xc8, .sp=0x1f, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xc3}, {.addr=0x793e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x793e, .value=0xce, .type=IO_READ},
        {.addr=0x793f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_021B) {
    const struct CPU_State initial_cpu = {.pc=0xdca7, .a=0x66, .x=0x09, .y=0x32, .sp=0xf5, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xff}, {.addr=0xdca7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdca8, .a=0x66, .x=0xff, .y=0x32, .sp=0xf6, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xff}, {.addr=0xdca7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdca7, .value=0xce, .type=IO_READ},
        {.addr=0xdca8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_021C) {
    const struct CPU_State initial_cpu = {.pc=0x4d79, .a=0x9b, .x=0x4d, .y=0xf8, .sp=0x76, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x55}, {.addr=0x4d79, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4d7a, .a=0x9b, .x=0x55, .y=0xf8, .sp=0x77, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x55}, {.addr=0x4d79, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4d79, .value=0xce, .type=IO_READ},
        {.addr=0x4d7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_021D) {
    const struct CPU_State initial_cpu = {.pc=0xc556, .a=0x8e, .x=0x01, .y=0x40, .sp=0x56, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xc1}, {.addr=0xc556, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc557, .a=0x8e, .x=0xc1, .y=0x40, .sp=0x57, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xc1}, {.addr=0xc556, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc556, .value=0xce, .type=IO_READ},
        {.addr=0xc557, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_021E) {
    const struct CPU_State initial_cpu = {.pc=0x7375, .a=0x1f, .x=0x7d, .y=0x42, .sp=0x40, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x92}, {.addr=0x7375, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7376, .a=0x1f, .x=0x92, .y=0x42, .sp=0x41, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x92}, {.addr=0x7375, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7375, .value=0xce, .type=IO_READ},
        {.addr=0x7376, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_021F) {
    const struct CPU_State initial_cpu = {.pc=0xa23e, .a=0x81, .x=0x30, .y=0x02, .sp=0xf3, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x9a}, {.addr=0xa23e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa23f, .a=0x81, .x=0x9a, .y=0x02, .sp=0xf4, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x9a}, {.addr=0xa23e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa23e, .value=0xce, .type=IO_READ},
        {.addr=0xa23f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0220) {
    const struct CPU_State initial_cpu = {.pc=0x7097, .a=0x63, .x=0xae, .y=0xaa, .sp=0xba, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x15}, {.addr=0x7097, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7098, .a=0x63, .x=0x15, .y=0xaa, .sp=0xbb, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x15}, {.addr=0x7097, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7097, .value=0xce, .type=IO_READ},
        {.addr=0x7098, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0221) {
    const struct CPU_State initial_cpu = {.pc=0x312e, .a=0x2c, .x=0x3a, .y=0xa0, .sp=0xf9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x34}, {.addr=0x312e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x312f, .a=0x2c, .x=0x34, .y=0xa0, .sp=0xfa, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x34}, {.addr=0x312e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x312e, .value=0xce, .type=IO_READ},
        {.addr=0x312f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0222) {
    const struct CPU_State initial_cpu = {.pc=0x243b, .a=0x5d, .x=0x71, .y=0x48, .sp=0x2c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xa3}, {.addr=0x243b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x243c, .a=0x5d, .x=0xa3, .y=0x48, .sp=0x2d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xa3}, {.addr=0x243b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x243b, .value=0xce, .type=IO_READ},
        {.addr=0x243c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0223) {
    const struct CPU_State initial_cpu = {.pc=0xab97, .a=0xff, .x=0x8d, .y=0x4d, .sp=0xdb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xd7}, {.addr=0xab97, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xab98, .a=0xff, .x=0xd7, .y=0x4d, .sp=0xdc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xd7}, {.addr=0xab97, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xab97, .value=0xce, .type=IO_READ},
        {.addr=0xab98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0224) {
    const struct CPU_State initial_cpu = {.pc=0xe44f, .a=0xda, .x=0xd9, .y=0xf6, .sp=0x15, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x1e}, {.addr=0xe44f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe450, .a=0xda, .x=0x1e, .y=0xf6, .sp=0x16, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x1e}, {.addr=0xe44f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe44f, .value=0xce, .type=IO_READ},
        {.addr=0xe450, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0225) {
    const struct CPU_State initial_cpu = {.pc=0x6cca, .a=0xfc, .x=0x41, .y=0xde, .sp=0xbd, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x1e}, {.addr=0x6cca, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6ccb, .a=0xfc, .x=0x1e, .y=0xde, .sp=0xbe, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x1e}, {.addr=0x6cca, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6cca, .value=0xce, .type=IO_READ},
        {.addr=0x6ccb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0226) {
    const struct CPU_State initial_cpu = {.pc=0xb7f3, .a=0x46, .x=0xbf, .y=0xd3, .sp=0x51, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xe6}, {.addr=0xb7f3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb7f4, .a=0x46, .x=0xe6, .y=0xd3, .sp=0x52, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xe6}, {.addr=0xb7f3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb7f3, .value=0xce, .type=IO_READ},
        {.addr=0xb7f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0227) {
    const struct CPU_State initial_cpu = {.pc=0xfa57, .a=0x1a, .x=0xcc, .y=0x84, .sp=0xf9, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xf4}, {.addr=0xfa57, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfa58, .a=0x1a, .x=0xf4, .y=0x84, .sp=0xfa, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xf4}, {.addr=0xfa57, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfa57, .value=0xce, .type=IO_READ},
        {.addr=0xfa58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0228) {
    const struct CPU_State initial_cpu = {.pc=0x427e, .a=0x5e, .x=0xe3, .y=0xa3, .sp=0xcd, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x03}, {.addr=0x427e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x427f, .a=0x5e, .x=0x03, .y=0xa3, .sp=0xce, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x03}, {.addr=0x427e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x427e, .value=0xce, .type=IO_READ},
        {.addr=0x427f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0229) {
    const struct CPU_State initial_cpu = {.pc=0x492d, .a=0x5d, .x=0x44, .y=0xe0, .sp=0x8b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xd7}, {.addr=0x492d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x492e, .a=0x5d, .x=0xd7, .y=0xe0, .sp=0x8c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xd7}, {.addr=0x492d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x492d, .value=0xce, .type=IO_READ},
        {.addr=0x492e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_022A) {
    const struct CPU_State initial_cpu = {.pc=0x188c, .a=0xf8, .x=0x73, .y=0x46, .sp=0xb9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x8a}, {.addr=0x188c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x188d, .a=0xf8, .x=0x8a, .y=0x46, .sp=0xba, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x8a}, {.addr=0x188c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x188c, .value=0xce, .type=IO_READ},
        {.addr=0x188d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_022B) {
    const struct CPU_State initial_cpu = {.pc=0x7331, .a=0xe9, .x=0x1b, .y=0x9c, .sp=0x34, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x86}, {.addr=0x7331, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7332, .a=0xe9, .x=0x86, .y=0x9c, .sp=0x35, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x86}, {.addr=0x7331, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7331, .value=0xce, .type=IO_READ},
        {.addr=0x7332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_022C) {
    const struct CPU_State initial_cpu = {.pc=0x136f, .a=0x19, .x=0xc0, .y=0xea, .sp=0xee, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x18}, {.addr=0x136f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1370, .a=0x19, .x=0x18, .y=0xea, .sp=0xef, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x18}, {.addr=0x136f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x136f, .value=0xce, .type=IO_READ},
        {.addr=0x1370, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_022D) {
    const struct CPU_State initial_cpu = {.pc=0x7d74, .a=0x18, .x=0xb6, .y=0x18, .sp=0x30, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xd0}, {.addr=0x7d74, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7d75, .a=0x18, .x=0xd0, .y=0x18, .sp=0x31, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xd0}, {.addr=0x7d74, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7d74, .value=0xce, .type=IO_READ},
        {.addr=0x7d75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_022E) {
    const struct CPU_State initial_cpu = {.pc=0xdaa8, .a=0x97, .x=0x3c, .y=0xd9, .sp=0xbd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x79}, {.addr=0xdaa8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdaa9, .a=0x97, .x=0x79, .y=0xd9, .sp=0xbe, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x79}, {.addr=0xdaa8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdaa8, .value=0xce, .type=IO_READ},
        {.addr=0xdaa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe2ba, .a=0x37, .x=0xdb, .y=0x1f, .sp=0x30, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x27}, {.addr=0xe2ba, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe2bb, .a=0x37, .x=0x27, .y=0x1f, .sp=0x31, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x27}, {.addr=0xe2ba, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe2ba, .value=0xce, .type=IO_READ},
        {.addr=0xe2bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0230) {
    const struct CPU_State initial_cpu = {.pc=0xe681, .a=0x76, .x=0x5a, .y=0x8c, .sp=0xc8, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xcd}, {.addr=0xe681, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe682, .a=0x76, .x=0xcd, .y=0x8c, .sp=0xc9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xcd}, {.addr=0xe681, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe681, .value=0xce, .type=IO_READ},
        {.addr=0xe682, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0231) {
    const struct CPU_State initial_cpu = {.pc=0xad57, .a=0xe8, .x=0xff, .y=0x56, .sp=0xae, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x2c}, {.addr=0xad57, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xad58, .a=0xe8, .x=0x2c, .y=0x56, .sp=0xaf, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x2c}, {.addr=0xad57, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xad57, .value=0xce, .type=IO_READ},
        {.addr=0xad58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0232) {
    const struct CPU_State initial_cpu = {.pc=0x90ce, .a=0x6a, .x=0x17, .y=0xb2, .sp=0xd4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x17}, {.addr=0x90ce, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x90cf, .a=0x6a, .x=0x17, .y=0xb2, .sp=0xd5, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x17}, {.addr=0x90ce, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x90ce, .value=0xce, .type=IO_READ},
        {.addr=0x90cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0233) {
    const struct CPU_State initial_cpu = {.pc=0x04fe, .a=0x60, .x=0x03, .y=0x02, .sp=0xde, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xeb}, {.addr=0x04fe, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x04ff, .a=0x60, .x=0xeb, .y=0x02, .sp=0xdf, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xeb}, {.addr=0x04fe, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x04fe, .value=0xce, .type=IO_READ},
        {.addr=0x04ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0234) {
    const struct CPU_State initial_cpu = {.pc=0x8f38, .a=0x71, .x=0x74, .y=0x83, .sp=0x93, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x59}, {.addr=0x8f38, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8f39, .a=0x71, .x=0x59, .y=0x83, .sp=0x94, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x59}, {.addr=0x8f38, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8f38, .value=0xce, .type=IO_READ},
        {.addr=0x8f39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0235) {
    const struct CPU_State initial_cpu = {.pc=0x4e2b, .a=0xfd, .x=0xa3, .y=0xa4, .sp=0x59, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xa2}, {.addr=0x4e2b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4e2c, .a=0xfd, .x=0xa2, .y=0xa4, .sp=0x5a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xa2}, {.addr=0x4e2b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4e2b, .value=0xce, .type=IO_READ},
        {.addr=0x4e2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0236) {
    const struct CPU_State initial_cpu = {.pc=0x469c, .a=0x3c, .x=0x2e, .y=0x65, .sp=0x3b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xb4}, {.addr=0x469c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x469d, .a=0x3c, .x=0xb4, .y=0x65, .sp=0x3c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xb4}, {.addr=0x469c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x469c, .value=0xce, .type=IO_READ},
        {.addr=0x469d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0237) {
    const struct CPU_State initial_cpu = {.pc=0xc639, .a=0xb4, .x=0xab, .y=0x13, .sp=0x8c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x87}, {.addr=0xc639, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc63a, .a=0xb4, .x=0x87, .y=0x13, .sp=0x8d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x87}, {.addr=0xc639, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc639, .value=0xce, .type=IO_READ},
        {.addr=0xc63a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0238) {
    const struct CPU_State initial_cpu = {.pc=0x58ff, .a=0xf1, .x=0x1e, .y=0x6b, .sp=0x25, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x55}, {.addr=0x58ff, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5900, .a=0xf1, .x=0x55, .y=0x6b, .sp=0x26, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x55}, {.addr=0x58ff, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x58ff, .value=0xce, .type=IO_READ},
        {.addr=0x5900, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0239) {
    const struct CPU_State initial_cpu = {.pc=0x718c, .a=0x27, .x=0x39, .y=0xbe, .sp=0xbe, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xa0}, {.addr=0x718c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x718d, .a=0x27, .x=0xa0, .y=0xbe, .sp=0xbf, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xa0}, {.addr=0x718c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x718c, .value=0xce, .type=IO_READ},
        {.addr=0x718d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_023A) {
    const struct CPU_State initial_cpu = {.pc=0x8e64, .a=0xa9, .x=0x26, .y=0xb9, .sp=0x6c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xce}, {.addr=0x8e64, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8e65, .a=0xa9, .x=0xce, .y=0xb9, .sp=0x6d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xce}, {.addr=0x8e64, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8e64, .value=0xce, .type=IO_READ},
        {.addr=0x8e65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_023B) {
    const struct CPU_State initial_cpu = {.pc=0xe6c6, .a=0xe2, .x=0x76, .y=0x94, .sp=0xfb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xa0}, {.addr=0xe6c6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe6c7, .a=0xe2, .x=0xa0, .y=0x94, .sp=0xfc, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xa0}, {.addr=0xe6c6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe6c6, .value=0xce, .type=IO_READ},
        {.addr=0xe6c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_023C) {
    const struct CPU_State initial_cpu = {.pc=0x69d2, .a=0xf0, .x=0xa5, .y=0xb7, .sp=0xd5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xed}, {.addr=0x69d2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x69d3, .a=0xf0, .x=0xed, .y=0xb7, .sp=0xd6, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xed}, {.addr=0x69d2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x69d2, .value=0xce, .type=IO_READ},
        {.addr=0x69d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_023D) {
    const struct CPU_State initial_cpu = {.pc=0xb6e2, .a=0x2e, .x=0x33, .y=0x5f, .sp=0x7f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x2e}, {.addr=0xb6e2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb6e3, .a=0x2e, .x=0x2e, .y=0x5f, .sp=0x80, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x2e}, {.addr=0xb6e2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb6e2, .value=0xce, .type=IO_READ},
        {.addr=0xb6e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_023E) {
    const struct CPU_State initial_cpu = {.pc=0xed34, .a=0x2d, .x=0x98, .y=0xf3, .sp=0xf6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x36}, {.addr=0xed34, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xed35, .a=0x2d, .x=0x36, .y=0xf3, .sp=0xf7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x36}, {.addr=0xed34, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xed34, .value=0xce, .type=IO_READ},
        {.addr=0xed35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_023F) {
    const struct CPU_State initial_cpu = {.pc=0x7c3b, .a=0x4c, .x=0x23, .y=0xd4, .sp=0xea, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xad}, {.addr=0x7c3b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7c3c, .a=0x4c, .x=0xad, .y=0xd4, .sp=0xeb, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xad}, {.addr=0x7c3b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7c3b, .value=0xce, .type=IO_READ},
        {.addr=0x7c3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0240) {
    const struct CPU_State initial_cpu = {.pc=0x0745, .a=0xf4, .x=0x1a, .y=0x22, .sp=0x1b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xb4}, {.addr=0x0745, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0746, .a=0xf4, .x=0xb4, .y=0x22, .sp=0x1c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xb4}, {.addr=0x0745, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0745, .value=0xce, .type=IO_READ},
        {.addr=0x0746, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0241) {
    const struct CPU_State initial_cpu = {.pc=0x7a6a, .a=0x51, .x=0x8e, .y=0x8b, .sp=0xc8, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x87}, {.addr=0x7a6a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7a6b, .a=0x51, .x=0x87, .y=0x8b, .sp=0xc9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x87}, {.addr=0x7a6a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7a6a, .value=0xce, .type=IO_READ},
        {.addr=0x7a6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0242) {
    const struct CPU_State initial_cpu = {.pc=0xcfe0, .a=0xd4, .x=0xac, .y=0xc5, .sp=0xb1, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x13}, {.addr=0xcfe0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcfe1, .a=0xd4, .x=0x13, .y=0xc5, .sp=0xb2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x13}, {.addr=0xcfe0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcfe0, .value=0xce, .type=IO_READ},
        {.addr=0xcfe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b2, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0243) {
    const struct CPU_State initial_cpu = {.pc=0x4cdd, .a=0x7e, .x=0x5a, .y=0x9b, .sp=0x40, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x3d}, {.addr=0x4cdd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4cde, .a=0x7e, .x=0x3d, .y=0x9b, .sp=0x41, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x3d}, {.addr=0x4cdd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4cdd, .value=0xce, .type=IO_READ},
        {.addr=0x4cde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0244) {
    const struct CPU_State initial_cpu = {.pc=0x789e, .a=0xdb, .x=0xa2, .y=0xf8, .sp=0x9d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x40}, {.addr=0x789e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x789f, .a=0xdb, .x=0x40, .y=0xf8, .sp=0x9e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x40}, {.addr=0x789e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x789e, .value=0xce, .type=IO_READ},
        {.addr=0x789f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4213, .a=0x58, .x=0x17, .y=0x0f, .sp=0x04, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x29}, {.addr=0x4213, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4214, .a=0x58, .x=0x29, .y=0x0f, .sp=0x05, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x29}, {.addr=0x4213, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4213, .value=0xce, .type=IO_READ},
        {.addr=0x4214, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0246) {
    const struct CPU_State initial_cpu = {.pc=0x71de, .a=0x20, .x=0x04, .y=0x7c, .sp=0x01, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xc4}, {.addr=0x71de, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x71df, .a=0x20, .x=0xc4, .y=0x7c, .sp=0x02, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xc4}, {.addr=0x71de, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x71de, .value=0xce, .type=IO_READ},
        {.addr=0x71df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6322, .a=0x49, .x=0x1a, .y=0x49, .sp=0xea, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x6c}, {.addr=0x6322, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6323, .a=0x49, .x=0x6c, .y=0x49, .sp=0xeb, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x6c}, {.addr=0x6322, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6322, .value=0xce, .type=IO_READ},
        {.addr=0x6323, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0248) {
    const struct CPU_State initial_cpu = {.pc=0x3ef9, .a=0x3a, .x=0x97, .y=0x8f, .sp=0x81, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x9b}, {.addr=0x3ef9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3efa, .a=0x3a, .x=0x9b, .y=0x8f, .sp=0x82, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x9b}, {.addr=0x3ef9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3ef9, .value=0xce, .type=IO_READ},
        {.addr=0x3efa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0249) {
    const struct CPU_State initial_cpu = {.pc=0x8a60, .a=0x5d, .x=0x73, .y=0x09, .sp=0x8f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xb0}, {.addr=0x8a60, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8a61, .a=0x5d, .x=0xb0, .y=0x09, .sp=0x90, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xb0}, {.addr=0x8a60, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8a60, .value=0xce, .type=IO_READ},
        {.addr=0x8a61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_024A) {
    const struct CPU_State initial_cpu = {.pc=0xd07b, .a=0x33, .x=0x09, .y=0xd7, .sp=0x4f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x88}, {.addr=0xd07b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd07c, .a=0x33, .x=0x88, .y=0xd7, .sp=0x50, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x88}, {.addr=0xd07b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd07b, .value=0xce, .type=IO_READ},
        {.addr=0xd07c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_024B) {
    const struct CPU_State initial_cpu = {.pc=0x942b, .a=0xa3, .x=0x0a, .y=0x8a, .sp=0xe2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x97}, {.addr=0x942b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x942c, .a=0xa3, .x=0x97, .y=0x8a, .sp=0xe3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x97}, {.addr=0x942b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x942b, .value=0xce, .type=IO_READ},
        {.addr=0x942c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_024C) {
    const struct CPU_State initial_cpu = {.pc=0xfa00, .a=0x2e, .x=0x1e, .y=0x71, .sp=0xb9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x53}, {.addr=0xfa00, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfa01, .a=0x2e, .x=0x53, .y=0x71, .sp=0xba, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x53}, {.addr=0xfa00, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfa00, .value=0xce, .type=IO_READ},
        {.addr=0xfa01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_024D) {
    const struct CPU_State initial_cpu = {.pc=0x25ca, .a=0xd0, .x=0x33, .y=0x2d, .sp=0x39, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x43}, {.addr=0x25ca, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x25cb, .a=0xd0, .x=0x43, .y=0x2d, .sp=0x3a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x43}, {.addr=0x25ca, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x25ca, .value=0xce, .type=IO_READ},
        {.addr=0x25cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_024E) {
    const struct CPU_State initial_cpu = {.pc=0x7067, .a=0xed, .x=0x59, .y=0x22, .sp=0x5c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x23}, {.addr=0x7067, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7068, .a=0xed, .x=0x23, .y=0x22, .sp=0x5d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x23}, {.addr=0x7067, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7067, .value=0xce, .type=IO_READ},
        {.addr=0x7068, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_024F) {
    const struct CPU_State initial_cpu = {.pc=0x6ea2, .a=0xfc, .x=0x7d, .y=0xfd, .sp=0x81, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x45}, {.addr=0x6ea2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6ea3, .a=0xfc, .x=0x45, .y=0xfd, .sp=0x82, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x45}, {.addr=0x6ea2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6ea2, .value=0xce, .type=IO_READ},
        {.addr=0x6ea3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0250) {
    const struct CPU_State initial_cpu = {.pc=0x2859, .a=0xd2, .x=0x44, .y=0x3e, .sp=0x40, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xa1}, {.addr=0x2859, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x285a, .a=0xd2, .x=0xa1, .y=0x3e, .sp=0x41, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xa1}, {.addr=0x2859, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2859, .value=0xce, .type=IO_READ},
        {.addr=0x285a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0251) {
    const struct CPU_State initial_cpu = {.pc=0xbd93, .a=0x85, .x=0x7b, .y=0xca, .sp=0xde, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x01}, {.addr=0xbd93, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbd94, .a=0x85, .x=0x01, .y=0xca, .sp=0xdf, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x01}, {.addr=0xbd93, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbd93, .value=0xce, .type=IO_READ},
        {.addr=0xbd94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9049, .a=0x9d, .x=0x68, .y=0xa8, .sp=0xda, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x26}, {.addr=0x9049, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x904a, .a=0x9d, .x=0x26, .y=0xa8, .sp=0xdb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x26}, {.addr=0x9049, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9049, .value=0xce, .type=IO_READ},
        {.addr=0x904a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0253) {
    const struct CPU_State initial_cpu = {.pc=0xee98, .a=0x69, .x=0x6b, .y=0x0a, .sp=0xbe, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x1e}, {.addr=0xee98, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xee99, .a=0x69, .x=0x1e, .y=0x0a, .sp=0xbf, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x1e}, {.addr=0xee98, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xee98, .value=0xce, .type=IO_READ},
        {.addr=0xee99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0254) {
    const struct CPU_State initial_cpu = {.pc=0xda3e, .a=0x3d, .x=0xad, .y=0x94, .sp=0xa4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xde}, {.addr=0xda3e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xda3f, .a=0x3d, .x=0xde, .y=0x94, .sp=0xa5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xde}, {.addr=0xda3e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xda3e, .value=0xce, .type=IO_READ},
        {.addr=0xda3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0255) {
    const struct CPU_State initial_cpu = {.pc=0xb02e, .a=0xf2, .x=0x13, .y=0x44, .sp=0x28, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x67}, {.addr=0xb02e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb02f, .a=0xf2, .x=0x67, .y=0x44, .sp=0x29, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x67}, {.addr=0xb02e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb02e, .value=0xce, .type=IO_READ},
        {.addr=0xb02f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0256) {
    const struct CPU_State initial_cpu = {.pc=0x6f4c, .a=0xc9, .x=0xa1, .y=0x6e, .sp=0xb6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xb9}, {.addr=0x6f4c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6f4d, .a=0xc9, .x=0xb9, .y=0x6e, .sp=0xb7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xb9}, {.addr=0x6f4c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6f4c, .value=0xce, .type=IO_READ},
        {.addr=0x6f4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0257) {
    const struct CPU_State initial_cpu = {.pc=0xc4ac, .a=0x0a, .x=0x9b, .y=0x0e, .sp=0x51, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x6d}, {.addr=0xc4ac, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc4ad, .a=0x0a, .x=0x6d, .y=0x0e, .sp=0x52, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x6d}, {.addr=0xc4ac, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc4ac, .value=0xce, .type=IO_READ},
        {.addr=0xc4ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0258) {
    const struct CPU_State initial_cpu = {.pc=0xfd66, .a=0x60, .x=0x6d, .y=0x24, .sp=0xf7, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x75}, {.addr=0xfd66, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfd67, .a=0x60, .x=0x75, .y=0x24, .sp=0xf8, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x75}, {.addr=0xfd66, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfd66, .value=0xce, .type=IO_READ},
        {.addr=0xfd67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0259) {
    const struct CPU_State initial_cpu = {.pc=0x53c6, .a=0xda, .x=0xb7, .y=0x69, .sp=0x9c, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xfa}, {.addr=0x53c6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x53c7, .a=0xda, .x=0xfa, .y=0x69, .sp=0x9d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xfa}, {.addr=0x53c6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x53c6, .value=0xce, .type=IO_READ},
        {.addr=0x53c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_025A) {
    const struct CPU_State initial_cpu = {.pc=0xd3c9, .a=0x70, .x=0xf4, .y=0xc0, .sp=0xc6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x56}, {.addr=0xd3c9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd3ca, .a=0x70, .x=0x56, .y=0xc0, .sp=0xc7, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x56}, {.addr=0xd3c9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd3c9, .value=0xce, .type=IO_READ},
        {.addr=0xd3ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_025B) {
    const struct CPU_State initial_cpu = {.pc=0xae05, .a=0x4a, .x=0x70, .y=0x30, .sp=0x76, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0xa1}, {.addr=0xae05, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xae06, .a=0x4a, .x=0xa1, .y=0x30, .sp=0x77, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xa1}, {.addr=0xae05, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xae05, .value=0xce, .type=IO_READ},
        {.addr=0xae06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_025C) {
    const struct CPU_State initial_cpu = {.pc=0x5ee7, .a=0x37, .x=0xd6, .y=0x90, .sp=0x2a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xd9}, {.addr=0x5ee7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5ee8, .a=0x37, .x=0xd9, .y=0x90, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xd9}, {.addr=0x5ee7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5ee7, .value=0xce, .type=IO_READ},
        {.addr=0x5ee8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_025D) {
    const struct CPU_State initial_cpu = {.pc=0xe9a7, .a=0x36, .x=0x8f, .y=0x2c, .sp=0x50, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xb3}, {.addr=0xe9a7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe9a8, .a=0x36, .x=0xb3, .y=0x2c, .sp=0x51, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xb3}, {.addr=0xe9a7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe9a7, .value=0xce, .type=IO_READ},
        {.addr=0xe9a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_025E) {
    const struct CPU_State initial_cpu = {.pc=0xb836, .a=0x5b, .x=0xd3, .y=0xe5, .sp=0xbc, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x0c}, {.addr=0xb836, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb837, .a=0x5b, .x=0x0c, .y=0xe5, .sp=0xbd, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x0c}, {.addr=0xb836, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb836, .value=0xce, .type=IO_READ},
        {.addr=0xb837, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_025F) {
    const struct CPU_State initial_cpu = {.pc=0xd855, .a=0x00, .x=0xef, .y=0xe7, .sp=0x17, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xcc}, {.addr=0xd855, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd856, .a=0x00, .x=0xcc, .y=0xe7, .sp=0x18, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xcc}, {.addr=0xd855, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd855, .value=0xce, .type=IO_READ},
        {.addr=0xd856, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0260) {
    const struct CPU_State initial_cpu = {.pc=0x5d6b, .a=0xd5, .x=0x1a, .y=0xbe, .sp=0xab, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xce}, {.addr=0x5d6b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5d6c, .a=0xd5, .x=0xce, .y=0xbe, .sp=0xac, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xce}, {.addr=0x5d6b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5d6b, .value=0xce, .type=IO_READ},
        {.addr=0x5d6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0261) {
    const struct CPU_State initial_cpu = {.pc=0xf63d, .a=0x6d, .x=0x5d, .y=0x58, .sp=0x81, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x33}, {.addr=0xf63d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf63e, .a=0x6d, .x=0x33, .y=0x58, .sp=0x82, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x33}, {.addr=0xf63d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf63d, .value=0xce, .type=IO_READ},
        {.addr=0xf63e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0262) {
    const struct CPU_State initial_cpu = {.pc=0xc993, .a=0xe0, .x=0x93, .y=0x03, .sp=0x96, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xfe}, {.addr=0xc993, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc994, .a=0xe0, .x=0xfe, .y=0x03, .sp=0x97, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xfe}, {.addr=0xc993, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc993, .value=0xce, .type=IO_READ},
        {.addr=0xc994, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0263) {
    const struct CPU_State initial_cpu = {.pc=0x99f0, .a=0x58, .x=0xa2, .y=0x68, .sp=0x38, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xf4}, {.addr=0x99f0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x99f1, .a=0x58, .x=0xf4, .y=0x68, .sp=0x39, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xf4}, {.addr=0x99f0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x99f0, .value=0xce, .type=IO_READ},
        {.addr=0x99f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0264) {
    const struct CPU_State initial_cpu = {.pc=0x32ec, .a=0xb8, .x=0x83, .y=0xe7, .sp=0xc7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xbc}, {.addr=0x32ec, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x32ed, .a=0xb8, .x=0xbc, .y=0xe7, .sp=0xc8, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xbc}, {.addr=0x32ec, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x32ec, .value=0xce, .type=IO_READ},
        {.addr=0x32ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0265) {
    const struct CPU_State initial_cpu = {.pc=0xde6a, .a=0x1b, .x=0xfa, .y=0x78, .sp=0x61, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x3d}, {.addr=0xde6a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xde6b, .a=0x1b, .x=0x3d, .y=0x78, .sp=0x62, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x3d}, {.addr=0xde6a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xde6a, .value=0xce, .type=IO_READ},
        {.addr=0xde6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0266) {
    const struct CPU_State initial_cpu = {.pc=0xabac, .a=0x2e, .x=0x35, .y=0xab, .sp=0x9d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x02}, {.addr=0xabac, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xabad, .a=0x2e, .x=0x02, .y=0xab, .sp=0x9e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x02}, {.addr=0xabac, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xabac, .value=0xce, .type=IO_READ},
        {.addr=0xabad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0267) {
    const struct CPU_State initial_cpu = {.pc=0x633e, .a=0xd5, .x=0x1c, .y=0x7c, .sp=0xb7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xb0}, {.addr=0x633e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x633f, .a=0xd5, .x=0xb0, .y=0x7c, .sp=0xb8, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xb0}, {.addr=0x633e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x633e, .value=0xce, .type=IO_READ},
        {.addr=0x633f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0268) {
    const struct CPU_State initial_cpu = {.pc=0xe330, .a=0x66, .x=0xac, .y=0xc9, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xb9}, {.addr=0xe330, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe331, .a=0x66, .x=0xb9, .y=0xc9, .sp=0xcf, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xb9}, {.addr=0xe330, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe330, .value=0xce, .type=IO_READ},
        {.addr=0xe331, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0269) {
    const struct CPU_State initial_cpu = {.pc=0x63e4, .a=0x15, .x=0xa0, .y=0xa0, .sp=0xe4, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x31}, {.addr=0x63e4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x63e5, .a=0x15, .x=0x31, .y=0xa0, .sp=0xe5, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x31}, {.addr=0x63e4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x63e4, .value=0xce, .type=IO_READ},
        {.addr=0x63e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_026A) {
    const struct CPU_State initial_cpu = {.pc=0xa37a, .a=0x48, .x=0xca, .y=0x0f, .sp=0x68, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x9a}, {.addr=0xa37a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa37b, .a=0x48, .x=0x9a, .y=0x0f, .sp=0x69, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x9a}, {.addr=0xa37a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa37a, .value=0xce, .type=IO_READ},
        {.addr=0xa37b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_026B) {
    const struct CPU_State initial_cpu = {.pc=0x518b, .a=0xbb, .x=0x1e, .y=0x7d, .sp=0x96, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x22}, {.addr=0x518b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x518c, .a=0xbb, .x=0x22, .y=0x7d, .sp=0x97, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x22}, {.addr=0x518b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x518b, .value=0xce, .type=IO_READ},
        {.addr=0x518c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_026C) {
    const struct CPU_State initial_cpu = {.pc=0x306d, .a=0x49, .x=0x45, .y=0xa9, .sp=0x7f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x2d}, {.addr=0x306d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x306e, .a=0x49, .x=0x2d, .y=0xa9, .sp=0x80, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x2d}, {.addr=0x306d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x306d, .value=0xce, .type=IO_READ},
        {.addr=0x306e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_026D) {
    const struct CPU_State initial_cpu = {.pc=0xd190, .a=0x65, .x=0x8c, .y=0xfa, .sp=0x29, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xb2}, {.addr=0xd190, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd191, .a=0x65, .x=0xb2, .y=0xfa, .sp=0x2a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xb2}, {.addr=0xd190, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd190, .value=0xce, .type=IO_READ},
        {.addr=0xd191, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_026E) {
    const struct CPU_State initial_cpu = {.pc=0x8c48, .a=0x43, .x=0x0e, .y=0x99, .sp=0x46, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x7f}, {.addr=0x8c48, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8c49, .a=0x43, .x=0x7f, .y=0x99, .sp=0x47, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x7f}, {.addr=0x8c48, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8c48, .value=0xce, .type=IO_READ},
        {.addr=0x8c49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_026F) {
    const struct CPU_State initial_cpu = {.pc=0xa3bc, .a=0x4d, .x=0xaf, .y=0xfa, .sp=0x0b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xe0}, {.addr=0xa3bc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa3bd, .a=0x4d, .x=0xe0, .y=0xfa, .sp=0x0c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xe0}, {.addr=0xa3bc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa3bc, .value=0xce, .type=IO_READ},
        {.addr=0xa3bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0270) {
    const struct CPU_State initial_cpu = {.pc=0xcaff, .a=0xde, .x=0xe9, .y=0x51, .sp=0xf1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xde}, {.addr=0xcaff, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcb00, .a=0xde, .x=0xde, .y=0x51, .sp=0xf2, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xde}, {.addr=0xcaff, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcaff, .value=0xce, .type=IO_READ},
        {.addr=0xcb00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0271) {
    const struct CPU_State initial_cpu = {.pc=0x7613, .a=0xaa, .x=0x71, .y=0x4b, .sp=0x2d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x5a}, {.addr=0x7613, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7614, .a=0xaa, .x=0x5a, .y=0x4b, .sp=0x2e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x5a}, {.addr=0x7613, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7613, .value=0xce, .type=IO_READ},
        {.addr=0x7614, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0272) {
    const struct CPU_State initial_cpu = {.pc=0xc139, .a=0xea, .x=0xf2, .y=0xd6, .sp=0x1b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xe3}, {.addr=0xc139, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc13a, .a=0xea, .x=0xe3, .y=0xd6, .sp=0x1c, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xe3}, {.addr=0xc139, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc139, .value=0xce, .type=IO_READ},
        {.addr=0xc13a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0273) {
    const struct CPU_State initial_cpu = {.pc=0x8c11, .a=0x5c, .x=0x2b, .y=0x35, .sp=0x44, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x03}, {.addr=0x8c11, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8c12, .a=0x5c, .x=0x03, .y=0x35, .sp=0x45, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x03}, {.addr=0x8c11, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8c11, .value=0xce, .type=IO_READ},
        {.addr=0x8c12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0274) {
    const struct CPU_State initial_cpu = {.pc=0xff58, .a=0x39, .x=0xc8, .y=0x68, .sp=0xfa, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xab}, {.addr=0xff58, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xff59, .a=0x39, .x=0xab, .y=0x68, .sp=0xfb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xab}, {.addr=0xff58, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xff58, .value=0xce, .type=IO_READ},
        {.addr=0xff59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0275) {
    const struct CPU_State initial_cpu = {.pc=0xd8b5, .a=0xdf, .x=0x9b, .y=0xfc, .sp=0x57, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xd7}, {.addr=0xd8b5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd8b6, .a=0xdf, .x=0xd7, .y=0xfc, .sp=0x58, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xd7}, {.addr=0xd8b5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd8b5, .value=0xce, .type=IO_READ},
        {.addr=0xd8b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0276) {
    const struct CPU_State initial_cpu = {.pc=0x657d, .a=0xc8, .x=0x92, .y=0x0b, .sp=0x07, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xfd}, {.addr=0x657d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x657e, .a=0xc8, .x=0xfd, .y=0x0b, .sp=0x08, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xfd}, {.addr=0x657d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x657d, .value=0xce, .type=IO_READ},
        {.addr=0x657e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0277) {
    const struct CPU_State initial_cpu = {.pc=0xe222, .a=0x1e, .x=0xa2, .y=0xfe, .sp=0x2b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x9d}, {.addr=0xe222, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe223, .a=0x1e, .x=0x9d, .y=0xfe, .sp=0x2c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x9d}, {.addr=0xe222, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe222, .value=0xce, .type=IO_READ},
        {.addr=0xe223, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0278) {
    const struct CPU_State initial_cpu = {.pc=0x7487, .a=0x14, .x=0x40, .y=0xb6, .sp=0xb7, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x88}, {.addr=0x7487, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7488, .a=0x14, .x=0x88, .y=0xb6, .sp=0xb8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x88}, {.addr=0x7487, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7487, .value=0xce, .type=IO_READ},
        {.addr=0x7488, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0279) {
    const struct CPU_State initial_cpu = {.pc=0xd65b, .a=0xf0, .x=0x47, .y=0x2e, .sp=0x15, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xff}, {.addr=0xd65b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd65c, .a=0xf0, .x=0xff, .y=0x2e, .sp=0x16, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xff}, {.addr=0xd65b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd65b, .value=0xce, .type=IO_READ},
        {.addr=0xd65c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_027A) {
    const struct CPU_State initial_cpu = {.pc=0x21ec, .a=0xca, .x=0x3d, .y=0x79, .sp=0xd9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xae}, {.addr=0x21ec, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x21ed, .a=0xca, .x=0xae, .y=0x79, .sp=0xda, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xae}, {.addr=0x21ec, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x21ec, .value=0xce, .type=IO_READ},
        {.addr=0x21ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01da, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_027B) {
    const struct CPU_State initial_cpu = {.pc=0x28b3, .a=0xaf, .x=0xf9, .y=0xd8, .sp=0x74, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x53}, {.addr=0x28b3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x28b4, .a=0xaf, .x=0x53, .y=0xd8, .sp=0x75, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x53}, {.addr=0x28b3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x28b3, .value=0xce, .type=IO_READ},
        {.addr=0x28b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_027C) {
    const struct CPU_State initial_cpu = {.pc=0x2ec0, .a=0x1a, .x=0xdf, .y=0xb3, .sp=0xe1, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xb5}, {.addr=0x2ec0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2ec1, .a=0x1a, .x=0xb5, .y=0xb3, .sp=0xe2, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xb5}, {.addr=0x2ec0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2ec0, .value=0xce, .type=IO_READ},
        {.addr=0x2ec1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_027D) {
    const struct CPU_State initial_cpu = {.pc=0x62d2, .a=0xf4, .x=0xd4, .y=0xef, .sp=0x65, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x89}, {.addr=0x62d2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x62d3, .a=0xf4, .x=0x89, .y=0xef, .sp=0x66, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x89}, {.addr=0x62d2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x62d2, .value=0xce, .type=IO_READ},
        {.addr=0x62d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_027E) {
    const struct CPU_State initial_cpu = {.pc=0x4ba6, .a=0xbb, .x=0x0c, .y=0x34, .sp=0xdb, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xe0}, {.addr=0x4ba6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4ba7, .a=0xbb, .x=0xe0, .y=0x34, .sp=0xdc, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xe0}, {.addr=0x4ba6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4ba6, .value=0xce, .type=IO_READ},
        {.addr=0x4ba7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_027F) {
    const struct CPU_State initial_cpu = {.pc=0x6813, .a=0x17, .x=0x18, .y=0x9a, .sp=0xe3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xb3}, {.addr=0x6813, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6814, .a=0x17, .x=0xb3, .y=0x9a, .sp=0xe4, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xb3}, {.addr=0x6813, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6813, .value=0xce, .type=IO_READ},
        {.addr=0x6814, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0280) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0x7e, .x=0xb6, .y=0x3f, .sp=0xaa, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x1c}, {.addr=0xd79f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd7a0, .a=0x7e, .x=0x1c, .y=0x3f, .sp=0xab, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x1c}, {.addr=0xd79f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0xce, .type=IO_READ},
        {.addr=0xd7a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ab, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0281) {
    const struct CPU_State initial_cpu = {.pc=0x3e26, .a=0x24, .x=0xfd, .y=0x32, .sp=0xdd, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x15}, {.addr=0x3e26, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3e27, .a=0x24, .x=0x15, .y=0x32, .sp=0xde, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x15}, {.addr=0x3e26, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3e26, .value=0xce, .type=IO_READ},
        {.addr=0x3e27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0282) {
    const struct CPU_State initial_cpu = {.pc=0xeb4b, .a=0x12, .x=0xbf, .y=0x29, .sp=0xf3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x50}, {.addr=0xeb4b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeb4c, .a=0x12, .x=0x50, .y=0x29, .sp=0xf4, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x50}, {.addr=0xeb4b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeb4b, .value=0xce, .type=IO_READ},
        {.addr=0xeb4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa3c8, .a=0xaa, .x=0x94, .y=0xf1, .sp=0x36, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x45}, {.addr=0xa3c8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa3c9, .a=0xaa, .x=0x45, .y=0xf1, .sp=0x37, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x45}, {.addr=0xa3c8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa3c8, .value=0xce, .type=IO_READ},
        {.addr=0xa3c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0284) {
    const struct CPU_State initial_cpu = {.pc=0xc4d3, .a=0xea, .x=0x5a, .y=0x9e, .sp=0x28, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x31}, {.addr=0xc4d3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc4d4, .a=0xea, .x=0x31, .y=0x9e, .sp=0x29, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x31}, {.addr=0xc4d3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc4d3, .value=0xce, .type=IO_READ},
        {.addr=0xc4d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0285) {
    const struct CPU_State initial_cpu = {.pc=0x0f47, .a=0x8a, .x=0x27, .y=0x12, .sp=0x35, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xc2}, {.addr=0x0f47, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0f48, .a=0x8a, .x=0xc2, .y=0x12, .sp=0x36, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xc2}, {.addr=0x0f47, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0f47, .value=0xce, .type=IO_READ},
        {.addr=0x0f48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0286) {
    const struct CPU_State initial_cpu = {.pc=0xd249, .a=0xd4, .x=0x17, .y=0xec, .sp=0x2c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x36}, {.addr=0xd249, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd24a, .a=0xd4, .x=0x36, .y=0xec, .sp=0x2d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x36}, {.addr=0xd249, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd249, .value=0xce, .type=IO_READ},
        {.addr=0xd24a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0287) {
    const struct CPU_State initial_cpu = {.pc=0x1a42, .a=0xda, .x=0xb5, .y=0x63, .sp=0x18, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x10}, {.addr=0x1a42, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1a43, .a=0xda, .x=0x10, .y=0x63, .sp=0x19, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x10}, {.addr=0x1a42, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1a42, .value=0xce, .type=IO_READ},
        {.addr=0x1a43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0288) {
    const struct CPU_State initial_cpu = {.pc=0xa311, .a=0x0f, .x=0x6b, .y=0xe6, .sp=0x72, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x45}, {.addr=0xa311, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa312, .a=0x0f, .x=0x45, .y=0xe6, .sp=0x73, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x45}, {.addr=0xa311, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa311, .value=0xce, .type=IO_READ},
        {.addr=0xa312, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0289) {
    const struct CPU_State initial_cpu = {.pc=0x1738, .a=0x7d, .x=0x26, .y=0xc8, .sp=0x46, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x84}, {.addr=0x1738, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1739, .a=0x7d, .x=0x84, .y=0xc8, .sp=0x47, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x84}, {.addr=0x1738, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1738, .value=0xce, .type=IO_READ},
        {.addr=0x1739, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_028A) {
    const struct CPU_State initial_cpu = {.pc=0xab17, .a=0x9b, .x=0x50, .y=0x7d, .sp=0xce, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x59}, {.addr=0xab17, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xab18, .a=0x9b, .x=0x59, .y=0x7d, .sp=0xcf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x59}, {.addr=0xab17, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xab17, .value=0xce, .type=IO_READ},
        {.addr=0xab18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_028B) {
    const struct CPU_State initial_cpu = {.pc=0x4e4f, .a=0xcf, .x=0x3b, .y=0xe4, .sp=0x31, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x2f}, {.addr=0x4e4f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4e50, .a=0xcf, .x=0x2f, .y=0xe4, .sp=0x32, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x2f}, {.addr=0x4e4f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4e4f, .value=0xce, .type=IO_READ},
        {.addr=0x4e50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_028C) {
    const struct CPU_State initial_cpu = {.pc=0x037e, .a=0x42, .x=0xa1, .y=0xf2, .sp=0xd4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xfc}, {.addr=0x037e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x037f, .a=0x42, .x=0xfc, .y=0xf2, .sp=0xd5, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xfc}, {.addr=0x037e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x037e, .value=0xce, .type=IO_READ},
        {.addr=0x037f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_028D) {
    const struct CPU_State initial_cpu = {.pc=0x8eed, .a=0x69, .x=0x23, .y=0x17, .sp=0x5c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x75}, {.addr=0x8eed, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8eee, .a=0x69, .x=0x75, .y=0x17, .sp=0x5d, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x75}, {.addr=0x8eed, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8eed, .value=0xce, .type=IO_READ},
        {.addr=0x8eee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_028E) {
    const struct CPU_State initial_cpu = {.pc=0x076d, .a=0xec, .x=0x3f, .y=0x5e, .sp=0x2b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x40}, {.addr=0x076d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x076e, .a=0xec, .x=0x40, .y=0x5e, .sp=0x2c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x40}, {.addr=0x076d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x076d, .value=0xce, .type=IO_READ},
        {.addr=0x076e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012c, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_028F) {
    const struct CPU_State initial_cpu = {.pc=0xe7ab, .a=0x46, .x=0x63, .y=0x75, .sp=0x8b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x20}, {.addr=0xe7ab, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe7ac, .a=0x46, .x=0x20, .y=0x75, .sp=0x8c, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x20}, {.addr=0xe7ab, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe7ab, .value=0xce, .type=IO_READ},
        {.addr=0xe7ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0290) {
    const struct CPU_State initial_cpu = {.pc=0xd83c, .a=0xb7, .x=0xa1, .y=0xd5, .sp=0x48, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xdc}, {.addr=0xd83c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd83d, .a=0xb7, .x=0xdc, .y=0xd5, .sp=0x49, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xdc}, {.addr=0xd83c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd83c, .value=0xce, .type=IO_READ},
        {.addr=0xd83d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0291) {
    const struct CPU_State initial_cpu = {.pc=0xfb84, .a=0x6d, .x=0xae, .y=0xef, .sp=0xa0, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xfd}, {.addr=0xfb84, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfb85, .a=0x6d, .x=0xfd, .y=0xef, .sp=0xa1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xfd}, {.addr=0xfb84, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfb84, .value=0xce, .type=IO_READ},
        {.addr=0xfb85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0292) {
    const struct CPU_State initial_cpu = {.pc=0xfc3d, .a=0xa1, .x=0x01, .y=0x25, .sp=0x9e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x6c}, {.addr=0xfc3d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfc3e, .a=0xa1, .x=0x6c, .y=0x25, .sp=0x9f, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x6c}, {.addr=0xfc3d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfc3d, .value=0xce, .type=IO_READ},
        {.addr=0xfc3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0293) {
    const struct CPU_State initial_cpu = {.pc=0x9a48, .a=0x0e, .x=0x59, .y=0x9b, .sp=0x8c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x3b}, {.addr=0x9a48, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9a49, .a=0x0e, .x=0x3b, .y=0x9b, .sp=0x8d, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x3b}, {.addr=0x9a48, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9a48, .value=0xce, .type=IO_READ},
        {.addr=0x9a49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0294) {
    const struct CPU_State initial_cpu = {.pc=0xf7f6, .a=0xd1, .x=0x32, .y=0xef, .sp=0x70, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x78}, {.addr=0xf7f6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf7f7, .a=0xd1, .x=0x78, .y=0xef, .sp=0x71, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x78}, {.addr=0xf7f6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf7f6, .value=0xce, .type=IO_READ},
        {.addr=0xf7f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0295) {
    const struct CPU_State initial_cpu = {.pc=0x4ac3, .a=0x1e, .x=0xd0, .y=0x65, .sp=0x1a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x43}, {.addr=0x4ac3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4ac4, .a=0x1e, .x=0x43, .y=0x65, .sp=0x1b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x43}, {.addr=0x4ac3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4ac3, .value=0xce, .type=IO_READ},
        {.addr=0x4ac4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0296) {
    const struct CPU_State initial_cpu = {.pc=0x7754, .a=0xd1, .x=0x91, .y=0x8b, .sp=0xc7, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x77}, {.addr=0x7754, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7755, .a=0xd1, .x=0x77, .y=0x8b, .sp=0xc8, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x77}, {.addr=0x7754, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7754, .value=0xce, .type=IO_READ},
        {.addr=0x7755, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0297) {
    const struct CPU_State initial_cpu = {.pc=0xbc1a, .a=0x26, .x=0xb1, .y=0x17, .sp=0x59, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x67}, {.addr=0xbc1a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbc1b, .a=0x26, .x=0x67, .y=0x17, .sp=0x5a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x67}, {.addr=0xbc1a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbc1a, .value=0xce, .type=IO_READ},
        {.addr=0xbc1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0298) {
    const struct CPU_State initial_cpu = {.pc=0x2bd3, .a=0x9d, .x=0x4c, .y=0x53, .sp=0x4f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xc7}, {.addr=0x2bd3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2bd4, .a=0x9d, .x=0xc7, .y=0x53, .sp=0x50, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xc7}, {.addr=0x2bd3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2bd3, .value=0xce, .type=IO_READ},
        {.addr=0x2bd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0299) {
    const struct CPU_State initial_cpu = {.pc=0x619f, .a=0x36, .x=0x15, .y=0x1c, .sp=0x7b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xb4}, {.addr=0x619f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x61a0, .a=0x36, .x=0xb4, .y=0x1c, .sp=0x7c, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xb4}, {.addr=0x619f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x619f, .value=0xce, .type=IO_READ},
        {.addr=0x61a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_029A) {
    const struct CPU_State initial_cpu = {.pc=0x70c0, .a=0xb9, .x=0xd4, .y=0xbb, .sp=0x0b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x2b}, {.addr=0x70c0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x70c1, .a=0xb9, .x=0x2b, .y=0xbb, .sp=0x0c, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x2b}, {.addr=0x70c0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x70c0, .value=0xce, .type=IO_READ},
        {.addr=0x70c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_029B) {
    const struct CPU_State initial_cpu = {.pc=0x070c, .a=0x46, .x=0x67, .y=0x6e, .sp=0x2a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xda}, {.addr=0x070c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x070d, .a=0x46, .x=0xda, .y=0x6e, .sp=0x2b, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xda}, {.addr=0x070c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x070c, .value=0xce, .type=IO_READ},
        {.addr=0x070d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_029C) {
    const struct CPU_State initial_cpu = {.pc=0x7142, .a=0x29, .x=0xf1, .y=0x8d, .sp=0x78, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x9e}, {.addr=0x7142, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7143, .a=0x29, .x=0x9e, .y=0x8d, .sp=0x79, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x9e}, {.addr=0x7142, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7142, .value=0xce, .type=IO_READ},
        {.addr=0x7143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_029D) {
    const struct CPU_State initial_cpu = {.pc=0x543f, .a=0x43, .x=0x61, .y=0x53, .sp=0xac, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x0a}, {.addr=0x543f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5440, .a=0x43, .x=0x0a, .y=0x53, .sp=0xad, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x0a}, {.addr=0x543f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x543f, .value=0xce, .type=IO_READ},
        {.addr=0x5440, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_029E) {
    const struct CPU_State initial_cpu = {.pc=0x0236, .a=0x52, .x=0x7f, .y=0xd0, .sp=0xe5, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xcf}, {.addr=0x0236, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0237, .a=0x52, .x=0xcf, .y=0xd0, .sp=0xe6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xcf}, {.addr=0x0236, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0236, .value=0xce, .type=IO_READ},
        {.addr=0x0237, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_029F) {
    const struct CPU_State initial_cpu = {.pc=0x2290, .a=0xfb, .x=0x84, .y=0xfd, .sp=0xaf, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x20}, {.addr=0x2290, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2291, .a=0xfb, .x=0x20, .y=0xfd, .sp=0xb0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x20}, {.addr=0x2290, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2290, .value=0xce, .type=IO_READ},
        {.addr=0x2291, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x8bf0, .a=0x56, .x=0x03, .y=0x5a, .sp=0x67, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xe0}, {.addr=0x8bf0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8bf1, .a=0x56, .x=0xe0, .y=0x5a, .sp=0x68, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xe0}, {.addr=0x8bf0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8bf0, .value=0xce, .type=IO_READ},
        {.addr=0x8bf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xc55f, .a=0xa2, .x=0xf5, .y=0x33, .sp=0xcf, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x8f}, {.addr=0xc55f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc560, .a=0xa2, .x=0x8f, .y=0x33, .sp=0xd0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x8f}, {.addr=0xc55f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc55f, .value=0xce, .type=IO_READ},
        {.addr=0xc560, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x7514, .a=0x9e, .x=0x63, .y=0x9f, .sp=0xdd, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x55}, {.addr=0x7514, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7515, .a=0x9e, .x=0x55, .y=0x9f, .sp=0xde, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x55}, {.addr=0x7514, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7514, .value=0xce, .type=IO_READ},
        {.addr=0x7515, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xf53d, .a=0x3b, .x=0x67, .y=0x22, .sp=0xea, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xc7}, {.addr=0xf53d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf53e, .a=0x3b, .x=0xc7, .y=0x22, .sp=0xeb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xc7}, {.addr=0xf53d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf53d, .value=0xce, .type=IO_READ},
        {.addr=0xf53e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01eb, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x8921, .a=0xc5, .x=0x1a, .y=0x27, .sp=0x57, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x3f}, {.addr=0x8921, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8922, .a=0xc5, .x=0x3f, .y=0x27, .sp=0x58, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x3f}, {.addr=0x8921, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8921, .value=0xce, .type=IO_READ},
        {.addr=0x8922, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x244a, .a=0x9f, .x=0xf2, .y=0xf1, .sp=0x91, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xbb}, {.addr=0x244a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x244b, .a=0x9f, .x=0xbb, .y=0xf1, .sp=0x92, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xbb}, {.addr=0x244a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x244a, .value=0xce, .type=IO_READ},
        {.addr=0x244b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xa2ad, .a=0x46, .x=0xf7, .y=0x1a, .sp=0x1a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x5d}, {.addr=0xa2ad, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa2ae, .a=0x46, .x=0x5d, .y=0x1a, .sp=0x1b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x5d}, {.addr=0xa2ad, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa2ad, .value=0xce, .type=IO_READ},
        {.addr=0xa2ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x9014, .a=0x02, .x=0xc8, .y=0x31, .sp=0x85, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x44}, {.addr=0x9014, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9015, .a=0x02, .x=0x44, .y=0x31, .sp=0x86, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x44}, {.addr=0x9014, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9014, .value=0xce, .type=IO_READ},
        {.addr=0x9015, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xb860, .a=0x91, .x=0x73, .y=0xa6, .sp=0x24, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x9b}, {.addr=0xb860, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb861, .a=0x91, .x=0x9b, .y=0xa6, .sp=0x25, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x9b}, {.addr=0xb860, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb860, .value=0xce, .type=IO_READ},
        {.addr=0xb861, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x4562, .a=0x14, .x=0x7b, .y=0xdd, .sp=0x42, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x5c}, {.addr=0x4562, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4563, .a=0x14, .x=0x5c, .y=0xdd, .sp=0x43, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x5c}, {.addr=0x4562, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4562, .value=0xce, .type=IO_READ},
        {.addr=0x4563, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x1d33, .a=0x11, .x=0x46, .y=0x34, .sp=0xd7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x3b}, {.addr=0x1d33, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1d34, .a=0x11, .x=0x3b, .y=0x34, .sp=0xd8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x3b}, {.addr=0x1d33, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1d33, .value=0xce, .type=IO_READ},
        {.addr=0x1d34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x218e, .a=0x00, .x=0x65, .y=0x45, .sp=0x72, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x4f}, {.addr=0x218e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x218f, .a=0x00, .x=0x4f, .y=0x45, .sp=0x73, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x4f}, {.addr=0x218e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x218e, .value=0xce, .type=IO_READ},
        {.addr=0x218f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x5445, .a=0xbf, .x=0x66, .y=0xa0, .sp=0x03, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xcc}, {.addr=0x5445, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5446, .a=0xbf, .x=0xcc, .y=0xa0, .sp=0x04, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xcc}, {.addr=0x5445, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5445, .value=0xce, .type=IO_READ},
        {.addr=0x5446, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x66ca, .a=0x41, .x=0x96, .y=0x35, .sp=0x59, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x12}, {.addr=0x66ca, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x66cb, .a=0x41, .x=0x12, .y=0x35, .sp=0x5a, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x12}, {.addr=0x66ca, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x66ca, .value=0xce, .type=IO_READ},
        {.addr=0x66cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x9408, .a=0x65, .x=0xf0, .y=0xb2, .sp=0xf4, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x3b}, {.addr=0x9408, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9409, .a=0x65, .x=0x3b, .y=0xb2, .sp=0xf5, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x3b}, {.addr=0x9408, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9408, .value=0xce, .type=IO_READ},
        {.addr=0x9409, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x2d97, .a=0x46, .x=0xb8, .y=0x2b, .sp=0x5d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xa4}, {.addr=0x2d97, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2d98, .a=0x46, .x=0xa4, .y=0x2b, .sp=0x5e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xa4}, {.addr=0x2d97, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2d97, .value=0xce, .type=IO_READ},
        {.addr=0x2d98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x2109, .a=0x5e, .x=0x3d, .y=0x7e, .sp=0x63, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x81}, {.addr=0x2109, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x210a, .a=0x5e, .x=0x81, .y=0x7e, .sp=0x64, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x81}, {.addr=0x2109, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2109, .value=0xce, .type=IO_READ},
        {.addr=0x210a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x7781, .a=0x3b, .x=0x58, .y=0xa7, .sp=0x72, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xa8}, {.addr=0x7781, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7782, .a=0x3b, .x=0xa8, .y=0xa7, .sp=0x73, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xa8}, {.addr=0x7781, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7781, .value=0xce, .type=IO_READ},
        {.addr=0x7782, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x89c3, .a=0x7a, .x=0x6c, .y=0x46, .sp=0xf9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xd3}, {.addr=0x89c3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x89c4, .a=0x7a, .x=0xd3, .y=0x46, .sp=0xfa, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xd3}, {.addr=0x89c3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x89c3, .value=0xce, .type=IO_READ},
        {.addr=0x89c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xce5c, .a=0x2a, .x=0xd3, .y=0x44, .sp=0x23, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xf7}, {.addr=0xce5c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xce5d, .a=0x2a, .x=0xf7, .y=0x44, .sp=0x24, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xf7}, {.addr=0xce5c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xce5c, .value=0xce, .type=IO_READ},
        {.addr=0xce5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x340f, .a=0xcb, .x=0x3d, .y=0x7d, .sp=0x12, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x27}, {.addr=0x340f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3410, .a=0xcb, .x=0x27, .y=0x7d, .sp=0x13, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x27}, {.addr=0x340f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x340f, .value=0xce, .type=IO_READ},
        {.addr=0x3410, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x310e, .a=0xf8, .x=0x1a, .y=0x53, .sp=0xdf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xf5}, {.addr=0x310e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x310f, .a=0xf8, .x=0xf5, .y=0x53, .sp=0xe0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xf5}, {.addr=0x310e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x310e, .value=0xce, .type=IO_READ},
        {.addr=0x310f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xf6a8, .a=0xf5, .x=0xa9, .y=0x54, .sp=0x79, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x87}, {.addr=0xf6a8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf6a9, .a=0xf5, .x=0x87, .y=0x54, .sp=0x7a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x87}, {.addr=0xf6a8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf6a8, .value=0xce, .type=IO_READ},
        {.addr=0xf6a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xdd4f, .a=0x4a, .x=0x18, .y=0xb3, .sp=0x27, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x3b}, {.addr=0xdd4f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdd50, .a=0x4a, .x=0x3b, .y=0xb3, .sp=0x28, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x3b}, {.addr=0xdd4f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdd4f, .value=0xce, .type=IO_READ},
        {.addr=0xdd50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xe703, .a=0x65, .x=0x89, .y=0x40, .sp=0xcb, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xfe}, {.addr=0xe703, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe704, .a=0x65, .x=0xfe, .y=0x40, .sp=0xcc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xfe}, {.addr=0xe703, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe703, .value=0xce, .type=IO_READ},
        {.addr=0xe704, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x656a, .a=0xed, .x=0x3c, .y=0x16, .sp=0xeb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x98}, {.addr=0x656a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x656b, .a=0xed, .x=0x98, .y=0x16, .sp=0xec, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x98}, {.addr=0x656a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x656a, .value=0xce, .type=IO_READ},
        {.addr=0x656b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x3434, .a=0x37, .x=0x4a, .y=0xb6, .sp=0x2f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x28}, {.addr=0x3434, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3435, .a=0x37, .x=0x28, .y=0xb6, .sp=0x30, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x28}, {.addr=0x3434, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3434, .value=0xce, .type=IO_READ},
        {.addr=0x3435, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xfc06, .a=0x25, .x=0x66, .y=0x75, .sp=0xe1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x07}, {.addr=0xfc06, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfc07, .a=0x25, .x=0x07, .y=0x75, .sp=0xe2, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x07}, {.addr=0xfc06, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfc06, .value=0xce, .type=IO_READ},
        {.addr=0xfc07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xd7b1, .a=0x93, .x=0x32, .y=0x01, .sp=0x66, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x02}, {.addr=0xd7b1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd7b2, .a=0x93, .x=0x02, .y=0x01, .sp=0x67, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x02}, {.addr=0xd7b1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd7b1, .value=0xce, .type=IO_READ},
        {.addr=0xd7b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xa531, .a=0xa3, .x=0x07, .y=0x36, .sp=0x3a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x93}, {.addr=0xa531, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa532, .a=0xa3, .x=0x93, .y=0x36, .sp=0x3b, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x93}, {.addr=0xa531, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa531, .value=0xce, .type=IO_READ},
        {.addr=0xa532, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x4fb4, .a=0xa1, .x=0x41, .y=0xfb, .sp=0x9e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x22}, {.addr=0x4fb4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4fb5, .a=0xa1, .x=0x22, .y=0xfb, .sp=0x9f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x22}, {.addr=0x4fb4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4fb4, .value=0xce, .type=IO_READ},
        {.addr=0x4fb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x7cea, .a=0x1b, .x=0xb3, .y=0xbf, .sp=0x19, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x01}, {.addr=0x7cea, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7ceb, .a=0x1b, .x=0x01, .y=0xbf, .sp=0x1a, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x01}, {.addr=0x7cea, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7cea, .value=0xce, .type=IO_READ},
        {.addr=0x7ceb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x178b, .a=0x4c, .x=0x5a, .y=0xa1, .sp=0x68, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x37}, {.addr=0x178b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x178c, .a=0x4c, .x=0x37, .y=0xa1, .sp=0x69, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x37}, {.addr=0x178b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x178b, .value=0xce, .type=IO_READ},
        {.addr=0x178c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0169, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x7769, .a=0x44, .x=0x76, .y=0x21, .sp=0x9c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x5e}, {.addr=0x7769, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x776a, .a=0x44, .x=0x5e, .y=0x21, .sp=0x9d, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x5e}, {.addr=0x7769, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7769, .value=0xce, .type=IO_READ},
        {.addr=0x776a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x10e2, .a=0xb5, .x=0xea, .y=0xa4, .sp=0xfb, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x50}, {.addr=0x10e2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x10e3, .a=0xb5, .x=0x50, .y=0xa4, .sp=0xfc, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x50}, {.addr=0x10e2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x10e2, .value=0xce, .type=IO_READ},
        {.addr=0x10e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x5aac, .a=0xed, .x=0xc2, .y=0x9a, .sp=0x9c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x17}, {.addr=0x5aac, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5aad, .a=0xed, .x=0x17, .y=0x9a, .sp=0x9d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x17}, {.addr=0x5aac, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5aac, .value=0xce, .type=IO_READ},
        {.addr=0x5aad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8843, .a=0xed, .x=0x75, .y=0x82, .sp=0xc4, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xab}, {.addr=0x8843, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8844, .a=0xed, .x=0xab, .y=0x82, .sp=0xc5, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xab}, {.addr=0x8843, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8843, .value=0xce, .type=IO_READ},
        {.addr=0x8844, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x82d9, .a=0xb0, .x=0x10, .y=0xb1, .sp=0xbc, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xf9}, {.addr=0x82d9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x82da, .a=0xb0, .x=0xf9, .y=0xb1, .sp=0xbd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xf9}, {.addr=0x82d9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x82d9, .value=0xce, .type=IO_READ},
        {.addr=0x82da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x539f, .a=0x57, .x=0x59, .y=0xb0, .sp=0x6f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xf9}, {.addr=0x539f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x53a0, .a=0x57, .x=0xf9, .y=0xb0, .sp=0x70, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xf9}, {.addr=0x539f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x539f, .value=0xce, .type=IO_READ},
        {.addr=0x53a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9e63, .a=0x80, .x=0xef, .y=0xf3, .sp=0x45, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x0d}, {.addr=0x9e63, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9e64, .a=0x80, .x=0x0d, .y=0xf3, .sp=0x46, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x0d}, {.addr=0x9e63, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9e63, .value=0xce, .type=IO_READ},
        {.addr=0x9e64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x828c, .a=0x7d, .x=0xdb, .y=0xc0, .sp=0x9c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x39}, {.addr=0x828c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x828d, .a=0x7d, .x=0x39, .y=0xc0, .sp=0x9d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x39}, {.addr=0x828c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x828c, .value=0xce, .type=IO_READ},
        {.addr=0x828d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xcc68, .a=0x97, .x=0x13, .y=0xdd, .sp=0xbd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x85}, {.addr=0xcc68, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcc69, .a=0x97, .x=0x85, .y=0xdd, .sp=0xbe, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x85}, {.addr=0xcc68, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcc68, .value=0xce, .type=IO_READ},
        {.addr=0xcc69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x8955, .a=0x1d, .x=0x00, .y=0x5a, .sp=0xac, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xb7}, {.addr=0x8955, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8956, .a=0x1d, .x=0xb7, .y=0x5a, .sp=0xad, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xb7}, {.addr=0x8955, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8955, .value=0xce, .type=IO_READ},
        {.addr=0x8956, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x9bfb, .a=0xb7, .x=0x08, .y=0xd8, .sp=0x1d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0xda}, {.addr=0x9bfb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9bfc, .a=0xb7, .x=0xda, .y=0xd8, .sp=0x1e, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xda}, {.addr=0x9bfb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9bfb, .value=0xce, .type=IO_READ},
        {.addr=0x9bfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xce74, .a=0x4b, .x=0x7b, .y=0x9b, .sp=0x54, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xf1}, {.addr=0xce74, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xce75, .a=0x4b, .x=0xf1, .y=0x9b, .sp=0x55, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xf1}, {.addr=0xce74, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xce74, .value=0xce, .type=IO_READ},
        {.addr=0xce75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x812d, .a=0xd3, .x=0x16, .y=0x87, .sp=0x71, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x1f}, {.addr=0x812d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x812e, .a=0xd3, .x=0x1f, .y=0x87, .sp=0x72, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x1f}, {.addr=0x812d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x812d, .value=0xce, .type=IO_READ},
        {.addr=0x812e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x855a, .a=0x9d, .x=0x28, .y=0x7f, .sp=0x3e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x37}, {.addr=0x855a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x855b, .a=0x9d, .x=0x37, .y=0x7f, .sp=0x3f, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x37}, {.addr=0x855a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x855a, .value=0xce, .type=IO_READ},
        {.addr=0x855b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x7bba, .a=0x72, .x=0x70, .y=0xc7, .sp=0xe6, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x5f}, {.addr=0x7bba, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7bbb, .a=0x72, .x=0x5f, .y=0xc7, .sp=0xe7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x5f}, {.addr=0x7bba, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7bba, .value=0xce, .type=IO_READ},
        {.addr=0x7bbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x4343, .a=0xc2, .x=0xd4, .y=0xfd, .sp=0x3c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xb8}, {.addr=0x4343, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4344, .a=0xc2, .x=0xb8, .y=0xfd, .sp=0x3d, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xb8}, {.addr=0x4343, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4343, .value=0xce, .type=IO_READ},
        {.addr=0x4344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x2a69, .a=0x81, .x=0x8f, .y=0x7b, .sp=0x7c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xe0}, {.addr=0x2a69, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2a6a, .a=0x81, .x=0xe0, .y=0x7b, .sp=0x7d, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xe0}, {.addr=0x2a69, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2a69, .value=0xce, .type=IO_READ},
        {.addr=0x2a6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x928c, .a=0x93, .x=0x9b, .y=0x6b, .sp=0x12, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xcd}, {.addr=0x928c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x928d, .a=0x93, .x=0xcd, .y=0x6b, .sp=0x13, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xcd}, {.addr=0x928c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x928c, .value=0xce, .type=IO_READ},
        {.addr=0x928d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x0fc6, .a=0x3b, .x=0x22, .y=0xec, .sp=0x36, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x66}, {.addr=0x0fc6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0fc7, .a=0x3b, .x=0x66, .y=0xec, .sp=0x37, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x66}, {.addr=0x0fc6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0fc6, .value=0xce, .type=IO_READ},
        {.addr=0x0fc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x1eb9, .a=0xa2, .x=0xe6, .y=0x4a, .sp=0x71, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xa7}, {.addr=0x1eb9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1eba, .a=0xa2, .x=0xa7, .y=0x4a, .sp=0x72, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xa7}, {.addr=0x1eb9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1eb9, .value=0xce, .type=IO_READ},
        {.addr=0x1eba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x845f, .a=0x11, .x=0x64, .y=0x92, .sp=0xbb, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xc1}, {.addr=0x845f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8460, .a=0x11, .x=0xc1, .y=0x92, .sp=0xbc, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xc1}, {.addr=0x845f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x845f, .value=0xce, .type=IO_READ},
        {.addr=0x8460, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x2f72, .a=0x1a, .x=0xe8, .y=0x4d, .sp=0x73, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xa9}, {.addr=0x2f72, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2f73, .a=0x1a, .x=0xa9, .y=0x4d, .sp=0x74, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xa9}, {.addr=0x2f72, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2f72, .value=0xce, .type=IO_READ},
        {.addr=0x2f73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x5dc4, .a=0x54, .x=0x7f, .y=0x93, .sp=0xa3, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x0d}, {.addr=0x5dc4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5dc5, .a=0x54, .x=0x0d, .y=0x93, .sp=0xa4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x0d}, {.addr=0x5dc4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5dc4, .value=0xce, .type=IO_READ},
        {.addr=0x5dc5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x41f6, .a=0xa0, .x=0x2a, .y=0x80, .sp=0x93, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xf7}, {.addr=0x41f6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x41f7, .a=0xa0, .x=0xf7, .y=0x80, .sp=0x94, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xf7}, {.addr=0x41f6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x41f6, .value=0xce, .type=IO_READ},
        {.addr=0x41f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x1ca9, .a=0xbd, .x=0x77, .y=0x7f, .sp=0x51, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xc7}, {.addr=0x1ca9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1caa, .a=0xbd, .x=0xc7, .y=0x7f, .sp=0x52, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xc7}, {.addr=0x1ca9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1ca9, .value=0xce, .type=IO_READ},
        {.addr=0x1caa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x4aaa, .a=0x9b, .x=0x0c, .y=0x68, .sp=0x75, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x2c}, {.addr=0x4aaa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4aab, .a=0x9b, .x=0x2c, .y=0x68, .sp=0x76, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x2c}, {.addr=0x4aaa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4aaa, .value=0xce, .type=IO_READ},
        {.addr=0x4aab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xc97c, .a=0x4e, .x=0x47, .y=0x76, .sp=0xa7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x52}, {.addr=0xc97c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc97d, .a=0x4e, .x=0x52, .y=0x76, .sp=0xa8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x52}, {.addr=0xc97c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc97c, .value=0xce, .type=IO_READ},
        {.addr=0xc97d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x139b, .a=0x16, .x=0xa6, .y=0x83, .sp=0xbe, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xe8}, {.addr=0x139b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x139c, .a=0x16, .x=0xe8, .y=0x83, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xe8}, {.addr=0x139b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x139b, .value=0xce, .type=IO_READ},
        {.addr=0x139c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xf25d, .a=0xa4, .x=0xfc, .y=0x0f, .sp=0xcc, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x9b}, {.addr=0xf25d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf25e, .a=0xa4, .x=0x9b, .y=0x0f, .sp=0xcd, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x9b}, {.addr=0xf25d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf25d, .value=0xce, .type=IO_READ},
        {.addr=0xf25e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xb7cc, .a=0x7c, .x=0x4f, .y=0xce, .sp=0x06, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x59}, {.addr=0xb7cc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb7cd, .a=0x7c, .x=0x59, .y=0xce, .sp=0x07, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x59}, {.addr=0xb7cc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb7cc, .value=0xce, .type=IO_READ},
        {.addr=0xb7cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x84ed, .a=0xa2, .x=0x75, .y=0x28, .sp=0x2c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x52}, {.addr=0x84ed, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x84ee, .a=0xa2, .x=0x52, .y=0x28, .sp=0x2d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x52}, {.addr=0x84ed, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x84ed, .value=0xce, .type=IO_READ},
        {.addr=0x84ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xb834, .a=0x42, .x=0xfd, .y=0x1d, .sp=0x05, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x15}, {.addr=0xb834, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb835, .a=0x42, .x=0x15, .y=0x1d, .sp=0x06, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x15}, {.addr=0xb834, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb834, .value=0xce, .type=IO_READ},
        {.addr=0xb835, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x8b73, .a=0x46, .x=0xd2, .y=0x4b, .sp=0xa0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x9d}, {.addr=0x8b73, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8b74, .a=0x46, .x=0x9d, .y=0x4b, .sp=0xa1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x9d}, {.addr=0x8b73, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8b73, .value=0xce, .type=IO_READ},
        {.addr=0x8b74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x7bcd, .a=0x6e, .x=0x64, .y=0x82, .sp=0x0a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x6c}, {.addr=0x7bcd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7bce, .a=0x6e, .x=0x6c, .y=0x82, .sp=0x0b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x6c}, {.addr=0x7bcd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7bcd, .value=0xce, .type=IO_READ},
        {.addr=0x7bce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xbc9f, .a=0x6c, .x=0xc8, .y=0x5e, .sp=0x8e, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xb1}, {.addr=0xbc9f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbca0, .a=0x6c, .x=0xb1, .y=0x5e, .sp=0x8f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xb1}, {.addr=0xbc9f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbc9f, .value=0xce, .type=IO_READ},
        {.addr=0xbca0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x420a, .a=0x66, .x=0x47, .y=0xb1, .sp=0x7c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x54}, {.addr=0x420a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x420b, .a=0x66, .x=0x54, .y=0xb1, .sp=0x7d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x54}, {.addr=0x420a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x420a, .value=0xce, .type=IO_READ},
        {.addr=0x420b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xe992, .a=0x65, .x=0x66, .y=0xfd, .sp=0x58, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xf5}, {.addr=0xe992, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe993, .a=0x65, .x=0xf5, .y=0xfd, .sp=0x59, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xf5}, {.addr=0xe992, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe992, .value=0xce, .type=IO_READ},
        {.addr=0xe993, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xd3ec, .a=0x8e, .x=0x94, .y=0x65, .sp=0xf5, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xbf}, {.addr=0xd3ec, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd3ed, .a=0x8e, .x=0xbf, .y=0x65, .sp=0xf6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xbf}, {.addr=0xd3ec, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd3ec, .value=0xce, .type=IO_READ},
        {.addr=0xd3ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x46b7, .a=0x38, .x=0x03, .y=0xba, .sp=0x81, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xcc}, {.addr=0x46b7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x46b8, .a=0x38, .x=0xcc, .y=0xba, .sp=0x82, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xcc}, {.addr=0x46b7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x46b7, .value=0xce, .type=IO_READ},
        {.addr=0x46b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0182, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x9d16, .a=0x8d, .x=0x72, .y=0xe8, .sp=0x4e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xa0}, {.addr=0x9d16, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9d17, .a=0x8d, .x=0xa0, .y=0xe8, .sp=0x4f, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xa0}, {.addr=0x9d16, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9d16, .value=0xce, .type=IO_READ},
        {.addr=0x9d17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xee97, .a=0x6c, .x=0x20, .y=0x1c, .sp=0xab, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x0a}, {.addr=0xee97, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xee98, .a=0x6c, .x=0x0a, .y=0x1c, .sp=0xac, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x0a}, {.addr=0xee97, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xee97, .value=0xce, .type=IO_READ},
        {.addr=0xee98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x2ec9, .a=0xcf, .x=0x8a, .y=0x0a, .sp=0x7b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xe8}, {.addr=0x2ec9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2eca, .a=0xcf, .x=0xe8, .y=0x0a, .sp=0x7c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xe8}, {.addr=0x2ec9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2ec9, .value=0xce, .type=IO_READ},
        {.addr=0x2eca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xc8b3, .a=0xc1, .x=0xa5, .y=0x96, .sp=0x03, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x88}, {.addr=0xc8b3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc8b4, .a=0xc1, .x=0x88, .y=0x96, .sp=0x04, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x88}, {.addr=0xc8b3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc8b3, .value=0xce, .type=IO_READ},
        {.addr=0xc8b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xd07d, .a=0xc2, .x=0x7c, .y=0x2a, .sp=0xb7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x6b}, {.addr=0xd07d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd07e, .a=0xc2, .x=0x6b, .y=0x2a, .sp=0xb8, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x6b}, {.addr=0xd07d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd07d, .value=0xce, .type=IO_READ},
        {.addr=0xd07e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xa8a4, .a=0x15, .x=0x00, .y=0xbf, .sp=0x69, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xe1}, {.addr=0xa8a4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa8a5, .a=0x15, .x=0xe1, .y=0xbf, .sp=0x6a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xe1}, {.addr=0xa8a4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa8a4, .value=0xce, .type=IO_READ},
        {.addr=0xa8a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xde2c, .a=0x6d, .x=0x46, .y=0x38, .sp=0x21, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xb8}, {.addr=0xde2c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xde2d, .a=0x6d, .x=0xb8, .y=0x38, .sp=0x22, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xb8}, {.addr=0xde2c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xde2c, .value=0xce, .type=IO_READ},
        {.addr=0xde2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7f33, .a=0xa6, .x=0x6d, .y=0x67, .sp=0xdc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x3b}, {.addr=0x7f33, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7f34, .a=0xa6, .x=0x3b, .y=0x67, .sp=0xdd, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x3b}, {.addr=0x7f33, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7f33, .value=0xce, .type=IO_READ},
        {.addr=0x7f34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x8660, .a=0x83, .x=0x77, .y=0xa1, .sp=0x08, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x54}, {.addr=0x8660, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8661, .a=0x83, .x=0x54, .y=0xa1, .sp=0x09, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x54}, {.addr=0x8660, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8660, .value=0xce, .type=IO_READ},
        {.addr=0x8661, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x1498, .a=0xa5, .x=0x7d, .y=0x3a, .sp=0x2a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x98}, {.addr=0x1498, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1499, .a=0xa5, .x=0x98, .y=0x3a, .sp=0x2b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x98}, {.addr=0x1498, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1498, .value=0xce, .type=IO_READ},
        {.addr=0x1499, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xc150, .a=0xc5, .x=0xda, .y=0x92, .sp=0xef, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x05}, {.addr=0xc150, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc151, .a=0xc5, .x=0x05, .y=0x92, .sp=0xf0, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x05}, {.addr=0xc150, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc150, .value=0xce, .type=IO_READ},
        {.addr=0xc151, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4730, .a=0x27, .x=0xba, .y=0xdf, .sp=0xb5, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x99}, {.addr=0x4730, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4731, .a=0x27, .x=0x99, .y=0xdf, .sp=0xb6, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x99}, {.addr=0x4730, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4730, .value=0xce, .type=IO_READ},
        {.addr=0x4731, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x6f8a, .a=0xf3, .x=0x02, .y=0xff, .sp=0x48, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x0d}, {.addr=0x6f8a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6f8b, .a=0xf3, .x=0x0d, .y=0xff, .sp=0x49, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x0d}, {.addr=0x6f8a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6f8a, .value=0xce, .type=IO_READ},
        {.addr=0x6f8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x0922, .a=0x4e, .x=0x30, .y=0xcf, .sp=0xb6, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x28}, {.addr=0x0922, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0923, .a=0x4e, .x=0x28, .y=0xcf, .sp=0xb7, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x28}, {.addr=0x0922, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0922, .value=0xce, .type=IO_READ},
        {.addr=0x0923, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xc701, .a=0x9a, .x=0x7f, .y=0x93, .sp=0x7e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x38}, {.addr=0xc701, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc702, .a=0x9a, .x=0x38, .y=0x93, .sp=0x7f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x38}, {.addr=0xc701, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc701, .value=0xce, .type=IO_READ},
        {.addr=0xc702, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x5e33, .a=0x65, .x=0xad, .y=0x8f, .sp=0x55, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xfe}, {.addr=0x5e33, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5e34, .a=0x65, .x=0xfe, .y=0x8f, .sp=0x56, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xfe}, {.addr=0x5e33, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5e33, .value=0xce, .type=IO_READ},
        {.addr=0x5e34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x56e8, .a=0x54, .x=0x21, .y=0x82, .sp=0xe1, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xae}, {.addr=0x56e8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x56e9, .a=0x54, .x=0xae, .y=0x82, .sp=0xe2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xae}, {.addr=0x56e8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x56e8, .value=0xce, .type=IO_READ},
        {.addr=0x56e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x8ec0, .a=0xe6, .x=0x42, .y=0x64, .sp=0xfc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x0d}, {.addr=0x8ec0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8ec1, .a=0xe6, .x=0x0d, .y=0x64, .sp=0xfd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x0d}, {.addr=0x8ec0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8ec0, .value=0xce, .type=IO_READ},
        {.addr=0x8ec1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8ee5, .a=0x2b, .x=0x51, .y=0xf8, .sp=0x5b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x6d}, {.addr=0x8ee5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8ee6, .a=0x2b, .x=0x6d, .y=0xf8, .sp=0x5c, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x6d}, {.addr=0x8ee5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8ee5, .value=0xce, .type=IO_READ},
        {.addr=0x8ee6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x675b, .a=0xa4, .x=0x99, .y=0xcf, .sp=0xe2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xa7}, {.addr=0x675b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x675c, .a=0xa4, .x=0xa7, .y=0xcf, .sp=0xe3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xa7}, {.addr=0x675b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x675b, .value=0xce, .type=IO_READ},
        {.addr=0x675c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x7b78, .a=0xca, .x=0x1e, .y=0x2b, .sp=0x22, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x40}, {.addr=0x7b78, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7b79, .a=0xca, .x=0x40, .y=0x2b, .sp=0x23, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x40}, {.addr=0x7b78, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7b78, .value=0xce, .type=IO_READ},
        {.addr=0x7b79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0123, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x7f0d, .a=0x90, .x=0xcc, .y=0xa8, .sp=0x52, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x13}, {.addr=0x7f0d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7f0e, .a=0x90, .x=0x13, .y=0xa8, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x13}, {.addr=0x7f0d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7f0d, .value=0xce, .type=IO_READ},
        {.addr=0x7f0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x4b44, .a=0x8c, .x=0xbe, .y=0x4a, .sp=0x49, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x1b}, {.addr=0x4b44, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4b45, .a=0x8c, .x=0x1b, .y=0x4a, .sp=0x4a, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x1b}, {.addr=0x4b44, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4b44, .value=0xce, .type=IO_READ},
        {.addr=0x4b45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x954e, .a=0x16, .x=0x16, .y=0x3b, .sp=0xd8, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xc9}, {.addr=0x954e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x954f, .a=0x16, .x=0xc9, .y=0x3b, .sp=0xd9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xc9}, {.addr=0x954e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x954e, .value=0xce, .type=IO_READ},
        {.addr=0x954f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0300) {
    const struct CPU_State initial_cpu = {.pc=0x26ab, .a=0x9e, .x=0x27, .y=0xd2, .sp=0x15, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x31}, {.addr=0x26ab, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x26ac, .a=0x9e, .x=0x31, .y=0xd2, .sp=0x16, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x31}, {.addr=0x26ab, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x26ab, .value=0xce, .type=IO_READ},
        {.addr=0x26ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0301) {
    const struct CPU_State initial_cpu = {.pc=0x025f, .a=0x03, .x=0x36, .y=0x21, .sp=0xff, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xc2}, {.addr=0x025f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0260, .a=0x03, .x=0xc2, .y=0x21, .sp=0x00, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xc2}, {.addr=0x025f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x025f, .value=0xce, .type=IO_READ},
        {.addr=0x0260, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0302) {
    const struct CPU_State initial_cpu = {.pc=0xefba, .a=0x18, .x=0x3b, .y=0xd4, .sp=0x1c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x29}, {.addr=0xefba, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xefbb, .a=0x18, .x=0x29, .y=0xd4, .sp=0x1d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x29}, {.addr=0xefba, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xefba, .value=0xce, .type=IO_READ},
        {.addr=0xefbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0303) {
    const struct CPU_State initial_cpu = {.pc=0x4712, .a=0xb2, .x=0xd7, .y=0xbb, .sp=0x20, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xc2}, {.addr=0x4712, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4713, .a=0xb2, .x=0xc2, .y=0xbb, .sp=0x21, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xc2}, {.addr=0x4712, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4712, .value=0xce, .type=IO_READ},
        {.addr=0x4713, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6b0a, .a=0x0a, .x=0xb9, .y=0x3e, .sp=0x1d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x2b}, {.addr=0x6b0a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6b0b, .a=0x0a, .x=0x2b, .y=0x3e, .sp=0x1e, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x2b}, {.addr=0x6b0a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6b0a, .value=0xce, .type=IO_READ},
        {.addr=0x6b0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0305) {
    const struct CPU_State initial_cpu = {.pc=0xc5d3, .a=0x3e, .x=0x9d, .y=0x28, .sp=0xeb, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xe0}, {.addr=0xc5d3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc5d4, .a=0x3e, .x=0xe0, .y=0x28, .sp=0xec, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xe0}, {.addr=0xc5d3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc5d3, .value=0xce, .type=IO_READ},
        {.addr=0xc5d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0306) {
    const struct CPU_State initial_cpu = {.pc=0xadaf, .a=0x24, .x=0x32, .y=0xf9, .sp=0x8f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x1f}, {.addr=0xadaf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xadb0, .a=0x24, .x=0x1f, .y=0xf9, .sp=0x90, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x1f}, {.addr=0xadaf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xadaf, .value=0xce, .type=IO_READ},
        {.addr=0xadb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0307) {
    const struct CPU_State initial_cpu = {.pc=0x75e2, .a=0xc2, .x=0x19, .y=0xc8, .sp=0x1b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x84}, {.addr=0x75e2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x75e3, .a=0xc2, .x=0x84, .y=0xc8, .sp=0x1c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x84}, {.addr=0x75e2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x75e2, .value=0xce, .type=IO_READ},
        {.addr=0x75e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6b2f, .a=0x8c, .x=0x57, .y=0xa8, .sp=0x4d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x37}, {.addr=0x6b2f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6b30, .a=0x8c, .x=0x37, .y=0xa8, .sp=0x4e, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x37}, {.addr=0x6b2f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6b2f, .value=0xce, .type=IO_READ},
        {.addr=0x6b30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0309) {
    const struct CPU_State initial_cpu = {.pc=0xc224, .a=0xd8, .x=0x28, .y=0xe6, .sp=0x50, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xe2}, {.addr=0xc224, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc225, .a=0xd8, .x=0xe2, .y=0xe6, .sp=0x51, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xe2}, {.addr=0xc224, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc224, .value=0xce, .type=IO_READ},
        {.addr=0xc225, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_030A) {
    const struct CPU_State initial_cpu = {.pc=0x3e32, .a=0xfb, .x=0x15, .y=0x68, .sp=0xcd, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x68}, {.addr=0x3e32, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3e33, .a=0xfb, .x=0x68, .y=0x68, .sp=0xce, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x68}, {.addr=0x3e32, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3e32, .value=0xce, .type=IO_READ},
        {.addr=0x3e33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_030B) {
    const struct CPU_State initial_cpu = {.pc=0x33eb, .a=0x1f, .x=0x7f, .y=0x61, .sp=0x61, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xce}, {.addr=0x33eb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x33ec, .a=0x1f, .x=0xce, .y=0x61, .sp=0x62, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xce}, {.addr=0x33eb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x33eb, .value=0xce, .type=IO_READ},
        {.addr=0x33ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_030C) {
    const struct CPU_State initial_cpu = {.pc=0xeb58, .a=0x0a, .x=0x4f, .y=0x56, .sp=0x45, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x81}, {.addr=0xeb58, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeb59, .a=0x0a, .x=0x81, .y=0x56, .sp=0x46, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x81}, {.addr=0xeb58, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeb58, .value=0xce, .type=IO_READ},
        {.addr=0xeb59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_030D) {
    const struct CPU_State initial_cpu = {.pc=0x2715, .a=0x0a, .x=0xfe, .y=0x2e, .sp=0xbc, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xcb}, {.addr=0x2715, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2716, .a=0x0a, .x=0xcb, .y=0x2e, .sp=0xbd, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xcb}, {.addr=0x2715, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2715, .value=0xce, .type=IO_READ},
        {.addr=0x2716, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_030E) {
    const struct CPU_State initial_cpu = {.pc=0x3bc0, .a=0x99, .x=0xec, .y=0x09, .sp=0x4b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x8b}, {.addr=0x3bc0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3bc1, .a=0x99, .x=0x8b, .y=0x09, .sp=0x4c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x8b}, {.addr=0x3bc0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3bc0, .value=0xce, .type=IO_READ},
        {.addr=0x3bc1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_030F) {
    const struct CPU_State initial_cpu = {.pc=0x9847, .a=0x29, .x=0x4b, .y=0x14, .sp=0x30, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xc3}, {.addr=0x9847, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9848, .a=0x29, .x=0xc3, .y=0x14, .sp=0x31, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xc3}, {.addr=0x9847, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9847, .value=0xce, .type=IO_READ},
        {.addr=0x9848, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0310) {
    const struct CPU_State initial_cpu = {.pc=0x6686, .a=0xf4, .x=0xc5, .y=0x60, .sp=0xdb, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xf0}, {.addr=0x6686, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6687, .a=0xf4, .x=0xf0, .y=0x60, .sp=0xdc, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xf0}, {.addr=0x6686, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6686, .value=0xce, .type=IO_READ},
        {.addr=0x6687, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dc, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0311) {
    const struct CPU_State initial_cpu = {.pc=0xc121, .a=0x19, .x=0x2b, .y=0xf6, .sp=0xd2, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x6b}, {.addr=0xc121, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc122, .a=0x19, .x=0x6b, .y=0xf6, .sp=0xd3, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x6b}, {.addr=0xc121, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc121, .value=0xce, .type=IO_READ},
        {.addr=0xc122, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0312) {
    const struct CPU_State initial_cpu = {.pc=0xbc6b, .a=0xdb, .x=0xbe, .y=0xc6, .sp=0xd6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xa1}, {.addr=0xbc6b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbc6c, .a=0xdb, .x=0xa1, .y=0xc6, .sp=0xd7, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xa1}, {.addr=0xbc6b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbc6b, .value=0xce, .type=IO_READ},
        {.addr=0xbc6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0313) {
    const struct CPU_State initial_cpu = {.pc=0xeb63, .a=0x22, .x=0x5f, .y=0x95, .sp=0x0d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0xda}, {.addr=0xeb63, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeb64, .a=0x22, .x=0xda, .y=0x95, .sp=0x0e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xda}, {.addr=0xeb63, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeb63, .value=0xce, .type=IO_READ},
        {.addr=0xeb64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0314) {
    const struct CPU_State initial_cpu = {.pc=0xb501, .a=0x66, .x=0x08, .y=0xea, .sp=0xd6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x4e}, {.addr=0xb501, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb502, .a=0x66, .x=0x4e, .y=0xea, .sp=0xd7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x4e}, {.addr=0xb501, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb501, .value=0xce, .type=IO_READ},
        {.addr=0xb502, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0315) {
    const struct CPU_State initial_cpu = {.pc=0x8cd1, .a=0xa7, .x=0x3c, .y=0x54, .sp=0xdf, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x82}, {.addr=0x8cd1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8cd2, .a=0xa7, .x=0x82, .y=0x54, .sp=0xe0, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x82}, {.addr=0x8cd1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8cd1, .value=0xce, .type=IO_READ},
        {.addr=0x8cd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc240, .a=0x36, .x=0xa2, .y=0x47, .sp=0x63, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x41}, {.addr=0xc240, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc241, .a=0x36, .x=0x41, .y=0x47, .sp=0x64, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x41}, {.addr=0xc240, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc240, .value=0xce, .type=IO_READ},
        {.addr=0xc241, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0317) {
    const struct CPU_State initial_cpu = {.pc=0x614a, .a=0xd5, .x=0x0f, .y=0xe7, .sp=0xff, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x88}, {.addr=0x614a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x614b, .a=0xd5, .x=0x88, .y=0xe7, .sp=0x00, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x88}, {.addr=0x614a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x614a, .value=0xce, .type=IO_READ},
        {.addr=0x614b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0318) {
    const struct CPU_State initial_cpu = {.pc=0xc9d0, .a=0xda, .x=0x1a, .y=0xfb, .sp=0x99, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xef}, {.addr=0xc9d0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc9d1, .a=0xda, .x=0xef, .y=0xfb, .sp=0x9a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xef}, {.addr=0xc9d0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc9d0, .value=0xce, .type=IO_READ},
        {.addr=0xc9d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0319) {
    const struct CPU_State initial_cpu = {.pc=0xcaad, .a=0x12, .x=0x6e, .y=0xeb, .sp=0x9a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x76}, {.addr=0xcaad, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcaae, .a=0x12, .x=0x76, .y=0xeb, .sp=0x9b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x76}, {.addr=0xcaad, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcaad, .value=0xce, .type=IO_READ},
        {.addr=0xcaae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_031A) {
    const struct CPU_State initial_cpu = {.pc=0x5c6d, .a=0xdf, .x=0xd9, .y=0x33, .sp=0x62, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xd7}, {.addr=0x5c6d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5c6e, .a=0xdf, .x=0xd7, .y=0x33, .sp=0x63, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xd7}, {.addr=0x5c6d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5c6d, .value=0xce, .type=IO_READ},
        {.addr=0x5c6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_031B) {
    const struct CPU_State initial_cpu = {.pc=0x6068, .a=0xe2, .x=0x23, .y=0x08, .sp=0x9b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xa0}, {.addr=0x6068, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6069, .a=0xe2, .x=0xa0, .y=0x08, .sp=0x9c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xa0}, {.addr=0x6068, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6068, .value=0xce, .type=IO_READ},
        {.addr=0x6069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_031C) {
    const struct CPU_State initial_cpu = {.pc=0x5175, .a=0x8c, .x=0x5c, .y=0x72, .sp=0xfc, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xa8}, {.addr=0x5175, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5176, .a=0x8c, .x=0xa8, .y=0x72, .sp=0xfd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xa8}, {.addr=0x5175, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5175, .value=0xce, .type=IO_READ},
        {.addr=0x5176, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_031D) {
    const struct CPU_State initial_cpu = {.pc=0x82ae, .a=0x73, .x=0x6c, .y=0xee, .sp=0x11, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xe1}, {.addr=0x82ae, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x82af, .a=0x73, .x=0xe1, .y=0xee, .sp=0x12, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xe1}, {.addr=0x82ae, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x82ae, .value=0xce, .type=IO_READ},
        {.addr=0x82af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_031E) {
    const struct CPU_State initial_cpu = {.pc=0xe23a, .a=0x93, .x=0x5b, .y=0xc5, .sp=0xa1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x42}, {.addr=0xe23a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe23b, .a=0x93, .x=0x42, .y=0xc5, .sp=0xa2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x42}, {.addr=0xe23a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe23a, .value=0xce, .type=IO_READ},
        {.addr=0xe23b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_031F) {
    const struct CPU_State initial_cpu = {.pc=0xea2b, .a=0xd6, .x=0xa8, .y=0x28, .sp=0xae, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xbd}, {.addr=0xea2b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xea2c, .a=0xd6, .x=0xbd, .y=0x28, .sp=0xaf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xbd}, {.addr=0xea2b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xea2b, .value=0xce, .type=IO_READ},
        {.addr=0xea2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0320) {
    const struct CPU_State initial_cpu = {.pc=0x26a4, .a=0xd5, .x=0xf6, .y=0xcd, .sp=0x2d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xa5}, {.addr=0x26a4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x26a5, .a=0xd5, .x=0xa5, .y=0xcd, .sp=0x2e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xa5}, {.addr=0x26a4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x26a4, .value=0xce, .type=IO_READ},
        {.addr=0x26a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0321) {
    const struct CPU_State initial_cpu = {.pc=0x800b, .a=0x55, .x=0x4d, .y=0xa9, .sp=0xe5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xd7}, {.addr=0x800b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x800c, .a=0x55, .x=0xd7, .y=0xa9, .sp=0xe6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xd7}, {.addr=0x800b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x800b, .value=0xce, .type=IO_READ},
        {.addr=0x800c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0322) {
    const struct CPU_State initial_cpu = {.pc=0x03e3, .a=0x26, .x=0x07, .y=0x8d, .sp=0xf5, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xd9}, {.addr=0x03e3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x03e4, .a=0x26, .x=0xd9, .y=0x8d, .sp=0xf6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xd9}, {.addr=0x03e3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x03e3, .value=0xce, .type=IO_READ},
        {.addr=0x03e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0323) {
    const struct CPU_State initial_cpu = {.pc=0x4e96, .a=0x00, .x=0xe3, .y=0xd9, .sp=0x6f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x94}, {.addr=0x4e96, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x00, .x=0x94, .y=0xd9, .sp=0x70, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x94}, {.addr=0x4e96, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4e96, .value=0xce, .type=IO_READ},
        {.addr=0x4e97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0324) {
    const struct CPU_State initial_cpu = {.pc=0x68c6, .a=0x1a, .x=0xef, .y=0x7e, .sp=0x46, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x65}, {.addr=0x68c6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x68c7, .a=0x1a, .x=0x65, .y=0x7e, .sp=0x47, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x65}, {.addr=0x68c6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x68c6, .value=0xce, .type=IO_READ},
        {.addr=0x68c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0325) {
    const struct CPU_State initial_cpu = {.pc=0x4f4f, .a=0x8b, .x=0x63, .y=0x24, .sp=0x07, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x3a}, {.addr=0x4f4f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4f50, .a=0x8b, .x=0x3a, .y=0x24, .sp=0x08, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x3a}, {.addr=0x4f4f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4f4f, .value=0xce, .type=IO_READ},
        {.addr=0x4f50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0326) {
    const struct CPU_State initial_cpu = {.pc=0x83d4, .a=0x92, .x=0x13, .y=0x65, .sp=0x06, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x19}, {.addr=0x83d4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x83d5, .a=0x92, .x=0x19, .y=0x65, .sp=0x07, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x19}, {.addr=0x83d4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x83d4, .value=0xce, .type=IO_READ},
        {.addr=0x83d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0327) {
    const struct CPU_State initial_cpu = {.pc=0x0ac9, .a=0x3e, .x=0xcb, .y=0x1b, .sp=0x2e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xb8}, {.addr=0x0ac9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0aca, .a=0x3e, .x=0xb8, .y=0x1b, .sp=0x2f, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xb8}, {.addr=0x0ac9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0ac9, .value=0xce, .type=IO_READ},
        {.addr=0x0aca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa8cd, .a=0x28, .x=0x48, .y=0x82, .sp=0xe3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x9b}, {.addr=0xa8cd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa8ce, .a=0x28, .x=0x9b, .y=0x82, .sp=0xe4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x9b}, {.addr=0xa8cd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa8cd, .value=0xce, .type=IO_READ},
        {.addr=0xa8ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0329) {
    const struct CPU_State initial_cpu = {.pc=0x6734, .a=0x3a, .x=0xaa, .y=0x4e, .sp=0x14, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xe2}, {.addr=0x6734, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6735, .a=0x3a, .x=0xe2, .y=0x4e, .sp=0x15, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xe2}, {.addr=0x6734, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6734, .value=0xce, .type=IO_READ},
        {.addr=0x6735, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_032A) {
    const struct CPU_State initial_cpu = {.pc=0xa7e1, .a=0xdd, .x=0xb9, .y=0xed, .sp=0x7f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xa7e1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa7e2, .a=0xdd, .x=0x00, .y=0xed, .sp=0x80, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xa7e1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa7e1, .value=0xce, .type=IO_READ},
        {.addr=0xa7e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_032B) {
    const struct CPU_State initial_cpu = {.pc=0x7c7a, .a=0x2e, .x=0x0e, .y=0x64, .sp=0x0d, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x4a}, {.addr=0x7c7a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7c7b, .a=0x2e, .x=0x4a, .y=0x64, .sp=0x0e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x4a}, {.addr=0x7c7a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7c7a, .value=0xce, .type=IO_READ},
        {.addr=0x7c7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_032C) {
    const struct CPU_State initial_cpu = {.pc=0xd748, .a=0xc8, .x=0xaf, .y=0x02, .sp=0x5d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x5a}, {.addr=0xd748, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd749, .a=0xc8, .x=0x5a, .y=0x02, .sp=0x5e, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x5a}, {.addr=0xd748, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd748, .value=0xce, .type=IO_READ},
        {.addr=0xd749, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_032D) {
    const struct CPU_State initial_cpu = {.pc=0x1452, .a=0xbb, .x=0x9d, .y=0xf4, .sp=0x1c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x5c}, {.addr=0x1452, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1453, .a=0xbb, .x=0x5c, .y=0xf4, .sp=0x1d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x5c}, {.addr=0x1452, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1452, .value=0xce, .type=IO_READ},
        {.addr=0x1453, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_032E) {
    const struct CPU_State initial_cpu = {.pc=0xefe0, .a=0x07, .x=0x14, .y=0xd9, .sp=0x8a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x0c}, {.addr=0xefe0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xefe1, .a=0x07, .x=0x0c, .y=0xd9, .sp=0x8b, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x0c}, {.addr=0xefe0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xefe0, .value=0xce, .type=IO_READ},
        {.addr=0xefe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_032F) {
    const struct CPU_State initial_cpu = {.pc=0x264e, .a=0x74, .x=0x28, .y=0xf0, .sp=0x04, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x98}, {.addr=0x264e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x264f, .a=0x74, .x=0x98, .y=0xf0, .sp=0x05, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x98}, {.addr=0x264e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x264e, .value=0xce, .type=IO_READ},
        {.addr=0x264f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0105, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0330) {
    const struct CPU_State initial_cpu = {.pc=0xc331, .a=0xcb, .x=0x35, .y=0xe8, .sp=0xfc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x4c}, {.addr=0xc331, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc332, .a=0xcb, .x=0x4c, .y=0xe8, .sp=0xfd, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x4c}, {.addr=0xc331, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc331, .value=0xce, .type=IO_READ},
        {.addr=0xc332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0331) {
    const struct CPU_State initial_cpu = {.pc=0x380d, .a=0xc6, .x=0x0e, .y=0xda, .sp=0xbb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xd7}, {.addr=0x380d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x380e, .a=0xc6, .x=0xd7, .y=0xda, .sp=0xbc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xd7}, {.addr=0x380d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x380d, .value=0xce, .type=IO_READ},
        {.addr=0x380e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0332) {
    const struct CPU_State initial_cpu = {.pc=0xeeb2, .a=0x7f, .x=0x9d, .y=0x70, .sp=0x55, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xe0}, {.addr=0xeeb2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeeb3, .a=0x7f, .x=0xe0, .y=0x70, .sp=0x56, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xe0}, {.addr=0xeeb2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeeb2, .value=0xce, .type=IO_READ},
        {.addr=0xeeb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0333) {
    const struct CPU_State initial_cpu = {.pc=0xcd3c, .a=0x36, .x=0x06, .y=0xf5, .sp=0xe7, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xb8}, {.addr=0xcd3c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcd3d, .a=0x36, .x=0xb8, .y=0xf5, .sp=0xe8, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xb8}, {.addr=0xcd3c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcd3c, .value=0xce, .type=IO_READ},
        {.addr=0xcd3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0334) {
    const struct CPU_State initial_cpu = {.pc=0x4f7b, .a=0x2c, .x=0x32, .y=0xb1, .sp=0x42, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xef}, {.addr=0x4f7b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4f7c, .a=0x2c, .x=0xef, .y=0xb1, .sp=0x43, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xef}, {.addr=0x4f7b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4f7b, .value=0xce, .type=IO_READ},
        {.addr=0x4f7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0335) {
    const struct CPU_State initial_cpu = {.pc=0x856b, .a=0xff, .x=0xf1, .y=0x80, .sp=0xc1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x9d}, {.addr=0x856b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x856c, .a=0xff, .x=0x9d, .y=0x80, .sp=0xc2, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x9d}, {.addr=0x856b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x856b, .value=0xce, .type=IO_READ},
        {.addr=0x856c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0336) {
    const struct CPU_State initial_cpu = {.pc=0x5e92, .a=0xfd, .x=0xfc, .y=0xd2, .sp=0x01, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xdf}, {.addr=0x5e92, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5e93, .a=0xfd, .x=0xdf, .y=0xd2, .sp=0x02, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xdf}, {.addr=0x5e92, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5e92, .value=0xce, .type=IO_READ},
        {.addr=0x5e93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0337) {
    const struct CPU_State initial_cpu = {.pc=0x81e4, .a=0x78, .x=0x23, .y=0xa6, .sp=0x39, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x36}, {.addr=0x81e4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x81e5, .a=0x78, .x=0x36, .y=0xa6, .sp=0x3a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x36}, {.addr=0x81e4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x81e4, .value=0xce, .type=IO_READ},
        {.addr=0x81e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0338) {
    const struct CPU_State initial_cpu = {.pc=0x8a00, .a=0xd8, .x=0xc3, .y=0x3c, .sp=0x5f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x20}, {.addr=0x8a00, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8a01, .a=0xd8, .x=0x20, .y=0x3c, .sp=0x60, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x20}, {.addr=0x8a00, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8a00, .value=0xce, .type=IO_READ},
        {.addr=0x8a01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0339) {
    const struct CPU_State initial_cpu = {.pc=0x2b5e, .a=0xc4, .x=0x52, .y=0x22, .sp=0x26, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x81}, {.addr=0x2b5e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2b5f, .a=0xc4, .x=0x81, .y=0x22, .sp=0x27, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x81}, {.addr=0x2b5e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2b5e, .value=0xce, .type=IO_READ},
        {.addr=0x2b5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_033A) {
    const struct CPU_State initial_cpu = {.pc=0xa068, .a=0x16, .x=0x83, .y=0x47, .sp=0x1b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xd7}, {.addr=0xa068, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa069, .a=0x16, .x=0xd7, .y=0x47, .sp=0x1c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xd7}, {.addr=0xa068, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa068, .value=0xce, .type=IO_READ},
        {.addr=0xa069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_033B) {
    const struct CPU_State initial_cpu = {.pc=0x8210, .a=0x47, .x=0xd6, .y=0xb6, .sp=0x72, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xa1}, {.addr=0x8210, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8211, .a=0x47, .x=0xa1, .y=0xb6, .sp=0x73, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xa1}, {.addr=0x8210, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8210, .value=0xce, .type=IO_READ},
        {.addr=0x8211, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_033C) {
    const struct CPU_State initial_cpu = {.pc=0x435f, .a=0x80, .x=0x22, .y=0xa2, .sp=0x4b, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x71}, {.addr=0x435f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4360, .a=0x80, .x=0x71, .y=0xa2, .sp=0x4c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x71}, {.addr=0x435f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x435f, .value=0xce, .type=IO_READ},
        {.addr=0x4360, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_033D) {
    const struct CPU_State initial_cpu = {.pc=0x4a69, .a=0xae, .x=0x7b, .y=0x6c, .sp=0xf7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x14}, {.addr=0x4a69, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4a6a, .a=0xae, .x=0x14, .y=0x6c, .sp=0xf8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x14}, {.addr=0x4a69, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4a69, .value=0xce, .type=IO_READ},
        {.addr=0x4a6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc2de, .a=0x6e, .x=0x6c, .y=0xfb, .sp=0x24, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xba}, {.addr=0xc2de, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc2df, .a=0x6e, .x=0xba, .y=0xfb, .sp=0x25, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xba}, {.addr=0xc2de, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc2de, .value=0xce, .type=IO_READ},
        {.addr=0xc2df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_033F) {
    const struct CPU_State initial_cpu = {.pc=0x566f, .a=0xec, .x=0x5e, .y=0xd9, .sp=0x40, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xd7}, {.addr=0x566f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5670, .a=0xec, .x=0xd7, .y=0xd9, .sp=0x41, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xd7}, {.addr=0x566f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x566f, .value=0xce, .type=IO_READ},
        {.addr=0x5670, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0340) {
    const struct CPU_State initial_cpu = {.pc=0xc730, .a=0xbb, .x=0xc4, .y=0x7c, .sp=0x24, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xaf}, {.addr=0xc730, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc731, .a=0xbb, .x=0xaf, .y=0x7c, .sp=0x25, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xaf}, {.addr=0xc730, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc730, .value=0xce, .type=IO_READ},
        {.addr=0xc731, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0341) {
    const struct CPU_State initial_cpu = {.pc=0x6c89, .a=0x1b, .x=0x3d, .y=0x70, .sp=0x46, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x83}, {.addr=0x6c89, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6c8a, .a=0x1b, .x=0x83, .y=0x70, .sp=0x47, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x83}, {.addr=0x6c89, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6c89, .value=0xce, .type=IO_READ},
        {.addr=0x6c8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0342) {
    const struct CPU_State initial_cpu = {.pc=0x6189, .a=0x19, .x=0x07, .y=0xb0, .sp=0x24, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x01}, {.addr=0x6189, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x618a, .a=0x19, .x=0x01, .y=0xb0, .sp=0x25, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x01}, {.addr=0x6189, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6189, .value=0xce, .type=IO_READ},
        {.addr=0x618a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0343) {
    const struct CPU_State initial_cpu = {.pc=0x71f1, .a=0x25, .x=0xba, .y=0x99, .sp=0xc5, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x01}, {.addr=0x71f1, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x71f2, .a=0x25, .x=0x01, .y=0x99, .sp=0xc6, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x01}, {.addr=0x71f1, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x71f1, .value=0xce, .type=IO_READ},
        {.addr=0x71f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0344) {
    const struct CPU_State initial_cpu = {.pc=0xf6c5, .a=0x93, .x=0x16, .y=0xbe, .sp=0x03, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xf1}, {.addr=0xf6c5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf6c6, .a=0x93, .x=0xf1, .y=0xbe, .sp=0x04, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xf1}, {.addr=0xf6c5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf6c5, .value=0xce, .type=IO_READ},
        {.addr=0xf6c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0345) {
    const struct CPU_State initial_cpu = {.pc=0xe89d, .a=0x03, .x=0x54, .y=0x45, .sp=0x9a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x04}, {.addr=0xe89d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe89e, .a=0x03, .x=0x04, .y=0x45, .sp=0x9b, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x04}, {.addr=0xe89d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe89d, .value=0xce, .type=IO_READ},
        {.addr=0xe89e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0346) {
    const struct CPU_State initial_cpu = {.pc=0x5ea9, .a=0x8b, .x=0x5e, .y=0x4b, .sp=0x5b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x80}, {.addr=0x5ea9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5eaa, .a=0x8b, .x=0x80, .y=0x4b, .sp=0x5c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x80}, {.addr=0x5ea9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5ea9, .value=0xce, .type=IO_READ},
        {.addr=0x5eaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0347) {
    const struct CPU_State initial_cpu = {.pc=0x6aa6, .a=0x48, .x=0x66, .y=0x24, .sp=0xf5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x22}, {.addr=0x6aa6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6aa7, .a=0x48, .x=0x22, .y=0x24, .sp=0xf6, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x22}, {.addr=0x6aa6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6aa6, .value=0xce, .type=IO_READ},
        {.addr=0x6aa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0348) {
    const struct CPU_State initial_cpu = {.pc=0x3b96, .a=0x42, .x=0x28, .y=0xd5, .sp=0x44, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xc8}, {.addr=0x3b96, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3b97, .a=0x42, .x=0xc8, .y=0xd5, .sp=0x45, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xc8}, {.addr=0x3b96, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3b96, .value=0xce, .type=IO_READ},
        {.addr=0x3b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0349) {
    const struct CPU_State initial_cpu = {.pc=0xd38f, .a=0x18, .x=0xff, .y=0x41, .sp=0x1a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xcb}, {.addr=0xd38f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd390, .a=0x18, .x=0xcb, .y=0x41, .sp=0x1b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xcb}, {.addr=0xd38f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd38f, .value=0xce, .type=IO_READ},
        {.addr=0xd390, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_034A) {
    const struct CPU_State initial_cpu = {.pc=0xfcb0, .a=0x66, .x=0xef, .y=0xec, .sp=0x11, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x56}, {.addr=0xfcb0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfcb1, .a=0x66, .x=0x56, .y=0xec, .sp=0x12, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x56}, {.addr=0xfcb0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfcb0, .value=0xce, .type=IO_READ},
        {.addr=0xfcb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8b96, .a=0x0d, .x=0x85, .y=0x4c, .sp=0x4e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xe3}, {.addr=0x8b96, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8b97, .a=0x0d, .x=0xe3, .y=0x4c, .sp=0x4f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xe3}, {.addr=0x8b96, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8b96, .value=0xce, .type=IO_READ},
        {.addr=0x8b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014f, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_034C) {
    const struct CPU_State initial_cpu = {.pc=0x0607, .a=0x31, .x=0x58, .y=0xdf, .sp=0xc2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xf8}, {.addr=0x0607, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0608, .a=0x31, .x=0xf8, .y=0xdf, .sp=0xc3, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xf8}, {.addr=0x0607, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0607, .value=0xce, .type=IO_READ},
        {.addr=0x0608, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_034D) {
    const struct CPU_State initial_cpu = {.pc=0x8ce2, .a=0xda, .x=0xaf, .y=0x05, .sp=0x4c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xcf}, {.addr=0x8ce2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8ce3, .a=0xda, .x=0xcf, .y=0x05, .sp=0x4d, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xcf}, {.addr=0x8ce2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8ce2, .value=0xce, .type=IO_READ},
        {.addr=0x8ce3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_034E) {
    const struct CPU_State initial_cpu = {.pc=0xfc76, .a=0x48, .x=0x80, .y=0xf4, .sp=0xa2, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xa9}, {.addr=0xfc76, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfc77, .a=0x48, .x=0xa9, .y=0xf4, .sp=0xa3, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xa9}, {.addr=0xfc76, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfc76, .value=0xce, .type=IO_READ},
        {.addr=0xfc77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_034F) {
    const struct CPU_State initial_cpu = {.pc=0xec1a, .a=0x62, .x=0x9e, .y=0x8b, .sp=0x54, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x8f}, {.addr=0xec1a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xec1b, .a=0x62, .x=0x8f, .y=0x8b, .sp=0x55, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x8f}, {.addr=0xec1a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xec1a, .value=0xce, .type=IO_READ},
        {.addr=0xec1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0350) {
    const struct CPU_State initial_cpu = {.pc=0x56a4, .a=0x91, .x=0x3a, .y=0x6a, .sp=0x46, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0xcc}, {.addr=0x56a4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x56a5, .a=0x91, .x=0xcc, .y=0x6a, .sp=0x47, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xcc}, {.addr=0x56a4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x56a4, .value=0xce, .type=IO_READ},
        {.addr=0x56a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0351) {
    const struct CPU_State initial_cpu = {.pc=0xbb89, .a=0xcb, .x=0x23, .y=0xf4, .sp=0xc0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x39}, {.addr=0xbb89, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbb8a, .a=0xcb, .x=0x39, .y=0xf4, .sp=0xc1, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x39}, {.addr=0xbb89, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbb89, .value=0xce, .type=IO_READ},
        {.addr=0xbb8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0352) {
    const struct CPU_State initial_cpu = {.pc=0xeb46, .a=0x97, .x=0x70, .y=0xfb, .sp=0x73, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x16}, {.addr=0xeb46, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xeb47, .a=0x97, .x=0x16, .y=0xfb, .sp=0x74, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x16}, {.addr=0xeb46, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xeb46, .value=0xce, .type=IO_READ},
        {.addr=0xeb47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0353) {
    const struct CPU_State initial_cpu = {.pc=0xe1d6, .a=0x82, .x=0xd9, .y=0xda, .sp=0xf7, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x2b}, {.addr=0xe1d6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe1d7, .a=0x82, .x=0x2b, .y=0xda, .sp=0xf8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x2b}, {.addr=0xe1d6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe1d6, .value=0xce, .type=IO_READ},
        {.addr=0xe1d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0354) {
    const struct CPU_State initial_cpu = {.pc=0x9064, .a=0x34, .x=0xae, .y=0x62, .sp=0x75, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x5a}, {.addr=0x9064, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9065, .a=0x34, .x=0x5a, .y=0x62, .sp=0x76, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x5a}, {.addr=0x9064, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9064, .value=0xce, .type=IO_READ},
        {.addr=0x9065, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0355) {
    const struct CPU_State initial_cpu = {.pc=0xff00, .a=0x7d, .x=0x4d, .y=0xff, .sp=0x85, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x8f}, {.addr=0xff00, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xff01, .a=0x7d, .x=0x8f, .y=0xff, .sp=0x86, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x8f}, {.addr=0xff00, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xff00, .value=0xce, .type=IO_READ},
        {.addr=0xff01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0356) {
    const struct CPU_State initial_cpu = {.pc=0x0acf, .a=0x60, .x=0x86, .y=0x5d, .sp=0xa2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x2d}, {.addr=0x0acf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0ad0, .a=0x60, .x=0x2d, .y=0x5d, .sp=0xa3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x2d}, {.addr=0x0acf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0acf, .value=0xce, .type=IO_READ},
        {.addr=0x0ad0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0357) {
    const struct CPU_State initial_cpu = {.pc=0x5d04, .a=0x49, .x=0xb6, .y=0x58, .sp=0x18, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xd5}, {.addr=0x5d04, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5d05, .a=0x49, .x=0xd5, .y=0x58, .sp=0x19, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xd5}, {.addr=0x5d04, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5d04, .value=0xce, .type=IO_READ},
        {.addr=0x5d05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0358) {
    const struct CPU_State initial_cpu = {.pc=0x4882, .a=0x8b, .x=0x75, .y=0x68, .sp=0x8f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x7d}, {.addr=0x4882, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4883, .a=0x8b, .x=0x7d, .y=0x68, .sp=0x90, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x7d}, {.addr=0x4882, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4882, .value=0xce, .type=IO_READ},
        {.addr=0x4883, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0359) {
    const struct CPU_State initial_cpu = {.pc=0x26f3, .a=0xb3, .x=0x00, .y=0x3e, .sp=0x65, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xdd}, {.addr=0x26f3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x26f4, .a=0xb3, .x=0xdd, .y=0x3e, .sp=0x66, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xdd}, {.addr=0x26f3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x26f3, .value=0xce, .type=IO_READ},
        {.addr=0x26f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_035A) {
    const struct CPU_State initial_cpu = {.pc=0x04b8, .a=0xd8, .x=0x9b, .y=0x52, .sp=0x7d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xd5}, {.addr=0x04b8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x04b9, .a=0xd8, .x=0xd5, .y=0x52, .sp=0x7e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xd5}, {.addr=0x04b8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x04b8, .value=0xce, .type=IO_READ},
        {.addr=0x04b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_035B) {
    const struct CPU_State initial_cpu = {.pc=0xcd51, .a=0xf3, .x=0x6a, .y=0x10, .sp=0xef, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x8b}, {.addr=0xcd51, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcd52, .a=0xf3, .x=0x8b, .y=0x10, .sp=0xf0, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x8b}, {.addr=0xcd51, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcd51, .value=0xce, .type=IO_READ},
        {.addr=0xcd52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f0, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_035C) {
    const struct CPU_State initial_cpu = {.pc=0xaaa0, .a=0xaa, .x=0x2f, .y=0x82, .sp=0x91, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x53}, {.addr=0xaaa0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xaaa1, .a=0xaa, .x=0x53, .y=0x82, .sp=0x92, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x53}, {.addr=0xaaa0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xaaa0, .value=0xce, .type=IO_READ},
        {.addr=0xaaa1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_035D) {
    const struct CPU_State initial_cpu = {.pc=0xada4, .a=0x8c, .x=0x43, .y=0xfd, .sp=0x56, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x84}, {.addr=0xada4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xada5, .a=0x8c, .x=0x84, .y=0xfd, .sp=0x57, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x84}, {.addr=0xada4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xada4, .value=0xce, .type=IO_READ},
        {.addr=0xada5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0157, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_035E) {
    const struct CPU_State initial_cpu = {.pc=0x5960, .a=0x52, .x=0xeb, .y=0xa0, .sp=0x0b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x77}, {.addr=0x5960, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5961, .a=0x52, .x=0x77, .y=0xa0, .sp=0x0c, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x77}, {.addr=0x5960, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5960, .value=0xce, .type=IO_READ},
        {.addr=0x5961, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_035F) {
    const struct CPU_State initial_cpu = {.pc=0xc272, .a=0x9e, .x=0x65, .y=0x2d, .sp=0x2e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xb0}, {.addr=0xc272, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc273, .a=0x9e, .x=0xb0, .y=0x2d, .sp=0x2f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xb0}, {.addr=0xc272, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc272, .value=0xce, .type=IO_READ},
        {.addr=0xc273, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0360) {
    const struct CPU_State initial_cpu = {.pc=0x5ff2, .a=0x3a, .x=0x5a, .y=0x90, .sp=0xaf, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xe7}, {.addr=0x5ff2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5ff3, .a=0x3a, .x=0xe7, .y=0x90, .sp=0xb0, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xe7}, {.addr=0x5ff2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5ff2, .value=0xce, .type=IO_READ},
        {.addr=0x5ff3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0361) {
    const struct CPU_State initial_cpu = {.pc=0x2e0d, .a=0x91, .x=0xd6, .y=0x84, .sp=0x94, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x26}, {.addr=0x2e0d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2e0e, .a=0x91, .x=0x26, .y=0x84, .sp=0x95, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x26}, {.addr=0x2e0d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2e0d, .value=0xce, .type=IO_READ},
        {.addr=0x2e0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0362) {
    const struct CPU_State initial_cpu = {.pc=0xdd69, .a=0x56, .x=0xf6, .y=0xec, .sp=0x36, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x7c}, {.addr=0xdd69, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdd6a, .a=0x56, .x=0x7c, .y=0xec, .sp=0x37, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x7c}, {.addr=0xdd69, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdd69, .value=0xce, .type=IO_READ},
        {.addr=0xdd6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0363) {
    const struct CPU_State initial_cpu = {.pc=0xfdb9, .a=0x39, .x=0x8e, .y=0xff, .sp=0x83, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xee}, {.addr=0xfdb9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfdba, .a=0x39, .x=0xee, .y=0xff, .sp=0x84, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xee}, {.addr=0xfdb9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfdb9, .value=0xce, .type=IO_READ},
        {.addr=0xfdba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf42f, .a=0x7b, .x=0x28, .y=0xeb, .sp=0x24, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x57}, {.addr=0xf42f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf430, .a=0x7b, .x=0x57, .y=0xeb, .sp=0x25, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x57}, {.addr=0xf42f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf42f, .value=0xce, .type=IO_READ},
        {.addr=0xf430, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0365) {
    const struct CPU_State initial_cpu = {.pc=0x9d1a, .a=0x99, .x=0x63, .y=0xf3, .sp=0xdc, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x4f}, {.addr=0x9d1a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9d1b, .a=0x99, .x=0x4f, .y=0xf3, .sp=0xdd, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x4f}, {.addr=0x9d1a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9d1a, .value=0xce, .type=IO_READ},
        {.addr=0x9d1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0366) {
    const struct CPU_State initial_cpu = {.pc=0x6112, .a=0xe6, .x=0xa3, .y=0x71, .sp=0xd4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xd2}, {.addr=0x6112, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6113, .a=0xe6, .x=0xd2, .y=0x71, .sp=0xd5, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xd2}, {.addr=0x6112, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6112, .value=0xce, .type=IO_READ},
        {.addr=0x6113, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d5, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0367) {
    const struct CPU_State initial_cpu = {.pc=0x32c2, .a=0x1d, .x=0x34, .y=0x84, .sp=0xae, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xe4}, {.addr=0x32c2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x32c3, .a=0x1d, .x=0xe4, .y=0x84, .sp=0xaf, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xe4}, {.addr=0x32c2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x32c2, .value=0xce, .type=IO_READ},
        {.addr=0x32c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8f01, .a=0xa8, .x=0x6f, .y=0x8f, .sp=0xdc, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x18}, {.addr=0x8f01, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8f02, .a=0xa8, .x=0x18, .y=0x8f, .sp=0xdd, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x18}, {.addr=0x8f01, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8f01, .value=0xce, .type=IO_READ},
        {.addr=0x8f02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0369) {
    const struct CPU_State initial_cpu = {.pc=0x0ec2, .a=0x42, .x=0x1a, .y=0x9f, .sp=0x2a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x01}, {.addr=0x0ec2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0ec3, .a=0x42, .x=0x01, .y=0x9f, .sp=0x2b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x01}, {.addr=0x0ec2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0ec2, .value=0xce, .type=IO_READ},
        {.addr=0x0ec3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_036A) {
    const struct CPU_State initial_cpu = {.pc=0x9ead, .a=0xd0, .x=0x9a, .y=0x01, .sp=0xa3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x8e}, {.addr=0x9ead, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9eae, .a=0xd0, .x=0x8e, .y=0x01, .sp=0xa4, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x8e}, {.addr=0x9ead, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9ead, .value=0xce, .type=IO_READ},
        {.addr=0x9eae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_036B) {
    const struct CPU_State initial_cpu = {.pc=0xfcf4, .a=0xfb, .x=0x4d, .y=0xc3, .sp=0x23, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xc8}, {.addr=0xfcf4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfcf5, .a=0xfb, .x=0xc8, .y=0xc3, .sp=0x24, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xc8}, {.addr=0xfcf4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfcf4, .value=0xce, .type=IO_READ},
        {.addr=0xfcf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_036C) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0x35, .x=0x37, .y=0x7f, .sp=0x8b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x6c}, {.addr=0xd79f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd7a0, .a=0x35, .x=0x6c, .y=0x7f, .sp=0x8c, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x6c}, {.addr=0xd79f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0xce, .type=IO_READ},
        {.addr=0xd7a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_036D) {
    const struct CPU_State initial_cpu = {.pc=0x6089, .a=0x07, .x=0x11, .y=0x64, .sp=0x55, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x70}, {.addr=0x6089, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x608a, .a=0x07, .x=0x70, .y=0x64, .sp=0x56, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x70}, {.addr=0x6089, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6089, .value=0xce, .type=IO_READ},
        {.addr=0x608a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_036E) {
    const struct CPU_State initial_cpu = {.pc=0xf54b, .a=0x0b, .x=0xe4, .y=0xd1, .sp=0xf2, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x21}, {.addr=0xf54b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf54c, .a=0x0b, .x=0x21, .y=0xd1, .sp=0xf3, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x21}, {.addr=0xf54b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf54b, .value=0xce, .type=IO_READ},
        {.addr=0xf54c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f3, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_036F) {
    const struct CPU_State initial_cpu = {.pc=0xf3c8, .a=0x80, .x=0x0b, .y=0x76, .sp=0x11, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x4a}, {.addr=0xf3c8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf3c9, .a=0x80, .x=0x4a, .y=0x76, .sp=0x12, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x4a}, {.addr=0xf3c8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf3c8, .value=0xce, .type=IO_READ},
        {.addr=0xf3c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0370) {
    const struct CPU_State initial_cpu = {.pc=0x3761, .a=0x11, .x=0xf1, .y=0x8c, .sp=0xf4, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x4d}, {.addr=0x3761, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3762, .a=0x11, .x=0x4d, .y=0x8c, .sp=0xf5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x4d}, {.addr=0x3761, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3761, .value=0xce, .type=IO_READ},
        {.addr=0x3762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0371) {
    const struct CPU_State initial_cpu = {.pc=0x0140, .a=0xb3, .x=0xa9, .y=0xd0, .sp=0xcd, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xce}, {.addr=0x01ce, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0141, .a=0xb3, .x=0x26, .y=0xd0, .sp=0xce, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xce}, {.addr=0x01ce, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0140, .value=0xce, .type=IO_READ},
        {.addr=0x0141, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0372) {
    const struct CPU_State initial_cpu = {.pc=0x58ee, .a=0x76, .x=0x77, .y=0x4f, .sp=0x94, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x94}, {.addr=0x58ee, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x58ef, .a=0x76, .x=0x94, .y=0x4f, .sp=0x95, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x94}, {.addr=0x58ee, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x58ee, .value=0xce, .type=IO_READ},
        {.addr=0x58ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0195, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0373) {
    const struct CPU_State initial_cpu = {.pc=0x8cde, .a=0x62, .x=0x14, .y=0x0f, .sp=0xbc, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x7f}, {.addr=0x8cde, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8cdf, .a=0x62, .x=0x7f, .y=0x0f, .sp=0xbd, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x7f}, {.addr=0x8cde, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8cde, .value=0xce, .type=IO_READ},
        {.addr=0x8cdf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0374) {
    const struct CPU_State initial_cpu = {.pc=0xd31a, .a=0x05, .x=0x06, .y=0xfc, .sp=0xe2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xfa}, {.addr=0xd31a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd31b, .a=0x05, .x=0xfa, .y=0xfc, .sp=0xe3, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xfa}, {.addr=0xd31a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd31a, .value=0xce, .type=IO_READ},
        {.addr=0xd31b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0375) {
    const struct CPU_State initial_cpu = {.pc=0xf365, .a=0x08, .x=0x6f, .y=0x22, .sp=0xdc, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xf9}, {.addr=0xf365, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf366, .a=0x08, .x=0xf9, .y=0x22, .sp=0xdd, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xf9}, {.addr=0xf365, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf365, .value=0xce, .type=IO_READ},
        {.addr=0xf366, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0376) {
    const struct CPU_State initial_cpu = {.pc=0x8991, .a=0xa6, .x=0x86, .y=0x37, .sp=0xfd, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x06}, {.addr=0x8991, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8992, .a=0xa6, .x=0x06, .y=0x37, .sp=0xfe, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x06}, {.addr=0x8991, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8991, .value=0xce, .type=IO_READ},
        {.addr=0x8992, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0377) {
    const struct CPU_State initial_cpu = {.pc=0x0ca5, .a=0xa9, .x=0xef, .y=0x99, .sp=0x78, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x35}, {.addr=0x0ca5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0ca6, .a=0xa9, .x=0x35, .y=0x99, .sp=0x79, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x35}, {.addr=0x0ca5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0ca5, .value=0xce, .type=IO_READ},
        {.addr=0x0ca6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0378) {
    const struct CPU_State initial_cpu = {.pc=0x1632, .a=0xfe, .x=0xa0, .y=0x3a, .sp=0x4a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x08}, {.addr=0x1632, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1633, .a=0xfe, .x=0x08, .y=0x3a, .sp=0x4b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x08}, {.addr=0x1632, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1632, .value=0xce, .type=IO_READ},
        {.addr=0x1633, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0379) {
    const struct CPU_State initial_cpu = {.pc=0xe9a8, .a=0xb4, .x=0xa7, .y=0x11, .sp=0x5c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x85}, {.addr=0xe9a8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe9a9, .a=0xb4, .x=0x85, .y=0x11, .sp=0x5d, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x85}, {.addr=0xe9a8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe9a8, .value=0xce, .type=IO_READ},
        {.addr=0xe9a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_037A) {
    const struct CPU_State initial_cpu = {.pc=0x09ac, .a=0x6e, .x=0x40, .y=0xd2, .sp=0x72, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x69}, {.addr=0x09ac, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x09ad, .a=0x6e, .x=0x69, .y=0xd2, .sp=0x73, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x69}, {.addr=0x09ac, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x09ac, .value=0xce, .type=IO_READ},
        {.addr=0x09ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_037B) {
    const struct CPU_State initial_cpu = {.pc=0xc4e3, .a=0x60, .x=0xd8, .y=0xbf, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xc6}, {.addr=0xc4e3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc4e4, .a=0x60, .x=0xc6, .y=0xbf, .sp=0x29, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xc6}, {.addr=0xc4e3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc4e3, .value=0xce, .type=IO_READ},
        {.addr=0xc4e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_037C) {
    const struct CPU_State initial_cpu = {.pc=0xf646, .a=0x93, .x=0xa3, .y=0x8f, .sp=0x47, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xee}, {.addr=0xf646, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf647, .a=0x93, .x=0xee, .y=0x8f, .sp=0x48, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xee}, {.addr=0xf646, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf646, .value=0xce, .type=IO_READ},
        {.addr=0xf647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_037D) {
    const struct CPU_State initial_cpu = {.pc=0xc292, .a=0xc0, .x=0x03, .y=0x4f, .sp=0xac, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x42}, {.addr=0xc292, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc293, .a=0xc0, .x=0x42, .y=0x4f, .sp=0xad, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x42}, {.addr=0xc292, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc292, .value=0xce, .type=IO_READ},
        {.addr=0xc293, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_037E) {
    const struct CPU_State initial_cpu = {.pc=0x2d7b, .a=0x99, .x=0xce, .y=0x6c, .sp=0xf4, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xb9}, {.addr=0x2d7b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2d7c, .a=0x99, .x=0xb9, .y=0x6c, .sp=0xf5, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xb9}, {.addr=0x2d7b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2d7b, .value=0xce, .type=IO_READ},
        {.addr=0x2d7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_037F) {
    const struct CPU_State initial_cpu = {.pc=0x7ba7, .a=0x9f, .x=0x67, .y=0x05, .sp=0x71, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x14}, {.addr=0x7ba7, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7ba8, .a=0x9f, .x=0x14, .y=0x05, .sp=0x72, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x14}, {.addr=0x7ba7, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7ba7, .value=0xce, .type=IO_READ},
        {.addr=0x7ba8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0380) {
    const struct CPU_State initial_cpu = {.pc=0x6013, .a=0x22, .x=0x31, .y=0xc1, .sp=0x7a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x29}, {.addr=0x6013, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6014, .a=0x22, .x=0x29, .y=0xc1, .sp=0x7b, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x29}, {.addr=0x6013, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6013, .value=0xce, .type=IO_READ},
        {.addr=0x6014, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0381) {
    const struct CPU_State initial_cpu = {.pc=0x80ba, .a=0x1a, .x=0xcc, .y=0x2a, .sp=0xae, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x3c}, {.addr=0x80ba, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x80bb, .a=0x1a, .x=0x3c, .y=0x2a, .sp=0xaf, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x3c}, {.addr=0x80ba, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x80ba, .value=0xce, .type=IO_READ},
        {.addr=0x80bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0382) {
    const struct CPU_State initial_cpu = {.pc=0x0b35, .a=0xa4, .x=0xa5, .y=0x93, .sp=0x1d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x5d}, {.addr=0x0b35, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0b36, .a=0xa4, .x=0x5d, .y=0x93, .sp=0x1e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x5d}, {.addr=0x0b35, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0b35, .value=0xce, .type=IO_READ},
        {.addr=0x0b36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0383) {
    const struct CPU_State initial_cpu = {.pc=0x9357, .a=0xf0, .x=0x6d, .y=0x4d, .sp=0x3f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xf8}, {.addr=0x9357, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9358, .a=0xf0, .x=0xf8, .y=0x4d, .sp=0x40, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xf8}, {.addr=0x9357, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9357, .value=0xce, .type=IO_READ},
        {.addr=0x9358, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0384) {
    const struct CPU_State initial_cpu = {.pc=0x94c0, .a=0x1a, .x=0x5a, .y=0xd9, .sp=0xa6, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x1d}, {.addr=0x94c0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x94c1, .a=0x1a, .x=0x1d, .y=0xd9, .sp=0xa7, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x1d}, {.addr=0x94c0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x94c0, .value=0xce, .type=IO_READ},
        {.addr=0x94c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0385) {
    const struct CPU_State initial_cpu = {.pc=0x8986, .a=0x29, .x=0xf1, .y=0xa0, .sp=0x70, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x8a}, {.addr=0x8986, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8987, .a=0x29, .x=0x8a, .y=0xa0, .sp=0x71, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x8a}, {.addr=0x8986, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8986, .value=0xce, .type=IO_READ},
        {.addr=0x8987, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0171, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0386) {
    const struct CPU_State initial_cpu = {.pc=0x553c, .a=0xf7, .x=0xec, .y=0x6f, .sp=0x4c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x8d}, {.addr=0x553c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x553d, .a=0xf7, .x=0x8d, .y=0x6f, .sp=0x4d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x8d}, {.addr=0x553c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x553c, .value=0xce, .type=IO_READ},
        {.addr=0x553d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0387) {
    const struct CPU_State initial_cpu = {.pc=0x405e, .a=0x35, .x=0x68, .y=0xe9, .sp=0x25, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xaf}, {.addr=0x405e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x405f, .a=0x35, .x=0xaf, .y=0xe9, .sp=0x26, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xaf}, {.addr=0x405e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x405e, .value=0xce, .type=IO_READ},
        {.addr=0x405f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0388) {
    const struct CPU_State initial_cpu = {.pc=0x346d, .a=0xe2, .x=0x1c, .y=0x95, .sp=0x30, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xcb}, {.addr=0x346d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x346e, .a=0xe2, .x=0xcb, .y=0x95, .sp=0x31, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xcb}, {.addr=0x346d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x346d, .value=0xce, .type=IO_READ},
        {.addr=0x346e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0389) {
    const struct CPU_State initial_cpu = {.pc=0xe5da, .a=0xed, .x=0xf0, .y=0xda, .sp=0x82, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x02}, {.addr=0xe5da, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe5db, .a=0xed, .x=0x02, .y=0xda, .sp=0x83, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x02}, {.addr=0xe5da, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe5da, .value=0xce, .type=IO_READ},
        {.addr=0xe5db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_038A) {
    const struct CPU_State initial_cpu = {.pc=0x9efa, .a=0xb5, .x=0xb1, .y=0x51, .sp=0x3b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xec}, {.addr=0x9efa, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9efb, .a=0xb5, .x=0xec, .y=0x51, .sp=0x3c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xec}, {.addr=0x9efa, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9efa, .value=0xce, .type=IO_READ},
        {.addr=0x9efb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_038B) {
    const struct CPU_State initial_cpu = {.pc=0x55fb, .a=0x94, .x=0xca, .y=0x8a, .sp=0xda, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xf9}, {.addr=0x55fb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x55fc, .a=0x94, .x=0xf9, .y=0x8a, .sp=0xdb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xf9}, {.addr=0x55fb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x55fb, .value=0xce, .type=IO_READ},
        {.addr=0x55fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01db, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_038C) {
    const struct CPU_State initial_cpu = {.pc=0xd4f4, .a=0x27, .x=0xb6, .y=0x6b, .sp=0x2f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xeb}, {.addr=0xd4f4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd4f5, .a=0x27, .x=0xeb, .y=0x6b, .sp=0x30, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xeb}, {.addr=0xd4f4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd4f4, .value=0xce, .type=IO_READ},
        {.addr=0xd4f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_038D) {
    const struct CPU_State initial_cpu = {.pc=0x3311, .a=0x4d, .x=0x8c, .y=0xef, .sp=0xeb, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x4a}, {.addr=0x3311, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3312, .a=0x4d, .x=0x4a, .y=0xef, .sp=0xec, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x4a}, {.addr=0x3311, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3311, .value=0xce, .type=IO_READ},
        {.addr=0x3312, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_038E) {
    const struct CPU_State initial_cpu = {.pc=0x730b, .a=0x68, .x=0x3b, .y=0x44, .sp=0x2e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x9a}, {.addr=0x730b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x730c, .a=0x68, .x=0x9a, .y=0x44, .sp=0x2f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x9a}, {.addr=0x730b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x730b, .value=0xce, .type=IO_READ},
        {.addr=0x730c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_038F) {
    const struct CPU_State initial_cpu = {.pc=0x3831, .a=0x75, .x=0x90, .y=0x54, .sp=0xff, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x55}, {.addr=0x3831, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3832, .a=0x75, .x=0x55, .y=0x54, .sp=0x00, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x55}, {.addr=0x3831, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3831, .value=0xce, .type=IO_READ},
        {.addr=0x3832, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0390) {
    const struct CPU_State initial_cpu = {.pc=0x5906, .a=0x80, .x=0x8e, .y=0x4f, .sp=0xeb, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x3c}, {.addr=0x5906, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5907, .a=0x80, .x=0x3c, .y=0x4f, .sp=0xec, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x3c}, {.addr=0x5906, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5906, .value=0xce, .type=IO_READ},
        {.addr=0x5907, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0391) {
    const struct CPU_State initial_cpu = {.pc=0x1fd8, .a=0x4d, .x=0x18, .y=0x37, .sp=0x4d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xfc}, {.addr=0x1fd8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1fd9, .a=0x4d, .x=0xfc, .y=0x37, .sp=0x4e, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xfc}, {.addr=0x1fd8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1fd8, .value=0xce, .type=IO_READ},
        {.addr=0x1fd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0392) {
    const struct CPU_State initial_cpu = {.pc=0xa024, .a=0x8d, .x=0xb2, .y=0x45, .sp=0x8e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x08}, {.addr=0xa024, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa025, .a=0x8d, .x=0x08, .y=0x45, .sp=0x8f, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x08}, {.addr=0xa024, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa024, .value=0xce, .type=IO_READ},
        {.addr=0xa025, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0393) {
    const struct CPU_State initial_cpu = {.pc=0x5341, .a=0x5c, .x=0x25, .y=0xec, .sp=0x71, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x49}, {.addr=0x5341, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5342, .a=0x5c, .x=0x49, .y=0xec, .sp=0x72, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x49}, {.addr=0x5341, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5341, .value=0xce, .type=IO_READ},
        {.addr=0x5342, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0394) {
    const struct CPU_State initial_cpu = {.pc=0xf757, .a=0xb3, .x=0x0b, .y=0x75, .sp=0xd0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xa6}, {.addr=0xf757, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf758, .a=0xb3, .x=0xa6, .y=0x75, .sp=0xd1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xa6}, {.addr=0xf757, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf757, .value=0xce, .type=IO_READ},
        {.addr=0xf758, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0395) {
    const struct CPU_State initial_cpu = {.pc=0xe289, .a=0xd4, .x=0xf0, .y=0xea, .sp=0x55, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x79}, {.addr=0xe289, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe28a, .a=0xd4, .x=0x79, .y=0xea, .sp=0x56, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x79}, {.addr=0xe289, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe289, .value=0xce, .type=IO_READ},
        {.addr=0xe28a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0396) {
    const struct CPU_State initial_cpu = {.pc=0xc7c6, .a=0xe2, .x=0x8c, .y=0x44, .sp=0x6f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xc2}, {.addr=0xc7c6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc7c7, .a=0xe2, .x=0xc2, .y=0x44, .sp=0x70, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xc2}, {.addr=0xc7c6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc7c6, .value=0xce, .type=IO_READ},
        {.addr=0xc7c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0397) {
    const struct CPU_State initial_cpu = {.pc=0x285c, .a=0xbc, .x=0x4e, .y=0x00, .sp=0x5b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x87}, {.addr=0x285c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x285d, .a=0xbc, .x=0x87, .y=0x00, .sp=0x5c, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x87}, {.addr=0x285c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x285c, .value=0xce, .type=IO_READ},
        {.addr=0x285d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0398) {
    const struct CPU_State initial_cpu = {.pc=0x07f6, .a=0xfc, .x=0x44, .y=0x2f, .sp=0x47, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x7a}, {.addr=0x07f6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x07f7, .a=0xfc, .x=0x7a, .y=0x2f, .sp=0x48, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x7a}, {.addr=0x07f6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x07f6, .value=0xce, .type=IO_READ},
        {.addr=0x07f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_0399) {
    const struct CPU_State initial_cpu = {.pc=0xaba4, .a=0xb2, .x=0xa9, .y=0xc3, .sp=0xa8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xdd}, {.addr=0xaba4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xaba5, .a=0xb2, .x=0xdd, .y=0xc3, .sp=0xa9, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xdd}, {.addr=0xaba4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xaba4, .value=0xce, .type=IO_READ},
        {.addr=0xaba5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_039A) {
    const struct CPU_State initial_cpu = {.pc=0xb8fc, .a=0xf5, .x=0x39, .y=0x76, .sp=0xf3, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x2f}, {.addr=0xb8fc, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb8fd, .a=0xf5, .x=0x2f, .y=0x76, .sp=0xf4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x2f}, {.addr=0xb8fc, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb8fc, .value=0xce, .type=IO_READ},
        {.addr=0xb8fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_039B) {
    const struct CPU_State initial_cpu = {.pc=0x863f, .a=0xb6, .x=0x11, .y=0x2f, .sp=0x79, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xef}, {.addr=0x863f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8640, .a=0xb6, .x=0xef, .y=0x2f, .sp=0x7a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xef}, {.addr=0x863f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x863f, .value=0xce, .type=IO_READ},
        {.addr=0x8640, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_039C) {
    const struct CPU_State initial_cpu = {.pc=0xbb38, .a=0x1e, .x=0x0d, .y=0x11, .sp=0x66, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x48}, {.addr=0xbb38, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbb39, .a=0x1e, .x=0x48, .y=0x11, .sp=0x67, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x48}, {.addr=0xbb38, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbb38, .value=0xce, .type=IO_READ},
        {.addr=0xbb39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_039D) {
    const struct CPU_State initial_cpu = {.pc=0xf827, .a=0xef, .x=0xeb, .y=0x20, .sp=0xb3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x89}, {.addr=0xf827, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf828, .a=0xef, .x=0x89, .y=0x20, .sp=0xb4, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x89}, {.addr=0xf827, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf827, .value=0xce, .type=IO_READ},
        {.addr=0xf828, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_039E) {
    const struct CPU_State initial_cpu = {.pc=0xd44e, .a=0xde, .x=0x41, .y=0xd9, .sp=0x1f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x28}, {.addr=0xd44e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd44f, .a=0xde, .x=0x28, .y=0xd9, .sp=0x20, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x28}, {.addr=0xd44e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd44e, .value=0xce, .type=IO_READ},
        {.addr=0xd44f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_039F) {
    const struct CPU_State initial_cpu = {.pc=0xd6ee, .a=0xe0, .x=0xf5, .y=0x00, .sp=0x51, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xe1}, {.addr=0xd6ee, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xd6ef, .a=0xe0, .x=0xe1, .y=0x00, .sp=0x52, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xe1}, {.addr=0xd6ee, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xd6ee, .value=0xce, .type=IO_READ},
        {.addr=0xd6ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xdb95, .a=0x07, .x=0x02, .y=0x59, .sp=0x1f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xc7}, {.addr=0xdb95, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdb96, .a=0x07, .x=0xc7, .y=0x59, .sp=0x20, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xc7}, {.addr=0xdb95, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdb95, .value=0xce, .type=IO_READ},
        {.addr=0xdb96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe1dd, .a=0x14, .x=0x7a, .y=0x85, .sp=0x3b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x80}, {.addr=0xe1dd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe1de, .a=0x14, .x=0x80, .y=0x85, .sp=0x3c, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x80}, {.addr=0xe1dd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe1dd, .value=0xce, .type=IO_READ},
        {.addr=0xe1de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xe58b, .a=0xcc, .x=0xc5, .y=0x44, .sp=0xfb, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x6a}, {.addr=0xe58b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe58c, .a=0xcc, .x=0x6a, .y=0x44, .sp=0xfc, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x6a}, {.addr=0xe58b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe58b, .value=0xce, .type=IO_READ},
        {.addr=0xe58c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x53d5, .a=0xff, .x=0x2d, .y=0xad, .sp=0xab, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x36}, {.addr=0x53d5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x53d6, .a=0xff, .x=0x36, .y=0xad, .sp=0xac, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x36}, {.addr=0x53d5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x53d5, .value=0xce, .type=IO_READ},
        {.addr=0x53d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xe649, .a=0x9f, .x=0xa0, .y=0x1f, .sp=0x59, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x98}, {.addr=0xe649, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe64a, .a=0x9f, .x=0x98, .y=0x1f, .sp=0x5a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x98}, {.addr=0xe649, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe649, .value=0xce, .type=IO_READ},
        {.addr=0xe64a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xad17, .a=0x41, .x=0xe4, .y=0x67, .sp=0x52, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x2d}, {.addr=0xad17, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xad18, .a=0x41, .x=0x2d, .y=0x67, .sp=0x53, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x2d}, {.addr=0xad17, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xad17, .value=0xce, .type=IO_READ},
        {.addr=0xad18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x9c57, .a=0xb6, .x=0x75, .y=0x06, .sp=0x18, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xd5}, {.addr=0x9c57, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9c58, .a=0xb6, .x=0xd5, .y=0x06, .sp=0x19, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xd5}, {.addr=0x9c57, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9c57, .value=0xce, .type=IO_READ},
        {.addr=0x9c58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x7c0d, .a=0x94, .x=0xf3, .y=0x20, .sp=0x96, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x02}, {.addr=0x7c0d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7c0e, .a=0x94, .x=0x02, .y=0x20, .sp=0x97, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x02}, {.addr=0x7c0d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7c0d, .value=0xce, .type=IO_READ},
        {.addr=0x7c0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xf0f3, .a=0x25, .x=0x4b, .y=0x93, .sp=0xb2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x24}, {.addr=0xf0f3, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf0f4, .a=0x25, .x=0x24, .y=0x93, .sp=0xb3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x24}, {.addr=0xf0f3, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf0f3, .value=0xce, .type=IO_READ},
        {.addr=0xf0f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xc630, .a=0x0d, .x=0xa8, .y=0x26, .sp=0xf4, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xe5}, {.addr=0xc630, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc631, .a=0x0d, .x=0xe5, .y=0x26, .sp=0xf5, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe5}, {.addr=0xc630, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc630, .value=0xce, .type=IO_READ},
        {.addr=0xc631, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xe36d, .a=0x5e, .x=0xbc, .y=0xc1, .sp=0x42, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x1f}, {.addr=0xe36d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe36e, .a=0x5e, .x=0x1f, .y=0xc1, .sp=0x43, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x1f}, {.addr=0xe36d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe36d, .value=0xce, .type=IO_READ},
        {.addr=0xe36e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xb9e6, .a=0x28, .x=0x60, .y=0x1b, .sp=0xf0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x33}, {.addr=0xb9e6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb9e7, .a=0x28, .x=0x33, .y=0x1b, .sp=0xf1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x33}, {.addr=0xb9e6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb9e6, .value=0xce, .type=IO_READ},
        {.addr=0xb9e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x11c0, .a=0xb7, .x=0x10, .y=0xb0, .sp=0x57, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xa9}, {.addr=0x11c0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x11c1, .a=0xb7, .x=0xa9, .y=0xb0, .sp=0x58, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xa9}, {.addr=0x11c0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x11c0, .value=0xce, .type=IO_READ},
        {.addr=0x11c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x6099, .a=0xc0, .x=0x80, .y=0xa9, .sp=0x28, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x8a}, {.addr=0x6099, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x609a, .a=0xc0, .x=0x8a, .y=0xa9, .sp=0x29, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x8a}, {.addr=0x6099, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6099, .value=0xce, .type=IO_READ},
        {.addr=0x609a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x149d, .a=0xa4, .x=0x64, .y=0xa9, .sp=0x63, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x85}, {.addr=0x149d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x149e, .a=0xa4, .x=0x85, .y=0xa9, .sp=0x64, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x85}, {.addr=0x149d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x149d, .value=0xce, .type=IO_READ},
        {.addr=0x149e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x31f0, .a=0xe2, .x=0x43, .y=0x11, .sp=0x82, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xd9}, {.addr=0x31f0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x31f1, .a=0xe2, .x=0xd9, .y=0x11, .sp=0x83, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xd9}, {.addr=0x31f0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x31f0, .value=0xce, .type=IO_READ},
        {.addr=0x31f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x0963, .a=0x00, .x=0x4e, .y=0x95, .sp=0x75, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x75}, {.addr=0x0963, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0964, .a=0x00, .x=0x75, .y=0x95, .sp=0x76, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x75}, {.addr=0x0963, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0963, .value=0xce, .type=IO_READ},
        {.addr=0x0964, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x1aef, .a=0x01, .x=0x3a, .y=0xb7, .sp=0x07, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x73}, {.addr=0x1aef, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1af0, .a=0x01, .x=0x73, .y=0xb7, .sp=0x08, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x73}, {.addr=0x1aef, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1aef, .value=0xce, .type=IO_READ},
        {.addr=0x1af0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x224d, .a=0x3c, .x=0x04, .y=0x58, .sp=0xc4, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x39}, {.addr=0x224d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x224e, .a=0x3c, .x=0x39, .y=0x58, .sp=0xc5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x39}, {.addr=0x224d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x224d, .value=0xce, .type=IO_READ},
        {.addr=0x224e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xa542, .a=0x6b, .x=0x91, .y=0x38, .sp=0xa0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x30}, {.addr=0xa542, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa543, .a=0x6b, .x=0x30, .y=0x38, .sp=0xa1, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x30}, {.addr=0xa542, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa542, .value=0xce, .type=IO_READ},
        {.addr=0xa543, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3394, .a=0xe6, .x=0x55, .y=0x5b, .sp=0xf6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xef}, {.addr=0x3394, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3395, .a=0xe6, .x=0xef, .y=0x5b, .sp=0xf7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xef}, {.addr=0x3394, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3394, .value=0xce, .type=IO_READ},
        {.addr=0x3395, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x612c, .a=0x8c, .x=0xef, .y=0xbc, .sp=0xe4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x05}, {.addr=0x612c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x612d, .a=0x8c, .x=0x05, .y=0xbc, .sp=0xe5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x05}, {.addr=0x612c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x612c, .value=0xce, .type=IO_READ},
        {.addr=0x612d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x2105, .a=0x81, .x=0xd3, .y=0xda, .sp=0x65, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x55}, {.addr=0x2105, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2106, .a=0x81, .x=0x55, .y=0xda, .sp=0x66, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x55}, {.addr=0x2105, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2105, .value=0xce, .type=IO_READ},
        {.addr=0x2106, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xe54e, .a=0x75, .x=0x25, .y=0xfb, .sp=0xb5, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xf9}, {.addr=0xe54e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe54f, .a=0x75, .x=0xf9, .y=0xfb, .sp=0xb6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xf9}, {.addr=0xe54e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe54e, .value=0xce, .type=IO_READ},
        {.addr=0xe54f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xb04a, .a=0xf1, .x=0x38, .y=0x70, .sp=0x3b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x5a}, {.addr=0xb04a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb04b, .a=0xf1, .x=0x5a, .y=0x70, .sp=0x3c, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x5a}, {.addr=0xb04a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb04a, .value=0xce, .type=IO_READ},
        {.addr=0xb04b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x2907, .a=0x38, .x=0x12, .y=0xce, .sp=0x9e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x6a}, {.addr=0x2907, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2908, .a=0x38, .x=0x6a, .y=0xce, .sp=0x9f, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x6a}, {.addr=0x2907, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2907, .value=0xce, .type=IO_READ},
        {.addr=0x2908, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x3e41, .a=0x72, .x=0x05, .y=0x80, .sp=0xcf, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xee}, {.addr=0x3e41, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3e42, .a=0x72, .x=0xee, .y=0x80, .sp=0xd0, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xee}, {.addr=0x3e41, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3e41, .value=0xce, .type=IO_READ},
        {.addr=0x3e42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xce86, .a=0x69, .x=0xf7, .y=0xa1, .sp=0x23, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x36}, {.addr=0xce86, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xce87, .a=0x69, .x=0x36, .y=0xa1, .sp=0x24, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x36}, {.addr=0xce86, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xce86, .value=0xce, .type=IO_READ},
        {.addr=0xce87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x936b, .a=0xac, .x=0x86, .y=0x7f, .sp=0x63, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x40}, {.addr=0x936b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x936c, .a=0xac, .x=0x40, .y=0x7f, .sp=0x64, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x40}, {.addr=0x936b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x936b, .value=0xce, .type=IO_READ},
        {.addr=0x936c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0164, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x4661, .a=0x13, .x=0xd0, .y=0x7c, .sp=0xd6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xd0}, {.addr=0x4661, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4662, .a=0x13, .x=0xd0, .y=0x7c, .sp=0xd7, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xd0}, {.addr=0x4661, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4661, .value=0xce, .type=IO_READ},
        {.addr=0x4662, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x749c, .a=0x61, .x=0x12, .y=0xae, .sp=0x3e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xde}, {.addr=0x749c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x749d, .a=0x61, .x=0xde, .y=0xae, .sp=0x3f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xde}, {.addr=0x749c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x749c, .value=0xce, .type=IO_READ},
        {.addr=0x749d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x3ea9, .a=0x50, .x=0x18, .y=0xba, .sp=0xc1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x88}, {.addr=0x3ea9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3eaa, .a=0x50, .x=0x88, .y=0xba, .sp=0xc2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x88}, {.addr=0x3ea9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3ea9, .value=0xce, .type=IO_READ},
        {.addr=0x3eaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xdc5e, .a=0x36, .x=0xd1, .y=0x95, .sp=0xac, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xed}, {.addr=0xdc5e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdc5f, .a=0x36, .x=0xed, .y=0x95, .sp=0xad, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xed}, {.addr=0xdc5e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdc5e, .value=0xce, .type=IO_READ},
        {.addr=0xdc5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xe457, .a=0x28, .x=0xea, .y=0xec, .sp=0xce, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x87}, {.addr=0xe457, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe458, .a=0x28, .x=0x87, .y=0xec, .sp=0xcf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x87}, {.addr=0xe457, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe457, .value=0xce, .type=IO_READ},
        {.addr=0xe458, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xa40b, .a=0x4a, .x=0xc1, .y=0x3c, .sp=0x1d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x2b}, {.addr=0xa40b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa40c, .a=0x4a, .x=0x2b, .y=0x3c, .sp=0x1e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x2b}, {.addr=0xa40b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa40b, .value=0xce, .type=IO_READ},
        {.addr=0xa40c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x8389, .a=0x8c, .x=0x95, .y=0xbe, .sp=0x14, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xde}, {.addr=0x8389, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x838a, .a=0x8c, .x=0xde, .y=0xbe, .sp=0x15, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xde}, {.addr=0x8389, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x8389, .value=0xce, .type=IO_READ},
        {.addr=0x838a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0115, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x1b52, .a=0xb1, .x=0xf8, .y=0x2f, .sp=0x6e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xa8}, {.addr=0x1b52, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1b53, .a=0xb1, .x=0xa8, .y=0x2f, .sp=0x6f, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xa8}, {.addr=0x1b52, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1b52, .value=0xce, .type=IO_READ},
        {.addr=0x1b53, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4a18, .a=0xd2, .x=0x70, .y=0x68, .sp=0x02, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x4b}, {.addr=0x4a18, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4a19, .a=0xd2, .x=0x4b, .y=0x68, .sp=0x03, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x4b}, {.addr=0x4a18, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4a18, .value=0xce, .type=IO_READ},
        {.addr=0x4a19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x2026, .a=0x80, .x=0x73, .y=0x8a, .sp=0x2a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x6b}, {.addr=0x2026, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2027, .a=0x80, .x=0x6b, .y=0x8a, .sp=0x2b, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x6b}, {.addr=0x2026, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2026, .value=0xce, .type=IO_READ},
        {.addr=0x2027, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xc7fb, .a=0x43, .x=0x06, .y=0xd2, .sp=0x6d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xa9}, {.addr=0xc7fb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc7fc, .a=0x43, .x=0xa9, .y=0xd2, .sp=0x6e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xa9}, {.addr=0xc7fb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc7fb, .value=0xce, .type=IO_READ},
        {.addr=0xc7fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xa602, .a=0x99, .x=0xc3, .y=0x62, .sp=0x84, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x67}, {.addr=0xa602, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa603, .a=0x99, .x=0x67, .y=0x62, .sp=0x85, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x67}, {.addr=0xa602, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa602, .value=0xce, .type=IO_READ},
        {.addr=0xa603, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xc27e, .a=0x23, .x=0x5b, .y=0xb3, .sp=0x7f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x74}, {.addr=0xc27e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc27f, .a=0x23, .x=0x74, .y=0xb3, .sp=0x80, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x74}, {.addr=0xc27e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc27e, .value=0xce, .type=IO_READ},
        {.addr=0xc27f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x9a74, .a=0x39, .x=0x0a, .y=0xf6, .sp=0x4d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xfb}, {.addr=0x9a74, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9a75, .a=0x39, .x=0xfb, .y=0xf6, .sp=0x4e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xfb}, {.addr=0x9a74, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9a74, .value=0xce, .type=IO_READ},
        {.addr=0x9a75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xa2e5, .a=0x57, .x=0xcd, .y=0x93, .sp=0xa7, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xf0}, {.addr=0xa2e5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa2e6, .a=0x57, .x=0xf0, .y=0x93, .sp=0xa8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xf0}, {.addr=0xa2e5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa2e5, .value=0xce, .type=IO_READ},
        {.addr=0xa2e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x72b0, .a=0x01, .x=0x22, .y=0xf8, .sp=0x0e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x1e}, {.addr=0x72b0, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x72b1, .a=0x01, .x=0x1e, .y=0xf8, .sp=0x0f, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x1e}, {.addr=0x72b0, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x72b0, .value=0xce, .type=IO_READ},
        {.addr=0x72b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xfa0d, .a=0x5f, .x=0xfc, .y=0x84, .sp=0x0c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x53}, {.addr=0xfa0d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfa0e, .a=0x5f, .x=0x53, .y=0x84, .sp=0x0d, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x53}, {.addr=0xfa0d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfa0d, .value=0xce, .type=IO_READ},
        {.addr=0xfa0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x3574, .a=0x8f, .x=0x2e, .y=0x07, .sp=0x1a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xd6}, {.addr=0x3574, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3575, .a=0x8f, .x=0xd6, .y=0x07, .sp=0x1b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xd6}, {.addr=0x3574, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3574, .value=0xce, .type=IO_READ},
        {.addr=0x3575, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x2af6, .a=0xf6, .x=0xe4, .y=0x52, .sp=0xad, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xfa}, {.addr=0x2af6, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2af7, .a=0xf6, .x=0xfa, .y=0x52, .sp=0xae, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xfa}, {.addr=0x2af6, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2af6, .value=0xce, .type=IO_READ},
        {.addr=0x2af7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x0ced, .a=0xac, .x=0x4b, .y=0xa9, .sp=0xd1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xce}, {.addr=0x0ced, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0cee, .a=0xac, .x=0xce, .y=0xa9, .sp=0xd2, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xce}, {.addr=0x0ced, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0ced, .value=0xce, .type=IO_READ},
        {.addr=0x0cee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x53cb, .a=0x0a, .x=0x3f, .y=0x29, .sp=0x7f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xfb}, {.addr=0x53cb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x53cc, .a=0x0a, .x=0xfb, .y=0x29, .sp=0x80, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xfb}, {.addr=0x53cb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x53cb, .value=0xce, .type=IO_READ},
        {.addr=0x53cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0180, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x9b94, .a=0xa6, .x=0x5d, .y=0x50, .sp=0x5f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x29}, {.addr=0x9b94, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9b95, .a=0xa6, .x=0x29, .y=0x50, .sp=0x60, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x29}, {.addr=0x9b94, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9b94, .value=0xce, .type=IO_READ},
        {.addr=0x9b95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0160, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xe41d, .a=0xf9, .x=0xb0, .y=0x74, .sp=0x2d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xd4}, {.addr=0xe41d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe41e, .a=0xf9, .x=0xd4, .y=0x74, .sp=0x2e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xd4}, {.addr=0xe41d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe41d, .value=0xce, .type=IO_READ},
        {.addr=0xe41e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xa863, .a=0x9c, .x=0x7b, .y=0x14, .sp=0x40, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xa0}, {.addr=0xa863, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa864, .a=0x9c, .x=0xa0, .y=0x14, .sp=0x41, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xa0}, {.addr=0xa863, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa863, .value=0xce, .type=IO_READ},
        {.addr=0xa864, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xb430, .a=0xd2, .x=0xbb, .y=0xed, .sp=0x07, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x46}, {.addr=0xb430, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb431, .a=0xd2, .x=0x46, .y=0xed, .sp=0x08, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x46}, {.addr=0xb430, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb430, .value=0xce, .type=IO_READ},
        {.addr=0xb431, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xdc79, .a=0x87, .x=0x51, .y=0x61, .sp=0x46, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x9e}, {.addr=0xdc79, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdc7a, .a=0x87, .x=0x9e, .y=0x61, .sp=0x47, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x9e}, {.addr=0xdc79, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdc79, .value=0xce, .type=IO_READ},
        {.addr=0xdc7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x66bd, .a=0x6c, .x=0x84, .y=0xd4, .sp=0x97, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xac}, {.addr=0x66bd, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x66be, .a=0x6c, .x=0xac, .y=0xd4, .sp=0x98, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xac}, {.addr=0x66bd, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x66bd, .value=0xce, .type=IO_READ},
        {.addr=0x66be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xa965, .a=0x79, .x=0x9f, .y=0xff, .sp=0x06, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x67}, {.addr=0xa965, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa966, .a=0x79, .x=0x67, .y=0xff, .sp=0x07, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x67}, {.addr=0xa965, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa965, .value=0xce, .type=IO_READ},
        {.addr=0xa966, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x6e1e, .a=0xe9, .x=0x13, .y=0xe8, .sp=0x40, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x12}, {.addr=0x6e1e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6e1f, .a=0xe9, .x=0x12, .y=0xe8, .sp=0x41, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x12}, {.addr=0x6e1e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6e1e, .value=0xce, .type=IO_READ},
        {.addr=0x6e1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x71d5, .a=0x8e, .x=0xfe, .y=0x1d, .sp=0x78, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x17}, {.addr=0x71d5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x71d6, .a=0x8e, .x=0x17, .y=0x1d, .sp=0x79, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x17}, {.addr=0x71d5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x71d5, .value=0xce, .type=IO_READ},
        {.addr=0x71d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3b9c, .a=0x89, .x=0x70, .y=0x65, .sp=0x72, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x5c}, {.addr=0x3b9c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3b9d, .a=0x89, .x=0x5c, .y=0x65, .sp=0x73, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x5c}, {.addr=0x3b9c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3b9c, .value=0xce, .type=IO_READ},
        {.addr=0x3b9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0173, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xc05d, .a=0xc9, .x=0xc2, .y=0xd3, .sp=0x8e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xfe}, {.addr=0xc05d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc05e, .a=0xc9, .x=0xfe, .y=0xd3, .sp=0x8f, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xfe}, {.addr=0xc05d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc05d, .value=0xce, .type=IO_READ},
        {.addr=0xc05e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xed28, .a=0x55, .x=0x12, .y=0xa5, .sp=0x8d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x54}, {.addr=0xed28, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xed29, .a=0x55, .x=0x54, .y=0xa5, .sp=0x8e, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x54}, {.addr=0xed28, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xed28, .value=0xce, .type=IO_READ},
        {.addr=0xed29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xaad2, .a=0xe5, .x=0x09, .y=0xc2, .sp=0xa8, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xba}, {.addr=0xaad2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xaad3, .a=0xe5, .x=0xba, .y=0xc2, .sp=0xa9, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xba}, {.addr=0xaad2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xaad2, .value=0xce, .type=IO_READ},
        {.addr=0xaad3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x6195, .a=0xef, .x=0xcc, .y=0xc4, .sp=0x03, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xf4}, {.addr=0x6195, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6196, .a=0xef, .x=0xf4, .y=0xc4, .sp=0x04, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xf4}, {.addr=0x6195, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6195, .value=0xce, .type=IO_READ},
        {.addr=0x6196, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xc701, .a=0x50, .x=0xe5, .y=0x06, .sp=0x11, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x86}, {.addr=0xc701, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc702, .a=0x50, .x=0x86, .y=0x06, .sp=0x12, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x86}, {.addr=0xc701, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc701, .value=0xce, .type=IO_READ},
        {.addr=0xc702, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x4913, .a=0xae, .x=0x54, .y=0x50, .sp=0x6a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x40}, {.addr=0x4913, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4914, .a=0xae, .x=0x40, .y=0x50, .sp=0x6b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x40}, {.addr=0x4913, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4913, .value=0xce, .type=IO_READ},
        {.addr=0x4914, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x9548, .a=0x34, .x=0x89, .y=0x32, .sp=0x58, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x58}, {.addr=0x9548, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9549, .a=0x34, .x=0x58, .y=0x32, .sp=0x59, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x58}, {.addr=0x9548, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9548, .value=0xce, .type=IO_READ},
        {.addr=0x9549, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xee5c, .a=0xb3, .x=0x86, .y=0x5b, .sp=0x2e, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xce}, {.addr=0xee5c, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xee5d, .a=0xb3, .x=0xce, .y=0x5b, .sp=0x2f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xce}, {.addr=0xee5c, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xee5c, .value=0xce, .type=IO_READ},
        {.addr=0xee5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012f, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x4a85, .a=0x77, .x=0x33, .y=0x5d, .sp=0xd1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xf8}, {.addr=0x4a85, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x4a86, .a=0x77, .x=0xf8, .y=0x5d, .sp=0xd2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xf8}, {.addr=0x4a85, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x4a85, .value=0xce, .type=IO_READ},
        {.addr=0x4a86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x7f2e, .a=0x84, .x=0x8a, .y=0x77, .sp=0x00, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xbe}, {.addr=0x7f2e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x7f2f, .a=0x84, .x=0xbe, .y=0x77, .sp=0x01, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xbe}, {.addr=0x7f2e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x7f2e, .value=0xce, .type=IO_READ},
        {.addr=0x7f2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x801f, .a=0xdb, .x=0xd6, .y=0xac, .sp=0xc0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xf6}, {.addr=0x801f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x8020, .a=0xdb, .x=0xf6, .y=0xac, .sp=0xc1, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xf6}, {.addr=0x801f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x801f, .value=0xce, .type=IO_READ},
        {.addr=0x8020, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c1, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_CE, _CE_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xb036, .a=0xb1, .x=0x40, .y=0xd5, .sp=0x60, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xbf}, {.addr=0xb036, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xb037, .a=0xb1, .x=0xbf, .y=0xd5, .sp=0x61, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xbf}, {.addr=0xb036, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xb036, .value=0xce, .type=IO_READ},
        {.addr=0xb037, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0161, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("CE 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
