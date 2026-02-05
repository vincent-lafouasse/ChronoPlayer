#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_C8, _C8_0000) {
    const struct CPU_State initial_cpu = {.pc=0xd7cf, .a=0x31, .x=0x6f, .y=0x54, .sp=0xb3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd7cf, .value=0xc8}, {.addr=0xd7d0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd7d1, .a=0x31, .x=0x6f, .y=0x54, .sp=0xb3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd7cf, .value=0xc8}, {.addr=0xd7d0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd7cf, .value=0xc8, .type=IO_READ},
        {.addr=0xd7d0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2450, .a=0x25, .x=0x3c, .y=0x18, .sp=0xa7, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x2450, .value=0xc8}, {.addr=0x2451, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2452, .a=0x25, .x=0x3c, .y=0x18, .sp=0xa7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2450, .value=0xc8}, {.addr=0x2451, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2450, .value=0xc8, .type=IO_READ},
        {.addr=0x2451, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0002) {
    const struct CPU_State initial_cpu = {.pc=0xef82, .a=0xcf, .x=0xd0, .y=0x5b, .sp=0x82, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xef82, .value=0xc8}, {.addr=0xef83, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xef84, .a=0xcf, .x=0xd0, .y=0x5b, .sp=0x82, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xef82, .value=0xc8}, {.addr=0xef83, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xef82, .value=0xc8, .type=IO_READ},
        {.addr=0xef83, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0003) {
    const struct CPU_State initial_cpu = {.pc=0x681b, .a=0xb0, .x=0xf5, .y=0x43, .sp=0x17, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x681b, .value=0xc8}, {.addr=0x681c, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x681d, .a=0xb0, .x=0xf5, .y=0x43, .sp=0x17, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x681b, .value=0xc8}, {.addr=0x681c, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x681b, .value=0xc8, .type=IO_READ},
        {.addr=0x681c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0004) {
    const struct CPU_State initial_cpu = {.pc=0x4124, .a=0x22, .x=0xf0, .y=0xf5, .sp=0xea, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4124, .value=0xc8}, {.addr=0x4125, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4126, .a=0x22, .x=0xf0, .y=0xf5, .sp=0xea, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4124, .value=0xc8}, {.addr=0x4125, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4124, .value=0xc8, .type=IO_READ},
        {.addr=0x4125, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0005) {
    const struct CPU_State initial_cpu = {.pc=0x3d0a, .a=0x83, .x=0x0c, .y=0x4d, .sp=0x4f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3d0a, .value=0xc8}, {.addr=0x3d0b, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x3d0c, .a=0x83, .x=0x0c, .y=0x4d, .sp=0x4f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3d0a, .value=0xc8}, {.addr=0x3d0b, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x3d0a, .value=0xc8, .type=IO_READ},
        {.addr=0x3d0b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1e29, .a=0x16, .x=0x24, .y=0xa5, .sp=0x87, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x1e29, .value=0xc8}, {.addr=0x1e2a, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x1e2b, .a=0x16, .x=0x24, .y=0xa5, .sp=0x87, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1e29, .value=0xc8}, {.addr=0x1e2a, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x1e29, .value=0xc8, .type=IO_READ},
        {.addr=0x1e2a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7d41, .a=0x08, .x=0x86, .y=0x94, .sp=0x19, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x7d41, .value=0xc8}, {.addr=0x7d42, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7d43, .a=0x08, .x=0x86, .y=0x94, .sp=0x19, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7d41, .value=0xc8}, {.addr=0x7d42, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7d41, .value=0xc8, .type=IO_READ},
        {.addr=0x7d42, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0008) {
    const struct CPU_State initial_cpu = {.pc=0xb1d0, .a=0x4d, .x=0xb6, .y=0x6f, .sp=0xc7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d0, .value=0xc8}, {.addr=0xb1d1, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xb1d2, .a=0x4d, .x=0xb6, .y=0x6f, .sp=0xc7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb1d0, .value=0xc8}, {.addr=0xb1d1, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xb1d0, .value=0xc8, .type=IO_READ},
        {.addr=0xb1d1, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0009) {
    const struct CPU_State initial_cpu = {.pc=0x6fb6, .a=0x81, .x=0x45, .y=0x6a, .sp=0xc7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb6, .value=0xc8}, {.addr=0x6fb7, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x6fb8, .a=0x81, .x=0x45, .y=0x6a, .sp=0xc7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6fb6, .value=0xc8}, {.addr=0x6fb7, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x6fb6, .value=0xc8, .type=IO_READ},
        {.addr=0x6fb7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_000A) {
    const struct CPU_State initial_cpu = {.pc=0x5b55, .a=0x97, .x=0x60, .y=0x5c, .sp=0xe5, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5b55, .value=0xc8}, {.addr=0x5b56, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x5b57, .a=0x97, .x=0x60, .y=0x5c, .sp=0xe5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5b55, .value=0xc8}, {.addr=0x5b56, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x5b55, .value=0xc8, .type=IO_READ},
        {.addr=0x5b56, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd9f2, .a=0x3b, .x=0x7f, .y=0xb0, .sp=0x38, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f2, .value=0xc8}, {.addr=0xd9f3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd9f4, .a=0x3b, .x=0x7f, .y=0xb0, .sp=0x38, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd9f2, .value=0xc8}, {.addr=0xd9f3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd9f2, .value=0xc8, .type=IO_READ},
        {.addr=0xd9f3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_000C) {
    const struct CPU_State initial_cpu = {.pc=0xe4b5, .a=0x9f, .x=0x2e, .y=0x7b, .sp=0x3a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe4b5, .value=0xc8}, {.addr=0xe4b6, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xe4b7, .a=0x9f, .x=0x2e, .y=0x7b, .sp=0x3a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe4b5, .value=0xc8}, {.addr=0xe4b6, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xe4b5, .value=0xc8, .type=IO_READ},
        {.addr=0xe4b6, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_000D) {
    const struct CPU_State initial_cpu = {.pc=0x9e56, .a=0x31, .x=0xe6, .y=0x7b, .sp=0xd5, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9e56, .value=0xc8}, {.addr=0x9e57, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x9e58, .a=0x31, .x=0xe6, .y=0x7b, .sp=0xd5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9e56, .value=0xc8}, {.addr=0x9e57, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x9e56, .value=0xc8, .type=IO_READ},
        {.addr=0x9e57, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_000E) {
    const struct CPU_State initial_cpu = {.pc=0xe3b2, .a=0x60, .x=0x93, .y=0xda, .sp=0xc4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe3b2, .value=0xc8}, {.addr=0xe3b3, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xe3b4, .a=0x60, .x=0x93, .y=0xda, .sp=0xc4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe3b2, .value=0xc8}, {.addr=0xe3b3, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xe3b2, .value=0xc8, .type=IO_READ},
        {.addr=0xe3b3, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_000F) {
    const struct CPU_State initial_cpu = {.pc=0x9f91, .a=0xa2, .x=0xc9, .y=0x24, .sp=0x74, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9f91, .value=0xc8}, {.addr=0x9f92, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x9f93, .a=0xa2, .x=0xc9, .y=0x24, .sp=0x74, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9f91, .value=0xc8}, {.addr=0x9f92, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x9f91, .value=0xc8, .type=IO_READ},
        {.addr=0x9f92, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0010) {
    const struct CPU_State initial_cpu = {.pc=0x8bbe, .a=0xa5, .x=0x9c, .y=0xa0, .sp=0x56, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8bbe, .value=0xc8}, {.addr=0x8bbf, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x8bc0, .a=0xa5, .x=0x9c, .y=0xa0, .sp=0x56, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8bbe, .value=0xc8}, {.addr=0x8bbf, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x8bbe, .value=0xc8, .type=IO_READ},
        {.addr=0x8bbf, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0011) {
    const struct CPU_State initial_cpu = {.pc=0x2eab, .a=0x87, .x=0x7f, .y=0x1b, .sp=0xe6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2eab, .value=0xc8}, {.addr=0x2eac, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2ead, .a=0x87, .x=0x7f, .y=0x1b, .sp=0xe6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2eab, .value=0xc8}, {.addr=0x2eac, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x2eab, .value=0xc8, .type=IO_READ},
        {.addr=0x2eac, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0012) {
    const struct CPU_State initial_cpu = {.pc=0xcc14, .a=0x59, .x=0x29, .y=0x8a, .sp=0x41, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xcc14, .value=0xc8}, {.addr=0xcc15, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xcc16, .a=0x59, .x=0x29, .y=0x8a, .sp=0x41, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xcc14, .value=0xc8}, {.addr=0xcc15, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xcc14, .value=0xc8, .type=IO_READ},
        {.addr=0xcc15, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe213, .a=0x8a, .x=0x05, .y=0x13, .sp=0xe5, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe213, .value=0xc8}, {.addr=0xe214, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe215, .a=0x8a, .x=0x05, .y=0x13, .sp=0xe5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe213, .value=0xc8}, {.addr=0xe214, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe213, .value=0xc8, .type=IO_READ},
        {.addr=0xe214, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0014) {
    const struct CPU_State initial_cpu = {.pc=0x7123, .a=0xa5, .x=0x13, .y=0x76, .sp=0x00, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7123, .value=0xc8}, {.addr=0x7124, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7125, .a=0xa5, .x=0x13, .y=0x76, .sp=0x00, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7123, .value=0xc8}, {.addr=0x7124, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7123, .value=0xc8, .type=IO_READ},
        {.addr=0x7124, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0015) {
    const struct CPU_State initial_cpu = {.pc=0xff8b, .a=0x55, .x=0xe3, .y=0x59, .sp=0x5a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xff8b, .value=0xc8}, {.addr=0xff8c, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xff8d, .a=0x55, .x=0xe3, .y=0x59, .sp=0x5a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xff8b, .value=0xc8}, {.addr=0xff8c, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xff8b, .value=0xc8, .type=IO_READ},
        {.addr=0xff8c, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0016) {
    const struct CPU_State initial_cpu = {.pc=0x0afb, .a=0x7d, .x=0xf2, .y=0x3b, .sp=0x91, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0afb, .value=0xc8}, {.addr=0x0afc, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x0afd, .a=0x7d, .x=0xf2, .y=0x3b, .sp=0x91, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0afb, .value=0xc8}, {.addr=0x0afc, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x0afb, .value=0xc8, .type=IO_READ},
        {.addr=0x0afc, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0017) {
    const struct CPU_State initial_cpu = {.pc=0xc5b4, .a=0xbd, .x=0x85, .y=0xdf, .sp=0xbd, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b4, .value=0xc8}, {.addr=0xc5b5, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xc5b6, .a=0xbd, .x=0x85, .y=0xdf, .sp=0xbd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc5b4, .value=0xc8}, {.addr=0xc5b5, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xc5b4, .value=0xc8, .type=IO_READ},
        {.addr=0xc5b5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0018) {
    const struct CPU_State initial_cpu = {.pc=0x4661, .a=0x34, .x=0x8a, .y=0x1a, .sp=0x5a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4661, .value=0xc8}, {.addr=0x4662, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x4663, .a=0x34, .x=0x8a, .y=0x1a, .sp=0x5a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4661, .value=0xc8}, {.addr=0x4662, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x4661, .value=0xc8, .type=IO_READ},
        {.addr=0x4662, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0019) {
    const struct CPU_State initial_cpu = {.pc=0x0349, .a=0xa2, .x=0x3f, .y=0xf5, .sp=0x32, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0349, .value=0xc8}, {.addr=0x034a, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x034b, .a=0xa2, .x=0x3f, .y=0xf5, .sp=0x32, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0349, .value=0xc8}, {.addr=0x034a, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x0349, .value=0xc8, .type=IO_READ},
        {.addr=0x034a, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_001A) {
    const struct CPU_State initial_cpu = {.pc=0x4366, .a=0x04, .x=0x81, .y=0xfc, .sp=0xa5, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4366, .value=0xc8}, {.addr=0x4367, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x4368, .a=0x04, .x=0x81, .y=0xfc, .sp=0xa5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x4366, .value=0xc8}, {.addr=0x4367, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x4366, .value=0xc8, .type=IO_READ},
        {.addr=0x4367, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_001B) {
    const struct CPU_State initial_cpu = {.pc=0xe7fa, .a=0xa3, .x=0x40, .y=0xf4, .sp=0xd8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe7fa, .value=0xc8}, {.addr=0xe7fb, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xe7fc, .a=0xa3, .x=0x40, .y=0xf4, .sp=0xd8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xe7fa, .value=0xc8}, {.addr=0xe7fb, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xe7fa, .value=0xc8, .type=IO_READ},
        {.addr=0xe7fb, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_001C) {
    const struct CPU_State initial_cpu = {.pc=0xd285, .a=0xd7, .x=0xf2, .y=0x1e, .sp=0x78, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd285, .value=0xc8}, {.addr=0xd286, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xd287, .a=0xd7, .x=0xf2, .y=0x1e, .sp=0x78, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd285, .value=0xc8}, {.addr=0xd286, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xd285, .value=0xc8, .type=IO_READ},
        {.addr=0xd286, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4365, .a=0x36, .x=0x19, .y=0x80, .sp=0xfc, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4365, .value=0xc8}, {.addr=0x4366, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x4367, .a=0x36, .x=0x19, .y=0x80, .sp=0xfc, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4365, .value=0xc8}, {.addr=0x4366, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x4365, .value=0xc8, .type=IO_READ},
        {.addr=0x4366, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_001E) {
    const struct CPU_State initial_cpu = {.pc=0xdba4, .a=0x63, .x=0xb1, .y=0x7e, .sp=0x67, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xdba4, .value=0xc8}, {.addr=0xdba5, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xdba6, .a=0x63, .x=0xb1, .y=0x7e, .sp=0x67, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xdba4, .value=0xc8}, {.addr=0xdba5, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xdba4, .value=0xc8, .type=IO_READ},
        {.addr=0xdba5, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_001F) {
    const struct CPU_State initial_cpu = {.pc=0x83c3, .a=0xac, .x=0x5a, .y=0x3a, .sp=0xd2, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x83c3, .value=0xc8}, {.addr=0x83c4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x83c5, .a=0xac, .x=0x5a, .y=0x3a, .sp=0xd2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x83c3, .value=0xc8}, {.addr=0x83c4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x83c3, .value=0xc8, .type=IO_READ},
        {.addr=0x83c4, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0020) {
    const struct CPU_State initial_cpu = {.pc=0x0658, .a=0x7e, .x=0x30, .y=0x0d, .sp=0x1f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0658, .value=0xc8}, {.addr=0x0659, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x065a, .a=0x7e, .x=0x30, .y=0x0d, .sp=0x1f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0658, .value=0xc8}, {.addr=0x0659, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x0658, .value=0xc8, .type=IO_READ},
        {.addr=0x0659, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0021) {
    const struct CPU_State initial_cpu = {.pc=0xbab2, .a=0x68, .x=0x12, .y=0x97, .sp=0x86, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbab2, .value=0xc8}, {.addr=0xbab3, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xbab4, .a=0x68, .x=0x12, .y=0x97, .sp=0x86, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbab2, .value=0xc8}, {.addr=0xbab3, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xbab2, .value=0xc8, .type=IO_READ},
        {.addr=0xbab3, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0022) {
    const struct CPU_State initial_cpu = {.pc=0x17b9, .a=0x73, .x=0x85, .y=0xeb, .sp=0xf2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x17b9, .value=0xc8}, {.addr=0x17ba, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x17bb, .a=0x73, .x=0x85, .y=0xeb, .sp=0xf2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x17b9, .value=0xc8}, {.addr=0x17ba, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x17b9, .value=0xc8, .type=IO_READ},
        {.addr=0x17ba, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0023) {
    const struct CPU_State initial_cpu = {.pc=0x7d7e, .a=0x7d, .x=0x98, .y=0x79, .sp=0x15, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7d7e, .value=0xc8}, {.addr=0x7d7f, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x7d80, .a=0x7d, .x=0x98, .y=0x79, .sp=0x15, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7d7e, .value=0xc8}, {.addr=0x7d7f, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x7d7e, .value=0xc8, .type=IO_READ},
        {.addr=0x7d7f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0024) {
    const struct CPU_State initial_cpu = {.pc=0xeead, .a=0x84, .x=0xa2, .y=0x5d, .sp=0x21, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xeead, .value=0xc8}, {.addr=0xeeae, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xeeaf, .a=0x84, .x=0xa2, .y=0x5d, .sp=0x21, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xeead, .value=0xc8}, {.addr=0xeeae, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xeead, .value=0xc8, .type=IO_READ},
        {.addr=0xeeae, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0025) {
    const struct CPU_State initial_cpu = {.pc=0xc9d7, .a=0xd0, .x=0x87, .y=0x45, .sp=0xb6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc9d7, .value=0xc8}, {.addr=0xc9d8, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xc9d9, .a=0xd0, .x=0x87, .y=0x45, .sp=0xb6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc9d7, .value=0xc8}, {.addr=0xc9d8, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xc9d7, .value=0xc8, .type=IO_READ},
        {.addr=0xc9d8, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0026) {
    const struct CPU_State initial_cpu = {.pc=0x21a6, .a=0x36, .x=0x3a, .y=0x3a, .sp=0x7c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x21a6, .value=0xc8}, {.addr=0x21a7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x21a8, .a=0x36, .x=0x3a, .y=0x3a, .sp=0x7c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x21a6, .value=0xc8}, {.addr=0x21a7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x21a6, .value=0xc8, .type=IO_READ},
        {.addr=0x21a7, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0027) {
    const struct CPU_State initial_cpu = {.pc=0x37f3, .a=0x27, .x=0xed, .y=0x4b, .sp=0x46, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x37f3, .value=0xc8}, {.addr=0x37f4, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x37f5, .a=0x27, .x=0xed, .y=0x4b, .sp=0x46, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x37f3, .value=0xc8}, {.addr=0x37f4, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x37f3, .value=0xc8, .type=IO_READ},
        {.addr=0x37f4, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0028) {
    const struct CPU_State initial_cpu = {.pc=0x2caf, .a=0x40, .x=0x5c, .y=0x06, .sp=0xe8, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x2caf, .value=0xc8}, {.addr=0x2cb0, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x2cb1, .a=0x40, .x=0x5c, .y=0x06, .sp=0xe8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2caf, .value=0xc8}, {.addr=0x2cb0, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x2caf, .value=0xc8, .type=IO_READ},
        {.addr=0x2cb0, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0029) {
    const struct CPU_State initial_cpu = {.pc=0x810f, .a=0xc3, .x=0x1a, .y=0x7e, .sp=0xe6, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x810f, .value=0xc8}, {.addr=0x8110, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x8111, .a=0xc3, .x=0x1a, .y=0x7e, .sp=0xe6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x810f, .value=0xc8}, {.addr=0x8110, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x810f, .value=0xc8, .type=IO_READ},
        {.addr=0x8110, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_002A) {
    const struct CPU_State initial_cpu = {.pc=0x8d3c, .a=0x43, .x=0x3f, .y=0xe1, .sp=0xc8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3c, .value=0xc8}, {.addr=0x8d3d, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x8d3e, .a=0x43, .x=0x3f, .y=0xe1, .sp=0xc8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8d3c, .value=0xc8}, {.addr=0x8d3d, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x8d3c, .value=0xc8, .type=IO_READ},
        {.addr=0x8d3d, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_002B) {
    const struct CPU_State initial_cpu = {.pc=0x5a55, .a=0x76, .x=0x8d, .y=0xd8, .sp=0x4e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5a55, .value=0xc8}, {.addr=0x5a56, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5a57, .a=0x76, .x=0x8d, .y=0xd8, .sp=0x4e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5a55, .value=0xc8}, {.addr=0x5a56, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5a55, .value=0xc8, .type=IO_READ},
        {.addr=0x5a56, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_002C) {
    const struct CPU_State initial_cpu = {.pc=0x14b2, .a=0xf3, .x=0x6c, .y=0x6b, .sp=0xd2, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x14b2, .value=0xc8}, {.addr=0x14b3, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x14b4, .a=0xf3, .x=0x6c, .y=0x6b, .sp=0xd2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x14b2, .value=0xc8}, {.addr=0x14b3, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x14b2, .value=0xc8, .type=IO_READ},
        {.addr=0x14b3, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_002D) {
    const struct CPU_State initial_cpu = {.pc=0xe7f7, .a=0x6f, .x=0x60, .y=0x84, .sp=0xec, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f7, .value=0xc8}, {.addr=0xe7f8, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xe7f9, .a=0x6f, .x=0x60, .y=0x84, .sp=0xec, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe7f7, .value=0xc8}, {.addr=0xe7f8, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xe7f7, .value=0xc8, .type=IO_READ},
        {.addr=0xe7f8, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_002E) {
    const struct CPU_State initial_cpu = {.pc=0xa5b4, .a=0x43, .x=0x3d, .y=0x7f, .sp=0x50, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b4, .value=0xc8}, {.addr=0xa5b5, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xa5b6, .a=0x43, .x=0x3d, .y=0x7f, .sp=0x50, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa5b4, .value=0xc8}, {.addr=0xa5b5, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xa5b4, .value=0xc8, .type=IO_READ},
        {.addr=0xa5b5, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_002F) {
    const struct CPU_State initial_cpu = {.pc=0xcbb3, .a=0x2c, .x=0x46, .y=0xed, .sp=0x2f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xcbb3, .value=0xc8}, {.addr=0xcbb4, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xcbb5, .a=0x2c, .x=0x46, .y=0xed, .sp=0x2f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xcbb3, .value=0xc8}, {.addr=0xcbb4, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xcbb3, .value=0xc8, .type=IO_READ},
        {.addr=0xcbb4, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0030) {
    const struct CPU_State initial_cpu = {.pc=0x477c, .a=0x0a, .x=0x7f, .y=0x65, .sp=0x2e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x477c, .value=0xc8}, {.addr=0x477d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x477e, .a=0x0a, .x=0x7f, .y=0x65, .sp=0x2e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x477c, .value=0xc8}, {.addr=0x477d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x477c, .value=0xc8, .type=IO_READ},
        {.addr=0x477d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0031) {
    const struct CPU_State initial_cpu = {.pc=0xfd55, .a=0xfd, .x=0x33, .y=0x4e, .sp=0xc2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xfd55, .value=0xc8}, {.addr=0xfd56, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xfd57, .a=0xfd, .x=0x33, .y=0x4e, .sp=0xc2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xfd55, .value=0xc8}, {.addr=0xfd56, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xfd55, .value=0xc8, .type=IO_READ},
        {.addr=0xfd56, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0032) {
    const struct CPU_State initial_cpu = {.pc=0xed0b, .a=0xfb, .x=0x99, .y=0x62, .sp=0xc8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xed0b, .value=0xc8}, {.addr=0xed0c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xed0d, .a=0xfb, .x=0x99, .y=0x62, .sp=0xc8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xed0b, .value=0xc8}, {.addr=0xed0c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xed0b, .value=0xc8, .type=IO_READ},
        {.addr=0xed0c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0033) {
    const struct CPU_State initial_cpu = {.pc=0x771c, .a=0x3a, .x=0x1e, .y=0xe2, .sp=0x12, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x771c, .value=0xc8}, {.addr=0x771d, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x771e, .a=0x3a, .x=0x1e, .y=0xe2, .sp=0x12, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x771c, .value=0xc8}, {.addr=0x771d, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x771c, .value=0xc8, .type=IO_READ},
        {.addr=0x771d, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0034) {
    const struct CPU_State initial_cpu = {.pc=0xd225, .a=0x22, .x=0xaf, .y=0x4b, .sp=0x77, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd225, .value=0xc8}, {.addr=0xd226, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xd227, .a=0x22, .x=0xaf, .y=0x4b, .sp=0x77, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd225, .value=0xc8}, {.addr=0xd226, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xd225, .value=0xc8, .type=IO_READ},
        {.addr=0xd226, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0035) {
    const struct CPU_State initial_cpu = {.pc=0x2c68, .a=0x8f, .x=0xec, .y=0x51, .sp=0xcb, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c68, .value=0xc8}, {.addr=0x2c69, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2c6a, .a=0x8f, .x=0xec, .y=0x51, .sp=0xcb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2c68, .value=0xc8}, {.addr=0x2c69, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2c68, .value=0xc8, .type=IO_READ},
        {.addr=0x2c69, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0036) {
    const struct CPU_State initial_cpu = {.pc=0x2201, .a=0x25, .x=0xfc, .y=0x69, .sp=0x14, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x2201, .value=0xc8}, {.addr=0x2202, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x2203, .a=0x25, .x=0xfc, .y=0x69, .sp=0x14, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2201, .value=0xc8}, {.addr=0x2202, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x2201, .value=0xc8, .type=IO_READ},
        {.addr=0x2202, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0037) {
    const struct CPU_State initial_cpu = {.pc=0xbb9d, .a=0xbb, .x=0xe7, .y=0x6c, .sp=0xc6, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9d, .value=0xc8}, {.addr=0xbb9e, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xbb9f, .a=0xbb, .x=0xe7, .y=0x6c, .sp=0xc6, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbb9d, .value=0xc8}, {.addr=0xbb9e, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xbb9d, .value=0xc8, .type=IO_READ},
        {.addr=0xbb9e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0038) {
    const struct CPU_State initial_cpu = {.pc=0x679b, .a=0x65, .x=0x97, .y=0x63, .sp=0x70, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x679b, .value=0xc8}, {.addr=0x679c, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x679d, .a=0x65, .x=0x97, .y=0x63, .sp=0x70, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x679b, .value=0xc8}, {.addr=0x679c, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x679b, .value=0xc8, .type=IO_READ},
        {.addr=0x679c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0039) {
    const struct CPU_State initial_cpu = {.pc=0x4e36, .a=0x3a, .x=0x1e, .y=0x15, .sp=0x2c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x4e36, .value=0xc8}, {.addr=0x4e37, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x4e38, .a=0x3a, .x=0x1e, .y=0x15, .sp=0x2c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4e36, .value=0xc8}, {.addr=0x4e37, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4e36, .value=0xc8, .type=IO_READ},
        {.addr=0x4e37, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_003A) {
    const struct CPU_State initial_cpu = {.pc=0x586d, .a=0x2e, .x=0xdc, .y=0x00, .sp=0x36, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x586d, .value=0xc8}, {.addr=0x586e, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x586f, .a=0x2e, .x=0xdc, .y=0x00, .sp=0x36, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x586d, .value=0xc8}, {.addr=0x586e, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x586d, .value=0xc8, .type=IO_READ},
        {.addr=0x586e, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_003B) {
    const struct CPU_State initial_cpu = {.pc=0x1404, .a=0xeb, .x=0x28, .y=0xbc, .sp=0x2c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x1404, .value=0xc8}, {.addr=0x1405, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x1406, .a=0xeb, .x=0x28, .y=0xbc, .sp=0x2c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1404, .value=0xc8}, {.addr=0x1405, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x1404, .value=0xc8, .type=IO_READ},
        {.addr=0x1405, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_003C) {
    const struct CPU_State initial_cpu = {.pc=0x0a0e, .a=0xd0, .x=0xbd, .y=0x16, .sp=0xd8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0a0e, .value=0xc8}, {.addr=0x0a0f, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x0a10, .a=0xd0, .x=0xbd, .y=0x16, .sp=0xd8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0a0e, .value=0xc8}, {.addr=0x0a0f, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x0a0e, .value=0xc8, .type=IO_READ},
        {.addr=0x0a0f, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_003D) {
    const struct CPU_State initial_cpu = {.pc=0x9f7c, .a=0x70, .x=0x23, .y=0x9b, .sp=0xdc, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f7c, .value=0xc8}, {.addr=0x9f7d, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x9f7e, .a=0x70, .x=0x23, .y=0x9b, .sp=0xdc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9f7c, .value=0xc8}, {.addr=0x9f7d, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x9f7c, .value=0xc8, .type=IO_READ},
        {.addr=0x9f7d, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_003E) {
    const struct CPU_State initial_cpu = {.pc=0x9c88, .a=0xbb, .x=0x1d, .y=0xdd, .sp=0x6f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9c88, .value=0xc8}, {.addr=0x9c89, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9c8a, .a=0xbb, .x=0x1d, .y=0xdd, .sp=0x6f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x9c88, .value=0xc8}, {.addr=0x9c89, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9c88, .value=0xc8, .type=IO_READ},
        {.addr=0x9c89, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_003F) {
    const struct CPU_State initial_cpu = {.pc=0x7076, .a=0xaa, .x=0x3c, .y=0xa9, .sp=0x59, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x7076, .value=0xc8}, {.addr=0x7077, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7078, .a=0xaa, .x=0x3c, .y=0xa9, .sp=0x59, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7076, .value=0xc8}, {.addr=0x7077, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7076, .value=0xc8, .type=IO_READ},
        {.addr=0x7077, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0040) {
    const struct CPU_State initial_cpu = {.pc=0xe12f, .a=0xb8, .x=0xfc, .y=0x28, .sp=0x2e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xe12f, .value=0xc8}, {.addr=0xe130, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe131, .a=0xb8, .x=0xfc, .y=0x28, .sp=0x2e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe12f, .value=0xc8}, {.addr=0xe130, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe12f, .value=0xc8, .type=IO_READ},
        {.addr=0xe130, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0041) {
    const struct CPU_State initial_cpu = {.pc=0xb068, .a=0x97, .x=0xd7, .y=0xb0, .sp=0xc3, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb068, .value=0xc8}, {.addr=0xb069, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb06a, .a=0x97, .x=0xd7, .y=0xb0, .sp=0xc3, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb068, .value=0xc8}, {.addr=0xb069, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb068, .value=0xc8, .type=IO_READ},
        {.addr=0xb069, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0042) {
    const struct CPU_State initial_cpu = {.pc=0xd285, .a=0x07, .x=0xae, .y=0xdf, .sp=0x59, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd285, .value=0xc8}, {.addr=0xd286, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xd287, .a=0x07, .x=0xae, .y=0xdf, .sp=0x59, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd285, .value=0xc8}, {.addr=0xd286, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xd285, .value=0xc8, .type=IO_READ},
        {.addr=0xd286, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0043) {
    const struct CPU_State initial_cpu = {.pc=0x17cc, .a=0x53, .x=0x8a, .y=0xd0, .sp=0xca, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x17cc, .value=0xc8}, {.addr=0x17cd, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x17ce, .a=0x53, .x=0x8a, .y=0xd0, .sp=0xca, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x17cc, .value=0xc8}, {.addr=0x17cd, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x17cc, .value=0xc8, .type=IO_READ},
        {.addr=0x17cd, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0044) {
    const struct CPU_State initial_cpu = {.pc=0x2e97, .a=0xfd, .x=0xdb, .y=0xab, .sp=0x51, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2e97, .value=0xc8}, {.addr=0x2e98, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x2e99, .a=0xfd, .x=0xdb, .y=0xab, .sp=0x51, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2e97, .value=0xc8}, {.addr=0x2e98, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x2e97, .value=0xc8, .type=IO_READ},
        {.addr=0x2e98, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0045) {
    const struct CPU_State initial_cpu = {.pc=0x2bfc, .a=0xeb, .x=0x25, .y=0xb3, .sp=0x7c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2bfc, .value=0xc8}, {.addr=0x2bfd, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x2bfe, .a=0xeb, .x=0x25, .y=0xb3, .sp=0x7c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2bfc, .value=0xc8}, {.addr=0x2bfd, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2bfc, .value=0xc8, .type=IO_READ},
        {.addr=0x2bfd, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0046) {
    const struct CPU_State initial_cpu = {.pc=0x194f, .a=0x3c, .x=0x5d, .y=0xac, .sp=0x06, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x194f, .value=0xc8}, {.addr=0x1950, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1951, .a=0x3c, .x=0x5d, .y=0xac, .sp=0x06, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x194f, .value=0xc8}, {.addr=0x1950, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x194f, .value=0xc8, .type=IO_READ},
        {.addr=0x1950, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0047) {
    const struct CPU_State initial_cpu = {.pc=0x942a, .a=0x6a, .x=0x2a, .y=0xc1, .sp=0xfb, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x942a, .value=0xc8}, {.addr=0x942b, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x942c, .a=0x6a, .x=0x2a, .y=0xc1, .sp=0xfb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x942a, .value=0xc8}, {.addr=0x942b, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x942a, .value=0xc8, .type=IO_READ},
        {.addr=0x942b, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0048) {
    const struct CPU_State initial_cpu = {.pc=0x589a, .a=0x89, .x=0x9d, .y=0xcd, .sp=0xb6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x589a, .value=0xc8}, {.addr=0x589b, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x589c, .a=0x89, .x=0x9d, .y=0xcd, .sp=0xb6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x589a, .value=0xc8}, {.addr=0x589b, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x589a, .value=0xc8, .type=IO_READ},
        {.addr=0x589b, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0049) {
    const struct CPU_State initial_cpu = {.pc=0x048b, .a=0x60, .x=0xa2, .y=0xac, .sp=0xbb, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x048b, .value=0xc8}, {.addr=0x048c, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x048d, .a=0x60, .x=0xa2, .y=0xac, .sp=0xbb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x048b, .value=0xc8}, {.addr=0x048c, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x048b, .value=0xc8, .type=IO_READ},
        {.addr=0x048c, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_004A) {
    const struct CPU_State initial_cpu = {.pc=0x25bb, .a=0xf4, .x=0x51, .y=0x16, .sp=0x47, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x25bb, .value=0xc8}, {.addr=0x25bc, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x25bd, .a=0xf4, .x=0x51, .y=0x16, .sp=0x47, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x25bb, .value=0xc8}, {.addr=0x25bc, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x25bb, .value=0xc8, .type=IO_READ},
        {.addr=0x25bc, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_004B) {
    const struct CPU_State initial_cpu = {.pc=0x0a35, .a=0xd8, .x=0xaa, .y=0xe1, .sp=0x76, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0a35, .value=0xc8}, {.addr=0x0a36, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x0a37, .a=0xd8, .x=0xaa, .y=0xe1, .sp=0x76, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0a35, .value=0xc8}, {.addr=0x0a36, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x0a35, .value=0xc8, .type=IO_READ},
        {.addr=0x0a36, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_004C) {
    const struct CPU_State initial_cpu = {.pc=0xb8ec, .a=0xdb, .x=0x21, .y=0xb2, .sp=0x67, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ec, .value=0xc8}, {.addr=0xb8ed, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xb8ee, .a=0xdb, .x=0x21, .y=0xb2, .sp=0x67, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb8ec, .value=0xc8}, {.addr=0xb8ed, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xb8ec, .value=0xc8, .type=IO_READ},
        {.addr=0xb8ed, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_004D) {
    const struct CPU_State initial_cpu = {.pc=0xe43d, .a=0xc2, .x=0xd5, .y=0xe7, .sp=0xaa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xe43d, .value=0xc8}, {.addr=0xe43e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe43f, .a=0xc2, .x=0xd5, .y=0xe7, .sp=0xaa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xe43d, .value=0xc8}, {.addr=0xe43e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe43d, .value=0xc8, .type=IO_READ},
        {.addr=0xe43e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_004E) {
    const struct CPU_State initial_cpu = {.pc=0xacf0, .a=0x51, .x=0x18, .y=0x4f, .sp=0x84, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xacf0, .value=0xc8}, {.addr=0xacf1, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xacf2, .a=0x51, .x=0x18, .y=0x4f, .sp=0x84, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xacf0, .value=0xc8}, {.addr=0xacf1, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xacf0, .value=0xc8, .type=IO_READ},
        {.addr=0xacf1, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_004F) {
    const struct CPU_State initial_cpu = {.pc=0x16e5, .a=0x45, .x=0xf3, .y=0xfb, .sp=0x11, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x16e5, .value=0xc8}, {.addr=0x16e6, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x16e7, .a=0x45, .x=0xf3, .y=0xfb, .sp=0x11, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x16e5, .value=0xc8}, {.addr=0x16e6, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x16e5, .value=0xc8, .type=IO_READ},
        {.addr=0x16e6, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0050) {
    const struct CPU_State initial_cpu = {.pc=0xcfb2, .a=0xab, .x=0x98, .y=0x92, .sp=0x86, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb2, .value=0xc8}, {.addr=0xcfb3, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xcfb4, .a=0xab, .x=0x98, .y=0x92, .sp=0x86, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcfb2, .value=0xc8}, {.addr=0xcfb3, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xcfb2, .value=0xc8, .type=IO_READ},
        {.addr=0xcfb3, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0051) {
    const struct CPU_State initial_cpu = {.pc=0xd17b, .a=0x1f, .x=0x52, .y=0x3d, .sp=0x5d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd17b, .value=0xc8}, {.addr=0xd17c, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xd17d, .a=0x1f, .x=0x52, .y=0x3d, .sp=0x5d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd17b, .value=0xc8}, {.addr=0xd17c, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xd17b, .value=0xc8, .type=IO_READ},
        {.addr=0xd17c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0052) {
    const struct CPU_State initial_cpu = {.pc=0x4d0f, .a=0xd1, .x=0xcc, .y=0xbb, .sp=0x7e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x4d0f, .value=0xc8}, {.addr=0x4d10, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4d11, .a=0xd1, .x=0xcc, .y=0xbb, .sp=0x7e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4d0f, .value=0xc8}, {.addr=0x4d10, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4d0f, .value=0xc8, .type=IO_READ},
        {.addr=0x4d10, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0053) {
    const struct CPU_State initial_cpu = {.pc=0xa786, .a=0xd4, .x=0xb9, .y=0xb5, .sp=0x6e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa786, .value=0xc8}, {.addr=0xa787, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa788, .a=0xd4, .x=0xb9, .y=0xb5, .sp=0x6e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa786, .value=0xc8}, {.addr=0xa787, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa786, .value=0xc8, .type=IO_READ},
        {.addr=0xa787, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0054) {
    const struct CPU_State initial_cpu = {.pc=0xf649, .a=0x4d, .x=0x8a, .y=0x84, .sp=0xf1, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf649, .value=0xc8}, {.addr=0xf64a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf64b, .a=0x4d, .x=0x8a, .y=0x84, .sp=0xf1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf649, .value=0xc8}, {.addr=0xf64a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf649, .value=0xc8, .type=IO_READ},
        {.addr=0xf64a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0055) {
    const struct CPU_State initial_cpu = {.pc=0xb90b, .a=0x40, .x=0x9a, .y=0x7a, .sp=0xe9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb90b, .value=0xc8}, {.addr=0xb90c, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb90d, .a=0x40, .x=0x9a, .y=0x7a, .sp=0xe9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb90b, .value=0xc8}, {.addr=0xb90c, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb90b, .value=0xc8, .type=IO_READ},
        {.addr=0xb90c, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0056) {
    const struct CPU_State initial_cpu = {.pc=0x09c3, .a=0x5d, .x=0xcf, .y=0x9f, .sp=0xef, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x09c3, .value=0xc8}, {.addr=0x09c4, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x09c5, .a=0x5d, .x=0xcf, .y=0x9f, .sp=0xef, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x09c3, .value=0xc8}, {.addr=0x09c4, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x09c3, .value=0xc8, .type=IO_READ},
        {.addr=0x09c4, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0057) {
    const struct CPU_State initial_cpu = {.pc=0x1623, .a=0xd6, .x=0x7e, .y=0x59, .sp=0xdf, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1623, .value=0xc8}, {.addr=0x1624, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1625, .a=0xd6, .x=0x7e, .y=0x59, .sp=0xdf, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1623, .value=0xc8}, {.addr=0x1624, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1623, .value=0xc8, .type=IO_READ},
        {.addr=0x1624, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0058) {
    const struct CPU_State initial_cpu = {.pc=0xf284, .a=0x85, .x=0x7a, .y=0x97, .sp=0x5b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf284, .value=0xc8}, {.addr=0xf285, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xf286, .a=0x85, .x=0x7a, .y=0x97, .sp=0x5b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf284, .value=0xc8}, {.addr=0xf285, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xf284, .value=0xc8, .type=IO_READ},
        {.addr=0xf285, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0059) {
    const struct CPU_State initial_cpu = {.pc=0x3443, .a=0x82, .x=0x66, .y=0xe6, .sp=0xf1, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x3443, .value=0xc8}, {.addr=0x3444, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3445, .a=0x82, .x=0x66, .y=0xe6, .sp=0xf1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3443, .value=0xc8}, {.addr=0x3444, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3443, .value=0xc8, .type=IO_READ},
        {.addr=0x3444, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_005A) {
    const struct CPU_State initial_cpu = {.pc=0xd63c, .a=0x64, .x=0x74, .y=0x87, .sp=0xcb, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd63c, .value=0xc8}, {.addr=0xd63d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd63e, .a=0x64, .x=0x74, .y=0x87, .sp=0xcb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd63c, .value=0xc8}, {.addr=0xd63d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd63c, .value=0xc8, .type=IO_READ},
        {.addr=0xd63d, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_005B) {
    const struct CPU_State initial_cpu = {.pc=0xc3fa, .a=0x21, .x=0x3d, .y=0xf2, .sp=0x18, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xc3fa, .value=0xc8}, {.addr=0xc3fb, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xc3fc, .a=0x21, .x=0x3d, .y=0xf2, .sp=0x18, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc3fa, .value=0xc8}, {.addr=0xc3fb, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xc3fa, .value=0xc8, .type=IO_READ},
        {.addr=0xc3fb, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_005C) {
    const struct CPU_State initial_cpu = {.pc=0xeb96, .a=0x2f, .x=0xe1, .y=0x43, .sp=0x73, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xeb96, .value=0xc8}, {.addr=0xeb97, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xeb98, .a=0x2f, .x=0xe1, .y=0x43, .sp=0x73, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xeb96, .value=0xc8}, {.addr=0xeb97, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xeb96, .value=0xc8, .type=IO_READ},
        {.addr=0xeb97, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_005D) {
    const struct CPU_State initial_cpu = {.pc=0xd5ea, .a=0x8c, .x=0xa3, .y=0x4f, .sp=0x3e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd5ea, .value=0xc8}, {.addr=0xd5eb, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xd5ec, .a=0x8c, .x=0xa3, .y=0x4f, .sp=0x3e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd5ea, .value=0xc8}, {.addr=0xd5eb, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xd5ea, .value=0xc8, .type=IO_READ},
        {.addr=0xd5eb, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_005E) {
    const struct CPU_State initial_cpu = {.pc=0x541e, .a=0x82, .x=0xb9, .y=0x0e, .sp=0x48, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x541e, .value=0xc8}, {.addr=0x541f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x5420, .a=0x82, .x=0xb9, .y=0x0e, .sp=0x48, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x541e, .value=0xc8}, {.addr=0x541f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x541e, .value=0xc8, .type=IO_READ},
        {.addr=0x541f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_005F) {
    const struct CPU_State initial_cpu = {.pc=0xe75a, .a=0xe9, .x=0xa1, .y=0x89, .sp=0x18, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xe75a, .value=0xc8}, {.addr=0xe75b, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xe75c, .a=0xe9, .x=0xa1, .y=0x89, .sp=0x18, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe75a, .value=0xc8}, {.addr=0xe75b, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xe75a, .value=0xc8, .type=IO_READ},
        {.addr=0xe75b, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0060) {
    const struct CPU_State initial_cpu = {.pc=0xcd4d, .a=0xd6, .x=0x1a, .y=0xaa, .sp=0x46, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xcd4d, .value=0xc8}, {.addr=0xcd4e, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xcd4f, .a=0xd6, .x=0x1a, .y=0xaa, .sp=0x46, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xcd4d, .value=0xc8}, {.addr=0xcd4e, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xcd4d, .value=0xc8, .type=IO_READ},
        {.addr=0xcd4e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0061) {
    const struct CPU_State initial_cpu = {.pc=0xe3e2, .a=0x94, .x=0x0e, .y=0x2a, .sp=0xa4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e2, .value=0xc8}, {.addr=0xe3e3, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xe3e4, .a=0x94, .x=0x0e, .y=0x2a, .sp=0xa4, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe3e2, .value=0xc8}, {.addr=0xe3e3, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xe3e2, .value=0xc8, .type=IO_READ},
        {.addr=0xe3e3, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0062) {
    const struct CPU_State initial_cpu = {.pc=0xa044, .a=0x87, .x=0xfc, .y=0x56, .sp=0x52, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa044, .value=0xc8}, {.addr=0xa045, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xa046, .a=0x87, .x=0xfc, .y=0x56, .sp=0x52, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa044, .value=0xc8}, {.addr=0xa045, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xa044, .value=0xc8, .type=IO_READ},
        {.addr=0xa045, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0063) {
    const struct CPU_State initial_cpu = {.pc=0x4440, .a=0x09, .x=0x98, .y=0x6c, .sp=0x91, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4440, .value=0xc8}, {.addr=0x4441, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x4442, .a=0x09, .x=0x98, .y=0x6c, .sp=0x91, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4440, .value=0xc8}, {.addr=0x4441, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x4440, .value=0xc8, .type=IO_READ},
        {.addr=0x4441, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0064) {
    const struct CPU_State initial_cpu = {.pc=0x402c, .a=0x4e, .x=0x06, .y=0xcf, .sp=0x68, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x402c, .value=0xc8}, {.addr=0x402d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x402e, .a=0x4e, .x=0x06, .y=0xcf, .sp=0x68, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x402c, .value=0xc8}, {.addr=0x402d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x402c, .value=0xc8, .type=IO_READ},
        {.addr=0x402d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0065) {
    const struct CPU_State initial_cpu = {.pc=0xd097, .a=0x21, .x=0x85, .y=0x95, .sp=0x62, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd097, .value=0xc8}, {.addr=0xd098, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xd099, .a=0x21, .x=0x85, .y=0x95, .sp=0x62, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd097, .value=0xc8}, {.addr=0xd098, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xd097, .value=0xc8, .type=IO_READ},
        {.addr=0xd098, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0066) {
    const struct CPU_State initial_cpu = {.pc=0xa326, .a=0xc2, .x=0x96, .y=0x5d, .sp=0x6e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa326, .value=0xc8}, {.addr=0xa327, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xa328, .a=0xc2, .x=0x96, .y=0x5d, .sp=0x6e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa326, .value=0xc8}, {.addr=0xa327, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xa326, .value=0xc8, .type=IO_READ},
        {.addr=0xa327, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0067) {
    const struct CPU_State initial_cpu = {.pc=0x3a48, .a=0xd6, .x=0x1a, .y=0xf5, .sp=0x27, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3a48, .value=0xc8}, {.addr=0x3a49, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x3a4a, .a=0xd6, .x=0x1a, .y=0xf5, .sp=0x27, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3a48, .value=0xc8}, {.addr=0x3a49, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x3a48, .value=0xc8, .type=IO_READ},
        {.addr=0x3a49, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0068) {
    const struct CPU_State initial_cpu = {.pc=0x41b7, .a=0xe4, .x=0x66, .y=0x10, .sp=0x7e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x41b7, .value=0xc8}, {.addr=0x41b8, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x41b9, .a=0xe4, .x=0x66, .y=0x10, .sp=0x7e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x41b7, .value=0xc8}, {.addr=0x41b8, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x41b7, .value=0xc8, .type=IO_READ},
        {.addr=0x41b8, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0069) {
    const struct CPU_State initial_cpu = {.pc=0xa1cd, .a=0xdf, .x=0xeb, .y=0x1b, .sp=0x3c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa1cd, .value=0xc8}, {.addr=0xa1ce, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa1cf, .a=0xdf, .x=0xeb, .y=0x1b, .sp=0x3c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa1cd, .value=0xc8}, {.addr=0xa1ce, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa1cd, .value=0xc8, .type=IO_READ},
        {.addr=0xa1ce, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_006A) {
    const struct CPU_State initial_cpu = {.pc=0x62c6, .a=0x19, .x=0x73, .y=0x46, .sp=0xdf, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x62c6, .value=0xc8}, {.addr=0x62c7, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x62c8, .a=0x19, .x=0x73, .y=0x46, .sp=0xdf, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x62c6, .value=0xc8}, {.addr=0x62c7, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x62c6, .value=0xc8, .type=IO_READ},
        {.addr=0x62c7, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_006B) {
    const struct CPU_State initial_cpu = {.pc=0xc40b, .a=0x46, .x=0xb6, .y=0x81, .sp=0xb8, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc40b, .value=0xc8}, {.addr=0xc40c, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc40d, .a=0x46, .x=0xb6, .y=0x81, .sp=0xb8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc40b, .value=0xc8}, {.addr=0xc40c, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc40b, .value=0xc8, .type=IO_READ},
        {.addr=0xc40c, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_006C) {
    const struct CPU_State initial_cpu = {.pc=0xa4df, .a=0x1b, .x=0x5b, .y=0xc1, .sp=0x14, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa4df, .value=0xc8}, {.addr=0xa4e0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa4e1, .a=0x1b, .x=0x5b, .y=0xc1, .sp=0x14, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa4df, .value=0xc8}, {.addr=0xa4e0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa4df, .value=0xc8, .type=IO_READ},
        {.addr=0xa4e0, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_006D) {
    const struct CPU_State initial_cpu = {.pc=0x69a2, .a=0x0e, .x=0x90, .y=0x63, .sp=0x78, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x69a2, .value=0xc8}, {.addr=0x69a3, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x69a4, .a=0x0e, .x=0x90, .y=0x63, .sp=0x78, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x69a2, .value=0xc8}, {.addr=0x69a3, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x69a2, .value=0xc8, .type=IO_READ},
        {.addr=0x69a3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_006E) {
    const struct CPU_State initial_cpu = {.pc=0x10e6, .a=0x28, .x=0x2d, .y=0xbb, .sp=0x03, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x10e6, .value=0xc8}, {.addr=0x10e7, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x10e8, .a=0x28, .x=0x2d, .y=0xbb, .sp=0x03, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x10e6, .value=0xc8}, {.addr=0x10e7, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x10e6, .value=0xc8, .type=IO_READ},
        {.addr=0x10e7, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_006F) {
    const struct CPU_State initial_cpu = {.pc=0xab1c, .a=0x24, .x=0xdc, .y=0x60, .sp=0xfe, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xab1c, .value=0xc8}, {.addr=0xab1d, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xab1e, .a=0x24, .x=0xdc, .y=0x60, .sp=0xfe, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xab1c, .value=0xc8}, {.addr=0xab1d, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xab1c, .value=0xc8, .type=IO_READ},
        {.addr=0xab1d, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0070) {
    const struct CPU_State initial_cpu = {.pc=0xcf78, .a=0xd7, .x=0x53, .y=0x43, .sp=0xb6, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf78, .value=0xc8}, {.addr=0xcf79, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xcf7a, .a=0xd7, .x=0x53, .y=0x43, .sp=0xb6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcf78, .value=0xc8}, {.addr=0xcf79, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xcf78, .value=0xc8, .type=IO_READ},
        {.addr=0xcf79, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0071) {
    const struct CPU_State initial_cpu = {.pc=0x3449, .a=0x16, .x=0x26, .y=0x9c, .sp=0xc0, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x3449, .value=0xc8}, {.addr=0x344a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x344b, .a=0x16, .x=0x26, .y=0x9c, .sp=0xc0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3449, .value=0xc8}, {.addr=0x344a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x3449, .value=0xc8, .type=IO_READ},
        {.addr=0x344a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0072) {
    const struct CPU_State initial_cpu = {.pc=0x0f3b, .a=0xf5, .x=0xb7, .y=0x25, .sp=0x20, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0f3b, .value=0xc8}, {.addr=0x0f3c, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x0f3d, .a=0xf5, .x=0xb7, .y=0x25, .sp=0x20, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0f3b, .value=0xc8}, {.addr=0x0f3c, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x0f3b, .value=0xc8, .type=IO_READ},
        {.addr=0x0f3c, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0073) {
    const struct CPU_State initial_cpu = {.pc=0xc6fd, .a=0x02, .x=0xf1, .y=0x54, .sp=0x32, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc6fd, .value=0xc8}, {.addr=0xc6fe, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xc6ff, .a=0x02, .x=0xf1, .y=0x54, .sp=0x32, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc6fd, .value=0xc8}, {.addr=0xc6fe, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xc6fd, .value=0xc8, .type=IO_READ},
        {.addr=0xc6fe, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0074) {
    const struct CPU_State initial_cpu = {.pc=0xdb3e, .a=0xa5, .x=0xb0, .y=0x36, .sp=0xcf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xdb3e, .value=0xc8}, {.addr=0xdb3f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xdb40, .a=0xa5, .x=0xb0, .y=0x36, .sp=0xcf, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xdb3e, .value=0xc8}, {.addr=0xdb3f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xdb3e, .value=0xc8, .type=IO_READ},
        {.addr=0xdb3f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0075) {
    const struct CPU_State initial_cpu = {.pc=0xd94a, .a=0x6f, .x=0xcf, .y=0xa8, .sp=0xbb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xd94a, .value=0xc8}, {.addr=0xd94b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd94c, .a=0x6f, .x=0xcf, .y=0xa8, .sp=0xbb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd94a, .value=0xc8}, {.addr=0xd94b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd94a, .value=0xc8, .type=IO_READ},
        {.addr=0xd94b, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0076) {
    const struct CPU_State initial_cpu = {.pc=0x2de0, .a=0x7a, .x=0xcb, .y=0xc3, .sp=0x49, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2de0, .value=0xc8}, {.addr=0x2de1, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x2de2, .a=0x7a, .x=0xcb, .y=0xc3, .sp=0x49, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2de0, .value=0xc8}, {.addr=0x2de1, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x2de0, .value=0xc8, .type=IO_READ},
        {.addr=0x2de1, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0077) {
    const struct CPU_State initial_cpu = {.pc=0x78b4, .a=0x40, .x=0x11, .y=0x93, .sp=0xc0, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x78b4, .value=0xc8}, {.addr=0x78b5, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x78b6, .a=0x40, .x=0x11, .y=0x93, .sp=0xc0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x78b4, .value=0xc8}, {.addr=0x78b5, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x78b4, .value=0xc8, .type=IO_READ},
        {.addr=0x78b5, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0078) {
    const struct CPU_State initial_cpu = {.pc=0xff4f, .a=0xf1, .x=0xf3, .y=0xc9, .sp=0x4a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xff4f, .value=0xc8}, {.addr=0xff50, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xff51, .a=0xf1, .x=0xf3, .y=0xc9, .sp=0x4a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xff4f, .value=0xc8}, {.addr=0xff50, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xff4f, .value=0xc8, .type=IO_READ},
        {.addr=0xff50, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0079) {
    const struct CPU_State initial_cpu = {.pc=0x8b6d, .a=0x92, .x=0x6f, .y=0x01, .sp=0x4d, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x8b6d, .value=0xc8}, {.addr=0x8b6e, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x8b6f, .a=0x92, .x=0x6f, .y=0x01, .sp=0x4d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8b6d, .value=0xc8}, {.addr=0x8b6e, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x8b6d, .value=0xc8, .type=IO_READ},
        {.addr=0x8b6e, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_007A) {
    const struct CPU_State initial_cpu = {.pc=0x33e9, .a=0x74, .x=0x2e, .y=0x4b, .sp=0x81, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x33e9, .value=0xc8}, {.addr=0x33ea, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x33eb, .a=0x74, .x=0x2e, .y=0x4b, .sp=0x81, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x33e9, .value=0xc8}, {.addr=0x33ea, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x33e9, .value=0xc8, .type=IO_READ},
        {.addr=0x33ea, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc731, .a=0x55, .x=0xcc, .y=0xb9, .sp=0xd3, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc731, .value=0xc8}, {.addr=0xc732, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc733, .a=0x55, .x=0xcc, .y=0xb9, .sp=0xd3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc731, .value=0xc8}, {.addr=0xc732, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc731, .value=0xc8, .type=IO_READ},
        {.addr=0xc732, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_007C) {
    const struct CPU_State initial_cpu = {.pc=0x8931, .a=0x55, .x=0xb0, .y=0x05, .sp=0x81, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8931, .value=0xc8}, {.addr=0x8932, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8933, .a=0x55, .x=0xb0, .y=0x05, .sp=0x81, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8931, .value=0xc8}, {.addr=0x8932, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8931, .value=0xc8, .type=IO_READ},
        {.addr=0x8932, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_007D) {
    const struct CPU_State initial_cpu = {.pc=0x6eac, .a=0xde, .x=0x11, .y=0x01, .sp=0xc8, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6eac, .value=0xc8}, {.addr=0x6ead, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x6eae, .a=0xde, .x=0x11, .y=0x01, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6eac, .value=0xc8}, {.addr=0x6ead, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x6eac, .value=0xc8, .type=IO_READ},
        {.addr=0x6ead, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_007E) {
    const struct CPU_State initial_cpu = {.pc=0x562a, .a=0x0e, .x=0x37, .y=0x75, .sp=0xd7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x562a, .value=0xc8}, {.addr=0x562b, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x562c, .a=0x0e, .x=0x37, .y=0x75, .sp=0xd7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x562a, .value=0xc8}, {.addr=0x562b, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x562a, .value=0xc8, .type=IO_READ},
        {.addr=0x562b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_007F) {
    const struct CPU_State initial_cpu = {.pc=0x251d, .a=0x78, .x=0x7a, .y=0x90, .sp=0x21, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x251d, .value=0xc8}, {.addr=0x251e, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x251f, .a=0x78, .x=0x7a, .y=0x90, .sp=0x21, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x251d, .value=0xc8}, {.addr=0x251e, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x251d, .value=0xc8, .type=IO_READ},
        {.addr=0x251e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0080) {
    const struct CPU_State initial_cpu = {.pc=0xc8b5, .a=0x1a, .x=0x68, .y=0xf2, .sp=0xbc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b5, .value=0xc8}, {.addr=0xc8b6, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xc8b7, .a=0x1a, .x=0x68, .y=0xf2, .sp=0xbc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc8b5, .value=0xc8}, {.addr=0xc8b6, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xc8b5, .value=0xc8, .type=IO_READ},
        {.addr=0xc8b6, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0081) {
    const struct CPU_State initial_cpu = {.pc=0x623c, .a=0xcd, .x=0xcf, .y=0xa8, .sp=0xde, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x623c, .value=0xc8}, {.addr=0x623d, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x623e, .a=0xcd, .x=0xcf, .y=0xa8, .sp=0xde, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x623c, .value=0xc8}, {.addr=0x623d, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x623c, .value=0xc8, .type=IO_READ},
        {.addr=0x623d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0082) {
    const struct CPU_State initial_cpu = {.pc=0x5dce, .a=0xb2, .x=0x06, .y=0x78, .sp=0xf7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x5dce, .value=0xc8}, {.addr=0x5dcf, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x5dd0, .a=0xb2, .x=0x06, .y=0x78, .sp=0xf7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5dce, .value=0xc8}, {.addr=0x5dcf, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x5dce, .value=0xc8, .type=IO_READ},
        {.addr=0x5dcf, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0083) {
    const struct CPU_State initial_cpu = {.pc=0xe471, .a=0x4f, .x=0x87, .y=0x95, .sp=0x3d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe471, .value=0xc8}, {.addr=0xe472, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xe473, .a=0x4f, .x=0x87, .y=0x95, .sp=0x3d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe471, .value=0xc8}, {.addr=0xe472, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xe471, .value=0xc8, .type=IO_READ},
        {.addr=0xe472, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0084) {
    const struct CPU_State initial_cpu = {.pc=0xda2c, .a=0x09, .x=0x50, .y=0x2d, .sp=0x95, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xda2c, .value=0xc8}, {.addr=0xda2d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xda2e, .a=0x09, .x=0x50, .y=0x2d, .sp=0x95, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xda2c, .value=0xc8}, {.addr=0xda2d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xda2c, .value=0xc8, .type=IO_READ},
        {.addr=0xda2d, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0085) {
    const struct CPU_State initial_cpu = {.pc=0x7d49, .a=0x81, .x=0x92, .y=0x16, .sp=0x01, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x7d49, .value=0xc8}, {.addr=0x7d4a, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x7d4b, .a=0x81, .x=0x92, .y=0x16, .sp=0x01, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7d49, .value=0xc8}, {.addr=0x7d4a, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x7d49, .value=0xc8, .type=IO_READ},
        {.addr=0x7d4a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0086) {
    const struct CPU_State initial_cpu = {.pc=0x3a90, .a=0xc4, .x=0x5f, .y=0xeb, .sp=0x1d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3a90, .value=0xc8}, {.addr=0x3a91, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3a92, .a=0xc4, .x=0x5f, .y=0xeb, .sp=0x1d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3a90, .value=0xc8}, {.addr=0x3a91, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3a90, .value=0xc8, .type=IO_READ},
        {.addr=0x3a91, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0087) {
    const struct CPU_State initial_cpu = {.pc=0xe28f, .a=0xab, .x=0x07, .y=0x8c, .sp=0x8d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe28f, .value=0xc8}, {.addr=0xe290, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xe291, .a=0xab, .x=0x07, .y=0x8c, .sp=0x8d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe28f, .value=0xc8}, {.addr=0xe290, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xe28f, .value=0xc8, .type=IO_READ},
        {.addr=0xe290, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0088) {
    const struct CPU_State initial_cpu = {.pc=0x4592, .a=0xf0, .x=0x61, .y=0x39, .sp=0x05, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4592, .value=0xc8}, {.addr=0x4593, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x4594, .a=0xf0, .x=0x61, .y=0x39, .sp=0x05, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4592, .value=0xc8}, {.addr=0x4593, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x4592, .value=0xc8, .type=IO_READ},
        {.addr=0x4593, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0089) {
    const struct CPU_State initial_cpu = {.pc=0x42be, .a=0x79, .x=0xd0, .y=0x2c, .sp=0xc1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x42be, .value=0xc8}, {.addr=0x42bf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x42c0, .a=0x79, .x=0xd0, .y=0x2c, .sp=0xc1, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x42be, .value=0xc8}, {.addr=0x42bf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x42be, .value=0xc8, .type=IO_READ},
        {.addr=0x42bf, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_008A) {
    const struct CPU_State initial_cpu = {.pc=0x4c46, .a=0xb2, .x=0x89, .y=0x41, .sp=0x10, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4c46, .value=0xc8}, {.addr=0x4c47, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x4c48, .a=0xb2, .x=0x89, .y=0x41, .sp=0x10, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4c46, .value=0xc8}, {.addr=0x4c47, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x4c46, .value=0xc8, .type=IO_READ},
        {.addr=0x4c47, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_008B) {
    const struct CPU_State initial_cpu = {.pc=0x95cd, .a=0x20, .x=0xc4, .y=0x5b, .sp=0xd9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x95cd, .value=0xc8}, {.addr=0x95ce, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x95cf, .a=0x20, .x=0xc4, .y=0x5b, .sp=0xd9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x95cd, .value=0xc8}, {.addr=0x95ce, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x95cd, .value=0xc8, .type=IO_READ},
        {.addr=0x95ce, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_008C) {
    const struct CPU_State initial_cpu = {.pc=0xcd5e, .a=0xd3, .x=0x0b, .y=0x42, .sp=0x3a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5e, .value=0xc8}, {.addr=0xcd5f, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xcd60, .a=0xd3, .x=0x0b, .y=0x42, .sp=0x3a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xcd5e, .value=0xc8}, {.addr=0xcd5f, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xcd5e, .value=0xc8, .type=IO_READ},
        {.addr=0xcd5f, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_008D) {
    const struct CPU_State initial_cpu = {.pc=0xc95a, .a=0x87, .x=0x98, .y=0xfb, .sp=0xe5, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xc95a, .value=0xc8}, {.addr=0xc95b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xc95c, .a=0x87, .x=0x98, .y=0xfb, .sp=0xe5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc95a, .value=0xc8}, {.addr=0xc95b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xc95a, .value=0xc8, .type=IO_READ},
        {.addr=0xc95b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_008E) {
    const struct CPU_State initial_cpu = {.pc=0x6c22, .a=0x6b, .x=0x53, .y=0x5d, .sp=0x53, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6c22, .value=0xc8}, {.addr=0x6c23, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x6c24, .a=0x6b, .x=0x53, .y=0x5d, .sp=0x53, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6c22, .value=0xc8}, {.addr=0x6c23, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x6c22, .value=0xc8, .type=IO_READ},
        {.addr=0x6c23, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_008F) {
    const struct CPU_State initial_cpu = {.pc=0x453e, .a=0xc1, .x=0x04, .y=0xe4, .sp=0xd1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x453e, .value=0xc8}, {.addr=0x453f, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x4540, .a=0xc1, .x=0x04, .y=0xe4, .sp=0xd1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x453e, .value=0xc8}, {.addr=0x453f, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x453e, .value=0xc8, .type=IO_READ},
        {.addr=0x453f, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0090) {
    const struct CPU_State initial_cpu = {.pc=0xda09, .a=0x7a, .x=0xe8, .y=0x72, .sp=0xcf, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xda09, .value=0xc8}, {.addr=0xda0a, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xda0b, .a=0x7a, .x=0xe8, .y=0x72, .sp=0xcf, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xda09, .value=0xc8}, {.addr=0xda0a, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xda09, .value=0xc8, .type=IO_READ},
        {.addr=0xda0a, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0091) {
    const struct CPU_State initial_cpu = {.pc=0xd849, .a=0x68, .x=0x7e, .y=0x1b, .sp=0x37, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd849, .value=0xc8}, {.addr=0xd84a, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xd84b, .a=0x68, .x=0x7e, .y=0x1b, .sp=0x37, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd849, .value=0xc8}, {.addr=0xd84a, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xd849, .value=0xc8, .type=IO_READ},
        {.addr=0xd84a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0092) {
    const struct CPU_State initial_cpu = {.pc=0xb511, .a=0x43, .x=0x4c, .y=0xfd, .sp=0x65, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb511, .value=0xc8}, {.addr=0xb512, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xb513, .a=0x43, .x=0x4c, .y=0xfd, .sp=0x65, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb511, .value=0xc8}, {.addr=0xb512, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xb511, .value=0xc8, .type=IO_READ},
        {.addr=0xb512, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0093) {
    const struct CPU_State initial_cpu = {.pc=0xab3e, .a=0x09, .x=0xfd, .y=0x81, .sp=0xe1, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xab3e, .value=0xc8}, {.addr=0xab3f, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xab40, .a=0x09, .x=0xfd, .y=0x81, .sp=0xe1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xab3e, .value=0xc8}, {.addr=0xab3f, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xab3e, .value=0xc8, .type=IO_READ},
        {.addr=0xab3f, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0094) {
    const struct CPU_State initial_cpu = {.pc=0xe6b5, .a=0xed, .x=0x49, .y=0x9e, .sp=0xf7, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xe6b5, .value=0xc8}, {.addr=0xe6b6, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xe6b7, .a=0xed, .x=0x49, .y=0x9e, .sp=0xf7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe6b5, .value=0xc8}, {.addr=0xe6b6, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xe6b5, .value=0xc8, .type=IO_READ},
        {.addr=0xe6b6, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0095) {
    const struct CPU_State initial_cpu = {.pc=0x8471, .a=0x92, .x=0xc1, .y=0x71, .sp=0xa0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8471, .value=0xc8}, {.addr=0x8472, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8473, .a=0x92, .x=0xc1, .y=0x71, .sp=0xa0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8471, .value=0xc8}, {.addr=0x8472, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8471, .value=0xc8, .type=IO_READ},
        {.addr=0x8472, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0096) {
    const struct CPU_State initial_cpu = {.pc=0xd60d, .a=0x29, .x=0xc9, .y=0xe1, .sp=0xc5, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xd60d, .value=0xc8}, {.addr=0xd60e, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xd60f, .a=0x29, .x=0xc9, .y=0xe1, .sp=0xc5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd60d, .value=0xc8}, {.addr=0xd60e, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xd60d, .value=0xc8, .type=IO_READ},
        {.addr=0xd60e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0097) {
    const struct CPU_State initial_cpu = {.pc=0xa17b, .a=0xd4, .x=0xe2, .y=0xe5, .sp=0x18, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa17b, .value=0xc8}, {.addr=0xa17c, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xa17d, .a=0xd4, .x=0xe2, .y=0xe5, .sp=0x18, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa17b, .value=0xc8}, {.addr=0xa17c, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xa17b, .value=0xc8, .type=IO_READ},
        {.addr=0xa17c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0098) {
    const struct CPU_State initial_cpu = {.pc=0x626c, .a=0xd0, .x=0x46, .y=0x15, .sp=0x09, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x626c, .value=0xc8}, {.addr=0x626d, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x626e, .a=0xd0, .x=0x46, .y=0x15, .sp=0x09, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x626c, .value=0xc8}, {.addr=0x626d, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x626c, .value=0xc8, .type=IO_READ},
        {.addr=0x626d, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0099) {
    const struct CPU_State initial_cpu = {.pc=0xf8a8, .a=0x8f, .x=0x42, .y=0x5b, .sp=0x3d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a8, .value=0xc8}, {.addr=0xf8a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf8aa, .a=0x8f, .x=0x42, .y=0x5b, .sp=0x3d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf8a8, .value=0xc8}, {.addr=0xf8a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf8a8, .value=0xc8, .type=IO_READ},
        {.addr=0xf8a9, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_009A) {
    const struct CPU_State initial_cpu = {.pc=0x9679, .a=0x82, .x=0xa8, .y=0xed, .sp=0xfc, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x9679, .value=0xc8}, {.addr=0x967a, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x967b, .a=0x82, .x=0xa8, .y=0xed, .sp=0xfc, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9679, .value=0xc8}, {.addr=0x967a, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x9679, .value=0xc8, .type=IO_READ},
        {.addr=0x967a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_009B) {
    const struct CPU_State initial_cpu = {.pc=0x9a85, .a=0x33, .x=0x05, .y=0x74, .sp=0x5d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9a85, .value=0xc8}, {.addr=0x9a86, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x9a87, .a=0x33, .x=0x05, .y=0x74, .sp=0x5d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9a85, .value=0xc8}, {.addr=0x9a86, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x9a85, .value=0xc8, .type=IO_READ},
        {.addr=0x9a86, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb835, .a=0x88, .x=0xfa, .y=0x6a, .sp=0x19, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb835, .value=0xc8}, {.addr=0xb836, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xb837, .a=0x88, .x=0xfa, .y=0x6a, .sp=0x19, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb835, .value=0xc8}, {.addr=0xb836, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xb835, .value=0xc8, .type=IO_READ},
        {.addr=0xb836, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_009D) {
    const struct CPU_State initial_cpu = {.pc=0xfcf6, .a=0x27, .x=0x17, .y=0x24, .sp=0x7e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf6, .value=0xc8}, {.addr=0xfcf7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfcf8, .a=0x27, .x=0x17, .y=0x24, .sp=0x7e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfcf6, .value=0xc8}, {.addr=0xfcf7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfcf6, .value=0xc8, .type=IO_READ},
        {.addr=0xfcf7, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_009E) {
    const struct CPU_State initial_cpu = {.pc=0x1192, .a=0xa8, .x=0xb7, .y=0xc4, .sp=0xbd, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1192, .value=0xc8}, {.addr=0x1193, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1194, .a=0xa8, .x=0xb7, .y=0xc4, .sp=0xbd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1192, .value=0xc8}, {.addr=0x1193, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1192, .value=0xc8, .type=IO_READ},
        {.addr=0x1193, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_009F) {
    const struct CPU_State initial_cpu = {.pc=0x5275, .a=0x98, .x=0x60, .y=0xb6, .sp=0x1f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5275, .value=0xc8}, {.addr=0x5276, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x5277, .a=0x98, .x=0x60, .y=0xb6, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5275, .value=0xc8}, {.addr=0x5276, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x5275, .value=0xc8, .type=IO_READ},
        {.addr=0x5276, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xfe4f, .a=0x15, .x=0xcc, .y=0x6c, .sp=0x31, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xfe4f, .value=0xc8}, {.addr=0xfe50, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfe51, .a=0x15, .x=0xcc, .y=0x6c, .sp=0x31, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfe4f, .value=0xc8}, {.addr=0xfe50, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfe4f, .value=0xc8, .type=IO_READ},
        {.addr=0xfe50, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x75ad, .a=0x08, .x=0x69, .y=0x3e, .sp=0xae, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x75ad, .value=0xc8}, {.addr=0x75ae, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x75af, .a=0x08, .x=0x69, .y=0x3e, .sp=0xae, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x75ad, .value=0xc8}, {.addr=0x75ae, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x75ad, .value=0xc8, .type=IO_READ},
        {.addr=0x75ae, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x57a3, .a=0x74, .x=0x14, .y=0x9b, .sp=0x2c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x57a3, .value=0xc8}, {.addr=0x57a4, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x57a5, .a=0x74, .x=0x14, .y=0x9b, .sp=0x2c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x57a3, .value=0xc8}, {.addr=0x57a4, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x57a3, .value=0xc8, .type=IO_READ},
        {.addr=0x57a4, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x45c6, .a=0xb1, .x=0xf6, .y=0x45, .sp=0x8c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x45c6, .value=0xc8}, {.addr=0x45c7, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x45c8, .a=0xb1, .x=0xf6, .y=0x45, .sp=0x8c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x45c6, .value=0xc8}, {.addr=0x45c7, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x45c6, .value=0xc8, .type=IO_READ},
        {.addr=0x45c7, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xede2, .a=0x68, .x=0x20, .y=0xd6, .sp=0x70, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xede2, .value=0xc8}, {.addr=0xede3, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xede4, .a=0x68, .x=0x20, .y=0xd6, .sp=0x70, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xede2, .value=0xc8}, {.addr=0xede3, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xede2, .value=0xc8, .type=IO_READ},
        {.addr=0xede3, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xee22, .a=0xeb, .x=0xc1, .y=0x0f, .sp=0xbd, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xee22, .value=0xc8}, {.addr=0xee23, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xee24, .a=0xeb, .x=0xc1, .y=0x0f, .sp=0xbd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xee22, .value=0xc8}, {.addr=0xee23, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xee22, .value=0xc8, .type=IO_READ},
        {.addr=0xee23, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x3a0f, .a=0x7e, .x=0xda, .y=0xb5, .sp=0xa1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0f, .value=0xc8}, {.addr=0x3a10, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x3a11, .a=0x7e, .x=0xda, .y=0xb5, .sp=0xa1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3a0f, .value=0xc8}, {.addr=0x3a10, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x3a0f, .value=0xc8, .type=IO_READ},
        {.addr=0x3a10, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xb439, .a=0xd7, .x=0x9e, .y=0x19, .sp=0x5d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb439, .value=0xc8}, {.addr=0xb43a, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xb43b, .a=0xd7, .x=0x9e, .y=0x19, .sp=0x5d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb439, .value=0xc8}, {.addr=0xb43a, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xb439, .value=0xc8, .type=IO_READ},
        {.addr=0xb43a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x8927, .a=0x2f, .x=0x01, .y=0xdc, .sp=0xd5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8927, .value=0xc8}, {.addr=0x8928, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x8929, .a=0x2f, .x=0x01, .y=0xdc, .sp=0xd5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8927, .value=0xc8}, {.addr=0x8928, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x8927, .value=0xc8, .type=IO_READ},
        {.addr=0x8928, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xa8c0, .a=0x8a, .x=0x32, .y=0x8d, .sp=0x13, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c0, .value=0xc8}, {.addr=0xa8c1, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xa8c2, .a=0x8a, .x=0x32, .y=0x8d, .sp=0x13, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa8c0, .value=0xc8}, {.addr=0xa8c1, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xa8c0, .value=0xc8, .type=IO_READ},
        {.addr=0xa8c1, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x6477, .a=0x53, .x=0xbe, .y=0x93, .sp=0x4b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x6477, .value=0xc8}, {.addr=0x6478, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x6479, .a=0x53, .x=0xbe, .y=0x93, .sp=0x4b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6477, .value=0xc8}, {.addr=0x6478, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x6477, .value=0xc8, .type=IO_READ},
        {.addr=0x6478, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x2951, .a=0x08, .x=0x25, .y=0x98, .sp=0xf3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x2951, .value=0xc8}, {.addr=0x2952, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2953, .a=0x08, .x=0x25, .y=0x98, .sp=0xf3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2951, .value=0xc8}, {.addr=0x2952, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2951, .value=0xc8, .type=IO_READ},
        {.addr=0x2952, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xbf76, .a=0x79, .x=0xef, .y=0xa7, .sp=0x9e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xbf76, .value=0xc8}, {.addr=0xbf77, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xbf78, .a=0x79, .x=0xef, .y=0xa7, .sp=0x9e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbf76, .value=0xc8}, {.addr=0xbf77, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xbf76, .value=0xc8, .type=IO_READ},
        {.addr=0xbf77, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x5166, .a=0x05, .x=0xb3, .y=0xae, .sp=0x9c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5166, .value=0xc8}, {.addr=0x5167, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x5168, .a=0x05, .x=0xb3, .y=0xae, .sp=0x9c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5166, .value=0xc8}, {.addr=0x5167, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x5166, .value=0xc8, .type=IO_READ},
        {.addr=0x5167, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x51d9, .a=0x19, .x=0x9e, .y=0xa6, .sp=0x81, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x51d9, .value=0xc8}, {.addr=0x51da, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x51db, .a=0x19, .x=0x9e, .y=0xa6, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x51d9, .value=0xc8}, {.addr=0x51da, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x51d9, .value=0xc8, .type=IO_READ},
        {.addr=0x51da, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xd4dc, .a=0x52, .x=0xcf, .y=0xac, .sp=0x55, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xd4dc, .value=0xc8}, {.addr=0xd4dd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd4de, .a=0x52, .x=0xcf, .y=0xac, .sp=0x55, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd4dc, .value=0xc8}, {.addr=0xd4dd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd4dc, .value=0xc8, .type=IO_READ},
        {.addr=0xd4dd, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x2b2b, .a=0xd7, .x=0x7b, .y=0x52, .sp=0x40, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b2b, .value=0xc8}, {.addr=0x2b2c, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x2b2d, .a=0xd7, .x=0x7b, .y=0x52, .sp=0x40, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2b2b, .value=0xc8}, {.addr=0x2b2c, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2b2b, .value=0xc8, .type=IO_READ},
        {.addr=0x2b2c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xf660, .a=0x3c, .x=0x35, .y=0x88, .sp=0x4a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf660, .value=0xc8}, {.addr=0xf661, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xf662, .a=0x3c, .x=0x35, .y=0x88, .sp=0x4a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf660, .value=0xc8}, {.addr=0xf661, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xf660, .value=0xc8, .type=IO_READ},
        {.addr=0xf661, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x7ce1, .a=0x83, .x=0xa9, .y=0x9e, .sp=0x02, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce1, .value=0xc8}, {.addr=0x7ce2, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x7ce3, .a=0x83, .x=0xa9, .y=0x9e, .sp=0x02, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7ce1, .value=0xc8}, {.addr=0x7ce2, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x7ce1, .value=0xc8, .type=IO_READ},
        {.addr=0x7ce2, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x088f, .a=0x07, .x=0x71, .y=0xf9, .sp=0xe3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x088f, .value=0xc8}, {.addr=0x0890, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x0891, .a=0x07, .x=0x71, .y=0xf9, .sp=0xe3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x088f, .value=0xc8}, {.addr=0x0890, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x088f, .value=0xc8, .type=IO_READ},
        {.addr=0x0890, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x0e6c, .a=0x38, .x=0x15, .y=0xd5, .sp=0x17, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0e6c, .value=0xc8}, {.addr=0x0e6d, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x0e6e, .a=0x38, .x=0x15, .y=0xd5, .sp=0x17, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0e6c, .value=0xc8}, {.addr=0x0e6d, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x0e6c, .value=0xc8, .type=IO_READ},
        {.addr=0x0e6d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xcbf5, .a=0xf2, .x=0x92, .y=0x82, .sp=0x75, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf5, .value=0xc8}, {.addr=0xcbf6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcbf7, .a=0xf2, .x=0x92, .y=0x82, .sp=0x75, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xcbf5, .value=0xc8}, {.addr=0xcbf6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcbf5, .value=0xc8, .type=IO_READ},
        {.addr=0xcbf6, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xf7b9, .a=0x15, .x=0xc2, .y=0x9f, .sp=0x1c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf7b9, .value=0xc8}, {.addr=0xf7ba, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xf7bb, .a=0x15, .x=0xc2, .y=0x9f, .sp=0x1c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf7b9, .value=0xc8}, {.addr=0xf7ba, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xf7b9, .value=0xc8, .type=IO_READ},
        {.addr=0xf7ba, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x68c1, .a=0xda, .x=0x25, .y=0x3a, .sp=0xa0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x68c1, .value=0xc8}, {.addr=0x68c2, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x68c3, .a=0xda, .x=0x25, .y=0x3a, .sp=0xa0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x68c1, .value=0xc8}, {.addr=0x68c2, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x68c1, .value=0xc8, .type=IO_READ},
        {.addr=0x68c2, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xd820, .a=0x0c, .x=0x4a, .y=0x82, .sp=0xd7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd820, .value=0xc8}, {.addr=0xd821, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xd822, .a=0x0c, .x=0x4a, .y=0x82, .sp=0xd7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd820, .value=0xc8}, {.addr=0xd821, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xd820, .value=0xc8, .type=IO_READ},
        {.addr=0xd821, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xcfb5, .a=0xec, .x=0xcb, .y=0xe1, .sp=0x48, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb5, .value=0xc8}, {.addr=0xcfb6, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xcfb7, .a=0xec, .x=0xcb, .y=0xe1, .sp=0x48, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xcfb5, .value=0xc8}, {.addr=0xcfb6, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xcfb5, .value=0xc8, .type=IO_READ},
        {.addr=0xcfb6, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x3a17, .a=0xe9, .x=0xa6, .y=0x16, .sp=0x67, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a17, .value=0xc8}, {.addr=0x3a18, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3a19, .a=0xe9, .x=0xa6, .y=0x16, .sp=0x67, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3a17, .value=0xc8}, {.addr=0x3a18, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3a17, .value=0xc8, .type=IO_READ},
        {.addr=0x3a18, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x6f5a, .a=0x80, .x=0x21, .y=0x8d, .sp=0x07, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x6f5a, .value=0xc8}, {.addr=0x6f5b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6f5c, .a=0x80, .x=0x21, .y=0x8d, .sp=0x07, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6f5a, .value=0xc8}, {.addr=0x6f5b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x6f5a, .value=0xc8, .type=IO_READ},
        {.addr=0x6f5b, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x8525, .a=0x22, .x=0xf9, .y=0xdb, .sp=0x5e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8525, .value=0xc8}, {.addr=0x8526, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x8527, .a=0x22, .x=0xf9, .y=0xdb, .sp=0x5e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8525, .value=0xc8}, {.addr=0x8526, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x8525, .value=0xc8, .type=IO_READ},
        {.addr=0x8526, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xb5b7, .a=0xb5, .x=0xac, .y=0x08, .sp=0x00, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b7, .value=0xc8}, {.addr=0xb5b8, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xb5b9, .a=0xb5, .x=0xac, .y=0x08, .sp=0x00, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb5b7, .value=0xc8}, {.addr=0xb5b8, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xb5b7, .value=0xc8, .type=IO_READ},
        {.addr=0xb5b8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xf44b, .a=0xb4, .x=0xa2, .y=0x53, .sp=0x73, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf44b, .value=0xc8}, {.addr=0xf44c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xf44d, .a=0xb4, .x=0xa2, .y=0x53, .sp=0x73, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf44b, .value=0xc8}, {.addr=0xf44c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xf44b, .value=0xc8, .type=IO_READ},
        {.addr=0xf44c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x2d0e, .a=0x1e, .x=0x56, .y=0x63, .sp=0xc1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2d0e, .value=0xc8}, {.addr=0x2d0f, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x2d10, .a=0x1e, .x=0x56, .y=0x63, .sp=0xc1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2d0e, .value=0xc8}, {.addr=0x2d0f, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x2d0e, .value=0xc8, .type=IO_READ},
        {.addr=0x2d0f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x396b, .a=0x49, .x=0x12, .y=0x72, .sp=0xa0, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x396b, .value=0xc8}, {.addr=0x396c, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x396d, .a=0x49, .x=0x12, .y=0x72, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x396b, .value=0xc8}, {.addr=0x396c, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x396b, .value=0xc8, .type=IO_READ},
        {.addr=0x396c, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xe5f3, .a=0x90, .x=0x8b, .y=0xd1, .sp=0xa3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f3, .value=0xc8}, {.addr=0xe5f4, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe5f5, .a=0x90, .x=0x8b, .y=0xd1, .sp=0xa3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe5f3, .value=0xc8}, {.addr=0xe5f4, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe5f3, .value=0xc8, .type=IO_READ},
        {.addr=0xe5f4, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x4f57, .a=0xa8, .x=0x3d, .y=0xfa, .sp=0xc8, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4f57, .value=0xc8}, {.addr=0x4f58, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x4f59, .a=0xa8, .x=0x3d, .y=0xfa, .sp=0xc8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4f57, .value=0xc8}, {.addr=0x4f58, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x4f57, .value=0xc8, .type=IO_READ},
        {.addr=0x4f58, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x1f88, .a=0xed, .x=0xfa, .y=0xd9, .sp=0x5f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1f88, .value=0xc8}, {.addr=0x1f89, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x1f8a, .a=0xed, .x=0xfa, .y=0xd9, .sp=0x5f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1f88, .value=0xc8}, {.addr=0x1f89, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x1f88, .value=0xc8, .type=IO_READ},
        {.addr=0x1f89, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xf44e, .a=0xce, .x=0xa3, .y=0x06, .sp=0x78, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf44e, .value=0xc8}, {.addr=0xf44f, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xf450, .a=0xce, .x=0xa3, .y=0x06, .sp=0x78, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf44e, .value=0xc8}, {.addr=0xf44f, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xf44e, .value=0xc8, .type=IO_READ},
        {.addr=0xf44f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x3686, .a=0xcc, .x=0xf6, .y=0xd1, .sp=0x99, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x3686, .value=0xc8}, {.addr=0x3687, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x3688, .a=0xcc, .x=0xf6, .y=0xd1, .sp=0x99, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3686, .value=0xc8}, {.addr=0x3687, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x3686, .value=0xc8, .type=IO_READ},
        {.addr=0x3687, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xdb5e, .a=0xd6, .x=0xf8, .y=0x08, .sp=0x4e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb5e, .value=0xc8}, {.addr=0xdb5f, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xdb60, .a=0xd6, .x=0xf8, .y=0x08, .sp=0x4e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xdb5e, .value=0xc8}, {.addr=0xdb5f, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xdb5e, .value=0xc8, .type=IO_READ},
        {.addr=0xdb5f, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xaace, .a=0x3e, .x=0x57, .y=0x61, .sp=0x15, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xaace, .value=0xc8}, {.addr=0xaacf, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xaad0, .a=0x3e, .x=0x57, .y=0x61, .sp=0x15, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xaace, .value=0xc8}, {.addr=0xaacf, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xaace, .value=0xc8, .type=IO_READ},
        {.addr=0xaacf, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x8d21, .a=0x51, .x=0xfa, .y=0x04, .sp=0x46, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8d21, .value=0xc8}, {.addr=0x8d22, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x8d23, .a=0x51, .x=0xfa, .y=0x04, .sp=0x46, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8d21, .value=0xc8}, {.addr=0x8d22, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x8d21, .value=0xc8, .type=IO_READ},
        {.addr=0x8d22, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xb39c, .a=0x75, .x=0x67, .y=0x6b, .sp=0x17, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb39c, .value=0xc8}, {.addr=0xb39d, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xb39e, .a=0x75, .x=0x67, .y=0x6b, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb39c, .value=0xc8}, {.addr=0xb39d, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xb39c, .value=0xc8, .type=IO_READ},
        {.addr=0xb39d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x88d8, .a=0x45, .x=0x83, .y=0xe9, .sp=0xc8, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x88d8, .value=0xc8}, {.addr=0x88d9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x88da, .a=0x45, .x=0x83, .y=0xe9, .sp=0xc8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x88d8, .value=0xc8}, {.addr=0x88d9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x88d8, .value=0xc8, .type=IO_READ},
        {.addr=0x88d9, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xbcae, .a=0xd1, .x=0xe3, .y=0xde, .sp=0x8e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xbcae, .value=0xc8}, {.addr=0xbcaf, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xbcb0, .a=0xd1, .x=0xe3, .y=0xde, .sp=0x8e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbcae, .value=0xc8}, {.addr=0xbcaf, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xbcae, .value=0xc8, .type=IO_READ},
        {.addr=0xbcaf, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2983, .a=0xd4, .x=0x41, .y=0xfc, .sp=0x28, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2983, .value=0xc8}, {.addr=0x2984, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2985, .a=0xd4, .x=0x41, .y=0xfc, .sp=0x28, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2983, .value=0xc8}, {.addr=0x2984, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2983, .value=0xc8, .type=IO_READ},
        {.addr=0x2984, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9635, .a=0x67, .x=0x69, .y=0xb8, .sp=0xd6, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9635, .value=0xc8}, {.addr=0x9636, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9637, .a=0x67, .x=0x69, .y=0xb8, .sp=0xd6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9635, .value=0xc8}, {.addr=0x9636, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9635, .value=0xc8, .type=IO_READ},
        {.addr=0x9636, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x3371, .a=0x85, .x=0x1b, .y=0x2f, .sp=0x3d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x3371, .value=0xc8}, {.addr=0x3372, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x3373, .a=0x85, .x=0x1b, .y=0x2f, .sp=0x3d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3371, .value=0xc8}, {.addr=0x3372, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x3371, .value=0xc8, .type=IO_READ},
        {.addr=0x3372, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xd317, .a=0xc8, .x=0xc6, .y=0x65, .sp=0x13, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd317, .value=0xc8}, {.addr=0xd318, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd319, .a=0xc8, .x=0xc6, .y=0x65, .sp=0x13, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd317, .value=0xc8}, {.addr=0xd318, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd317, .value=0xc8, .type=IO_READ},
        {.addr=0xd318, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x377f, .a=0xc8, .x=0xa7, .y=0xd3, .sp=0xa6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x377f, .value=0xc8}, {.addr=0x3780, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x3781, .a=0xc8, .x=0xa7, .y=0xd3, .sp=0xa6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x377f, .value=0xc8}, {.addr=0x3780, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x377f, .value=0xc8, .type=IO_READ},
        {.addr=0x3780, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x5d77, .a=0x5c, .x=0xc1, .y=0x03, .sp=0x29, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x5d77, .value=0xc8}, {.addr=0x5d78, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5d79, .a=0x5c, .x=0xc1, .y=0x03, .sp=0x29, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5d77, .value=0xc8}, {.addr=0x5d78, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5d77, .value=0xc8, .type=IO_READ},
        {.addr=0x5d78, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x1311, .a=0x69, .x=0xb2, .y=0x51, .sp=0x69, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1311, .value=0xc8}, {.addr=0x1312, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x1313, .a=0x69, .x=0xb2, .y=0x51, .sp=0x69, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1311, .value=0xc8}, {.addr=0x1312, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x1311, .value=0xc8, .type=IO_READ},
        {.addr=0x1312, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x2c54, .a=0x36, .x=0xc4, .y=0x7d, .sp=0xc7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2c54, .value=0xc8}, {.addr=0x2c55, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x2c56, .a=0x36, .x=0xc4, .y=0x7d, .sp=0xc7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2c54, .value=0xc8}, {.addr=0x2c55, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x2c54, .value=0xc8, .type=IO_READ},
        {.addr=0x2c55, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xd762, .a=0x1c, .x=0x88, .y=0x2e, .sp=0x31, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd762, .value=0xc8}, {.addr=0xd763, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xd764, .a=0x1c, .x=0x88, .y=0x2e, .sp=0x31, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd762, .value=0xc8}, {.addr=0xd763, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xd762, .value=0xc8, .type=IO_READ},
        {.addr=0xd763, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x9dc2, .a=0x26, .x=0x96, .y=0xd4, .sp=0x03, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc2, .value=0xc8}, {.addr=0x9dc3, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x9dc4, .a=0x26, .x=0x96, .y=0xd4, .sp=0x03, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9dc2, .value=0xc8}, {.addr=0x9dc3, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x9dc2, .value=0xc8, .type=IO_READ},
        {.addr=0x9dc3, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x9679, .a=0xcf, .x=0x0d, .y=0x65, .sp=0x4e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x9679, .value=0xc8}, {.addr=0x967a, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x967b, .a=0xcf, .x=0x0d, .y=0x65, .sp=0x4e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9679, .value=0xc8}, {.addr=0x967a, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x9679, .value=0xc8, .type=IO_READ},
        {.addr=0x967a, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x7bc8, .a=0x9e, .x=0x8e, .y=0xc5, .sp=0xf5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7bc8, .value=0xc8}, {.addr=0x7bc9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7bca, .a=0x9e, .x=0x8e, .y=0xc5, .sp=0xf5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7bc8, .value=0xc8}, {.addr=0x7bc9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7bc8, .value=0xc8, .type=IO_READ},
        {.addr=0x7bc9, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x4ecd, .a=0x71, .x=0x8d, .y=0x77, .sp=0x2c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ecd, .value=0xc8}, {.addr=0x4ece, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4ecf, .a=0x71, .x=0x8d, .y=0x77, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4ecd, .value=0xc8}, {.addr=0x4ece, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x4ecd, .value=0xc8, .type=IO_READ},
        {.addr=0x4ece, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x4e9e, .a=0x20, .x=0xc9, .y=0xd4, .sp=0xe5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9e, .value=0xc8}, {.addr=0x4e9f, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x4ea0, .a=0x20, .x=0xc9, .y=0xd4, .sp=0xe5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4e9e, .value=0xc8}, {.addr=0x4e9f, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x4e9e, .value=0xc8, .type=IO_READ},
        {.addr=0x4e9f, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x4a00, .a=0x80, .x=0xfb, .y=0xf8, .sp=0xe5, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4a00, .value=0xc8}, {.addr=0x4a01, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x4a02, .a=0x80, .x=0xfb, .y=0xf8, .sp=0xe5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4a00, .value=0xc8}, {.addr=0x4a01, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x4a00, .value=0xc8, .type=IO_READ},
        {.addr=0x4a01, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x957a, .a=0xfd, .x=0x79, .y=0x76, .sp=0x74, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x957a, .value=0xc8}, {.addr=0x957b, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x957c, .a=0xfd, .x=0x79, .y=0x76, .sp=0x74, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x957a, .value=0xc8}, {.addr=0x957b, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x957a, .value=0xc8, .type=IO_READ},
        {.addr=0x957b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x0075, .a=0x47, .x=0x8d, .y=0x25, .sp=0x6d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xc8}, {.addr=0x0076, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x0077, .a=0x47, .x=0x8d, .y=0x25, .sp=0x6d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xc8}, {.addr=0x0076, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x0075, .value=0xc8, .type=IO_READ},
        {.addr=0x0076, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x8064, .a=0x25, .x=0x88, .y=0xf5, .sp=0xa8, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8064, .value=0xc8}, {.addr=0x8065, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x8066, .a=0x25, .x=0x88, .y=0xf5, .sp=0xa8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8064, .value=0xc8}, {.addr=0x8065, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x8064, .value=0xc8, .type=IO_READ},
        {.addr=0x8065, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xc5ab, .a=0x8b, .x=0x25, .y=0xdc, .sp=0x21, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc5ab, .value=0xc8}, {.addr=0xc5ac, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xc5ad, .a=0x8b, .x=0x25, .y=0xdc, .sp=0x21, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc5ab, .value=0xc8}, {.addr=0xc5ac, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xc5ab, .value=0xc8, .type=IO_READ},
        {.addr=0xc5ac, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x5156, .a=0xc4, .x=0x5b, .y=0x24, .sp=0xf7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5156, .value=0xc8}, {.addr=0x5157, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5158, .a=0xc4, .x=0x5b, .y=0x24, .sp=0xf7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5156, .value=0xc8}, {.addr=0x5157, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5156, .value=0xc8, .type=IO_READ},
        {.addr=0x5157, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xa107, .a=0x11, .x=0x30, .y=0x6a, .sp=0x74, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa107, .value=0xc8}, {.addr=0xa108, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xa109, .a=0x11, .x=0x30, .y=0x6a, .sp=0x74, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa107, .value=0xc8}, {.addr=0xa108, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xa107, .value=0xc8, .type=IO_READ},
        {.addr=0xa108, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xeebf, .a=0x74, .x=0x5a, .y=0x4e, .sp=0x13, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xeebf, .value=0xc8}, {.addr=0xeec0, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xeec1, .a=0x74, .x=0x5a, .y=0x4e, .sp=0x13, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xeebf, .value=0xc8}, {.addr=0xeec0, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xeebf, .value=0xc8, .type=IO_READ},
        {.addr=0xeec0, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x710a, .a=0xa6, .x=0xc0, .y=0xba, .sp=0x01, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x710a, .value=0xc8}, {.addr=0x710b, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x710c, .a=0xa6, .x=0xc0, .y=0xba, .sp=0x01, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x710a, .value=0xc8}, {.addr=0x710b, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x710a, .value=0xc8, .type=IO_READ},
        {.addr=0x710b, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x2f0c, .a=0x81, .x=0x36, .y=0xd6, .sp=0xd3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2f0c, .value=0xc8}, {.addr=0x2f0d, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x2f0e, .a=0x81, .x=0x36, .y=0xd6, .sp=0xd3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2f0c, .value=0xc8}, {.addr=0x2f0d, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x2f0c, .value=0xc8, .type=IO_READ},
        {.addr=0x2f0d, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xe29e, .a=0x22, .x=0x19, .y=0x45, .sp=0x6c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xe29e, .value=0xc8}, {.addr=0xe29f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xe2a0, .a=0x22, .x=0x19, .y=0x45, .sp=0x6c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe29e, .value=0xc8}, {.addr=0xe29f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xe29e, .value=0xc8, .type=IO_READ},
        {.addr=0xe29f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xbb35, .a=0xde, .x=0x8e, .y=0xdd, .sp=0x76, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xbb35, .value=0xc8}, {.addr=0xbb36, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xbb37, .a=0xde, .x=0x8e, .y=0xdd, .sp=0x76, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xbb35, .value=0xc8}, {.addr=0xbb36, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xbb35, .value=0xc8, .type=IO_READ},
        {.addr=0xbb36, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x46a2, .a=0xc8, .x=0xbf, .y=0x9a, .sp=0x36, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x46a2, .value=0xc8}, {.addr=0x46a3, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x46a4, .a=0xc8, .x=0xbf, .y=0x9a, .sp=0x36, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x46a2, .value=0xc8}, {.addr=0x46a3, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x46a2, .value=0xc8, .type=IO_READ},
        {.addr=0x46a3, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xfe99, .a=0x29, .x=0x8d, .y=0x4e, .sp=0xfb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xfe99, .value=0xc8}, {.addr=0xfe9a, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xfe9b, .a=0x29, .x=0x8d, .y=0x4e, .sp=0xfb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfe99, .value=0xc8}, {.addr=0xfe9a, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xfe99, .value=0xc8, .type=IO_READ},
        {.addr=0xfe9a, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x354b, .a=0x18, .x=0xe0, .y=0xa4, .sp=0xa9, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x354b, .value=0xc8}, {.addr=0x354c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x354d, .a=0x18, .x=0xe0, .y=0xa4, .sp=0xa9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x354b, .value=0xc8}, {.addr=0x354c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x354b, .value=0xc8, .type=IO_READ},
        {.addr=0x354c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x82da, .a=0x18, .x=0x4e, .y=0xe5, .sp=0x4d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x82da, .value=0xc8}, {.addr=0x82db, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x82dc, .a=0x18, .x=0x4e, .y=0xe5, .sp=0x4d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x82da, .value=0xc8}, {.addr=0x82db, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x82da, .value=0xc8, .type=IO_READ},
        {.addr=0x82db, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9c05, .a=0x64, .x=0x9f, .y=0xb7, .sp=0x35, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x9c05, .value=0xc8}, {.addr=0x9c06, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9c07, .a=0x64, .x=0x9f, .y=0xb7, .sp=0x35, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x9c05, .value=0xc8}, {.addr=0x9c06, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9c05, .value=0xc8, .type=IO_READ},
        {.addr=0x9c06, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x3244, .a=0xbd, .x=0x95, .y=0xc8, .sp=0xcf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3244, .value=0xc8}, {.addr=0x3245, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x3246, .a=0xbd, .x=0x95, .y=0xc8, .sp=0xcf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3244, .value=0xc8}, {.addr=0x3245, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x3244, .value=0xc8, .type=IO_READ},
        {.addr=0x3245, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x6ca1, .a=0x99, .x=0x76, .y=0x15, .sp=0x23, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca1, .value=0xc8}, {.addr=0x6ca2, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x6ca3, .a=0x99, .x=0x76, .y=0x15, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6ca1, .value=0xc8}, {.addr=0x6ca2, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x6ca1, .value=0xc8, .type=IO_READ},
        {.addr=0x6ca2, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xf0da, .a=0xfd, .x=0x16, .y=0xe6, .sp=0x74, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xf0da, .value=0xc8}, {.addr=0xf0db, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xf0dc, .a=0xfd, .x=0x16, .y=0xe6, .sp=0x74, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf0da, .value=0xc8}, {.addr=0xf0db, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xf0da, .value=0xc8, .type=IO_READ},
        {.addr=0xf0db, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xe4c5, .a=0x1b, .x=0xe3, .y=0x13, .sp=0xe9, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c5, .value=0xc8}, {.addr=0xe4c6, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xe4c7, .a=0x1b, .x=0xe3, .y=0x13, .sp=0xe9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe4c5, .value=0xc8}, {.addr=0xe4c6, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xe4c5, .value=0xc8, .type=IO_READ},
        {.addr=0xe4c6, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x25fc, .a=0xf6, .x=0x86, .y=0x19, .sp=0x87, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x25fc, .value=0xc8}, {.addr=0x25fd, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x25fe, .a=0xf6, .x=0x86, .y=0x19, .sp=0x87, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x25fc, .value=0xc8}, {.addr=0x25fd, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x25fc, .value=0xc8, .type=IO_READ},
        {.addr=0x25fd, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x412b, .a=0x6f, .x=0x14, .y=0xce, .sp=0xe4, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x412b, .value=0xc8}, {.addr=0x412c, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x412d, .a=0x6f, .x=0x14, .y=0xce, .sp=0xe4, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x412b, .value=0xc8}, {.addr=0x412c, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x412b, .value=0xc8, .type=IO_READ},
        {.addr=0x412c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x7620, .a=0xc1, .x=0x91, .y=0x2a, .sp=0xe1, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x7620, .value=0xc8}, {.addr=0x7621, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x7622, .a=0xc1, .x=0x91, .y=0x2a, .sp=0xe1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7620, .value=0xc8}, {.addr=0x7621, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x7620, .value=0xc8, .type=IO_READ},
        {.addr=0x7621, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x3169, .a=0xf7, .x=0xda, .y=0x24, .sp=0xf2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3169, .value=0xc8}, {.addr=0x316a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x316b, .a=0xf7, .x=0xda, .y=0x24, .sp=0xf2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3169, .value=0xc8}, {.addr=0x316a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3169, .value=0xc8, .type=IO_READ},
        {.addr=0x316a, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x8893, .a=0x59, .x=0x56, .y=0xf7, .sp=0x0e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x8893, .value=0xc8}, {.addr=0x8894, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8895, .a=0x59, .x=0x56, .y=0xf7, .sp=0x0e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8893, .value=0xc8}, {.addr=0x8894, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x8893, .value=0xc8, .type=IO_READ},
        {.addr=0x8894, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xb4a5, .a=0xd0, .x=0x1d, .y=0x15, .sp=0x31, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xb4a5, .value=0xc8}, {.addr=0xb4a6, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xb4a7, .a=0xd0, .x=0x1d, .y=0x15, .sp=0x31, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb4a5, .value=0xc8}, {.addr=0xb4a6, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xb4a5, .value=0xc8, .type=IO_READ},
        {.addr=0xb4a6, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x1b6a, .a=0xe6, .x=0x59, .y=0x99, .sp=0x52, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x1b6a, .value=0xc8}, {.addr=0x1b6b, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x1b6c, .a=0xe6, .x=0x59, .y=0x99, .sp=0x52, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1b6a, .value=0xc8}, {.addr=0x1b6b, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x1b6a, .value=0xc8, .type=IO_READ},
        {.addr=0x1b6b, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x27c6, .a=0x90, .x=0xd8, .y=0xf7, .sp=0xcd, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x27c6, .value=0xc8}, {.addr=0x27c7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x27c8, .a=0x90, .x=0xd8, .y=0xf7, .sp=0xcd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x27c6, .value=0xc8}, {.addr=0x27c7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x27c6, .value=0xc8, .type=IO_READ},
        {.addr=0x27c7, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x6912, .a=0x61, .x=0xf7, .y=0x22, .sp=0x71, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6912, .value=0xc8}, {.addr=0x6913, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x6914, .a=0x61, .x=0xf7, .y=0x22, .sp=0x71, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6912, .value=0xc8}, {.addr=0x6913, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x6912, .value=0xc8, .type=IO_READ},
        {.addr=0x6913, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2a14, .a=0x6a, .x=0x03, .y=0xb3, .sp=0x19, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2a14, .value=0xc8}, {.addr=0x2a15, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x2a16, .a=0x6a, .x=0x03, .y=0xb3, .sp=0x19, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2a14, .value=0xc8}, {.addr=0x2a15, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x2a14, .value=0xc8, .type=IO_READ},
        {.addr=0x2a15, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xf234, .a=0xca, .x=0xad, .y=0x6f, .sp=0x50, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf234, .value=0xc8}, {.addr=0xf235, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf236, .a=0xca, .x=0xad, .y=0x6f, .sp=0x50, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf234, .value=0xc8}, {.addr=0xf235, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf234, .value=0xc8, .type=IO_READ},
        {.addr=0xf235, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x9c6f, .a=0xdc, .x=0x26, .y=0x88, .sp=0xfe, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9c6f, .value=0xc8}, {.addr=0x9c70, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9c71, .a=0xdc, .x=0x26, .y=0x88, .sp=0xfe, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9c6f, .value=0xc8}, {.addr=0x9c70, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9c6f, .value=0xc8, .type=IO_READ},
        {.addr=0x9c70, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xf4ab, .a=0x82, .x=0xdf, .y=0x9e, .sp=0xcb, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ab, .value=0xc8}, {.addr=0xf4ac, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xf4ad, .a=0x82, .x=0xdf, .y=0x9e, .sp=0xcb, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf4ab, .value=0xc8}, {.addr=0xf4ac, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xf4ab, .value=0xc8, .type=IO_READ},
        {.addr=0xf4ac, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xa14b, .a=0xb3, .x=0xb0, .y=0x5b, .sp=0x7f, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa14b, .value=0xc8}, {.addr=0xa14c, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xa14d, .a=0xb3, .x=0xb0, .y=0x5b, .sp=0x7f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa14b, .value=0xc8}, {.addr=0xa14c, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xa14b, .value=0xc8, .type=IO_READ},
        {.addr=0xa14c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x50da, .a=0xba, .x=0x19, .y=0xd2, .sp=0xf0, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x50da, .value=0xc8}, {.addr=0x50db, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x50dc, .a=0xba, .x=0x19, .y=0xd2, .sp=0xf0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x50da, .value=0xc8}, {.addr=0x50db, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x50da, .value=0xc8, .type=IO_READ},
        {.addr=0x50db, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xe51a, .a=0xda, .x=0x73, .y=0xf8, .sp=0x1b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe51a, .value=0xc8}, {.addr=0xe51b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xe51c, .a=0xda, .x=0x73, .y=0xf8, .sp=0x1b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe51a, .value=0xc8}, {.addr=0xe51b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xe51a, .value=0xc8, .type=IO_READ},
        {.addr=0xe51b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x7ea2, .a=0x67, .x=0xeb, .y=0x00, .sp=0xfd, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea2, .value=0xc8}, {.addr=0x7ea3, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x7ea4, .a=0x67, .x=0xeb, .y=0x00, .sp=0xfd, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7ea2, .value=0xc8}, {.addr=0x7ea3, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x7ea2, .value=0xc8, .type=IO_READ},
        {.addr=0x7ea3, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0100) {
    const struct CPU_State initial_cpu = {.pc=0x00de, .a=0xb9, .x=0xa3, .y=0x6e, .sp=0x4f, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0xc8}, {.addr=0x00df, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x00e0, .a=0xb9, .x=0xa3, .y=0x6e, .sp=0x4f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0xc8}, {.addr=0x00df, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x00de, .value=0xc8, .type=IO_READ},
        {.addr=0x00df, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0101) {
    const struct CPU_State initial_cpu = {.pc=0xc1b8, .a=0x89, .x=0x0b, .y=0x18, .sp=0xd7, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc1b8, .value=0xc8}, {.addr=0xc1b9, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xc1ba, .a=0x89, .x=0x0b, .y=0x18, .sp=0xd7, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc1b8, .value=0xc8}, {.addr=0xc1b9, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xc1b8, .value=0xc8, .type=IO_READ},
        {.addr=0xc1b9, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0102) {
    const struct CPU_State initial_cpu = {.pc=0x57dc, .a=0x1a, .x=0xd1, .y=0x2f, .sp=0xef, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x57dc, .value=0xc8}, {.addr=0x57dd, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x57de, .a=0x1a, .x=0xd1, .y=0x2f, .sp=0xef, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x57dc, .value=0xc8}, {.addr=0x57dd, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x57dc, .value=0xc8, .type=IO_READ},
        {.addr=0x57dd, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0103) {
    const struct CPU_State initial_cpu = {.pc=0x44e1, .a=0x1f, .x=0xe2, .y=0xee, .sp=0xea, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x44e1, .value=0xc8}, {.addr=0x44e2, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x44e3, .a=0x1f, .x=0xe2, .y=0xee, .sp=0xea, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x44e1, .value=0xc8}, {.addr=0x44e2, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x44e1, .value=0xc8, .type=IO_READ},
        {.addr=0x44e2, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0104) {
    const struct CPU_State initial_cpu = {.pc=0xb63a, .a=0x6d, .x=0xc1, .y=0x06, .sp=0x7f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb63a, .value=0xc8}, {.addr=0xb63b, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xb63c, .a=0x6d, .x=0xc1, .y=0x06, .sp=0x7f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb63a, .value=0xc8}, {.addr=0xb63b, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xb63a, .value=0xc8, .type=IO_READ},
        {.addr=0xb63b, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6c53, .a=0x6c, .x=0xd3, .y=0x60, .sp=0x12, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6c53, .value=0xc8}, {.addr=0x6c54, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x6c55, .a=0x6c, .x=0xd3, .y=0x60, .sp=0x12, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6c53, .value=0xc8}, {.addr=0x6c54, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x6c53, .value=0xc8, .type=IO_READ},
        {.addr=0x6c54, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0106) {
    const struct CPU_State initial_cpu = {.pc=0x419d, .a=0x83, .x=0xca, .y=0x5f, .sp=0x21, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x419d, .value=0xc8}, {.addr=0x419e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x419f, .a=0x83, .x=0xca, .y=0x5f, .sp=0x21, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x419d, .value=0xc8}, {.addr=0x419e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x419d, .value=0xc8, .type=IO_READ},
        {.addr=0x419e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0107) {
    const struct CPU_State initial_cpu = {.pc=0x0a20, .a=0xea, .x=0x38, .y=0x10, .sp=0x82, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0a20, .value=0xc8}, {.addr=0x0a21, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0a22, .a=0xea, .x=0x38, .y=0x10, .sp=0x82, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0a20, .value=0xc8}, {.addr=0x0a21, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0a20, .value=0xc8, .type=IO_READ},
        {.addr=0x0a21, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0108) {
    const struct CPU_State initial_cpu = {.pc=0x3bf3, .a=0x91, .x=0x42, .y=0x12, .sp=0xba, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf3, .value=0xc8}, {.addr=0x3bf4, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x3bf5, .a=0x91, .x=0x42, .y=0x12, .sp=0xba, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3bf3, .value=0xc8}, {.addr=0x3bf4, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x3bf3, .value=0xc8, .type=IO_READ},
        {.addr=0x3bf4, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0109) {
    const struct CPU_State initial_cpu = {.pc=0xf27f, .a=0xe5, .x=0x91, .y=0xf6, .sp=0x31, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf27f, .value=0xc8}, {.addr=0xf280, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xf281, .a=0xe5, .x=0x91, .y=0xf6, .sp=0x31, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf27f, .value=0xc8}, {.addr=0xf280, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xf27f, .value=0xc8, .type=IO_READ},
        {.addr=0xf280, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_010A) {
    const struct CPU_State initial_cpu = {.pc=0x2bcd, .a=0xbc, .x=0x42, .y=0x60, .sp=0xce, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2bcd, .value=0xc8}, {.addr=0x2bce, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x2bcf, .a=0xbc, .x=0x42, .y=0x60, .sp=0xce, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2bcd, .value=0xc8}, {.addr=0x2bce, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x2bcd, .value=0xc8, .type=IO_READ},
        {.addr=0x2bce, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1e8d, .a=0xf8, .x=0x72, .y=0x9a, .sp=0x70, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x1e8d, .value=0xc8}, {.addr=0x1e8e, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x1e8f, .a=0xf8, .x=0x72, .y=0x9a, .sp=0x70, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1e8d, .value=0xc8}, {.addr=0x1e8e, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x1e8d, .value=0xc8, .type=IO_READ},
        {.addr=0x1e8e, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_010C) {
    const struct CPU_State initial_cpu = {.pc=0x668b, .a=0xd9, .x=0xa2, .y=0x8d, .sp=0x1d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x668b, .value=0xc8}, {.addr=0x668c, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x668d, .a=0xd9, .x=0xa2, .y=0x8d, .sp=0x1d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x668b, .value=0xc8}, {.addr=0x668c, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x668b, .value=0xc8, .type=IO_READ},
        {.addr=0x668c, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_010D) {
    const struct CPU_State initial_cpu = {.pc=0xd3d2, .a=0xca, .x=0x60, .y=0x10, .sp=0x63, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d2, .value=0xc8}, {.addr=0xd3d3, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xd3d4, .a=0xca, .x=0x60, .y=0x10, .sp=0x63, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd3d2, .value=0xc8}, {.addr=0xd3d3, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xd3d2, .value=0xc8, .type=IO_READ},
        {.addr=0xd3d3, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_010E) {
    const struct CPU_State initial_cpu = {.pc=0x7581, .a=0x95, .x=0x9a, .y=0x61, .sp=0xf0, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7581, .value=0xc8}, {.addr=0x7582, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x7583, .a=0x95, .x=0x9a, .y=0x61, .sp=0xf0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7581, .value=0xc8}, {.addr=0x7582, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x7581, .value=0xc8, .type=IO_READ},
        {.addr=0x7582, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_010F) {
    const struct CPU_State initial_cpu = {.pc=0x6b3b, .a=0x8b, .x=0xd5, .y=0x5c, .sp=0xaa, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3b, .value=0xc8}, {.addr=0x6b3c, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x6b3d, .a=0x8b, .x=0xd5, .y=0x5c, .sp=0xaa, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6b3b, .value=0xc8}, {.addr=0x6b3c, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x6b3b, .value=0xc8, .type=IO_READ},
        {.addr=0x6b3c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0110) {
    const struct CPU_State initial_cpu = {.pc=0x9e00, .a=0x7a, .x=0xb5, .y=0xea, .sp=0x74, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x9e00, .value=0xc8}, {.addr=0x9e01, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9e02, .a=0x7a, .x=0xb5, .y=0xea, .sp=0x74, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9e00, .value=0xc8}, {.addr=0x9e01, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9e00, .value=0xc8, .type=IO_READ},
        {.addr=0x9e01, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0111) {
    const struct CPU_State initial_cpu = {.pc=0xaedc, .a=0x45, .x=0x1d, .y=0xf4, .sp=0x4b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xaedc, .value=0xc8}, {.addr=0xaedd, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xaede, .a=0x45, .x=0x1d, .y=0xf4, .sp=0x4b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xaedc, .value=0xc8}, {.addr=0xaedd, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xaedc, .value=0xc8, .type=IO_READ},
        {.addr=0xaedd, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0112) {
    const struct CPU_State initial_cpu = {.pc=0x5325, .a=0x17, .x=0xd5, .y=0x03, .sp=0x58, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5325, .value=0xc8}, {.addr=0x5326, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5327, .a=0x17, .x=0xd5, .y=0x03, .sp=0x58, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5325, .value=0xc8}, {.addr=0x5326, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5325, .value=0xc8, .type=IO_READ},
        {.addr=0x5326, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0113) {
    const struct CPU_State initial_cpu = {.pc=0x0f3c, .a=0xaa, .x=0x8f, .y=0x56, .sp=0xc6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0f3c, .value=0xc8}, {.addr=0x0f3d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0f3e, .a=0xaa, .x=0x8f, .y=0x56, .sp=0xc6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0f3c, .value=0xc8}, {.addr=0x0f3d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0f3c, .value=0xc8, .type=IO_READ},
        {.addr=0x0f3d, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0114) {
    const struct CPU_State initial_cpu = {.pc=0xafbc, .a=0x8d, .x=0x66, .y=0x38, .sp=0xd5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xafbc, .value=0xc8}, {.addr=0xafbd, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xafbe, .a=0x8d, .x=0x66, .y=0x38, .sp=0xd5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xafbc, .value=0xc8}, {.addr=0xafbd, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xafbc, .value=0xc8, .type=IO_READ},
        {.addr=0xafbd, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0115) {
    const struct CPU_State initial_cpu = {.pc=0x48e2, .a=0x34, .x=0xa9, .y=0xe3, .sp=0xe6, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x48e2, .value=0xc8}, {.addr=0x48e3, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x48e4, .a=0x34, .x=0xa9, .y=0xe3, .sp=0xe6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x48e2, .value=0xc8}, {.addr=0x48e3, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x48e2, .value=0xc8, .type=IO_READ},
        {.addr=0x48e3, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0116) {
    const struct CPU_State initial_cpu = {.pc=0xce90, .a=0x83, .x=0x77, .y=0x6a, .sp=0x9f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xce90, .value=0xc8}, {.addr=0xce91, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xce92, .a=0x83, .x=0x77, .y=0x6a, .sp=0x9f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xce90, .value=0xc8}, {.addr=0xce91, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xce90, .value=0xc8, .type=IO_READ},
        {.addr=0xce91, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0117) {
    const struct CPU_State initial_cpu = {.pc=0x38cc, .a=0xeb, .x=0xc5, .y=0xdc, .sp=0x6e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x38cc, .value=0xc8}, {.addr=0x38cd, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x38ce, .a=0xeb, .x=0xc5, .y=0xdc, .sp=0x6e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x38cc, .value=0xc8}, {.addr=0x38cd, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x38cc, .value=0xc8, .type=IO_READ},
        {.addr=0x38cd, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0118) {
    const struct CPU_State initial_cpu = {.pc=0xa73e, .a=0x0c, .x=0x66, .y=0x2a, .sp=0xa7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa73e, .value=0xc8}, {.addr=0xa73f, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xa740, .a=0x0c, .x=0x66, .y=0x2a, .sp=0xa7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa73e, .value=0xc8}, {.addr=0xa73f, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xa73e, .value=0xc8, .type=IO_READ},
        {.addr=0xa73f, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0119) {
    const struct CPU_State initial_cpu = {.pc=0x7319, .a=0x89, .x=0xdb, .y=0x86, .sp=0xce, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7319, .value=0xc8}, {.addr=0x731a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x731b, .a=0x89, .x=0xdb, .y=0x86, .sp=0xce, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7319, .value=0xc8}, {.addr=0x731a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7319, .value=0xc8, .type=IO_READ},
        {.addr=0x731a, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_011A) {
    const struct CPU_State initial_cpu = {.pc=0x2b9f, .a=0x41, .x=0xad, .y=0xa6, .sp=0x41, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9f, .value=0xc8}, {.addr=0x2ba0, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x2ba1, .a=0x41, .x=0xad, .y=0xa6, .sp=0x41, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2b9f, .value=0xc8}, {.addr=0x2ba0, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x2b9f, .value=0xc8, .type=IO_READ},
        {.addr=0x2ba0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_011B) {
    const struct CPU_State initial_cpu = {.pc=0xbf37, .a=0x51, .x=0xfd, .y=0x83, .sp=0xf9, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xbf37, .value=0xc8}, {.addr=0xbf38, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xbf39, .a=0x51, .x=0xfd, .y=0x83, .sp=0xf9, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbf37, .value=0xc8}, {.addr=0xbf38, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xbf37, .value=0xc8, .type=IO_READ},
        {.addr=0xbf38, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_011C) {
    const struct CPU_State initial_cpu = {.pc=0xc234, .a=0x0d, .x=0xf9, .y=0xd5, .sp=0x68, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc234, .value=0xc8}, {.addr=0xc235, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xc236, .a=0x0d, .x=0xf9, .y=0xd5, .sp=0x68, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc234, .value=0xc8}, {.addr=0xc235, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xc234, .value=0xc8, .type=IO_READ},
        {.addr=0xc235, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_011D) {
    const struct CPU_State initial_cpu = {.pc=0xdce7, .a=0x3e, .x=0x89, .y=0xc8, .sp=0x34, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xdce7, .value=0xc8}, {.addr=0xdce8, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xdce9, .a=0x3e, .x=0x89, .y=0xc8, .sp=0x34, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xdce7, .value=0xc8}, {.addr=0xdce8, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xdce7, .value=0xc8, .type=IO_READ},
        {.addr=0xdce8, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_011E) {
    const struct CPU_State initial_cpu = {.pc=0xc798, .a=0x88, .x=0xfc, .y=0x73, .sp=0x52, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc798, .value=0xc8}, {.addr=0xc799, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc79a, .a=0x88, .x=0xfc, .y=0x73, .sp=0x52, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc798, .value=0xc8}, {.addr=0xc799, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc798, .value=0xc8, .type=IO_READ},
        {.addr=0xc799, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_011F) {
    const struct CPU_State initial_cpu = {.pc=0x6694, .a=0xb4, .x=0xef, .y=0x2a, .sp=0xc1, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6694, .value=0xc8}, {.addr=0x6695, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x6696, .a=0xb4, .x=0xef, .y=0x2a, .sp=0xc1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6694, .value=0xc8}, {.addr=0x6695, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x6694, .value=0xc8, .type=IO_READ},
        {.addr=0x6695, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0120) {
    const struct CPU_State initial_cpu = {.pc=0x7895, .a=0xcc, .x=0xe2, .y=0xe7, .sp=0x38, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7895, .value=0xc8}, {.addr=0x7896, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x7897, .a=0xcc, .x=0xe2, .y=0xe7, .sp=0x38, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7895, .value=0xc8}, {.addr=0x7896, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x7895, .value=0xc8, .type=IO_READ},
        {.addr=0x7896, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0121) {
    const struct CPU_State initial_cpu = {.pc=0x058c, .a=0x58, .x=0x93, .y=0x48, .sp=0x0b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x058c, .value=0xc8}, {.addr=0x058d, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x058e, .a=0x58, .x=0x93, .y=0x48, .sp=0x0b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x058c, .value=0xc8}, {.addr=0x058d, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x058c, .value=0xc8, .type=IO_READ},
        {.addr=0x058d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0122) {
    const struct CPU_State initial_cpu = {.pc=0xab0f, .a=0xcc, .x=0xe7, .y=0xa7, .sp=0x83, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xab0f, .value=0xc8}, {.addr=0xab10, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xab11, .a=0xcc, .x=0xe7, .y=0xa7, .sp=0x83, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xab0f, .value=0xc8}, {.addr=0xab10, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xab0f, .value=0xc8, .type=IO_READ},
        {.addr=0xab10, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0123) {
    const struct CPU_State initial_cpu = {.pc=0xf1cc, .a=0xda, .x=0xf9, .y=0xa5, .sp=0xea, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xf1cc, .value=0xc8}, {.addr=0xf1cd, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xf1ce, .a=0xda, .x=0xf9, .y=0xa5, .sp=0xea, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf1cc, .value=0xc8}, {.addr=0xf1cd, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xf1cc, .value=0xc8, .type=IO_READ},
        {.addr=0xf1cd, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0124) {
    const struct CPU_State initial_cpu = {.pc=0x6af0, .a=0x4d, .x=0x57, .y=0xe8, .sp=0x7f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x6af0, .value=0xc8}, {.addr=0x6af1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6af2, .a=0x4d, .x=0x57, .y=0xe8, .sp=0x7f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6af0, .value=0xc8}, {.addr=0x6af1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6af0, .value=0xc8, .type=IO_READ},
        {.addr=0x6af1, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0125) {
    const struct CPU_State initial_cpu = {.pc=0xc25d, .a=0x40, .x=0xb2, .y=0x95, .sp=0xd8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc25d, .value=0xc8}, {.addr=0xc25e, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc25f, .a=0x40, .x=0xb2, .y=0x95, .sp=0xd8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc25d, .value=0xc8}, {.addr=0xc25e, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xc25d, .value=0xc8, .type=IO_READ},
        {.addr=0xc25e, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0126) {
    const struct CPU_State initial_cpu = {.pc=0x34ec, .a=0x35, .x=0xec, .y=0x8c, .sp=0x3e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x34ec, .value=0xc8}, {.addr=0x34ed, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x34ee, .a=0x35, .x=0xec, .y=0x8c, .sp=0x3e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x34ec, .value=0xc8}, {.addr=0x34ed, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x34ec, .value=0xc8, .type=IO_READ},
        {.addr=0x34ed, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0127) {
    const struct CPU_State initial_cpu = {.pc=0x1ef4, .a=0x07, .x=0x3b, .y=0x14, .sp=0x00, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef4, .value=0xc8}, {.addr=0x1ef5, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x1ef6, .a=0x07, .x=0x3b, .y=0x14, .sp=0x00, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x1ef4, .value=0xc8}, {.addr=0x1ef5, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x1ef4, .value=0xc8, .type=IO_READ},
        {.addr=0x1ef5, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0128) {
    const struct CPU_State initial_cpu = {.pc=0x8f13, .a=0x8f, .x=0xa6, .y=0x3b, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8f13, .value=0xc8}, {.addr=0x8f14, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x8f15, .a=0x8f, .x=0xa6, .y=0x3b, .sp=0x62, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8f13, .value=0xc8}, {.addr=0x8f14, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x8f13, .value=0xc8, .type=IO_READ},
        {.addr=0x8f14, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0129) {
    const struct CPU_State initial_cpu = {.pc=0x6309, .a=0xaf, .x=0x2c, .y=0x2e, .sp=0x3e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6309, .value=0xc8}, {.addr=0x630a, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x630b, .a=0xaf, .x=0x2c, .y=0x2e, .sp=0x3e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6309, .value=0xc8}, {.addr=0x630a, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x6309, .value=0xc8, .type=IO_READ},
        {.addr=0x630a, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_012A) {
    const struct CPU_State initial_cpu = {.pc=0x80c6, .a=0xaa, .x=0x70, .y=0x03, .sp=0x69, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x80c6, .value=0xc8}, {.addr=0x80c7, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x80c8, .a=0xaa, .x=0x70, .y=0x03, .sp=0x69, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x80c6, .value=0xc8}, {.addr=0x80c7, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x80c6, .value=0xc8, .type=IO_READ},
        {.addr=0x80c7, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_012B) {
    const struct CPU_State initial_cpu = {.pc=0x836f, .a=0x3b, .x=0x9f, .y=0x96, .sp=0x00, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x836f, .value=0xc8}, {.addr=0x8370, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x8371, .a=0x3b, .x=0x9f, .y=0x96, .sp=0x00, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x836f, .value=0xc8}, {.addr=0x8370, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x836f, .value=0xc8, .type=IO_READ},
        {.addr=0x8370, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_012C) {
    const struct CPU_State initial_cpu = {.pc=0xe2ca, .a=0x47, .x=0xde, .y=0x21, .sp=0xc2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ca, .value=0xc8}, {.addr=0xe2cb, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xe2cc, .a=0x47, .x=0xde, .y=0x21, .sp=0xc2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe2ca, .value=0xc8}, {.addr=0xe2cb, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xe2ca, .value=0xc8, .type=IO_READ},
        {.addr=0xe2cb, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_012D) {
    const struct CPU_State initial_cpu = {.pc=0xbf29, .a=0xb8, .x=0xf5, .y=0x34, .sp=0x7d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xbf29, .value=0xc8}, {.addr=0xbf2a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xbf2b, .a=0xb8, .x=0xf5, .y=0x34, .sp=0x7d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbf29, .value=0xc8}, {.addr=0xbf2a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xbf29, .value=0xc8, .type=IO_READ},
        {.addr=0xbf2a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_012E) {
    const struct CPU_State initial_cpu = {.pc=0xccd1, .a=0xd2, .x=0xb3, .y=0x70, .sp=0x77, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xccd1, .value=0xc8}, {.addr=0xccd2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xccd3, .a=0xd2, .x=0xb3, .y=0x70, .sp=0x77, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xccd1, .value=0xc8}, {.addr=0xccd2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xccd1, .value=0xc8, .type=IO_READ},
        {.addr=0xccd2, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_012F) {
    const struct CPU_State initial_cpu = {.pc=0x3d84, .a=0xd4, .x=0x6c, .y=0x7a, .sp=0x41, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3d84, .value=0xc8}, {.addr=0x3d85, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x3d86, .a=0xd4, .x=0x6c, .y=0x7a, .sp=0x41, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3d84, .value=0xc8}, {.addr=0x3d85, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x3d84, .value=0xc8, .type=IO_READ},
        {.addr=0x3d85, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0130) {
    const struct CPU_State initial_cpu = {.pc=0x1789, .a=0x4d, .x=0x50, .y=0x54, .sp=0x4b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1789, .value=0xc8}, {.addr=0x178a, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x178b, .a=0x4d, .x=0x50, .y=0x54, .sp=0x4b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1789, .value=0xc8}, {.addr=0x178a, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x1789, .value=0xc8, .type=IO_READ},
        {.addr=0x178a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0131) {
    const struct CPU_State initial_cpu = {.pc=0x289e, .a=0xbc, .x=0xbf, .y=0x39, .sp=0xb4, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x289e, .value=0xc8}, {.addr=0x289f, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x28a0, .a=0xbc, .x=0xbf, .y=0x39, .sp=0xb4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x289e, .value=0xc8}, {.addr=0x289f, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x289e, .value=0xc8, .type=IO_READ},
        {.addr=0x289f, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0132) {
    const struct CPU_State initial_cpu = {.pc=0x5be2, .a=0xb1, .x=0x9e, .y=0x1a, .sp=0xe8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x5be2, .value=0xc8}, {.addr=0x5be3, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x5be4, .a=0xb1, .x=0x9e, .y=0x1a, .sp=0xe8, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5be2, .value=0xc8}, {.addr=0x5be3, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x5be2, .value=0xc8, .type=IO_READ},
        {.addr=0x5be3, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0133) {
    const struct CPU_State initial_cpu = {.pc=0x7a47, .a=0xda, .x=0xc4, .y=0x45, .sp=0xa6, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7a47, .value=0xc8}, {.addr=0x7a48, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x7a49, .a=0xda, .x=0xc4, .y=0x45, .sp=0xa6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7a47, .value=0xc8}, {.addr=0x7a48, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x7a47, .value=0xc8, .type=IO_READ},
        {.addr=0x7a48, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0134) {
    const struct CPU_State initial_cpu = {.pc=0x1592, .a=0xd7, .x=0x1c, .y=0x2f, .sp=0xb3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1592, .value=0xc8}, {.addr=0x1593, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1594, .a=0xd7, .x=0x1c, .y=0x2f, .sp=0xb3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1592, .value=0xc8}, {.addr=0x1593, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x1592, .value=0xc8, .type=IO_READ},
        {.addr=0x1593, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0135) {
    const struct CPU_State initial_cpu = {.pc=0x5096, .a=0x66, .x=0x51, .y=0x9a, .sp=0xb5, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x5096, .value=0xc8}, {.addr=0x5097, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x5098, .a=0x66, .x=0x51, .y=0x9a, .sp=0xb5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5096, .value=0xc8}, {.addr=0x5097, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x5096, .value=0xc8, .type=IO_READ},
        {.addr=0x5097, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0136) {
    const struct CPU_State initial_cpu = {.pc=0x2b40, .a=0xcd, .x=0xf6, .y=0x9e, .sp=0x1a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2b40, .value=0xc8}, {.addr=0x2b41, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x2b42, .a=0xcd, .x=0xf6, .y=0x9e, .sp=0x1a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2b40, .value=0xc8}, {.addr=0x2b41, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x2b40, .value=0xc8, .type=IO_READ},
        {.addr=0x2b41, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0137) {
    const struct CPU_State initial_cpu = {.pc=0x9a16, .a=0x6d, .x=0x23, .y=0x65, .sp=0xa5, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9a16, .value=0xc8}, {.addr=0x9a17, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x9a18, .a=0x6d, .x=0x23, .y=0x65, .sp=0xa5, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9a16, .value=0xc8}, {.addr=0x9a17, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x9a16, .value=0xc8, .type=IO_READ},
        {.addr=0x9a17, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0138) {
    const struct CPU_State initial_cpu = {.pc=0xe07b, .a=0xf2, .x=0x99, .y=0xb9, .sp=0x41, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe07b, .value=0xc8}, {.addr=0xe07c, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xe07d, .a=0xf2, .x=0x99, .y=0xb9, .sp=0x41, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe07b, .value=0xc8}, {.addr=0xe07c, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xe07b, .value=0xc8, .type=IO_READ},
        {.addr=0xe07c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0139) {
    const struct CPU_State initial_cpu = {.pc=0xe591, .a=0xf1, .x=0x40, .y=0x4b, .sp=0xbf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe591, .value=0xc8}, {.addr=0xe592, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xe593, .a=0xf1, .x=0x40, .y=0x4b, .sp=0xbf, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe591, .value=0xc8}, {.addr=0xe592, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xe591, .value=0xc8, .type=IO_READ},
        {.addr=0xe592, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_013A) {
    const struct CPU_State initial_cpu = {.pc=0xb5b2, .a=0x28, .x=0x85, .y=0xed, .sp=0x5f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b2, .value=0xc8}, {.addr=0xb5b3, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xb5b4, .a=0x28, .x=0x85, .y=0xed, .sp=0x5f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb5b2, .value=0xc8}, {.addr=0xb5b3, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xb5b2, .value=0xc8, .type=IO_READ},
        {.addr=0xb5b3, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_013B) {
    const struct CPU_State initial_cpu = {.pc=0xfbaf, .a=0x08, .x=0x04, .y=0xca, .sp=0x7a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xfbaf, .value=0xc8}, {.addr=0xfbb0, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xfbb1, .a=0x08, .x=0x04, .y=0xca, .sp=0x7a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xfbaf, .value=0xc8}, {.addr=0xfbb0, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xfbaf, .value=0xc8, .type=IO_READ},
        {.addr=0xfbb0, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_013C) {
    const struct CPU_State initial_cpu = {.pc=0x5da7, .a=0xae, .x=0x41, .y=0x7e, .sp=0xa8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x5da7, .value=0xc8}, {.addr=0x5da8, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x5da9, .a=0xae, .x=0x41, .y=0x7e, .sp=0xa8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5da7, .value=0xc8}, {.addr=0x5da8, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x5da7, .value=0xc8, .type=IO_READ},
        {.addr=0x5da8, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_013D) {
    const struct CPU_State initial_cpu = {.pc=0x3dd5, .a=0x1b, .x=0x17, .y=0x5d, .sp=0x9f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd5, .value=0xc8}, {.addr=0x3dd6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3dd7, .a=0x1b, .x=0x17, .y=0x5d, .sp=0x9f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3dd5, .value=0xc8}, {.addr=0x3dd6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3dd5, .value=0xc8, .type=IO_READ},
        {.addr=0x3dd6, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_013E) {
    const struct CPU_State initial_cpu = {.pc=0x9343, .a=0x2d, .x=0xd4, .y=0x89, .sp=0xfe, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x9343, .value=0xc8}, {.addr=0x9344, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9345, .a=0x2d, .x=0xd4, .y=0x89, .sp=0xfe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9343, .value=0xc8}, {.addr=0x9344, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9343, .value=0xc8, .type=IO_READ},
        {.addr=0x9344, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_013F) {
    const struct CPU_State initial_cpu = {.pc=0x05d6, .a=0xf8, .x=0xcf, .y=0x02, .sp=0x5e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x05d6, .value=0xc8}, {.addr=0x05d7, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x05d8, .a=0xf8, .x=0xcf, .y=0x02, .sp=0x5e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x05d6, .value=0xc8}, {.addr=0x05d7, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x05d6, .value=0xc8, .type=IO_READ},
        {.addr=0x05d7, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0140) {
    const struct CPU_State initial_cpu = {.pc=0x659e, .a=0xc4, .x=0xf9, .y=0x93, .sp=0x03, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x659e, .value=0xc8}, {.addr=0x659f, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x65a0, .a=0xc4, .x=0xf9, .y=0x93, .sp=0x03, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x659e, .value=0xc8}, {.addr=0x659f, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x659e, .value=0xc8, .type=IO_READ},
        {.addr=0x659f, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0141) {
    const struct CPU_State initial_cpu = {.pc=0x993f, .a=0x79, .x=0x79, .y=0x5c, .sp=0xd2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x993f, .value=0xc8}, {.addr=0x9940, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x9941, .a=0x79, .x=0x79, .y=0x5c, .sp=0xd2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x993f, .value=0xc8}, {.addr=0x9940, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x993f, .value=0xc8, .type=IO_READ},
        {.addr=0x9940, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0142) {
    const struct CPU_State initial_cpu = {.pc=0x50dd, .a=0x60, .x=0x78, .y=0x9d, .sp=0x44, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x50dd, .value=0xc8}, {.addr=0x50de, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x50df, .a=0x60, .x=0x78, .y=0x9d, .sp=0x44, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x50dd, .value=0xc8}, {.addr=0x50de, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x50dd, .value=0xc8, .type=IO_READ},
        {.addr=0x50de, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0143) {
    const struct CPU_State initial_cpu = {.pc=0x5939, .a=0x23, .x=0x2a, .y=0x18, .sp=0xd6, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5939, .value=0xc8}, {.addr=0x593a, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x593b, .a=0x23, .x=0x2a, .y=0x18, .sp=0xd6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5939, .value=0xc8}, {.addr=0x593a, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x5939, .value=0xc8, .type=IO_READ},
        {.addr=0x593a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0144) {
    const struct CPU_State initial_cpu = {.pc=0xbb8b, .a=0x21, .x=0xe3, .y=0x3f, .sp=0x9e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xbb8b, .value=0xc8}, {.addr=0xbb8c, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xbb8d, .a=0x21, .x=0xe3, .y=0x3f, .sp=0x9e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbb8b, .value=0xc8}, {.addr=0xbb8c, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xbb8b, .value=0xc8, .type=IO_READ},
        {.addr=0xbb8c, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0145) {
    const struct CPU_State initial_cpu = {.pc=0x3126, .a=0x64, .x=0xf6, .y=0xc4, .sp=0x0e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3126, .value=0xc8}, {.addr=0x3127, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x3128, .a=0x64, .x=0xf6, .y=0xc4, .sp=0x0e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3126, .value=0xc8}, {.addr=0x3127, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x3126, .value=0xc8, .type=IO_READ},
        {.addr=0x3127, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0146) {
    const struct CPU_State initial_cpu = {.pc=0x791f, .a=0x89, .x=0x9c, .y=0x08, .sp=0xa2, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x791f, .value=0xc8}, {.addr=0x7920, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x7921, .a=0x89, .x=0x9c, .y=0x08, .sp=0xa2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x791f, .value=0xc8}, {.addr=0x7920, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x791f, .value=0xc8, .type=IO_READ},
        {.addr=0x7920, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0147) {
    const struct CPU_State initial_cpu = {.pc=0xa988, .a=0xc9, .x=0x23, .y=0xc7, .sp=0x95, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xa988, .value=0xc8}, {.addr=0xa989, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa98a, .a=0xc9, .x=0x23, .y=0xc7, .sp=0x95, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa988, .value=0xc8}, {.addr=0xa989, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa988, .value=0xc8, .type=IO_READ},
        {.addr=0xa989, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0148) {
    const struct CPU_State initial_cpu = {.pc=0xc84c, .a=0x1d, .x=0xb1, .y=0xc9, .sp=0xf1, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xc84c, .value=0xc8}, {.addr=0xc84d, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xc84e, .a=0x1d, .x=0xb1, .y=0xc9, .sp=0xf1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc84c, .value=0xc8}, {.addr=0xc84d, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xc84c, .value=0xc8, .type=IO_READ},
        {.addr=0xc84d, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0149) {
    const struct CPU_State initial_cpu = {.pc=0xb438, .a=0x6c, .x=0x8e, .y=0x19, .sp=0x7c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb438, .value=0xc8}, {.addr=0xb439, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xb43a, .a=0x6c, .x=0x8e, .y=0x19, .sp=0x7c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb438, .value=0xc8}, {.addr=0xb439, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xb438, .value=0xc8, .type=IO_READ},
        {.addr=0xb439, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_014A) {
    const struct CPU_State initial_cpu = {.pc=0xa32d, .a=0xfe, .x=0x65, .y=0xc2, .sp=0x75, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xa32d, .value=0xc8}, {.addr=0xa32e, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xa32f, .a=0xfe, .x=0x65, .y=0xc2, .sp=0x75, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa32d, .value=0xc8}, {.addr=0xa32e, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xa32d, .value=0xc8, .type=IO_READ},
        {.addr=0xa32e, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_014B) {
    const struct CPU_State initial_cpu = {.pc=0xa04e, .a=0x9b, .x=0xac, .y=0x0a, .sp=0xe5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa04e, .value=0xc8}, {.addr=0xa04f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa050, .a=0x9b, .x=0xac, .y=0x0a, .sp=0xe5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa04e, .value=0xc8}, {.addr=0xa04f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa04e, .value=0xc8, .type=IO_READ},
        {.addr=0xa04f, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2665, .a=0xde, .x=0xf3, .y=0x4d, .sp=0xe7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2665, .value=0xc8}, {.addr=0x2666, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x2667, .a=0xde, .x=0xf3, .y=0x4d, .sp=0xe7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2665, .value=0xc8}, {.addr=0x2666, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x2665, .value=0xc8, .type=IO_READ},
        {.addr=0x2666, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_014D) {
    const struct CPU_State initial_cpu = {.pc=0xb4bf, .a=0x40, .x=0xa4, .y=0x8b, .sp=0xf9, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xb4bf, .value=0xc8}, {.addr=0xb4c0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xb4c1, .a=0x40, .x=0xa4, .y=0x8b, .sp=0xf9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb4bf, .value=0xc8}, {.addr=0xb4c0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xb4bf, .value=0xc8, .type=IO_READ},
        {.addr=0xb4c0, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_014E) {
    const struct CPU_State initial_cpu = {.pc=0x9161, .a=0x42, .x=0x89, .y=0xb5, .sp=0x7d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9161, .value=0xc8}, {.addr=0x9162, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9163, .a=0x42, .x=0x89, .y=0xb5, .sp=0x7d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9161, .value=0xc8}, {.addr=0x9162, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9161, .value=0xc8, .type=IO_READ},
        {.addr=0x9162, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4358, .a=0x0b, .x=0x17, .y=0x71, .sp=0x12, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4358, .value=0xc8}, {.addr=0x4359, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x435a, .a=0x0b, .x=0x17, .y=0x71, .sp=0x12, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4358, .value=0xc8}, {.addr=0x4359, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x4358, .value=0xc8, .type=IO_READ},
        {.addr=0x4359, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0150) {
    const struct CPU_State initial_cpu = {.pc=0xc139, .a=0x41, .x=0xae, .y=0x5c, .sp=0x7b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc139, .value=0xc8}, {.addr=0xc13a, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xc13b, .a=0x41, .x=0xae, .y=0x5c, .sp=0x7b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc139, .value=0xc8}, {.addr=0xc13a, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xc139, .value=0xc8, .type=IO_READ},
        {.addr=0xc13a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0151) {
    const struct CPU_State initial_cpu = {.pc=0xb662, .a=0x8d, .x=0xeb, .y=0xf2, .sp=0xe1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb662, .value=0xc8}, {.addr=0xb663, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xb664, .a=0x8d, .x=0xeb, .y=0xf2, .sp=0xe1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb662, .value=0xc8}, {.addr=0xb663, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xb662, .value=0xc8, .type=IO_READ},
        {.addr=0xb663, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0152) {
    const struct CPU_State initial_cpu = {.pc=0x9b5d, .a=0x7c, .x=0x1b, .y=0x64, .sp=0x2e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x9b5d, .value=0xc8}, {.addr=0x9b5e, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x9b5f, .a=0x7c, .x=0x1b, .y=0x64, .sp=0x2e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9b5d, .value=0xc8}, {.addr=0x9b5e, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x9b5d, .value=0xc8, .type=IO_READ},
        {.addr=0x9b5e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0153) {
    const struct CPU_State initial_cpu = {.pc=0xa437, .a=0x1e, .x=0xb8, .y=0xdb, .sp=0x7c, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa437, .value=0xc8}, {.addr=0xa438, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa439, .a=0x1e, .x=0xb8, .y=0xdb, .sp=0x7c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa437, .value=0xc8}, {.addr=0xa438, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa437, .value=0xc8, .type=IO_READ},
        {.addr=0xa438, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0154) {
    const struct CPU_State initial_cpu = {.pc=0x38e8, .a=0x48, .x=0xa9, .y=0xc9, .sp=0xaf, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x38e8, .value=0xc8}, {.addr=0x38e9, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x38ea, .a=0x48, .x=0xa9, .y=0xc9, .sp=0xaf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x38e8, .value=0xc8}, {.addr=0x38e9, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x38e8, .value=0xc8, .type=IO_READ},
        {.addr=0x38e9, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0155) {
    const struct CPU_State initial_cpu = {.pc=0x3c39, .a=0x57, .x=0xf5, .y=0xee, .sp=0x48, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3c39, .value=0xc8}, {.addr=0x3c3a, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x3c3b, .a=0x57, .x=0xf5, .y=0xee, .sp=0x48, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3c39, .value=0xc8}, {.addr=0x3c3a, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x3c39, .value=0xc8, .type=IO_READ},
        {.addr=0x3c3a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0156) {
    const struct CPU_State initial_cpu = {.pc=0xf6f5, .a=0x39, .x=0xe3, .y=0xb3, .sp=0xd7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f5, .value=0xc8}, {.addr=0xf6f6, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xf6f7, .a=0x39, .x=0xe3, .y=0xb3, .sp=0xd7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf6f5, .value=0xc8}, {.addr=0xf6f6, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xf6f5, .value=0xc8, .type=IO_READ},
        {.addr=0xf6f6, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0157) {
    const struct CPU_State initial_cpu = {.pc=0x0f90, .a=0xa4, .x=0x91, .y=0xbe, .sp=0x2f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0f90, .value=0xc8}, {.addr=0x0f91, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0f92, .a=0xa4, .x=0x91, .y=0xbe, .sp=0x2f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0f90, .value=0xc8}, {.addr=0x0f91, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0f90, .value=0xc8, .type=IO_READ},
        {.addr=0x0f91, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0158) {
    const struct CPU_State initial_cpu = {.pc=0xa4af, .a=0x9c, .x=0x40, .y=0xe9, .sp=0xbc, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa4af, .value=0xc8}, {.addr=0xa4b0, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xa4b1, .a=0x9c, .x=0x40, .y=0xe9, .sp=0xbc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa4af, .value=0xc8}, {.addr=0xa4b0, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xa4af, .value=0xc8, .type=IO_READ},
        {.addr=0xa4b0, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0159) {
    const struct CPU_State initial_cpu = {.pc=0x8029, .a=0x6b, .x=0x76, .y=0xfe, .sp=0xf7, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x8029, .value=0xc8}, {.addr=0x802a, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x802b, .a=0x6b, .x=0x76, .y=0xfe, .sp=0xf7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8029, .value=0xc8}, {.addr=0x802a, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x8029, .value=0xc8, .type=IO_READ},
        {.addr=0x802a, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_015A) {
    const struct CPU_State initial_cpu = {.pc=0xafeb, .a=0xd9, .x=0x34, .y=0x82, .sp=0x2c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xafeb, .value=0xc8}, {.addr=0xafec, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xafed, .a=0xd9, .x=0x34, .y=0x82, .sp=0x2c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xafeb, .value=0xc8}, {.addr=0xafec, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xafeb, .value=0xc8, .type=IO_READ},
        {.addr=0xafec, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_015B) {
    const struct CPU_State initial_cpu = {.pc=0x2470, .a=0x34, .x=0xad, .y=0x10, .sp=0x40, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2470, .value=0xc8}, {.addr=0x2471, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x2472, .a=0x34, .x=0xad, .y=0x10, .sp=0x40, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2470, .value=0xc8}, {.addr=0x2471, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2470, .value=0xc8, .type=IO_READ},
        {.addr=0x2471, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_015C) {
    const struct CPU_State initial_cpu = {.pc=0xac71, .a=0xc9, .x=0x6a, .y=0x6d, .sp=0xf5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xac71, .value=0xc8}, {.addr=0xac72, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xac73, .a=0xc9, .x=0x6a, .y=0x6d, .sp=0xf5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xac71, .value=0xc8}, {.addr=0xac72, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xac71, .value=0xc8, .type=IO_READ},
        {.addr=0xac72, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_015D) {
    const struct CPU_State initial_cpu = {.pc=0x3a3e, .a=0x93, .x=0xb4, .y=0xc1, .sp=0x6a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x3a3e, .value=0xc8}, {.addr=0x3a3f, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x3a40, .a=0x93, .x=0xb4, .y=0xc1, .sp=0x6a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3a3e, .value=0xc8}, {.addr=0x3a3f, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x3a3e, .value=0xc8, .type=IO_READ},
        {.addr=0x3a3f, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_015E) {
    const struct CPU_State initial_cpu = {.pc=0x66a7, .a=0x55, .x=0xae, .y=0x61, .sp=0x37, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x66a7, .value=0xc8}, {.addr=0x66a8, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x66a9, .a=0x55, .x=0xae, .y=0x61, .sp=0x37, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x66a7, .value=0xc8}, {.addr=0x66a8, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x66a7, .value=0xc8, .type=IO_READ},
        {.addr=0x66a8, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_015F) {
    const struct CPU_State initial_cpu = {.pc=0x1966, .a=0xe1, .x=0xf2, .y=0xa7, .sp=0xfa, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x1966, .value=0xc8}, {.addr=0x1967, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x1968, .a=0xe1, .x=0xf2, .y=0xa7, .sp=0xfa, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1966, .value=0xc8}, {.addr=0x1967, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x1966, .value=0xc8, .type=IO_READ},
        {.addr=0x1967, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0160) {
    const struct CPU_State initial_cpu = {.pc=0xba18, .a=0xcc, .x=0x42, .y=0x1d, .sp=0xb4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xba18, .value=0xc8}, {.addr=0xba19, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xba1a, .a=0xcc, .x=0x42, .y=0x1d, .sp=0xb4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xba18, .value=0xc8}, {.addr=0xba19, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xba18, .value=0xc8, .type=IO_READ},
        {.addr=0xba19, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0161) {
    const struct CPU_State initial_cpu = {.pc=0x7244, .a=0x31, .x=0xb8, .y=0x33, .sp=0x6f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7244, .value=0xc8}, {.addr=0x7245, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7246, .a=0x31, .x=0xb8, .y=0x33, .sp=0x6f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7244, .value=0xc8}, {.addr=0x7245, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x7244, .value=0xc8, .type=IO_READ},
        {.addr=0x7245, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0162) {
    const struct CPU_State initial_cpu = {.pc=0xae85, .a=0x8f, .x=0xa3, .y=0x95, .sp=0x03, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xae85, .value=0xc8}, {.addr=0xae86, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xae87, .a=0x8f, .x=0xa3, .y=0x95, .sp=0x03, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xae85, .value=0xc8}, {.addr=0xae86, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xae85, .value=0xc8, .type=IO_READ},
        {.addr=0xae86, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0163) {
    const struct CPU_State initial_cpu = {.pc=0xaf89, .a=0xfe, .x=0x15, .y=0x03, .sp=0x18, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xaf89, .value=0xc8}, {.addr=0xaf8a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xaf8b, .a=0xfe, .x=0x15, .y=0x03, .sp=0x18, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xaf89, .value=0xc8}, {.addr=0xaf8a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xaf89, .value=0xc8, .type=IO_READ},
        {.addr=0xaf8a, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0164) {
    const struct CPU_State initial_cpu = {.pc=0x752b, .a=0x60, .x=0x5f, .y=0xfa, .sp=0xd1, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x752b, .value=0xc8}, {.addr=0x752c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x752d, .a=0x60, .x=0x5f, .y=0xfa, .sp=0xd1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x752b, .value=0xc8}, {.addr=0x752c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x752b, .value=0xc8, .type=IO_READ},
        {.addr=0x752c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0165) {
    const struct CPU_State initial_cpu = {.pc=0x1318, .a=0x4f, .x=0xf4, .y=0x66, .sp=0x49, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x1318, .value=0xc8}, {.addr=0x1319, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x131a, .a=0x4f, .x=0xf4, .y=0x66, .sp=0x49, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1318, .value=0xc8}, {.addr=0x1319, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x1318, .value=0xc8, .type=IO_READ},
        {.addr=0x1319, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0166) {
    const struct CPU_State initial_cpu = {.pc=0xd4f3, .a=0x7f, .x=0x08, .y=0xa5, .sp=0xb1, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xd4f3, .value=0xc8}, {.addr=0xd4f4, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd4f5, .a=0x7f, .x=0x08, .y=0xa5, .sp=0xb1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd4f3, .value=0xc8}, {.addr=0xd4f4, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd4f3, .value=0xc8, .type=IO_READ},
        {.addr=0xd4f4, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0167) {
    const struct CPU_State initial_cpu = {.pc=0x827a, .a=0x9e, .x=0x10, .y=0x5f, .sp=0xe1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x827a, .value=0xc8}, {.addr=0x827b, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x827c, .a=0x9e, .x=0x10, .y=0x5f, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x827a, .value=0xc8}, {.addr=0x827b, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x827a, .value=0xc8, .type=IO_READ},
        {.addr=0x827b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0168) {
    const struct CPU_State initial_cpu = {.pc=0x61b7, .a=0xcb, .x=0xc6, .y=0x30, .sp=0x57, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x61b7, .value=0xc8}, {.addr=0x61b8, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x61b9, .a=0xcb, .x=0xc6, .y=0x30, .sp=0x57, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x61b7, .value=0xc8}, {.addr=0x61b8, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x61b7, .value=0xc8, .type=IO_READ},
        {.addr=0x61b8, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0169) {
    const struct CPU_State initial_cpu = {.pc=0x985f, .a=0xa2, .x=0x5f, .y=0x47, .sp=0x30, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x985f, .value=0xc8}, {.addr=0x9860, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x9861, .a=0xa2, .x=0x5f, .y=0x47, .sp=0x30, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x985f, .value=0xc8}, {.addr=0x9860, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x985f, .value=0xc8, .type=IO_READ},
        {.addr=0x9860, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_016A) {
    const struct CPU_State initial_cpu = {.pc=0xa6de, .a=0xbc, .x=0x31, .y=0xf8, .sp=0x76, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xa6de, .value=0xc8}, {.addr=0xa6df, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xa6e0, .a=0xbc, .x=0x31, .y=0xf8, .sp=0x76, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa6de, .value=0xc8}, {.addr=0xa6df, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xa6de, .value=0xc8, .type=IO_READ},
        {.addr=0xa6df, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_016B) {
    const struct CPU_State initial_cpu = {.pc=0x35f8, .a=0x76, .x=0xc7, .y=0x27, .sp=0xdc, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x35f8, .value=0xc8}, {.addr=0x35f9, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x35fa, .a=0x76, .x=0xc7, .y=0x27, .sp=0xdc, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x35f8, .value=0xc8}, {.addr=0x35f9, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x35f8, .value=0xc8, .type=IO_READ},
        {.addr=0x35f9, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_016C) {
    const struct CPU_State initial_cpu = {.pc=0x385e, .a=0xfc, .x=0x9e, .y=0x12, .sp=0xf1, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x385e, .value=0xc8}, {.addr=0x385f, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x3860, .a=0xfc, .x=0x9e, .y=0x12, .sp=0xf1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x385e, .value=0xc8}, {.addr=0x385f, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x385e, .value=0xc8, .type=IO_READ},
        {.addr=0x385f, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_016D) {
    const struct CPU_State initial_cpu = {.pc=0x9c27, .a=0x31, .x=0x54, .y=0x98, .sp=0x70, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9c27, .value=0xc8}, {.addr=0x9c28, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x9c29, .a=0x31, .x=0x54, .y=0x98, .sp=0x70, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9c27, .value=0xc8}, {.addr=0x9c28, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x9c27, .value=0xc8, .type=IO_READ},
        {.addr=0x9c28, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_016E) {
    const struct CPU_State initial_cpu = {.pc=0x156d, .a=0xb1, .x=0xe8, .y=0x3f, .sp=0x56, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x156d, .value=0xc8}, {.addr=0x156e, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x156f, .a=0xb1, .x=0xe8, .y=0x3f, .sp=0x56, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x156d, .value=0xc8}, {.addr=0x156e, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x156d, .value=0xc8, .type=IO_READ},
        {.addr=0x156e, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_016F) {
    const struct CPU_State initial_cpu = {.pc=0x054c, .a=0xde, .x=0x51, .y=0xc3, .sp=0x4f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x054c, .value=0xc8}, {.addr=0x054d, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x054e, .a=0xde, .x=0x51, .y=0xc3, .sp=0x4f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x054c, .value=0xc8}, {.addr=0x054d, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x054c, .value=0xc8, .type=IO_READ},
        {.addr=0x054d, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0170) {
    const struct CPU_State initial_cpu = {.pc=0x96bd, .a=0x16, .x=0x95, .y=0xd0, .sp=0xfd, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x96bd, .value=0xc8}, {.addr=0x96be, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x96bf, .a=0x16, .x=0x95, .y=0xd0, .sp=0xfd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x96bd, .value=0xc8}, {.addr=0x96be, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x96bd, .value=0xc8, .type=IO_READ},
        {.addr=0x96be, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0171) {
    const struct CPU_State initial_cpu = {.pc=0x7e17, .a=0xb5, .x=0xc1, .y=0xb3, .sp=0x81, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x7e17, .value=0xc8}, {.addr=0x7e18, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x7e19, .a=0xb5, .x=0xc1, .y=0xb3, .sp=0x81, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7e17, .value=0xc8}, {.addr=0x7e18, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x7e17, .value=0xc8, .type=IO_READ},
        {.addr=0x7e18, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0172) {
    const struct CPU_State initial_cpu = {.pc=0x6fe9, .a=0x56, .x=0xd2, .y=0x11, .sp=0x30, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6fe9, .value=0xc8}, {.addr=0x6fea, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x6feb, .a=0x56, .x=0xd2, .y=0x11, .sp=0x30, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6fe9, .value=0xc8}, {.addr=0x6fea, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6fe9, .value=0xc8, .type=IO_READ},
        {.addr=0x6fea, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0173) {
    const struct CPU_State initial_cpu = {.pc=0xbad3, .a=0x7e, .x=0xb7, .y=0x96, .sp=0x2d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xbad3, .value=0xc8}, {.addr=0xbad4, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xbad5, .a=0x7e, .x=0xb7, .y=0x96, .sp=0x2d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xbad3, .value=0xc8}, {.addr=0xbad4, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xbad3, .value=0xc8, .type=IO_READ},
        {.addr=0xbad4, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0174) {
    const struct CPU_State initial_cpu = {.pc=0xdc84, .a=0xac, .x=0xb2, .y=0x76, .sp=0x36, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xdc84, .value=0xc8}, {.addr=0xdc85, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xdc86, .a=0xac, .x=0xb2, .y=0x76, .sp=0x36, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xdc84, .value=0xc8}, {.addr=0xdc85, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xdc84, .value=0xc8, .type=IO_READ},
        {.addr=0xdc85, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0175) {
    const struct CPU_State initial_cpu = {.pc=0x431d, .a=0x13, .x=0xf3, .y=0x8e, .sp=0xc5, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x431d, .value=0xc8}, {.addr=0x431e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x431f, .a=0x13, .x=0xf3, .y=0x8e, .sp=0xc5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x431d, .value=0xc8}, {.addr=0x431e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x431d, .value=0xc8, .type=IO_READ},
        {.addr=0x431e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0176) {
    const struct CPU_State initial_cpu = {.pc=0x76de, .a=0x43, .x=0xe1, .y=0xd6, .sp=0x76, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x76de, .value=0xc8}, {.addr=0x76df, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x76e0, .a=0x43, .x=0xe1, .y=0xd6, .sp=0x76, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x76de, .value=0xc8}, {.addr=0x76df, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x76de, .value=0xc8, .type=IO_READ},
        {.addr=0x76df, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0177) {
    const struct CPU_State initial_cpu = {.pc=0x6876, .a=0xd0, .x=0x02, .y=0x74, .sp=0x5a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6876, .value=0xc8}, {.addr=0x6877, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6878, .a=0xd0, .x=0x02, .y=0x74, .sp=0x5a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6876, .value=0xc8}, {.addr=0x6877, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6876, .value=0xc8, .type=IO_READ},
        {.addr=0x6877, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0178) {
    const struct CPU_State initial_cpu = {.pc=0xfc8f, .a=0x80, .x=0x0c, .y=0x01, .sp=0x8f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8f, .value=0xc8}, {.addr=0xfc90, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xfc91, .a=0x80, .x=0x0c, .y=0x01, .sp=0x8f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfc8f, .value=0xc8}, {.addr=0xfc90, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xfc8f, .value=0xc8, .type=IO_READ},
        {.addr=0xfc90, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0179) {
    const struct CPU_State initial_cpu = {.pc=0x4b56, .a=0x28, .x=0x30, .y=0x0b, .sp=0xd9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4b56, .value=0xc8}, {.addr=0x4b57, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x4b58, .a=0x28, .x=0x30, .y=0x0b, .sp=0xd9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4b56, .value=0xc8}, {.addr=0x4b57, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x4b56, .value=0xc8, .type=IO_READ},
        {.addr=0x4b57, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_017A) {
    const struct CPU_State initial_cpu = {.pc=0x377a, .a=0xb1, .x=0xee, .y=0x43, .sp=0x5b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x377a, .value=0xc8}, {.addr=0x377b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x377c, .a=0xb1, .x=0xee, .y=0x43, .sp=0x5b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x377a, .value=0xc8}, {.addr=0x377b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x377a, .value=0xc8, .type=IO_READ},
        {.addr=0x377b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_017B) {
    const struct CPU_State initial_cpu = {.pc=0x6c4b, .a=0x12, .x=0x87, .y=0xe9, .sp=0xca, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4b, .value=0xc8}, {.addr=0x6c4c, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x6c4d, .a=0x12, .x=0x87, .y=0xe9, .sp=0xca, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6c4b, .value=0xc8}, {.addr=0x6c4c, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x6c4b, .value=0xc8, .type=IO_READ},
        {.addr=0x6c4c, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_017C) {
    const struct CPU_State initial_cpu = {.pc=0xf509, .a=0xd3, .x=0x57, .y=0xe6, .sp=0xc1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf509, .value=0xc8}, {.addr=0xf50a, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xf50b, .a=0xd3, .x=0x57, .y=0xe6, .sp=0xc1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf509, .value=0xc8}, {.addr=0xf50a, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xf509, .value=0xc8, .type=IO_READ},
        {.addr=0xf50a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_017D) {
    const struct CPU_State initial_cpu = {.pc=0xb60a, .a=0xfd, .x=0x0d, .y=0x7d, .sp=0x84, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xb60a, .value=0xc8}, {.addr=0xb60b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb60c, .a=0xfd, .x=0x0d, .y=0x7d, .sp=0x84, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb60a, .value=0xc8}, {.addr=0xb60b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb60a, .value=0xc8, .type=IO_READ},
        {.addr=0xb60b, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_017E) {
    const struct CPU_State initial_cpu = {.pc=0x8bc2, .a=0x66, .x=0x0e, .y=0x8c, .sp=0xf5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc2, .value=0xc8}, {.addr=0x8bc3, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x8bc4, .a=0x66, .x=0x0e, .y=0x8c, .sp=0xf5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8bc2, .value=0xc8}, {.addr=0x8bc3, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x8bc2, .value=0xc8, .type=IO_READ},
        {.addr=0x8bc3, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_017F) {
    const struct CPU_State initial_cpu = {.pc=0xb76c, .a=0xab, .x=0xf0, .y=0x73, .sp=0x8b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb76c, .value=0xc8}, {.addr=0xb76d, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xb76e, .a=0xab, .x=0xf0, .y=0x73, .sp=0x8b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xb76c, .value=0xc8}, {.addr=0xb76d, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xb76c, .value=0xc8, .type=IO_READ},
        {.addr=0xb76d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0180) {
    const struct CPU_State initial_cpu = {.pc=0x6225, .a=0x2e, .x=0xd6, .y=0x81, .sp=0x0f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6225, .value=0xc8}, {.addr=0x6226, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x6227, .a=0x2e, .x=0xd6, .y=0x81, .sp=0x0f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6225, .value=0xc8}, {.addr=0x6226, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x6225, .value=0xc8, .type=IO_READ},
        {.addr=0x6226, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0181) {
    const struct CPU_State initial_cpu = {.pc=0x25cb, .a=0xa0, .x=0x4c, .y=0x96, .sp=0x35, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x25cb, .value=0xc8}, {.addr=0x25cc, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x25cd, .a=0xa0, .x=0x4c, .y=0x96, .sp=0x35, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x25cb, .value=0xc8}, {.addr=0x25cc, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x25cb, .value=0xc8, .type=IO_READ},
        {.addr=0x25cc, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0182) {
    const struct CPU_State initial_cpu = {.pc=0xf1af, .a=0xb6, .x=0x93, .y=0x29, .sp=0xf4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf1af, .value=0xc8}, {.addr=0xf1b0, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf1b1, .a=0xb6, .x=0x93, .y=0x29, .sp=0xf4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf1af, .value=0xc8}, {.addr=0xf1b0, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf1af, .value=0xc8, .type=IO_READ},
        {.addr=0xf1b0, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0183) {
    const struct CPU_State initial_cpu = {.pc=0x409d, .a=0xf7, .x=0xc2, .y=0x60, .sp=0x28, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x409d, .value=0xc8}, {.addr=0x409e, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x409f, .a=0xf7, .x=0xc2, .y=0x60, .sp=0x28, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x409d, .value=0xc8}, {.addr=0x409e, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x409d, .value=0xc8, .type=IO_READ},
        {.addr=0x409e, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0184) {
    const struct CPU_State initial_cpu = {.pc=0x5728, .a=0xff, .x=0x0f, .y=0xf9, .sp=0x5e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5728, .value=0xc8}, {.addr=0x5729, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x572a, .a=0xff, .x=0x0f, .y=0xf9, .sp=0x5e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5728, .value=0xc8}, {.addr=0x5729, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x5728, .value=0xc8, .type=IO_READ},
        {.addr=0x5729, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0185) {
    const struct CPU_State initial_cpu = {.pc=0x638e, .a=0x1c, .x=0x32, .y=0x58, .sp=0xa1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x638e, .value=0xc8}, {.addr=0x638f, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6390, .a=0x1c, .x=0x32, .y=0x58, .sp=0xa1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x638e, .value=0xc8}, {.addr=0x638f, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x638e, .value=0xc8, .type=IO_READ},
        {.addr=0x638f, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0186) {
    const struct CPU_State initial_cpu = {.pc=0x608a, .a=0x56, .x=0xec, .y=0x8f, .sp=0xfe, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x608a, .value=0xc8}, {.addr=0x608b, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x608c, .a=0x56, .x=0xec, .y=0x8f, .sp=0xfe, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x608a, .value=0xc8}, {.addr=0x608b, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x608a, .value=0xc8, .type=IO_READ},
        {.addr=0x608b, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0187) {
    const struct CPU_State initial_cpu = {.pc=0x2545, .a=0x86, .x=0xf3, .y=0xaf, .sp=0xe8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x2545, .value=0xc8}, {.addr=0x2546, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x2547, .a=0x86, .x=0xf3, .y=0xaf, .sp=0xe8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2545, .value=0xc8}, {.addr=0x2546, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x2545, .value=0xc8, .type=IO_READ},
        {.addr=0x2546, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0188) {
    const struct CPU_State initial_cpu = {.pc=0x0701, .a=0x44, .x=0x2d, .y=0xb9, .sp=0xce, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0701, .value=0xc8}, {.addr=0x0702, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x0703, .a=0x44, .x=0x2d, .y=0xb9, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0701, .value=0xc8}, {.addr=0x0702, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x0701, .value=0xc8, .type=IO_READ},
        {.addr=0x0702, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0189) {
    const struct CPU_State initial_cpu = {.pc=0x8617, .a=0x02, .x=0x12, .y=0x16, .sp=0xb0, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8617, .value=0xc8}, {.addr=0x8618, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8619, .a=0x02, .x=0x12, .y=0x16, .sp=0xb0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x8617, .value=0xc8}, {.addr=0x8618, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8617, .value=0xc8, .type=IO_READ},
        {.addr=0x8618, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_018A) {
    const struct CPU_State initial_cpu = {.pc=0xca68, .a=0x2b, .x=0x17, .y=0xcd, .sp=0xc6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xca68, .value=0xc8}, {.addr=0xca69, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xca6a, .a=0x2b, .x=0x17, .y=0xcd, .sp=0xc6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xca68, .value=0xc8}, {.addr=0xca69, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xca68, .value=0xc8, .type=IO_READ},
        {.addr=0xca69, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_018B) {
    const struct CPU_State initial_cpu = {.pc=0x48f8, .a=0x0b, .x=0xa1, .y=0xcc, .sp=0x6f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x48f8, .value=0xc8}, {.addr=0x48f9, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x48fa, .a=0x0b, .x=0xa1, .y=0xcc, .sp=0x6f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x48f8, .value=0xc8}, {.addr=0x48f9, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x48f8, .value=0xc8, .type=IO_READ},
        {.addr=0x48f9, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_018C) {
    const struct CPU_State initial_cpu = {.pc=0x2d89, .a=0x6f, .x=0x01, .y=0x1a, .sp=0x10, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2d89, .value=0xc8}, {.addr=0x2d8a, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x2d8b, .a=0x6f, .x=0x01, .y=0x1a, .sp=0x10, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2d89, .value=0xc8}, {.addr=0x2d8a, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x2d89, .value=0xc8, .type=IO_READ},
        {.addr=0x2d8a, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_018D) {
    const struct CPU_State initial_cpu = {.pc=0x80a6, .a=0x71, .x=0x07, .y=0x76, .sp=0x35, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x80a6, .value=0xc8}, {.addr=0x80a7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x80a8, .a=0x71, .x=0x07, .y=0x76, .sp=0x35, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x80a6, .value=0xc8}, {.addr=0x80a7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x80a6, .value=0xc8, .type=IO_READ},
        {.addr=0x80a7, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf313, .a=0xb3, .x=0xb2, .y=0xef, .sp=0xb4, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf313, .value=0xc8}, {.addr=0xf314, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf315, .a=0xb3, .x=0xb2, .y=0xef, .sp=0xb4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf313, .value=0xc8}, {.addr=0xf314, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf313, .value=0xc8, .type=IO_READ},
        {.addr=0xf314, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_018F) {
    const struct CPU_State initial_cpu = {.pc=0x7329, .a=0xab, .x=0xb1, .y=0x52, .sp=0x4f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7329, .value=0xc8}, {.addr=0x732a, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x732b, .a=0xab, .x=0xb1, .y=0x52, .sp=0x4f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7329, .value=0xc8}, {.addr=0x732a, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x7329, .value=0xc8, .type=IO_READ},
        {.addr=0x732a, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0190) {
    const struct CPU_State initial_cpu = {.pc=0x2cbe, .a=0x37, .x=0xc2, .y=0x95, .sp=0x1e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2cbe, .value=0xc8}, {.addr=0x2cbf, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x2cc0, .a=0x37, .x=0xc2, .y=0x95, .sp=0x1e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2cbe, .value=0xc8}, {.addr=0x2cbf, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x2cbe, .value=0xc8, .type=IO_READ},
        {.addr=0x2cbf, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0191) {
    const struct CPU_State initial_cpu = {.pc=0x55ba, .a=0x21, .x=0x3a, .y=0x0a, .sp=0x41, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x55ba, .value=0xc8}, {.addr=0x55bb, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x55bc, .a=0x21, .x=0x3a, .y=0x0a, .sp=0x41, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x55ba, .value=0xc8}, {.addr=0x55bb, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x55ba, .value=0xc8, .type=IO_READ},
        {.addr=0x55bb, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0192) {
    const struct CPU_State initial_cpu = {.pc=0x5fe0, .a=0x69, .x=0xbf, .y=0xaf, .sp=0x52, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe0, .value=0xc8}, {.addr=0x5fe1, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x5fe2, .a=0x69, .x=0xbf, .y=0xaf, .sp=0x52, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5fe0, .value=0xc8}, {.addr=0x5fe1, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x5fe0, .value=0xc8, .type=IO_READ},
        {.addr=0x5fe1, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0193) {
    const struct CPU_State initial_cpu = {.pc=0x9d9e, .a=0xa1, .x=0x1a, .y=0x29, .sp=0x0a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9d9e, .value=0xc8}, {.addr=0x9d9f, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x9da0, .a=0xa1, .x=0x1a, .y=0x29, .sp=0x0a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9d9e, .value=0xc8}, {.addr=0x9d9f, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x9d9e, .value=0xc8, .type=IO_READ},
        {.addr=0x9d9f, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0194) {
    const struct CPU_State initial_cpu = {.pc=0xa855, .a=0xae, .x=0x0d, .y=0x42, .sp=0x68, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa855, .value=0xc8}, {.addr=0xa856, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xa857, .a=0xae, .x=0x0d, .y=0x42, .sp=0x68, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa855, .value=0xc8}, {.addr=0xa856, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xa855, .value=0xc8, .type=IO_READ},
        {.addr=0xa856, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0195) {
    const struct CPU_State initial_cpu = {.pc=0x4bfa, .a=0xb3, .x=0xbd, .y=0x0b, .sp=0x67, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfa, .value=0xc8}, {.addr=0x4bfb, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x4bfc, .a=0xb3, .x=0xbd, .y=0x0b, .sp=0x67, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4bfa, .value=0xc8}, {.addr=0x4bfb, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x4bfa, .value=0xc8, .type=IO_READ},
        {.addr=0x4bfb, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0196) {
    const struct CPU_State initial_cpu = {.pc=0xdabb, .a=0x4a, .x=0x3c, .y=0x60, .sp=0x00, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xdabb, .value=0xc8}, {.addr=0xdabc, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xdabd, .a=0x4a, .x=0x3c, .y=0x60, .sp=0x00, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xdabb, .value=0xc8}, {.addr=0xdabc, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xdabb, .value=0xc8, .type=IO_READ},
        {.addr=0xdabc, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0197) {
    const struct CPU_State initial_cpu = {.pc=0xa549, .a=0x46, .x=0x8b, .y=0xee, .sp=0x7e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa549, .value=0xc8}, {.addr=0xa54a, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa54b, .a=0x46, .x=0x8b, .y=0xee, .sp=0x7e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa549, .value=0xc8}, {.addr=0xa54a, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa549, .value=0xc8, .type=IO_READ},
        {.addr=0xa54a, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0198) {
    const struct CPU_State initial_cpu = {.pc=0xbd1f, .a=0xbb, .x=0xa1, .y=0x7e, .sp=0xd3, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbd1f, .value=0xc8}, {.addr=0xbd20, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xbd21, .a=0xbb, .x=0xa1, .y=0x7e, .sp=0xd3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbd1f, .value=0xc8}, {.addr=0xbd20, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xbd1f, .value=0xc8, .type=IO_READ},
        {.addr=0xbd20, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0199) {
    const struct CPU_State initial_cpu = {.pc=0x4f24, .a=0xa9, .x=0xd0, .y=0xa7, .sp=0xb1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4f24, .value=0xc8}, {.addr=0x4f25, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x4f26, .a=0xa9, .x=0xd0, .y=0xa7, .sp=0xb1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4f24, .value=0xc8}, {.addr=0x4f25, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x4f24, .value=0xc8, .type=IO_READ},
        {.addr=0x4f25, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_019A) {
    const struct CPU_State initial_cpu = {.pc=0x7e23, .a=0x69, .x=0x94, .y=0x14, .sp=0x5f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7e23, .value=0xc8}, {.addr=0x7e24, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x7e25, .a=0x69, .x=0x94, .y=0x14, .sp=0x5f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7e23, .value=0xc8}, {.addr=0x7e24, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x7e23, .value=0xc8, .type=IO_READ},
        {.addr=0x7e24, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_019B) {
    const struct CPU_State initial_cpu = {.pc=0x2b0c, .a=0x8d, .x=0x76, .y=0x51, .sp=0x34, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0c, .value=0xc8}, {.addr=0x2b0d, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x2b0e, .a=0x8d, .x=0x76, .y=0x51, .sp=0x34, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2b0c, .value=0xc8}, {.addr=0x2b0d, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x2b0c, .value=0xc8, .type=IO_READ},
        {.addr=0x2b0d, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_019C) {
    const struct CPU_State initial_cpu = {.pc=0xde91, .a=0x6a, .x=0xee, .y=0x60, .sp=0x5f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xde91, .value=0xc8}, {.addr=0xde92, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xde93, .a=0x6a, .x=0xee, .y=0x60, .sp=0x5f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xde91, .value=0xc8}, {.addr=0xde92, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xde91, .value=0xc8, .type=IO_READ},
        {.addr=0xde92, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_019D) {
    const struct CPU_State initial_cpu = {.pc=0xda0c, .a=0x02, .x=0xdd, .y=0x75, .sp=0x3d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xda0c, .value=0xc8}, {.addr=0xda0d, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xda0e, .a=0x02, .x=0xdd, .y=0x75, .sp=0x3d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xda0c, .value=0xc8}, {.addr=0xda0d, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xda0c, .value=0xc8, .type=IO_READ},
        {.addr=0xda0d, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_019E) {
    const struct CPU_State initial_cpu = {.pc=0x85a6, .a=0xb5, .x=0x46, .y=0x6c, .sp=0x50, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x85a6, .value=0xc8}, {.addr=0x85a7, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x85a8, .a=0xb5, .x=0x46, .y=0x6c, .sp=0x50, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x85a6, .value=0xc8}, {.addr=0x85a7, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x85a6, .value=0xc8, .type=IO_READ},
        {.addr=0x85a7, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_019F) {
    const struct CPU_State initial_cpu = {.pc=0xd177, .a=0x41, .x=0xfe, .y=0xf3, .sp=0x43, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xd177, .value=0xc8}, {.addr=0xd178, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xd179, .a=0x41, .x=0xfe, .y=0xf3, .sp=0x43, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd177, .value=0xc8}, {.addr=0xd178, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xd177, .value=0xc8, .type=IO_READ},
        {.addr=0xd178, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xe434, .a=0x73, .x=0xdd, .y=0xd3, .sp=0x60, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xe434, .value=0xc8}, {.addr=0xe435, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xe436, .a=0x73, .x=0xdd, .y=0xd3, .sp=0x60, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe434, .value=0xc8}, {.addr=0xe435, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xe434, .value=0xc8, .type=IO_READ},
        {.addr=0xe435, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xb294, .a=0x9d, .x=0x84, .y=0x33, .sp=0x52, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb294, .value=0xc8}, {.addr=0xb295, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb296, .a=0x9d, .x=0x84, .y=0x33, .sp=0x52, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb294, .value=0xc8}, {.addr=0xb295, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb294, .value=0xc8, .type=IO_READ},
        {.addr=0xb295, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xb46b, .a=0xd7, .x=0xcd, .y=0xc2, .sp=0xf6, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb46b, .value=0xc8}, {.addr=0xb46c, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xb46d, .a=0xd7, .x=0xcd, .y=0xc2, .sp=0xf6, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb46b, .value=0xc8}, {.addr=0xb46c, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xb46b, .value=0xc8, .type=IO_READ},
        {.addr=0xb46c, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xab36, .a=0x6c, .x=0x41, .y=0xff, .sp=0x8d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xab36, .value=0xc8}, {.addr=0xab37, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xab38, .a=0x6c, .x=0x41, .y=0xff, .sp=0x8d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xab36, .value=0xc8}, {.addr=0xab37, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xab36, .value=0xc8, .type=IO_READ},
        {.addr=0xab37, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x0b81, .a=0xe6, .x=0x03, .y=0x92, .sp=0x6e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0b81, .value=0xc8}, {.addr=0x0b82, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0b83, .a=0xe6, .x=0x03, .y=0x92, .sp=0x6e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0b81, .value=0xc8}, {.addr=0x0b82, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0b81, .value=0xc8, .type=IO_READ},
        {.addr=0x0b82, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xa909, .a=0x46, .x=0x48, .y=0xf3, .sp=0x03, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa909, .value=0xc8}, {.addr=0xa90a, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xa90b, .a=0x46, .x=0x48, .y=0xf3, .sp=0x03, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa909, .value=0xc8}, {.addr=0xa90a, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xa909, .value=0xc8, .type=IO_READ},
        {.addr=0xa90a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x03bf, .a=0xab, .x=0xd6, .y=0x20, .sp=0xc3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x03bf, .value=0xc8}, {.addr=0x03c0, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x03c1, .a=0xab, .x=0xd6, .y=0x20, .sp=0xc3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x03bf, .value=0xc8}, {.addr=0x03c0, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x03bf, .value=0xc8, .type=IO_READ},
        {.addr=0x03c0, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xb58f, .a=0xe2, .x=0x83, .y=0xfb, .sp=0x44, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xb58f, .value=0xc8}, {.addr=0xb590, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xb591, .a=0xe2, .x=0x83, .y=0xfb, .sp=0x44, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb58f, .value=0xc8}, {.addr=0xb590, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xb58f, .value=0xc8, .type=IO_READ},
        {.addr=0xb590, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x0418, .a=0x08, .x=0x93, .y=0xde, .sp=0x3f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0418, .value=0xc8}, {.addr=0x0419, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x041a, .a=0x08, .x=0x93, .y=0xde, .sp=0x3f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0418, .value=0xc8}, {.addr=0x0419, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0418, .value=0xc8, .type=IO_READ},
        {.addr=0x0419, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5f46, .a=0x71, .x=0x32, .y=0x23, .sp=0xba, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x5f46, .value=0xc8}, {.addr=0x5f47, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5f48, .a=0x71, .x=0x32, .y=0x23, .sp=0xba, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5f46, .value=0xc8}, {.addr=0x5f47, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5f46, .value=0xc8, .type=IO_READ},
        {.addr=0x5f47, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4223, .a=0x8d, .x=0xcc, .y=0xdc, .sp=0x82, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4223, .value=0xc8}, {.addr=0x4224, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x4225, .a=0x8d, .x=0xcc, .y=0xdc, .sp=0x82, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4223, .value=0xc8}, {.addr=0x4224, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x4223, .value=0xc8, .type=IO_READ},
        {.addr=0x4224, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xdb4f, .a=0xaa, .x=0xaf, .y=0xe0, .sp=0xd3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdb4f, .value=0xc8}, {.addr=0xdb50, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdb51, .a=0xaa, .x=0xaf, .y=0xe0, .sp=0xd3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xdb4f, .value=0xc8}, {.addr=0xdb50, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdb4f, .value=0xc8, .type=IO_READ},
        {.addr=0xdb50, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x9421, .a=0x63, .x=0x09, .y=0x12, .sp=0x6b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9421, .value=0xc8}, {.addr=0x9422, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x9423, .a=0x63, .x=0x09, .y=0x12, .sp=0x6b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9421, .value=0xc8}, {.addr=0x9422, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x9421, .value=0xc8, .type=IO_READ},
        {.addr=0x9422, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x44bf, .a=0xab, .x=0x3f, .y=0xdf, .sp=0xcc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x44bf, .value=0xc8}, {.addr=0x44c0, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x44c1, .a=0xab, .x=0x3f, .y=0xdf, .sp=0xcc, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x44bf, .value=0xc8}, {.addr=0x44c0, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x44bf, .value=0xc8, .type=IO_READ},
        {.addr=0x44c0, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x4570, .a=0xc4, .x=0x30, .y=0x74, .sp=0xf4, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4570, .value=0xc8}, {.addr=0x4571, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4572, .a=0xc4, .x=0x30, .y=0x74, .sp=0xf4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4570, .value=0xc8}, {.addr=0x4571, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4570, .value=0xc8, .type=IO_READ},
        {.addr=0x4571, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xbc2a, .a=0x3e, .x=0x3f, .y=0x0a, .sp=0xa6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc2a, .value=0xc8}, {.addr=0xbc2b, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xbc2c, .a=0x3e, .x=0x3f, .y=0x0a, .sp=0xa6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbc2a, .value=0xc8}, {.addr=0xbc2b, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xbc2a, .value=0xc8, .type=IO_READ},
        {.addr=0xbc2b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x6d0c, .a=0x64, .x=0x7e, .y=0x46, .sp=0xcc, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6d0c, .value=0xc8}, {.addr=0x6d0d, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x6d0e, .a=0x64, .x=0x7e, .y=0x46, .sp=0xcc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6d0c, .value=0xc8}, {.addr=0x6d0d, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x6d0c, .value=0xc8, .type=IO_READ},
        {.addr=0x6d0d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x98cb, .a=0x71, .x=0x11, .y=0xae, .sp=0x6b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x98cb, .value=0xc8}, {.addr=0x98cc, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x98cd, .a=0x71, .x=0x11, .y=0xae, .sp=0x6b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x98cb, .value=0xc8}, {.addr=0x98cc, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x98cb, .value=0xc8, .type=IO_READ},
        {.addr=0x98cc, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x4ac0, .a=0x57, .x=0x46, .y=0xcf, .sp=0xcd, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x4ac0, .value=0xc8}, {.addr=0x4ac1, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x4ac2, .a=0x57, .x=0x46, .y=0xcf, .sp=0xcd, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4ac0, .value=0xc8}, {.addr=0x4ac1, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x4ac0, .value=0xc8, .type=IO_READ},
        {.addr=0x4ac1, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xbd71, .a=0xf9, .x=0xdb, .y=0x2c, .sp=0x5d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xbd71, .value=0xc8}, {.addr=0xbd72, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xbd73, .a=0xf9, .x=0xdb, .y=0x2c, .sp=0x5d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbd71, .value=0xc8}, {.addr=0xbd72, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xbd71, .value=0xc8, .type=IO_READ},
        {.addr=0xbd72, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x0dcc, .a=0x99, .x=0x9f, .y=0xd0, .sp=0x27, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0dcc, .value=0xc8}, {.addr=0x0dcd, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x0dce, .a=0x99, .x=0x9f, .y=0xd0, .sp=0x27, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0dcc, .value=0xc8}, {.addr=0x0dcd, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x0dcc, .value=0xc8, .type=IO_READ},
        {.addr=0x0dcd, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xc64c, .a=0x80, .x=0x9e, .y=0xc0, .sp=0x73, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xc64c, .value=0xc8}, {.addr=0xc64d, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xc64e, .a=0x80, .x=0x9e, .y=0xc0, .sp=0x73, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc64c, .value=0xc8}, {.addr=0xc64d, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xc64c, .value=0xc8, .type=IO_READ},
        {.addr=0xc64d, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4272, .a=0xfd, .x=0x92, .y=0x13, .sp=0xde, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4272, .value=0xc8}, {.addr=0x4273, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x4274, .a=0xfd, .x=0x92, .y=0x13, .sp=0xde, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4272, .value=0xc8}, {.addr=0x4273, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x4272, .value=0xc8, .type=IO_READ},
        {.addr=0x4273, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x61de, .a=0x48, .x=0xb2, .y=0x07, .sp=0x06, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x61de, .value=0xc8}, {.addr=0x61df, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x61e0, .a=0x48, .x=0xb2, .y=0x07, .sp=0x06, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x61de, .value=0xc8}, {.addr=0x61df, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x61de, .value=0xc8, .type=IO_READ},
        {.addr=0x61df, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x954b, .a=0x4e, .x=0x65, .y=0x5c, .sp=0x5e, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x954b, .value=0xc8}, {.addr=0x954c, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x954d, .a=0x4e, .x=0x65, .y=0x5c, .sp=0x5e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x954b, .value=0xc8}, {.addr=0x954c, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x954b, .value=0xc8, .type=IO_READ},
        {.addr=0x954c, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x140f, .a=0x94, .x=0x1f, .y=0x11, .sp=0x03, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x140f, .value=0xc8}, {.addr=0x1410, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x1411, .a=0x94, .x=0x1f, .y=0x11, .sp=0x03, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x140f, .value=0xc8}, {.addr=0x1410, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x140f, .value=0xc8, .type=IO_READ},
        {.addr=0x1410, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x6aaf, .a=0x01, .x=0x55, .y=0x12, .sp=0x19, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6aaf, .value=0xc8}, {.addr=0x6ab0, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6ab1, .a=0x01, .x=0x55, .y=0x12, .sp=0x19, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6aaf, .value=0xc8}, {.addr=0x6ab0, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6aaf, .value=0xc8, .type=IO_READ},
        {.addr=0x6ab0, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xf99f, .a=0x4a, .x=0x0d, .y=0x3b, .sp=0x57, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf99f, .value=0xc8}, {.addr=0xf9a0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf9a1, .a=0x4a, .x=0x0d, .y=0x3b, .sp=0x57, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf99f, .value=0xc8}, {.addr=0xf9a0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf99f, .value=0xc8, .type=IO_READ},
        {.addr=0xf9a0, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0cf7, .a=0xd1, .x=0xf5, .y=0x48, .sp=0x50, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0cf7, .value=0xc8}, {.addr=0x0cf8, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0cf9, .a=0xd1, .x=0xf5, .y=0x48, .sp=0x50, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0cf7, .value=0xc8}, {.addr=0x0cf8, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0cf7, .value=0xc8, .type=IO_READ},
        {.addr=0x0cf8, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xae2c, .a=0xab, .x=0x57, .y=0x4c, .sp=0x6d, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xae2c, .value=0xc8}, {.addr=0xae2d, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xae2e, .a=0xab, .x=0x57, .y=0x4c, .sp=0x6d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xae2c, .value=0xc8}, {.addr=0xae2d, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xae2c, .value=0xc8, .type=IO_READ},
        {.addr=0xae2d, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x0464, .a=0x09, .x=0x92, .y=0xb0, .sp=0x77, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0464, .value=0xc8}, {.addr=0x0465, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x0466, .a=0x09, .x=0x92, .y=0xb0, .sp=0x77, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0464, .value=0xc8}, {.addr=0x0465, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x0464, .value=0xc8, .type=IO_READ},
        {.addr=0x0465, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xd4fd, .a=0x2c, .x=0xf8, .y=0xca, .sp=0xe6, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd4fd, .value=0xc8}, {.addr=0xd4fe, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xd4ff, .a=0x2c, .x=0xf8, .y=0xca, .sp=0xe6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd4fd, .value=0xc8}, {.addr=0xd4fe, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xd4fd, .value=0xc8, .type=IO_READ},
        {.addr=0xd4fe, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xeb10, .a=0xb8, .x=0xce, .y=0xa7, .sp=0x8b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xeb10, .value=0xc8}, {.addr=0xeb11, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xeb12, .a=0xb8, .x=0xce, .y=0xa7, .sp=0x8b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xeb10, .value=0xc8}, {.addr=0xeb11, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xeb10, .value=0xc8, .type=IO_READ},
        {.addr=0xeb11, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x7400, .a=0x7c, .x=0xbe, .y=0x18, .sp=0x59, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7400, .value=0xc8}, {.addr=0x7401, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x7402, .a=0x7c, .x=0xbe, .y=0x18, .sp=0x59, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7400, .value=0xc8}, {.addr=0x7401, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x7400, .value=0xc8, .type=IO_READ},
        {.addr=0x7401, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xd609, .a=0x45, .x=0x25, .y=0x62, .sp=0xfa, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd609, .value=0xc8}, {.addr=0xd60a, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xd60b, .a=0x45, .x=0x25, .y=0x62, .sp=0xfa, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd609, .value=0xc8}, {.addr=0xd60a, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xd609, .value=0xc8, .type=IO_READ},
        {.addr=0xd60a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x7c5a, .a=0xca, .x=0x7c, .y=0x6f, .sp=0x4d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c5a, .value=0xc8}, {.addr=0x7c5b, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x7c5c, .a=0xca, .x=0x7c, .y=0x6f, .sp=0x4d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7c5a, .value=0xc8}, {.addr=0x7c5b, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x7c5a, .value=0xc8, .type=IO_READ},
        {.addr=0x7c5b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x1553, .a=0x3c, .x=0x8e, .y=0xf3, .sp=0x18, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1553, .value=0xc8}, {.addr=0x1554, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x1555, .a=0x3c, .x=0x8e, .y=0xf3, .sp=0x18, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1553, .value=0xc8}, {.addr=0x1554, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x1553, .value=0xc8, .type=IO_READ},
        {.addr=0x1554, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xb862, .a=0xf1, .x=0x51, .y=0xa4, .sp=0x18, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb862, .value=0xc8}, {.addr=0xb863, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xb864, .a=0xf1, .x=0x51, .y=0xa4, .sp=0x18, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb862, .value=0xc8}, {.addr=0xb863, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xb862, .value=0xc8, .type=IO_READ},
        {.addr=0xb863, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x4e9c, .a=0x13, .x=0xfc, .y=0xf0, .sp=0x32, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9c, .value=0xc8}, {.addr=0x4e9d, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x4e9e, .a=0x13, .x=0xfc, .y=0xf0, .sp=0x32, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4e9c, .value=0xc8}, {.addr=0x4e9d, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x4e9c, .value=0xc8, .type=IO_READ},
        {.addr=0x4e9d, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xcfdc, .a=0xef, .x=0x07, .y=0xc2, .sp=0x47, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xcfdc, .value=0xc8}, {.addr=0xcfdd, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xcfde, .a=0xef, .x=0x07, .y=0xc2, .sp=0x47, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xcfdc, .value=0xc8}, {.addr=0xcfdd, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xcfdc, .value=0xc8, .type=IO_READ},
        {.addr=0xcfdd, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x611c, .a=0x1c, .x=0xac, .y=0x01, .sp=0x30, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x611c, .value=0xc8}, {.addr=0x611d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x611e, .a=0x1c, .x=0xac, .y=0x01, .sp=0x30, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x611c, .value=0xc8}, {.addr=0x611d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x611c, .value=0xc8, .type=IO_READ},
        {.addr=0x611d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x4f66, .a=0x3f, .x=0x5c, .y=0xf8, .sp=0xf2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4f66, .value=0xc8}, {.addr=0x4f67, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x4f68, .a=0x3f, .x=0x5c, .y=0xf8, .sp=0xf2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4f66, .value=0xc8}, {.addr=0x4f67, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x4f66, .value=0xc8, .type=IO_READ},
        {.addr=0x4f67, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xf059, .a=0xf8, .x=0xbf, .y=0x3d, .sp=0x44, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf059, .value=0xc8}, {.addr=0xf05a, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xf05b, .a=0xf8, .x=0xbf, .y=0x3d, .sp=0x44, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf059, .value=0xc8}, {.addr=0xf05a, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xf059, .value=0xc8, .type=IO_READ},
        {.addr=0xf05a, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x9af4, .a=0x5e, .x=0xaf, .y=0x8c, .sp=0xc7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9af4, .value=0xc8}, {.addr=0x9af5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9af6, .a=0x5e, .x=0xaf, .y=0x8c, .sp=0xc7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9af4, .value=0xc8}, {.addr=0x9af5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9af4, .value=0xc8, .type=IO_READ},
        {.addr=0x9af5, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x2b26, .a=0x5f, .x=0xd0, .y=0xb6, .sp=0x01, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2b26, .value=0xc8}, {.addr=0x2b27, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2b28, .a=0x5f, .x=0xd0, .y=0xb6, .sp=0x01, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2b26, .value=0xc8}, {.addr=0x2b27, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2b26, .value=0xc8, .type=IO_READ},
        {.addr=0x2b27, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x60e4, .a=0x8b, .x=0xb1, .y=0xd4, .sp=0xa8, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x60e4, .value=0xc8}, {.addr=0x60e5, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x60e6, .a=0x8b, .x=0xb1, .y=0xd4, .sp=0xa8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x60e4, .value=0xc8}, {.addr=0x60e5, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x60e4, .value=0xc8, .type=IO_READ},
        {.addr=0x60e5, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xfcaa, .a=0x2f, .x=0xa4, .y=0x01, .sp=0xbf, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xfcaa, .value=0xc8}, {.addr=0xfcab, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xfcac, .a=0x2f, .x=0xa4, .y=0x01, .sp=0xbf, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xfcaa, .value=0xc8}, {.addr=0xfcab, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xfcaa, .value=0xc8, .type=IO_READ},
        {.addr=0xfcab, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x7a82, .a=0x96, .x=0x09, .y=0x45, .sp=0x8a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7a82, .value=0xc8}, {.addr=0x7a83, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7a84, .a=0x96, .x=0x09, .y=0x45, .sp=0x8a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7a82, .value=0xc8}, {.addr=0x7a83, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7a82, .value=0xc8, .type=IO_READ},
        {.addr=0x7a83, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x0f9a, .a=0x5e, .x=0x98, .y=0x15, .sp=0xaa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0f9a, .value=0xc8}, {.addr=0x0f9b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x0f9c, .a=0x5e, .x=0x98, .y=0x15, .sp=0xaa, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0f9a, .value=0xc8}, {.addr=0x0f9b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x0f9a, .value=0xc8, .type=IO_READ},
        {.addr=0x0f9b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x08eb, .a=0x2e, .x=0xe4, .y=0x3a, .sp=0xf3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x08eb, .value=0xc8}, {.addr=0x08ec, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x08ed, .a=0x2e, .x=0xe4, .y=0x3a, .sp=0xf3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x08eb, .value=0xc8}, {.addr=0x08ec, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x08eb, .value=0xc8, .type=IO_READ},
        {.addr=0x08ec, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x890a, .a=0x1c, .x=0x14, .y=0xba, .sp=0x5a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x890a, .value=0xc8}, {.addr=0x890b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x890c, .a=0x1c, .x=0x14, .y=0xba, .sp=0x5a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x890a, .value=0xc8}, {.addr=0x890b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x890a, .value=0xc8, .type=IO_READ},
        {.addr=0x890b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xe7fe, .a=0x3a, .x=0x96, .y=0x05, .sp=0x90, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe7fe, .value=0xc8}, {.addr=0xe7ff, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xe800, .a=0x3a, .x=0x96, .y=0x05, .sp=0x90, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe7fe, .value=0xc8}, {.addr=0xe7ff, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xe7fe, .value=0xc8, .type=IO_READ},
        {.addr=0xe7ff, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xbe66, .a=0xb0, .x=0x8e, .y=0xb6, .sp=0x5c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xbe66, .value=0xc8}, {.addr=0xbe67, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xbe68, .a=0xb0, .x=0x8e, .y=0xb6, .sp=0x5c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xbe66, .value=0xc8}, {.addr=0xbe67, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xbe66, .value=0xc8, .type=IO_READ},
        {.addr=0xbe67, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x457e, .a=0xd7, .x=0xd8, .y=0x16, .sp=0x33, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x457e, .value=0xc8}, {.addr=0x457f, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x4580, .a=0xd7, .x=0xd8, .y=0x16, .sp=0x33, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x457e, .value=0xc8}, {.addr=0x457f, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x457e, .value=0xc8, .type=IO_READ},
        {.addr=0x457f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x9756, .a=0x5a, .x=0xf0, .y=0x81, .sp=0x16, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9756, .value=0xc8}, {.addr=0x9757, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x9758, .a=0x5a, .x=0xf0, .y=0x81, .sp=0x16, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9756, .value=0xc8}, {.addr=0x9757, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x9756, .value=0xc8, .type=IO_READ},
        {.addr=0x9757, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x9d84, .a=0xe3, .x=0x4f, .y=0x63, .sp=0xfc, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9d84, .value=0xc8}, {.addr=0x9d85, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x9d86, .a=0xe3, .x=0x4f, .y=0x63, .sp=0xfc, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9d84, .value=0xc8}, {.addr=0x9d85, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x9d84, .value=0xc8, .type=IO_READ},
        {.addr=0x9d85, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x54dd, .a=0xd0, .x=0xa2, .y=0x8c, .sp=0xab, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x54dd, .value=0xc8}, {.addr=0x54de, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x54df, .a=0xd0, .x=0xa2, .y=0x8c, .sp=0xab, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x54dd, .value=0xc8}, {.addr=0x54de, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x54dd, .value=0xc8, .type=IO_READ},
        {.addr=0x54de, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xe586, .a=0xe0, .x=0x05, .y=0xf4, .sp=0x4a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe586, .value=0xc8}, {.addr=0xe587, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xe588, .a=0xe0, .x=0x05, .y=0xf4, .sp=0x4a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe586, .value=0xc8}, {.addr=0xe587, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xe586, .value=0xc8, .type=IO_READ},
        {.addr=0xe587, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xee52, .a=0xc8, .x=0x4f, .y=0x30, .sp=0x20, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xee52, .value=0xc8}, {.addr=0xee53, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xee54, .a=0xc8, .x=0x4f, .y=0x30, .sp=0x20, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xee52, .value=0xc8}, {.addr=0xee53, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xee52, .value=0xc8, .type=IO_READ},
        {.addr=0xee53, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x4c50, .a=0x01, .x=0xef, .y=0xda, .sp=0xa2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4c50, .value=0xc8}, {.addr=0x4c51, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4c52, .a=0x01, .x=0xef, .y=0xda, .sp=0xa2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4c50, .value=0xc8}, {.addr=0x4c51, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4c50, .value=0xc8, .type=IO_READ},
        {.addr=0x4c51, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xee4c, .a=0x79, .x=0x12, .y=0x0b, .sp=0xf3, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xee4c, .value=0xc8}, {.addr=0xee4d, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xee4e, .a=0x79, .x=0x12, .y=0x0b, .sp=0xf3, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xee4c, .value=0xc8}, {.addr=0xee4d, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xee4c, .value=0xc8, .type=IO_READ},
        {.addr=0xee4d, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x2cad, .a=0x6d, .x=0x5b, .y=0x44, .sp=0xdb, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x2cad, .value=0xc8}, {.addr=0x2cae, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x2caf, .a=0x6d, .x=0x5b, .y=0x44, .sp=0xdb, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2cad, .value=0xc8}, {.addr=0x2cae, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x2cad, .value=0xc8, .type=IO_READ},
        {.addr=0x2cae, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x0d15, .a=0x85, .x=0x63, .y=0xac, .sp=0x9e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0d15, .value=0xc8}, {.addr=0x0d16, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0d17, .a=0x85, .x=0x63, .y=0xac, .sp=0x9e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0d15, .value=0xc8}, {.addr=0x0d16, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0d15, .value=0xc8, .type=IO_READ},
        {.addr=0x0d16, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xff2f, .a=0x64, .x=0xb0, .y=0xc4, .sp=0x27, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xff2f, .value=0xc8}, {.addr=0xff30, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xff31, .a=0x64, .x=0xb0, .y=0xc4, .sp=0x27, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xff2f, .value=0xc8}, {.addr=0xff30, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xff2f, .value=0xc8, .type=IO_READ},
        {.addr=0xff30, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x29ab, .a=0xd7, .x=0xc2, .y=0xaf, .sp=0x13, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x29ab, .value=0xc8}, {.addr=0x29ac, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x29ad, .a=0xd7, .x=0xc2, .y=0xaf, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x29ab, .value=0xc8}, {.addr=0x29ac, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x29ab, .value=0xc8, .type=IO_READ},
        {.addr=0x29ac, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xd8f3, .a=0x41, .x=0xe0, .y=0x20, .sp=0x49, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f3, .value=0xc8}, {.addr=0xd8f4, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xd8f5, .a=0x41, .x=0xe0, .y=0x20, .sp=0x49, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd8f3, .value=0xc8}, {.addr=0xd8f4, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xd8f3, .value=0xc8, .type=IO_READ},
        {.addr=0xd8f4, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x107c, .a=0x07, .x=0xa0, .y=0xda, .sp=0x8f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x107c, .value=0xc8}, {.addr=0x107d, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x107e, .a=0x07, .x=0xa0, .y=0xda, .sp=0x8f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x107c, .value=0xc8}, {.addr=0x107d, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x107c, .value=0xc8, .type=IO_READ},
        {.addr=0x107d, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xe778, .a=0x4c, .x=0x8a, .y=0xe8, .sp=0x2f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe778, .value=0xc8}, {.addr=0xe779, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xe77a, .a=0x4c, .x=0x8a, .y=0xe8, .sp=0x2f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe778, .value=0xc8}, {.addr=0xe779, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xe778, .value=0xc8, .type=IO_READ},
        {.addr=0xe779, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x36f5, .a=0x06, .x=0xf5, .y=0x00, .sp=0x64, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x36f5, .value=0xc8}, {.addr=0x36f6, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x36f7, .a=0x06, .x=0xf5, .y=0x00, .sp=0x64, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x36f5, .value=0xc8}, {.addr=0x36f6, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x36f5, .value=0xc8, .type=IO_READ},
        {.addr=0x36f6, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xc592, .a=0x6b, .x=0x07, .y=0x7a, .sp=0xf9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xc592, .value=0xc8}, {.addr=0xc593, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xc594, .a=0x6b, .x=0x07, .y=0x7a, .sp=0xf9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc592, .value=0xc8}, {.addr=0xc593, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xc592, .value=0xc8, .type=IO_READ},
        {.addr=0xc593, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x7547, .a=0x4b, .x=0xf4, .y=0xd4, .sp=0x09, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x7547, .value=0xc8}, {.addr=0x7548, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x7549, .a=0x4b, .x=0xf4, .y=0xd4, .sp=0x09, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7547, .value=0xc8}, {.addr=0x7548, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x7547, .value=0xc8, .type=IO_READ},
        {.addr=0x7548, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xca57, .a=0x8a, .x=0x24, .y=0xd3, .sp=0xf9, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xca57, .value=0xc8}, {.addr=0xca58, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xca59, .a=0x8a, .x=0x24, .y=0xd3, .sp=0xf9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xca57, .value=0xc8}, {.addr=0xca58, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xca57, .value=0xc8, .type=IO_READ},
        {.addr=0xca58, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x001d, .a=0x37, .x=0xdc, .y=0x42, .sp=0x50, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0xc8}, {.addr=0x001e, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x001f, .a=0x37, .x=0xdc, .y=0x42, .sp=0x50, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0xc8}, {.addr=0x001e, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x001d, .value=0xc8, .type=IO_READ},
        {.addr=0x001e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x542d, .a=0x40, .x=0xb2, .y=0xf7, .sp=0xc6, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x542d, .value=0xc8}, {.addr=0x542e, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x542f, .a=0x40, .x=0xb2, .y=0xf7, .sp=0xc6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x542d, .value=0xc8}, {.addr=0x542e, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x542d, .value=0xc8, .type=IO_READ},
        {.addr=0x542e, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x257d, .a=0x02, .x=0x2d, .y=0xee, .sp=0xda, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x257d, .value=0xc8}, {.addr=0x257e, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x257f, .a=0x02, .x=0x2d, .y=0xee, .sp=0xda, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x257d, .value=0xc8}, {.addr=0x257e, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x257d, .value=0xc8, .type=IO_READ},
        {.addr=0x257e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x2484, .a=0xd9, .x=0x0f, .y=0x39, .sp=0x41, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2484, .value=0xc8}, {.addr=0x2485, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x2486, .a=0xd9, .x=0x0f, .y=0x39, .sp=0x41, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2484, .value=0xc8}, {.addr=0x2485, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x2484, .value=0xc8, .type=IO_READ},
        {.addr=0x2485, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xd4cb, .a=0x46, .x=0x1c, .y=0x59, .sp=0xe7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd4cb, .value=0xc8}, {.addr=0xd4cc, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xd4cd, .a=0x46, .x=0x1c, .y=0x59, .sp=0xe7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd4cb, .value=0xc8}, {.addr=0xd4cc, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xd4cb, .value=0xc8, .type=IO_READ},
        {.addr=0xd4cc, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x50ec, .a=0x9b, .x=0x0e, .y=0x4c, .sp=0xdb, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x50ec, .value=0xc8}, {.addr=0x50ed, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x50ee, .a=0x9b, .x=0x0e, .y=0x4c, .sp=0xdb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x50ec, .value=0xc8}, {.addr=0x50ed, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x50ec, .value=0xc8, .type=IO_READ},
        {.addr=0x50ed, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xc660, .a=0xa7, .x=0x2f, .y=0x69, .sp=0x84, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xc660, .value=0xc8}, {.addr=0xc661, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xc662, .a=0xa7, .x=0x2f, .y=0x69, .sp=0x84, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc660, .value=0xc8}, {.addr=0xc661, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xc660, .value=0xc8, .type=IO_READ},
        {.addr=0xc661, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xd054, .a=0x22, .x=0xd5, .y=0x4e, .sp=0x40, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd054, .value=0xc8}, {.addr=0xd055, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xd056, .a=0x22, .x=0xd5, .y=0x4e, .sp=0x40, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd054, .value=0xc8}, {.addr=0xd055, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xd054, .value=0xc8, .type=IO_READ},
        {.addr=0xd055, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x83e2, .a=0x4e, .x=0x8e, .y=0x89, .sp=0xcf, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x83e2, .value=0xc8}, {.addr=0x83e3, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x83e4, .a=0x4e, .x=0x8e, .y=0x89, .sp=0xcf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x83e2, .value=0xc8}, {.addr=0x83e3, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x83e2, .value=0xc8, .type=IO_READ},
        {.addr=0x83e3, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2c1c, .a=0xa3, .x=0xae, .y=0x77, .sp=0x4b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x2c1c, .value=0xc8}, {.addr=0x2c1d, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x2c1e, .a=0xa3, .x=0xae, .y=0x77, .sp=0x4b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2c1c, .value=0xc8}, {.addr=0x2c1d, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x2c1c, .value=0xc8, .type=IO_READ},
        {.addr=0x2c1d, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xd1e5, .a=0x59, .x=0x0b, .y=0xba, .sp=0xdb, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e5, .value=0xc8}, {.addr=0xd1e6, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xd1e7, .a=0x59, .x=0x0b, .y=0xba, .sp=0xdb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd1e5, .value=0xc8}, {.addr=0xd1e6, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xd1e5, .value=0xc8, .type=IO_READ},
        {.addr=0xd1e6, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x16e1, .a=0x01, .x=0x09, .y=0x6d, .sp=0x44, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x16e1, .value=0xc8}, {.addr=0x16e2, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x16e3, .a=0x01, .x=0x09, .y=0x6d, .sp=0x44, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x16e1, .value=0xc8}, {.addr=0x16e2, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x16e1, .value=0xc8, .type=IO_READ},
        {.addr=0x16e2, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xc597, .a=0xf2, .x=0x7d, .y=0x46, .sp=0xae, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc597, .value=0xc8}, {.addr=0xc598, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xc599, .a=0xf2, .x=0x7d, .y=0x46, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc597, .value=0xc8}, {.addr=0xc598, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xc597, .value=0xc8, .type=IO_READ},
        {.addr=0xc598, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x4115, .a=0x3c, .x=0x3e, .y=0xd9, .sp=0xee, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x4115, .value=0xc8}, {.addr=0x4116, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x4117, .a=0x3c, .x=0x3e, .y=0xd9, .sp=0xee, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4115, .value=0xc8}, {.addr=0x4116, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x4115, .value=0xc8, .type=IO_READ},
        {.addr=0x4116, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xc666, .a=0x8f, .x=0xf9, .y=0x2d, .sp=0x73, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc666, .value=0xc8}, {.addr=0xc667, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xc668, .a=0x8f, .x=0xf9, .y=0x2d, .sp=0x73, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc666, .value=0xc8}, {.addr=0xc667, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xc666, .value=0xc8, .type=IO_READ},
        {.addr=0xc667, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x01c6, .a=0xa8, .x=0x31, .y=0xdc, .sp=0x7e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xc8}, {.addr=0x01c7, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x01c8, .a=0xa8, .x=0x31, .y=0xdc, .sp=0x7e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xc8}, {.addr=0x01c7, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x01c6, .value=0xc8, .type=IO_READ},
        {.addr=0x01c7, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x5abd, .a=0x68, .x=0x3b, .y=0xa1, .sp=0x09, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x5abd, .value=0xc8}, {.addr=0x5abe, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x5abf, .a=0x68, .x=0x3b, .y=0xa1, .sp=0x09, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5abd, .value=0xc8}, {.addr=0x5abe, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x5abd, .value=0xc8, .type=IO_READ},
        {.addr=0x5abe, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x20b8, .a=0xf2, .x=0x7c, .y=0x54, .sp=0x7a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x20b8, .value=0xc8}, {.addr=0x20b9, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x20ba, .a=0xf2, .x=0x7c, .y=0x54, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x20b8, .value=0xc8}, {.addr=0x20b9, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x20b8, .value=0xc8, .type=IO_READ},
        {.addr=0x20b9, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x1e0c, .a=0x72, .x=0xce, .y=0x13, .sp=0x28, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0c, .value=0xc8}, {.addr=0x1e0d, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x1e0e, .a=0x72, .x=0xce, .y=0x13, .sp=0x28, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1e0c, .value=0xc8}, {.addr=0x1e0d, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x1e0c, .value=0xc8, .type=IO_READ},
        {.addr=0x1e0d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x3892, .a=0x80, .x=0xa3, .y=0x63, .sp=0x8b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3892, .value=0xc8}, {.addr=0x3893, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3894, .a=0x80, .x=0xa3, .y=0x63, .sp=0x8b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3892, .value=0xc8}, {.addr=0x3893, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3892, .value=0xc8, .type=IO_READ},
        {.addr=0x3893, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xb9a6, .a=0x57, .x=0x6e, .y=0x01, .sp=0x42, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a6, .value=0xc8}, {.addr=0xb9a7, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xb9a8, .a=0x57, .x=0x6e, .y=0x01, .sp=0x42, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb9a6, .value=0xc8}, {.addr=0xb9a7, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xb9a6, .value=0xc8, .type=IO_READ},
        {.addr=0xb9a7, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xd95b, .a=0x10, .x=0xa4, .y=0xb8, .sp=0x8f, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd95b, .value=0xc8}, {.addr=0xd95c, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd95d, .a=0x10, .x=0xa4, .y=0xb8, .sp=0x8f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd95b, .value=0xc8}, {.addr=0xd95c, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd95b, .value=0xc8, .type=IO_READ},
        {.addr=0xd95c, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb76e, .a=0x7b, .x=0x7a, .y=0x29, .sp=0xf0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb76e, .value=0xc8}, {.addr=0xb76f, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xb770, .a=0x7b, .x=0x7a, .y=0x29, .sp=0xf0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb76e, .value=0xc8}, {.addr=0xb76f, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xb76e, .value=0xc8, .type=IO_READ},
        {.addr=0xb76f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x03c3, .a=0x8b, .x=0x48, .y=0x3b, .sp=0x94, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x03c3, .value=0xc8}, {.addr=0x03c4, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x03c5, .a=0x8b, .x=0x48, .y=0x3b, .sp=0x94, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x03c3, .value=0xc8}, {.addr=0x03c4, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x03c3, .value=0xc8, .type=IO_READ},
        {.addr=0x03c4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0200) {
    const struct CPU_State initial_cpu = {.pc=0x7013, .a=0x61, .x=0xc7, .y=0x74, .sp=0x12, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7013, .value=0xc8}, {.addr=0x7014, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x7015, .a=0x61, .x=0xc7, .y=0x74, .sp=0x12, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7013, .value=0xc8}, {.addr=0x7014, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x7013, .value=0xc8, .type=IO_READ},
        {.addr=0x7014, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0201) {
    const struct CPU_State initial_cpu = {.pc=0xb644, .a=0xa3, .x=0x08, .y=0x8d, .sp=0x6c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xb644, .value=0xc8}, {.addr=0xb645, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xb646, .a=0xa3, .x=0x08, .y=0x8d, .sp=0x6c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb644, .value=0xc8}, {.addr=0xb645, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xb644, .value=0xc8, .type=IO_READ},
        {.addr=0xb645, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa4df, .a=0x9a, .x=0xe1, .y=0x29, .sp=0x96, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa4df, .value=0xc8}, {.addr=0xa4e0, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa4e1, .a=0x9a, .x=0xe1, .y=0x29, .sp=0x96, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa4df, .value=0xc8}, {.addr=0xa4e0, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa4df, .value=0xc8, .type=IO_READ},
        {.addr=0xa4e0, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0203) {
    const struct CPU_State initial_cpu = {.pc=0x2450, .a=0x8f, .x=0x46, .y=0xb4, .sp=0x18, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x2450, .value=0xc8}, {.addr=0x2451, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2452, .a=0x8f, .x=0x46, .y=0xb4, .sp=0x18, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2450, .value=0xc8}, {.addr=0x2451, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2450, .value=0xc8, .type=IO_READ},
        {.addr=0x2451, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0204) {
    const struct CPU_State initial_cpu = {.pc=0x09c7, .a=0x02, .x=0x31, .y=0x56, .sp=0x5c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x09c7, .value=0xc8}, {.addr=0x09c8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x09c9, .a=0x02, .x=0x31, .y=0x56, .sp=0x5c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x09c7, .value=0xc8}, {.addr=0x09c8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x09c7, .value=0xc8, .type=IO_READ},
        {.addr=0x09c8, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0205) {
    const struct CPU_State initial_cpu = {.pc=0x96a9, .a=0x44, .x=0x47, .y=0xe8, .sp=0x91, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x96a9, .value=0xc8}, {.addr=0x96aa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x96ab, .a=0x44, .x=0x47, .y=0xe8, .sp=0x91, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x96a9, .value=0xc8}, {.addr=0x96aa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x96a9, .value=0xc8, .type=IO_READ},
        {.addr=0x96aa, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0206) {
    const struct CPU_State initial_cpu = {.pc=0xef38, .a=0x2e, .x=0xa2, .y=0xa9, .sp=0x39, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xef38, .value=0xc8}, {.addr=0xef39, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xef3a, .a=0x2e, .x=0xa2, .y=0xa9, .sp=0x39, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xef38, .value=0xc8}, {.addr=0xef39, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xef38, .value=0xc8, .type=IO_READ},
        {.addr=0xef39, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0207) {
    const struct CPU_State initial_cpu = {.pc=0x2c58, .a=0x0d, .x=0x0b, .y=0xc4, .sp=0x94, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x2c58, .value=0xc8}, {.addr=0x2c59, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2c5a, .a=0x0d, .x=0x0b, .y=0xc4, .sp=0x94, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2c58, .value=0xc8}, {.addr=0x2c59, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2c58, .value=0xc8, .type=IO_READ},
        {.addr=0x2c59, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0208) {
    const struct CPU_State initial_cpu = {.pc=0xdada, .a=0x39, .x=0x64, .y=0x2a, .sp=0x7f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xdada, .value=0xc8}, {.addr=0xdadb, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xdadc, .a=0x39, .x=0x64, .y=0x2a, .sp=0x7f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdada, .value=0xc8}, {.addr=0xdadb, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xdada, .value=0xc8, .type=IO_READ},
        {.addr=0xdadb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0209) {
    const struct CPU_State initial_cpu = {.pc=0x8ba9, .a=0xeb, .x=0x4b, .y=0x66, .sp=0xad, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba9, .value=0xc8}, {.addr=0x8baa, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x8bab, .a=0xeb, .x=0x4b, .y=0x66, .sp=0xad, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8ba9, .value=0xc8}, {.addr=0x8baa, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x8ba9, .value=0xc8, .type=IO_READ},
        {.addr=0x8baa, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_020A) {
    const struct CPU_State initial_cpu = {.pc=0xeca2, .a=0x4f, .x=0x5a, .y=0x7e, .sp=0xdb, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xeca2, .value=0xc8}, {.addr=0xeca3, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xeca4, .a=0x4f, .x=0x5a, .y=0x7e, .sp=0xdb, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xeca2, .value=0xc8}, {.addr=0xeca3, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xeca2, .value=0xc8, .type=IO_READ},
        {.addr=0xeca3, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_020B) {
    const struct CPU_State initial_cpu = {.pc=0x1d63, .a=0x8d, .x=0x42, .y=0x0e, .sp=0xc5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d63, .value=0xc8}, {.addr=0x1d64, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1d65, .a=0x8d, .x=0x42, .y=0x0e, .sp=0xc5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1d63, .value=0xc8}, {.addr=0x1d64, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1d63, .value=0xc8, .type=IO_READ},
        {.addr=0x1d64, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_020C) {
    const struct CPU_State initial_cpu = {.pc=0x9bd1, .a=0x78, .x=0x5a, .y=0xa9, .sp=0xcd, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd1, .value=0xc8}, {.addr=0x9bd2, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x9bd3, .a=0x78, .x=0x5a, .y=0xa9, .sp=0xcd, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9bd1, .value=0xc8}, {.addr=0x9bd2, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x9bd1, .value=0xc8, .type=IO_READ},
        {.addr=0x9bd2, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_020D) {
    const struct CPU_State initial_cpu = {.pc=0x3d1f, .a=0xfe, .x=0x7c, .y=0x66, .sp=0x8d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1f, .value=0xc8}, {.addr=0x3d20, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x3d21, .a=0xfe, .x=0x7c, .y=0x66, .sp=0x8d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3d1f, .value=0xc8}, {.addr=0x3d20, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x3d1f, .value=0xc8, .type=IO_READ},
        {.addr=0x3d20, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_020E) {
    const struct CPU_State initial_cpu = {.pc=0x7e84, .a=0x4e, .x=0xb7, .y=0x6f, .sp=0x63, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7e84, .value=0xc8}, {.addr=0x7e85, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x7e86, .a=0x4e, .x=0xb7, .y=0x6f, .sp=0x63, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7e84, .value=0xc8}, {.addr=0x7e85, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x7e84, .value=0xc8, .type=IO_READ},
        {.addr=0x7e85, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_020F) {
    const struct CPU_State initial_cpu = {.pc=0x960a, .a=0xb2, .x=0x12, .y=0xb0, .sp=0xbb, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x960a, .value=0xc8}, {.addr=0x960b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x960c, .a=0xb2, .x=0x12, .y=0xb0, .sp=0xbb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x960a, .value=0xc8}, {.addr=0x960b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x960a, .value=0xc8, .type=IO_READ},
        {.addr=0x960b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0210) {
    const struct CPU_State initial_cpu = {.pc=0xabd8, .a=0x25, .x=0xfa, .y=0x66, .sp=0x7d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xabd8, .value=0xc8}, {.addr=0xabd9, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xabda, .a=0x25, .x=0xfa, .y=0x66, .sp=0x7d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xabd8, .value=0xc8}, {.addr=0xabd9, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xabd8, .value=0xc8, .type=IO_READ},
        {.addr=0xabd9, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0211) {
    const struct CPU_State initial_cpu = {.pc=0x2d0b, .a=0x3a, .x=0xd8, .y=0x27, .sp=0x91, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d0b, .value=0xc8}, {.addr=0x2d0c, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x2d0d, .a=0x3a, .x=0xd8, .y=0x27, .sp=0x91, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2d0b, .value=0xc8}, {.addr=0x2d0c, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x2d0b, .value=0xc8, .type=IO_READ},
        {.addr=0x2d0c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0212) {
    const struct CPU_State initial_cpu = {.pc=0x8df4, .a=0xed, .x=0xf7, .y=0x74, .sp=0x1a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x8df4, .value=0xc8}, {.addr=0x8df5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8df6, .a=0xed, .x=0xf7, .y=0x74, .sp=0x1a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8df4, .value=0xc8}, {.addr=0x8df5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8df4, .value=0xc8, .type=IO_READ},
        {.addr=0x8df5, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0213) {
    const struct CPU_State initial_cpu = {.pc=0x5a92, .a=0xb0, .x=0x98, .y=0x4e, .sp=0x7c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5a92, .value=0xc8}, {.addr=0x5a93, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x5a94, .a=0xb0, .x=0x98, .y=0x4e, .sp=0x7c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5a92, .value=0xc8}, {.addr=0x5a93, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x5a92, .value=0xc8, .type=IO_READ},
        {.addr=0x5a93, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0214) {
    const struct CPU_State initial_cpu = {.pc=0xfcbe, .a=0x0d, .x=0x03, .y=0xc4, .sp=0x73, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfcbe, .value=0xc8}, {.addr=0xfcbf, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xfcc0, .a=0x0d, .x=0x03, .y=0xc4, .sp=0x73, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfcbe, .value=0xc8}, {.addr=0xfcbf, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xfcbe, .value=0xc8, .type=IO_READ},
        {.addr=0xfcbf, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0215) {
    const struct CPU_State initial_cpu = {.pc=0xf61d, .a=0x25, .x=0xb2, .y=0x72, .sp=0x9f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf61d, .value=0xc8}, {.addr=0xf61e, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xf61f, .a=0x25, .x=0xb2, .y=0x72, .sp=0x9f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf61d, .value=0xc8}, {.addr=0xf61e, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xf61d, .value=0xc8, .type=IO_READ},
        {.addr=0xf61e, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0216) {
    const struct CPU_State initial_cpu = {.pc=0xd6bd, .a=0xfb, .x=0xe3, .y=0xfb, .sp=0x4b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xd6bd, .value=0xc8}, {.addr=0xd6be, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xd6bf, .a=0xfb, .x=0xe3, .y=0xfb, .sp=0x4b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd6bd, .value=0xc8}, {.addr=0xd6be, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xd6bd, .value=0xc8, .type=IO_READ},
        {.addr=0xd6be, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0217) {
    const struct CPU_State initial_cpu = {.pc=0x07c6, .a=0x36, .x=0xe8, .y=0xa3, .sp=0x25, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x07c6, .value=0xc8}, {.addr=0x07c7, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x07c8, .a=0x36, .x=0xe8, .y=0xa3, .sp=0x25, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x07c6, .value=0xc8}, {.addr=0x07c7, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x07c6, .value=0xc8, .type=IO_READ},
        {.addr=0x07c7, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0218) {
    const struct CPU_State initial_cpu = {.pc=0x92d2, .a=0x6a, .x=0x3e, .y=0xbb, .sp=0x1b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x92d2, .value=0xc8}, {.addr=0x92d3, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x92d4, .a=0x6a, .x=0x3e, .y=0xbb, .sp=0x1b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x92d2, .value=0xc8}, {.addr=0x92d3, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x92d2, .value=0xc8, .type=IO_READ},
        {.addr=0x92d3, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0219) {
    const struct CPU_State initial_cpu = {.pc=0x5d91, .a=0x61, .x=0x4a, .y=0x6d, .sp=0xa1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5d91, .value=0xc8}, {.addr=0x5d92, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5d93, .a=0x61, .x=0x4a, .y=0x6d, .sp=0xa1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5d91, .value=0xc8}, {.addr=0x5d92, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5d91, .value=0xc8, .type=IO_READ},
        {.addr=0x5d92, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_021A) {
    const struct CPU_State initial_cpu = {.pc=0xbb86, .a=0xdc, .x=0xb7, .y=0x7f, .sp=0x1e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb86, .value=0xc8}, {.addr=0xbb87, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xbb88, .a=0xdc, .x=0xb7, .y=0x7f, .sp=0x1e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbb86, .value=0xc8}, {.addr=0xbb87, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xbb86, .value=0xc8, .type=IO_READ},
        {.addr=0xbb87, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_021B) {
    const struct CPU_State initial_cpu = {.pc=0x83f8, .a=0x1c, .x=0x7b, .y=0xdb, .sp=0xbb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x83f8, .value=0xc8}, {.addr=0x83f9, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x83fa, .a=0x1c, .x=0x7b, .y=0xdb, .sp=0xbb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x83f8, .value=0xc8}, {.addr=0x83f9, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x83f8, .value=0xc8, .type=IO_READ},
        {.addr=0x83f9, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_021C) {
    const struct CPU_State initial_cpu = {.pc=0x9c0b, .a=0x24, .x=0x24, .y=0xf7, .sp=0xfa, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0b, .value=0xc8}, {.addr=0x9c0c, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x9c0d, .a=0x24, .x=0x24, .y=0xf7, .sp=0xfa, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9c0b, .value=0xc8}, {.addr=0x9c0c, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x9c0b, .value=0xc8, .type=IO_READ},
        {.addr=0x9c0c, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_021D) {
    const struct CPU_State initial_cpu = {.pc=0x880d, .a=0xd7, .x=0x9a, .y=0x68, .sp=0x77, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x880d, .value=0xc8}, {.addr=0x880e, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x880f, .a=0xd7, .x=0x9a, .y=0x68, .sp=0x77, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x880d, .value=0xc8}, {.addr=0x880e, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x880d, .value=0xc8, .type=IO_READ},
        {.addr=0x880e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_021E) {
    const struct CPU_State initial_cpu = {.pc=0xf38e, .a=0xe5, .x=0xe4, .y=0x39, .sp=0x94, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xf38e, .value=0xc8}, {.addr=0xf38f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xf390, .a=0xe5, .x=0xe4, .y=0x39, .sp=0x94, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf38e, .value=0xc8}, {.addr=0xf38f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xf38e, .value=0xc8, .type=IO_READ},
        {.addr=0xf38f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_021F) {
    const struct CPU_State initial_cpu = {.pc=0xf2bf, .a=0x77, .x=0xf4, .y=0xc5, .sp=0xaf, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xf2bf, .value=0xc8}, {.addr=0xf2c0, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xf2c1, .a=0x77, .x=0xf4, .y=0xc5, .sp=0xaf, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf2bf, .value=0xc8}, {.addr=0xf2c0, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xf2bf, .value=0xc8, .type=IO_READ},
        {.addr=0xf2c0, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0220) {
    const struct CPU_State initial_cpu = {.pc=0xda04, .a=0xc3, .x=0xa4, .y=0x19, .sp=0xd7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xda04, .value=0xc8}, {.addr=0xda05, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xda06, .a=0xc3, .x=0xa4, .y=0x19, .sp=0xd7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xda04, .value=0xc8}, {.addr=0xda05, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xda04, .value=0xc8, .type=IO_READ},
        {.addr=0xda05, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0221) {
    const struct CPU_State initial_cpu = {.pc=0x9c9c, .a=0xa3, .x=0x78, .y=0x25, .sp=0x23, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9c, .value=0xc8}, {.addr=0x9c9d, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x9c9e, .a=0xa3, .x=0x78, .y=0x25, .sp=0x23, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9c9c, .value=0xc8}, {.addr=0x9c9d, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x9c9c, .value=0xc8, .type=IO_READ},
        {.addr=0x9c9d, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0222) {
    const struct CPU_State initial_cpu = {.pc=0x4b4c, .a=0xd1, .x=0x6d, .y=0x1f, .sp=0x1b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4c, .value=0xc8}, {.addr=0x4b4d, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x4b4e, .a=0xd1, .x=0x6d, .y=0x1f, .sp=0x1b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4b4c, .value=0xc8}, {.addr=0x4b4d, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x4b4c, .value=0xc8, .type=IO_READ},
        {.addr=0x4b4d, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0223) {
    const struct CPU_State initial_cpu = {.pc=0xbdc5, .a=0x58, .x=0xba, .y=0x51, .sp=0x1c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc5, .value=0xc8}, {.addr=0xbdc6, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xbdc7, .a=0x58, .x=0xba, .y=0x51, .sp=0x1c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbdc5, .value=0xc8}, {.addr=0xbdc6, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xbdc5, .value=0xc8, .type=IO_READ},
        {.addr=0xbdc6, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0224) {
    const struct CPU_State initial_cpu = {.pc=0xcf5d, .a=0x47, .x=0x60, .y=0x95, .sp=0x7c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xcf5d, .value=0xc8}, {.addr=0xcf5e, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xcf5f, .a=0x47, .x=0x60, .y=0x95, .sp=0x7c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcf5d, .value=0xc8}, {.addr=0xcf5e, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xcf5d, .value=0xc8, .type=IO_READ},
        {.addr=0xcf5e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0225) {
    const struct CPU_State initial_cpu = {.pc=0x94ae, .a=0x5f, .x=0x22, .y=0xaf, .sp=0x7f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x94ae, .value=0xc8}, {.addr=0x94af, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x94b0, .a=0x5f, .x=0x22, .y=0xaf, .sp=0x7f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x94ae, .value=0xc8}, {.addr=0x94af, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x94ae, .value=0xc8, .type=IO_READ},
        {.addr=0x94af, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0226) {
    const struct CPU_State initial_cpu = {.pc=0x1afe, .a=0xb1, .x=0x60, .y=0xb1, .sp=0x1b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1afe, .value=0xc8}, {.addr=0x1aff, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x1b00, .a=0xb1, .x=0x60, .y=0xb1, .sp=0x1b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1afe, .value=0xc8}, {.addr=0x1aff, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x1afe, .value=0xc8, .type=IO_READ},
        {.addr=0x1aff, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0227) {
    const struct CPU_State initial_cpu = {.pc=0xb8b1, .a=0x64, .x=0x39, .y=0x9f, .sp=0x55, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b1, .value=0xc8}, {.addr=0xb8b2, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xb8b3, .a=0x64, .x=0x39, .y=0x9f, .sp=0x55, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb8b1, .value=0xc8}, {.addr=0xb8b2, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xb8b1, .value=0xc8, .type=IO_READ},
        {.addr=0xb8b2, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0228) {
    const struct CPU_State initial_cpu = {.pc=0x065d, .a=0x80, .x=0xc4, .y=0xc0, .sp=0x73, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x065d, .value=0xc8}, {.addr=0x065e, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x065f, .a=0x80, .x=0xc4, .y=0xc0, .sp=0x73, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x065d, .value=0xc8}, {.addr=0x065e, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x065d, .value=0xc8, .type=IO_READ},
        {.addr=0x065e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0229) {
    const struct CPU_State initial_cpu = {.pc=0xbac0, .a=0x15, .x=0x6a, .y=0xb0, .sp=0x22, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xbac0, .value=0xc8}, {.addr=0xbac1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbac2, .a=0x15, .x=0x6a, .y=0xb0, .sp=0x22, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbac0, .value=0xc8}, {.addr=0xbac1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbac0, .value=0xc8, .type=IO_READ},
        {.addr=0xbac1, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_022A) {
    const struct CPU_State initial_cpu = {.pc=0x627d, .a=0x4d, .x=0x52, .y=0xd4, .sp=0x3d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x627d, .value=0xc8}, {.addr=0x627e, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x627f, .a=0x4d, .x=0x52, .y=0xd4, .sp=0x3d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x627d, .value=0xc8}, {.addr=0x627e, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x627d, .value=0xc8, .type=IO_READ},
        {.addr=0x627e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_022B) {
    const struct CPU_State initial_cpu = {.pc=0xe1a8, .a=0xe0, .x=0xa2, .y=0x1c, .sp=0x0a, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a8, .value=0xc8}, {.addr=0xe1a9, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xe1aa, .a=0xe0, .x=0xa2, .y=0x1c, .sp=0x0a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe1a8, .value=0xc8}, {.addr=0xe1a9, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xe1a8, .value=0xc8, .type=IO_READ},
        {.addr=0xe1a9, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_022C) {
    const struct CPU_State initial_cpu = {.pc=0x3b2c, .a=0xac, .x=0xb7, .y=0xb2, .sp=0x72, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b2c, .value=0xc8}, {.addr=0x3b2d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3b2e, .a=0xac, .x=0xb7, .y=0xb2, .sp=0x72, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3b2c, .value=0xc8}, {.addr=0x3b2d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3b2c, .value=0xc8, .type=IO_READ},
        {.addr=0x3b2d, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_022D) {
    const struct CPU_State initial_cpu = {.pc=0x5cc5, .a=0x24, .x=0x7e, .y=0x8e, .sp=0x14, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc5, .value=0xc8}, {.addr=0x5cc6, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x5cc7, .a=0x24, .x=0x7e, .y=0x8e, .sp=0x14, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x5cc5, .value=0xc8}, {.addr=0x5cc6, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x5cc5, .value=0xc8, .type=IO_READ},
        {.addr=0x5cc6, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_022E) {
    const struct CPU_State initial_cpu = {.pc=0x89ab, .a=0xe3, .x=0xb0, .y=0x66, .sp=0x51, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x89ab, .value=0xc8}, {.addr=0x89ac, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x89ad, .a=0xe3, .x=0xb0, .y=0x66, .sp=0x51, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x89ab, .value=0xc8}, {.addr=0x89ac, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x89ab, .value=0xc8, .type=IO_READ},
        {.addr=0x89ac, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_022F) {
    const struct CPU_State initial_cpu = {.pc=0xbaea, .a=0xa2, .x=0xca, .y=0xa4, .sp=0xe5, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xbaea, .value=0xc8}, {.addr=0xbaeb, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xbaec, .a=0xa2, .x=0xca, .y=0xa4, .sp=0xe5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xbaea, .value=0xc8}, {.addr=0xbaeb, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xbaea, .value=0xc8, .type=IO_READ},
        {.addr=0xbaeb, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0230) {
    const struct CPU_State initial_cpu = {.pc=0x383e, .a=0xf5, .x=0xa1, .y=0x73, .sp=0x0a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x383e, .value=0xc8}, {.addr=0x383f, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x3840, .a=0xf5, .x=0xa1, .y=0x73, .sp=0x0a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x383e, .value=0xc8}, {.addr=0x383f, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x383e, .value=0xc8, .type=IO_READ},
        {.addr=0x383f, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0231) {
    const struct CPU_State initial_cpu = {.pc=0x8d71, .a=0xb9, .x=0x92, .y=0x17, .sp=0xb7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8d71, .value=0xc8}, {.addr=0x8d72, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x8d73, .a=0xb9, .x=0x92, .y=0x17, .sp=0xb7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8d71, .value=0xc8}, {.addr=0x8d72, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x8d71, .value=0xc8, .type=IO_READ},
        {.addr=0x8d72, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0232) {
    const struct CPU_State initial_cpu = {.pc=0x9361, .a=0x26, .x=0x1d, .y=0x6d, .sp=0x49, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x9361, .value=0xc8}, {.addr=0x9362, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9363, .a=0x26, .x=0x1d, .y=0x6d, .sp=0x49, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9361, .value=0xc8}, {.addr=0x9362, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9361, .value=0xc8, .type=IO_READ},
        {.addr=0x9362, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0233) {
    const struct CPU_State initial_cpu = {.pc=0x651c, .a=0xab, .x=0xeb, .y=0xcb, .sp=0x6b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x651c, .value=0xc8}, {.addr=0x651d, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x651e, .a=0xab, .x=0xeb, .y=0xcb, .sp=0x6b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x651c, .value=0xc8}, {.addr=0x651d, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x651c, .value=0xc8, .type=IO_READ},
        {.addr=0x651d, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0234) {
    const struct CPU_State initial_cpu = {.pc=0x4a83, .a=0x5d, .x=0x0d, .y=0xd5, .sp=0x8e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4a83, .value=0xc8}, {.addr=0x4a84, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4a85, .a=0x5d, .x=0x0d, .y=0xd5, .sp=0x8e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4a83, .value=0xc8}, {.addr=0x4a84, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4a83, .value=0xc8, .type=IO_READ},
        {.addr=0x4a84, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0235) {
    const struct CPU_State initial_cpu = {.pc=0xae08, .a=0xb0, .x=0x21, .y=0x09, .sp=0xf0, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xae08, .value=0xc8}, {.addr=0xae09, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xae0a, .a=0xb0, .x=0x21, .y=0x09, .sp=0xf0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xae08, .value=0xc8}, {.addr=0xae09, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xae08, .value=0xc8, .type=IO_READ},
        {.addr=0xae09, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc0f9, .a=0xe6, .x=0x30, .y=0x0c, .sp=0xe4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f9, .value=0xc8}, {.addr=0xc0fa, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xc0fb, .a=0xe6, .x=0x30, .y=0x0c, .sp=0xe4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc0f9, .value=0xc8}, {.addr=0xc0fa, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xc0f9, .value=0xc8, .type=IO_READ},
        {.addr=0xc0fa, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0237) {
    const struct CPU_State initial_cpu = {.pc=0x5411, .a=0x7f, .x=0x9e, .y=0xf5, .sp=0x74, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5411, .value=0xc8}, {.addr=0x5412, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5413, .a=0x7f, .x=0x9e, .y=0xf5, .sp=0x74, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5411, .value=0xc8}, {.addr=0x5412, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5411, .value=0xc8, .type=IO_READ},
        {.addr=0x5412, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0238) {
    const struct CPU_State initial_cpu = {.pc=0x1b48, .a=0x00, .x=0xb7, .y=0x30, .sp=0x3a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1b48, .value=0xc8}, {.addr=0x1b49, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x1b4a, .a=0x00, .x=0xb7, .y=0x30, .sp=0x3a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1b48, .value=0xc8}, {.addr=0x1b49, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x1b48, .value=0xc8, .type=IO_READ},
        {.addr=0x1b49, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0239) {
    const struct CPU_State initial_cpu = {.pc=0x5263, .a=0x30, .x=0xe6, .y=0xe3, .sp=0x36, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5263, .value=0xc8}, {.addr=0x5264, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x5265, .a=0x30, .x=0xe6, .y=0xe3, .sp=0x36, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5263, .value=0xc8}, {.addr=0x5264, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x5263, .value=0xc8, .type=IO_READ},
        {.addr=0x5264, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_023A) {
    const struct CPU_State initial_cpu = {.pc=0x647b, .a=0x4d, .x=0x0e, .y=0x2d, .sp=0x59, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x647b, .value=0xc8}, {.addr=0x647c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0x4d, .x=0x0e, .y=0x2d, .sp=0x59, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x647b, .value=0xc8}, {.addr=0x647c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x647b, .value=0xc8, .type=IO_READ},
        {.addr=0x647c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0fd1, .a=0xfe, .x=0x30, .y=0x74, .sp=0xb8, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0fd1, .value=0xc8}, {.addr=0x0fd2, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0fd3, .a=0xfe, .x=0x30, .y=0x74, .sp=0xb8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0fd1, .value=0xc8}, {.addr=0x0fd2, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0fd1, .value=0xc8, .type=IO_READ},
        {.addr=0x0fd2, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_023C) {
    const struct CPU_State initial_cpu = {.pc=0x94f2, .a=0x42, .x=0xc9, .y=0xf2, .sp=0x29, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x94f2, .value=0xc8}, {.addr=0x94f3, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x94f4, .a=0x42, .x=0xc9, .y=0xf2, .sp=0x29, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x94f2, .value=0xc8}, {.addr=0x94f3, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x94f2, .value=0xc8, .type=IO_READ},
        {.addr=0x94f3, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_023D) {
    const struct CPU_State initial_cpu = {.pc=0xfaef, .a=0x42, .x=0x7c, .y=0x1a, .sp=0xd9, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xfaef, .value=0xc8}, {.addr=0xfaf0, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xfaf1, .a=0x42, .x=0x7c, .y=0x1a, .sp=0xd9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfaef, .value=0xc8}, {.addr=0xfaf0, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xfaef, .value=0xc8, .type=IO_READ},
        {.addr=0xfaf0, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_023E) {
    const struct CPU_State initial_cpu = {.pc=0xa866, .a=0x7c, .x=0xcc, .y=0x58, .sp=0x6d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa866, .value=0xc8}, {.addr=0xa867, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa868, .a=0x7c, .x=0xcc, .y=0x58, .sp=0x6d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa866, .value=0xc8}, {.addr=0xa867, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa866, .value=0xc8, .type=IO_READ},
        {.addr=0xa867, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_023F) {
    const struct CPU_State initial_cpu = {.pc=0xdb1d, .a=0x6e, .x=0x60, .y=0x94, .sp=0xf4, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xdb1d, .value=0xc8}, {.addr=0xdb1e, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xdb1f, .a=0x6e, .x=0x60, .y=0x94, .sp=0xf4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdb1d, .value=0xc8}, {.addr=0xdb1e, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xdb1d, .value=0xc8, .type=IO_READ},
        {.addr=0xdb1e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0240) {
    const struct CPU_State initial_cpu = {.pc=0x5027, .a=0xa7, .x=0xb9, .y=0x8b, .sp=0xe1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x5027, .value=0xc8}, {.addr=0x5028, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x5029, .a=0xa7, .x=0xb9, .y=0x8b, .sp=0xe1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5027, .value=0xc8}, {.addr=0x5028, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x5027, .value=0xc8, .type=IO_READ},
        {.addr=0x5028, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0241) {
    const struct CPU_State initial_cpu = {.pc=0x7277, .a=0x35, .x=0x2a, .y=0xab, .sp=0xc4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7277, .value=0xc8}, {.addr=0x7278, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x7279, .a=0x35, .x=0x2a, .y=0xab, .sp=0xc4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7277, .value=0xc8}, {.addr=0x7278, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x7277, .value=0xc8, .type=IO_READ},
        {.addr=0x7278, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0242) {
    const struct CPU_State initial_cpu = {.pc=0xa21a, .a=0x50, .x=0x94, .y=0x7e, .sp=0x21, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa21a, .value=0xc8}, {.addr=0xa21b, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xa21c, .a=0x50, .x=0x94, .y=0x7e, .sp=0x21, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa21a, .value=0xc8}, {.addr=0xa21b, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xa21a, .value=0xc8, .type=IO_READ},
        {.addr=0xa21b, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0243) {
    const struct CPU_State initial_cpu = {.pc=0x8aa9, .a=0x5e, .x=0x04, .y=0x1c, .sp=0x56, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa9, .value=0xc8}, {.addr=0x8aaa, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x8aab, .a=0x5e, .x=0x04, .y=0x1c, .sp=0x56, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8aa9, .value=0xc8}, {.addr=0x8aaa, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x8aa9, .value=0xc8, .type=IO_READ},
        {.addr=0x8aaa, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0244) {
    const struct CPU_State initial_cpu = {.pc=0x4c8e, .a=0x61, .x=0xd8, .y=0x7e, .sp=0x6f, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x4c8e, .value=0xc8}, {.addr=0x4c8f, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x4c90, .a=0x61, .x=0xd8, .y=0x7e, .sp=0x6f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4c8e, .value=0xc8}, {.addr=0x4c8f, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x4c8e, .value=0xc8, .type=IO_READ},
        {.addr=0x4c8f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0245) {
    const struct CPU_State initial_cpu = {.pc=0x428a, .a=0x00, .x=0xea, .y=0x8a, .sp=0x2f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x428a, .value=0xc8}, {.addr=0x428b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x428c, .a=0x00, .x=0xea, .y=0x8a, .sp=0x2f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x428a, .value=0xc8}, {.addr=0x428b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x428a, .value=0xc8, .type=IO_READ},
        {.addr=0x428b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0246) {
    const struct CPU_State initial_cpu = {.pc=0xf7a9, .a=0xc7, .x=0x4b, .y=0x7d, .sp=0x33, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a9, .value=0xc8}, {.addr=0xf7aa, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xf7ab, .a=0xc7, .x=0x4b, .y=0x7d, .sp=0x33, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf7a9, .value=0xc8}, {.addr=0xf7aa, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xf7a9, .value=0xc8, .type=IO_READ},
        {.addr=0xf7aa, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0247) {
    const struct CPU_State initial_cpu = {.pc=0x2238, .a=0xfe, .x=0xee, .y=0x7a, .sp=0x67, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2238, .value=0xc8}, {.addr=0x2239, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x223a, .a=0xfe, .x=0xee, .y=0x7a, .sp=0x67, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2238, .value=0xc8}, {.addr=0x2239, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x2238, .value=0xc8, .type=IO_READ},
        {.addr=0x2239, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0248) {
    const struct CPU_State initial_cpu = {.pc=0x653a, .a=0xba, .x=0xbc, .y=0x0b, .sp=0xbc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x653a, .value=0xc8}, {.addr=0x653b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x653c, .a=0xba, .x=0xbc, .y=0x0b, .sp=0xbc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x653a, .value=0xc8}, {.addr=0x653b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x653a, .value=0xc8, .type=IO_READ},
        {.addr=0x653b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0249) {
    const struct CPU_State initial_cpu = {.pc=0x880a, .a=0x87, .x=0x0e, .y=0x74, .sp=0x95, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x880a, .value=0xc8}, {.addr=0x880b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x880c, .a=0x87, .x=0x0e, .y=0x74, .sp=0x95, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x880a, .value=0xc8}, {.addr=0x880b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x880a, .value=0xc8, .type=IO_READ},
        {.addr=0x880b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_024A) {
    const struct CPU_State initial_cpu = {.pc=0x0146, .a=0x79, .x=0x9d, .y=0x30, .sp=0x72, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xc8}, {.addr=0x0147, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0148, .a=0x79, .x=0x9d, .y=0x30, .sp=0x72, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xc8}, {.addr=0x0147, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0146, .value=0xc8, .type=IO_READ},
        {.addr=0x0147, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa3c0, .a=0x29, .x=0x67, .y=0x5e, .sp=0x8a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c0, .value=0xc8}, {.addr=0xa3c1, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xa3c2, .a=0x29, .x=0x67, .y=0x5e, .sp=0x8a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xa3c0, .value=0xc8}, {.addr=0xa3c1, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xa3c0, .value=0xc8, .type=IO_READ},
        {.addr=0xa3c1, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_024C) {
    const struct CPU_State initial_cpu = {.pc=0x2f0e, .a=0xde, .x=0xff, .y=0x33, .sp=0x8e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x2f0e, .value=0xc8}, {.addr=0x2f0f, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x2f10, .a=0xde, .x=0xff, .y=0x33, .sp=0x8e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2f0e, .value=0xc8}, {.addr=0x2f0f, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x2f0e, .value=0xc8, .type=IO_READ},
        {.addr=0x2f0f, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_024D) {
    const struct CPU_State initial_cpu = {.pc=0x2f4f, .a=0xab, .x=0x23, .y=0xec, .sp=0x56, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4f, .value=0xc8}, {.addr=0x2f50, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x2f51, .a=0xab, .x=0x23, .y=0xec, .sp=0x56, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2f4f, .value=0xc8}, {.addr=0x2f50, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x2f4f, .value=0xc8, .type=IO_READ},
        {.addr=0x2f50, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_024E) {
    const struct CPU_State initial_cpu = {.pc=0x6438, .a=0x2a, .x=0x3e, .y=0xf3, .sp=0x4a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6438, .value=0xc8}, {.addr=0x6439, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x643a, .a=0x2a, .x=0x3e, .y=0xf3, .sp=0x4a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6438, .value=0xc8}, {.addr=0x6439, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x6438, .value=0xc8, .type=IO_READ},
        {.addr=0x6439, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf877, .a=0xa7, .x=0x1f, .y=0x16, .sp=0xbb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf877, .value=0xc8}, {.addr=0xf878, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xf879, .a=0xa7, .x=0x1f, .y=0x16, .sp=0xbb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf877, .value=0xc8}, {.addr=0xf878, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xf877, .value=0xc8, .type=IO_READ},
        {.addr=0xf878, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0250) {
    const struct CPU_State initial_cpu = {.pc=0xdc4d, .a=0xa9, .x=0xe2, .y=0x98, .sp=0x04, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xdc4d, .value=0xc8}, {.addr=0xdc4e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdc4f, .a=0xa9, .x=0xe2, .y=0x98, .sp=0x04, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xdc4d, .value=0xc8}, {.addr=0xdc4e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdc4d, .value=0xc8, .type=IO_READ},
        {.addr=0xdc4e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0251) {
    const struct CPU_State initial_cpu = {.pc=0xb0c5, .a=0x1f, .x=0x4a, .y=0xd1, .sp=0x99, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c5, .value=0xc8}, {.addr=0xb0c6, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xb0c7, .a=0x1f, .x=0x4a, .y=0xd1, .sp=0x99, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb0c5, .value=0xc8}, {.addr=0xb0c6, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xb0c5, .value=0xc8, .type=IO_READ},
        {.addr=0xb0c6, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0252) {
    const struct CPU_State initial_cpu = {.pc=0xdf83, .a=0x62, .x=0x4e, .y=0xd1, .sp=0x75, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xdf83, .value=0xc8}, {.addr=0xdf84, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xdf85, .a=0x62, .x=0x4e, .y=0xd1, .sp=0x75, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdf83, .value=0xc8}, {.addr=0xdf84, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xdf83, .value=0xc8, .type=IO_READ},
        {.addr=0xdf84, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0253) {
    const struct CPU_State initial_cpu = {.pc=0x39e6, .a=0xe8, .x=0xad, .y=0x05, .sp=0x51, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x39e6, .value=0xc8}, {.addr=0x39e7, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x39e8, .a=0xe8, .x=0xad, .y=0x05, .sp=0x51, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x39e6, .value=0xc8}, {.addr=0x39e7, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x39e6, .value=0xc8, .type=IO_READ},
        {.addr=0x39e7, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0254) {
    const struct CPU_State initial_cpu = {.pc=0x53e9, .a=0x67, .x=0xd6, .y=0xe2, .sp=0xfa, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x53e9, .value=0xc8}, {.addr=0x53ea, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x53eb, .a=0x67, .x=0xd6, .y=0xe2, .sp=0xfa, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x53e9, .value=0xc8}, {.addr=0x53ea, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x53e9, .value=0xc8, .type=IO_READ},
        {.addr=0x53ea, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0255) {
    const struct CPU_State initial_cpu = {.pc=0x2678, .a=0x4a, .x=0xaf, .y=0x40, .sp=0x31, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x2678, .value=0xc8}, {.addr=0x2679, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x267a, .a=0x4a, .x=0xaf, .y=0x40, .sp=0x31, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2678, .value=0xc8}, {.addr=0x2679, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x2678, .value=0xc8, .type=IO_READ},
        {.addr=0x2679, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0256) {
    const struct CPU_State initial_cpu = {.pc=0x9085, .a=0x1c, .x=0x1a, .y=0xb4, .sp=0xed, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x9085, .value=0xc8}, {.addr=0x9086, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x9087, .a=0x1c, .x=0x1a, .y=0xb4, .sp=0xed, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9085, .value=0xc8}, {.addr=0x9086, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x9085, .value=0xc8, .type=IO_READ},
        {.addr=0x9086, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0257) {
    const struct CPU_State initial_cpu = {.pc=0xf1ee, .a=0xdf, .x=0xe9, .y=0x30, .sp=0x1e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ee, .value=0xc8}, {.addr=0xf1ef, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xf1f0, .a=0xdf, .x=0xe9, .y=0x30, .sp=0x1e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf1ee, .value=0xc8}, {.addr=0xf1ef, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xf1ee, .value=0xc8, .type=IO_READ},
        {.addr=0xf1ef, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0258) {
    const struct CPU_State initial_cpu = {.pc=0xaf09, .a=0xe2, .x=0xc6, .y=0x79, .sp=0xb6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xaf09, .value=0xc8}, {.addr=0xaf0a, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xaf0b, .a=0xe2, .x=0xc6, .y=0x79, .sp=0xb6, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xaf09, .value=0xc8}, {.addr=0xaf0a, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xaf09, .value=0xc8, .type=IO_READ},
        {.addr=0xaf0a, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0259) {
    const struct CPU_State initial_cpu = {.pc=0x3abf, .a=0xd7, .x=0x1a, .y=0x83, .sp=0xe7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3abf, .value=0xc8}, {.addr=0x3ac0, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x3ac1, .a=0xd7, .x=0x1a, .y=0x83, .sp=0xe7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3abf, .value=0xc8}, {.addr=0x3ac0, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x3abf, .value=0xc8, .type=IO_READ},
        {.addr=0x3ac0, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3e83, .a=0x9e, .x=0x52, .y=0xd9, .sp=0x28, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x3e83, .value=0xc8}, {.addr=0x3e84, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x3e85, .a=0x9e, .x=0x52, .y=0xd9, .sp=0x28, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3e83, .value=0xc8}, {.addr=0x3e84, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x3e83, .value=0xc8, .type=IO_READ},
        {.addr=0x3e84, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_025B) {
    const struct CPU_State initial_cpu = {.pc=0xa0e3, .a=0xfe, .x=0x66, .y=0x84, .sp=0xd7, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e3, .value=0xc8}, {.addr=0xa0e4, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xa0e5, .a=0xfe, .x=0x66, .y=0x84, .sp=0xd7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa0e3, .value=0xc8}, {.addr=0xa0e4, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xa0e3, .value=0xc8, .type=IO_READ},
        {.addr=0xa0e4, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_025C) {
    const struct CPU_State initial_cpu = {.pc=0xa18e, .a=0x7e, .x=0x78, .y=0x9e, .sp=0xbc, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xa18e, .value=0xc8}, {.addr=0xa18f, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xa190, .a=0x7e, .x=0x78, .y=0x9e, .sp=0xbc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa18e, .value=0xc8}, {.addr=0xa18f, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xa18e, .value=0xc8, .type=IO_READ},
        {.addr=0xa18f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_025D) {
    const struct CPU_State initial_cpu = {.pc=0x7067, .a=0xb0, .x=0x93, .y=0x51, .sp=0x27, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7067, .value=0xc8}, {.addr=0x7068, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x7069, .a=0xb0, .x=0x93, .y=0x51, .sp=0x27, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7067, .value=0xc8}, {.addr=0x7068, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x7067, .value=0xc8, .type=IO_READ},
        {.addr=0x7068, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_025E) {
    const struct CPU_State initial_cpu = {.pc=0x5ed2, .a=0xe5, .x=0xe0, .y=0x06, .sp=0xf3, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed2, .value=0xc8}, {.addr=0x5ed3, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x5ed4, .a=0xe5, .x=0xe0, .y=0x06, .sp=0xf3, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5ed2, .value=0xc8}, {.addr=0x5ed3, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x5ed2, .value=0xc8, .type=IO_READ},
        {.addr=0x5ed3, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_025F) {
    const struct CPU_State initial_cpu = {.pc=0x5d2e, .a=0x1a, .x=0x72, .y=0xfc, .sp=0xa6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2e, .value=0xc8}, {.addr=0x5d2f, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x5d30, .a=0x1a, .x=0x72, .y=0xfc, .sp=0xa6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5d2e, .value=0xc8}, {.addr=0x5d2f, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x5d2e, .value=0xc8, .type=IO_READ},
        {.addr=0x5d2f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0260) {
    const struct CPU_State initial_cpu = {.pc=0xf70a, .a=0x9d, .x=0x02, .y=0x82, .sp=0x50, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf70a, .value=0xc8}, {.addr=0xf70b, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xf70c, .a=0x9d, .x=0x02, .y=0x82, .sp=0x50, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf70a, .value=0xc8}, {.addr=0xf70b, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xf70a, .value=0xc8, .type=IO_READ},
        {.addr=0xf70b, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0261) {
    const struct CPU_State initial_cpu = {.pc=0xca2d, .a=0x8a, .x=0x23, .y=0x51, .sp=0x45, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xca2d, .value=0xc8}, {.addr=0xca2e, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xca2f, .a=0x8a, .x=0x23, .y=0x51, .sp=0x45, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xca2d, .value=0xc8}, {.addr=0xca2e, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xca2d, .value=0xc8, .type=IO_READ},
        {.addr=0xca2e, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0262) {
    const struct CPU_State initial_cpu = {.pc=0x379a, .a=0x0b, .x=0xc2, .y=0x56, .sp=0x67, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x379a, .value=0xc8}, {.addr=0x379b, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x379c, .a=0x0b, .x=0xc2, .y=0x56, .sp=0x67, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x379a, .value=0xc8}, {.addr=0x379b, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x379a, .value=0xc8, .type=IO_READ},
        {.addr=0x379b, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0263) {
    const struct CPU_State initial_cpu = {.pc=0x4efb, .a=0x5a, .x=0x98, .y=0x3e, .sp=0x93, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4efb, .value=0xc8}, {.addr=0x4efc, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x4efd, .a=0x5a, .x=0x98, .y=0x3e, .sp=0x93, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4efb, .value=0xc8}, {.addr=0x4efc, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x4efb, .value=0xc8, .type=IO_READ},
        {.addr=0x4efc, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0264) {
    const struct CPU_State initial_cpu = {.pc=0x96cd, .a=0x36, .x=0xc0, .y=0x22, .sp=0x3f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x96cd, .value=0xc8}, {.addr=0x96ce, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x96cf, .a=0x36, .x=0xc0, .y=0x22, .sp=0x3f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x96cd, .value=0xc8}, {.addr=0x96ce, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x96cd, .value=0xc8, .type=IO_READ},
        {.addr=0x96ce, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0265) {
    const struct CPU_State initial_cpu = {.pc=0x2c1f, .a=0x7a, .x=0xe6, .y=0xea, .sp=0xb5, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x2c1f, .value=0xc8}, {.addr=0x2c20, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x2c21, .a=0x7a, .x=0xe6, .y=0xea, .sp=0xb5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2c1f, .value=0xc8}, {.addr=0x2c20, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x2c1f, .value=0xc8, .type=IO_READ},
        {.addr=0x2c20, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0266) {
    const struct CPU_State initial_cpu = {.pc=0x4924, .a=0x7d, .x=0xe7, .y=0x83, .sp=0x4c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4924, .value=0xc8}, {.addr=0x4925, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x4926, .a=0x7d, .x=0xe7, .y=0x83, .sp=0x4c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4924, .value=0xc8}, {.addr=0x4925, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x4924, .value=0xc8, .type=IO_READ},
        {.addr=0x4925, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0267) {
    const struct CPU_State initial_cpu = {.pc=0xfc17, .a=0x4b, .x=0x9b, .y=0xce, .sp=0xe8, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xfc17, .value=0xc8}, {.addr=0xfc18, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xfc19, .a=0x4b, .x=0x9b, .y=0xce, .sp=0xe8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xfc17, .value=0xc8}, {.addr=0xfc18, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xfc17, .value=0xc8, .type=IO_READ},
        {.addr=0xfc18, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0268) {
    const struct CPU_State initial_cpu = {.pc=0xcc1c, .a=0x89, .x=0x29, .y=0xfa, .sp=0x51, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1c, .value=0xc8}, {.addr=0xcc1d, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xcc1e, .a=0x89, .x=0x29, .y=0xfa, .sp=0x51, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcc1c, .value=0xc8}, {.addr=0xcc1d, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xcc1c, .value=0xc8, .type=IO_READ},
        {.addr=0xcc1d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0269) {
    const struct CPU_State initial_cpu = {.pc=0xc20d, .a=0xa0, .x=0x10, .y=0xc9, .sp=0x35, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc20d, .value=0xc8}, {.addr=0xc20e, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xc20f, .a=0xa0, .x=0x10, .y=0xc9, .sp=0x35, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc20d, .value=0xc8}, {.addr=0xc20e, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xc20d, .value=0xc8, .type=IO_READ},
        {.addr=0xc20e, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3f83, .a=0x4b, .x=0x28, .y=0xfb, .sp=0xb7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x3f83, .value=0xc8}, {.addr=0x3f84, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x3f85, .a=0x4b, .x=0x28, .y=0xfb, .sp=0xb7, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3f83, .value=0xc8}, {.addr=0x3f84, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x3f83, .value=0xc8, .type=IO_READ},
        {.addr=0x3f84, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb9fd, .a=0x5e, .x=0xfd, .y=0xbb, .sp=0xc1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb9fd, .value=0xc8}, {.addr=0xb9fe, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xb9ff, .a=0x5e, .x=0xfd, .y=0xbb, .sp=0xc1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb9fd, .value=0xc8}, {.addr=0xb9fe, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xb9fd, .value=0xc8, .type=IO_READ},
        {.addr=0xb9fe, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_026C) {
    const struct CPU_State initial_cpu = {.pc=0xf27f, .a=0x08, .x=0xea, .y=0xfb, .sp=0x7e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf27f, .value=0xc8}, {.addr=0xf280, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xf281, .a=0x08, .x=0xea, .y=0xfb, .sp=0x7e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf27f, .value=0xc8}, {.addr=0xf280, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xf27f, .value=0xc8, .type=IO_READ},
        {.addr=0xf280, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_026D) {
    const struct CPU_State initial_cpu = {.pc=0x47c8, .a=0x06, .x=0x6e, .y=0xfb, .sp=0x6a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x47c8, .value=0xc8}, {.addr=0x47c9, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x47ca, .a=0x06, .x=0x6e, .y=0xfb, .sp=0x6a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x47c8, .value=0xc8}, {.addr=0x47c9, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x47c8, .value=0xc8, .type=IO_READ},
        {.addr=0x47c9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_026E) {
    const struct CPU_State initial_cpu = {.pc=0x5fbf, .a=0x5e, .x=0x4c, .y=0x01, .sp=0x5e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5fbf, .value=0xc8}, {.addr=0x5fc0, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x5fc1, .a=0x5e, .x=0x4c, .y=0x01, .sp=0x5e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5fbf, .value=0xc8}, {.addr=0x5fc0, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x5fbf, .value=0xc8, .type=IO_READ},
        {.addr=0x5fc0, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_026F) {
    const struct CPU_State initial_cpu = {.pc=0xfa5e, .a=0xac, .x=0x1b, .y=0x29, .sp=0xd9, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfa5e, .value=0xc8}, {.addr=0xfa5f, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xfa60, .a=0xac, .x=0x1b, .y=0x29, .sp=0xd9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xfa5e, .value=0xc8}, {.addr=0xfa5f, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xfa5e, .value=0xc8, .type=IO_READ},
        {.addr=0xfa5f, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0270) {
    const struct CPU_State initial_cpu = {.pc=0x5f40, .a=0xf4, .x=0x98, .y=0xb1, .sp=0xd3, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x5f40, .value=0xc8}, {.addr=0x5f41, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5f42, .a=0xf4, .x=0x98, .y=0xb1, .sp=0xd3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5f40, .value=0xc8}, {.addr=0x5f41, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5f40, .value=0xc8, .type=IO_READ},
        {.addr=0x5f41, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0271) {
    const struct CPU_State initial_cpu = {.pc=0xe2cf, .a=0x4c, .x=0x00, .y=0xfe, .sp=0x0b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe2cf, .value=0xc8}, {.addr=0xe2d0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe2d1, .a=0x4c, .x=0x00, .y=0xfe, .sp=0x0b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe2cf, .value=0xc8}, {.addr=0xe2d0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe2cf, .value=0xc8, .type=IO_READ},
        {.addr=0xe2d0, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0272) {
    const struct CPU_State initial_cpu = {.pc=0x4b01, .a=0x6d, .x=0x58, .y=0xc4, .sp=0xc8, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4b01, .value=0xc8}, {.addr=0x4b02, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4b03, .a=0x6d, .x=0x58, .y=0xc4, .sp=0xc8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4b01, .value=0xc8}, {.addr=0x4b02, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4b01, .value=0xc8, .type=IO_READ},
        {.addr=0x4b02, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0273) {
    const struct CPU_State initial_cpu = {.pc=0xb684, .a=0x66, .x=0xd9, .y=0x72, .sp=0x17, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb684, .value=0xc8}, {.addr=0xb685, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xb686, .a=0x66, .x=0xd9, .y=0x72, .sp=0x17, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb684, .value=0xc8}, {.addr=0xb685, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xb684, .value=0xc8, .type=IO_READ},
        {.addr=0xb685, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0274) {
    const struct CPU_State initial_cpu = {.pc=0xe4f5, .a=0x7b, .x=0x06, .y=0x69, .sp=0x9c, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f5, .value=0xc8}, {.addr=0xe4f6, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xe4f7, .a=0x7b, .x=0x06, .y=0x69, .sp=0x9c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe4f5, .value=0xc8}, {.addr=0xe4f6, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xe4f5, .value=0xc8, .type=IO_READ},
        {.addr=0xe4f6, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0275) {
    const struct CPU_State initial_cpu = {.pc=0x07d4, .a=0x20, .x=0x7e, .y=0x8d, .sp=0xc0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x07d4, .value=0xc8}, {.addr=0x07d5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x07d6, .a=0x20, .x=0x7e, .y=0x8d, .sp=0xc0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x07d4, .value=0xc8}, {.addr=0x07d5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x07d4, .value=0xc8, .type=IO_READ},
        {.addr=0x07d5, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0276) {
    const struct CPU_State initial_cpu = {.pc=0xafd5, .a=0x2b, .x=0xde, .y=0x58, .sp=0xe7, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xafd5, .value=0xc8}, {.addr=0xafd6, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xafd7, .a=0x2b, .x=0xde, .y=0x58, .sp=0xe7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xafd5, .value=0xc8}, {.addr=0xafd6, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xafd5, .value=0xc8, .type=IO_READ},
        {.addr=0xafd6, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0277) {
    const struct CPU_State initial_cpu = {.pc=0x2d6a, .a=0x6b, .x=0x05, .y=0xf5, .sp=0xe6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x2d6a, .value=0xc8}, {.addr=0x2d6b, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x2d6c, .a=0x6b, .x=0x05, .y=0xf5, .sp=0xe6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2d6a, .value=0xc8}, {.addr=0x2d6b, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x2d6a, .value=0xc8, .type=IO_READ},
        {.addr=0x2d6b, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0278) {
    const struct CPU_State initial_cpu = {.pc=0x92c7, .a=0x55, .x=0xb9, .y=0xcb, .sp=0x5e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x92c7, .value=0xc8}, {.addr=0x92c8, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x92c9, .a=0x55, .x=0xb9, .y=0xcb, .sp=0x5e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x92c7, .value=0xc8}, {.addr=0x92c8, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x92c7, .value=0xc8, .type=IO_READ},
        {.addr=0x92c8, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0279) {
    const struct CPU_State initial_cpu = {.pc=0x6859, .a=0xd9, .x=0xec, .y=0xe6, .sp=0x7e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6859, .value=0xc8}, {.addr=0x685a, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x685b, .a=0xd9, .x=0xec, .y=0xe6, .sp=0x7e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6859, .value=0xc8}, {.addr=0x685a, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6859, .value=0xc8, .type=IO_READ},
        {.addr=0x685a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_027A) {
    const struct CPU_State initial_cpu = {.pc=0x4f11, .a=0x58, .x=0x3c, .y=0xd8, .sp=0x09, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4f11, .value=0xc8}, {.addr=0x4f12, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x4f13, .a=0x58, .x=0x3c, .y=0xd8, .sp=0x09, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4f11, .value=0xc8}, {.addr=0x4f12, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x4f11, .value=0xc8, .type=IO_READ},
        {.addr=0x4f12, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_027B) {
    const struct CPU_State initial_cpu = {.pc=0xd8ac, .a=0xec, .x=0x4c, .y=0x44, .sp=0xb2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ac, .value=0xc8}, {.addr=0xd8ad, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd8ae, .a=0xec, .x=0x4c, .y=0x44, .sp=0xb2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd8ac, .value=0xc8}, {.addr=0xd8ad, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd8ac, .value=0xc8, .type=IO_READ},
        {.addr=0xd8ad, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_027C) {
    const struct CPU_State initial_cpu = {.pc=0x7e8e, .a=0x70, .x=0x9f, .y=0xf6, .sp=0x7f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7e8e, .value=0xc8}, {.addr=0x7e8f, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x7e90, .a=0x70, .x=0x9f, .y=0xf6, .sp=0x7f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7e8e, .value=0xc8}, {.addr=0x7e8f, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x7e8e, .value=0xc8, .type=IO_READ},
        {.addr=0x7e8f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_027D) {
    const struct CPU_State initial_cpu = {.pc=0xf803, .a=0x2f, .x=0x9a, .y=0xc3, .sp=0x8f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xf803, .value=0xc8}, {.addr=0xf804, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf805, .a=0x2f, .x=0x9a, .y=0xc3, .sp=0x8f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf803, .value=0xc8}, {.addr=0xf804, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf803, .value=0xc8, .type=IO_READ},
        {.addr=0xf804, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_027E) {
    const struct CPU_State initial_cpu = {.pc=0x8612, .a=0xc8, .x=0x54, .y=0x11, .sp=0xe4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8612, .value=0xc8}, {.addr=0x8613, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x8614, .a=0xc8, .x=0x54, .y=0x11, .sp=0xe4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8612, .value=0xc8}, {.addr=0x8613, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x8612, .value=0xc8, .type=IO_READ},
        {.addr=0x8613, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_027F) {
    const struct CPU_State initial_cpu = {.pc=0x252c, .a=0x21, .x=0xce, .y=0x01, .sp=0x0b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x252c, .value=0xc8}, {.addr=0x252d, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x252e, .a=0x21, .x=0xce, .y=0x01, .sp=0x0b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x252c, .value=0xc8}, {.addr=0x252d, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x252c, .value=0xc8, .type=IO_READ},
        {.addr=0x252d, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0280) {
    const struct CPU_State initial_cpu = {.pc=0x7ff6, .a=0x13, .x=0x20, .y=0x24, .sp=0xce, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff6, .value=0xc8}, {.addr=0x7ff7, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x7ff8, .a=0x13, .x=0x20, .y=0x24, .sp=0xce, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7ff6, .value=0xc8}, {.addr=0x7ff7, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x7ff6, .value=0xc8, .type=IO_READ},
        {.addr=0x7ff7, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0281) {
    const struct CPU_State initial_cpu = {.pc=0x746d, .a=0xc9, .x=0x0e, .y=0x0f, .sp=0xf6, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x746d, .value=0xc8}, {.addr=0x746e, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x746f, .a=0xc9, .x=0x0e, .y=0x0f, .sp=0xf6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x746d, .value=0xc8}, {.addr=0x746e, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x746d, .value=0xc8, .type=IO_READ},
        {.addr=0x746e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0282) {
    const struct CPU_State initial_cpu = {.pc=0x8e32, .a=0x83, .x=0xb5, .y=0x86, .sp=0xca, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x8e32, .value=0xc8}, {.addr=0x8e33, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x8e34, .a=0x83, .x=0xb5, .y=0x86, .sp=0xca, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8e32, .value=0xc8}, {.addr=0x8e33, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x8e32, .value=0xc8, .type=IO_READ},
        {.addr=0x8e33, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0283) {
    const struct CPU_State initial_cpu = {.pc=0x99d5, .a=0x2b, .x=0x7e, .y=0x74, .sp=0x5a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x99d5, .value=0xc8}, {.addr=0x99d6, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x99d7, .a=0x2b, .x=0x7e, .y=0x74, .sp=0x5a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x99d5, .value=0xc8}, {.addr=0x99d6, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x99d5, .value=0xc8, .type=IO_READ},
        {.addr=0x99d6, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0284) {
    const struct CPU_State initial_cpu = {.pc=0xd9a5, .a=0x65, .x=0xf6, .y=0xc8, .sp=0xb2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a5, .value=0xc8}, {.addr=0xd9a6, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xd9a7, .a=0x65, .x=0xf6, .y=0xc8, .sp=0xb2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd9a5, .value=0xc8}, {.addr=0xd9a6, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xd9a5, .value=0xc8, .type=IO_READ},
        {.addr=0xd9a6, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0285) {
    const struct CPU_State initial_cpu = {.pc=0xc1ea, .a=0x57, .x=0xf0, .y=0xf0, .sp=0xe3, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc1ea, .value=0xc8}, {.addr=0xc1eb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc1ec, .a=0x57, .x=0xf0, .y=0xf0, .sp=0xe3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc1ea, .value=0xc8}, {.addr=0xc1eb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc1ea, .value=0xc8, .type=IO_READ},
        {.addr=0xc1eb, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0286) {
    const struct CPU_State initial_cpu = {.pc=0xd8c4, .a=0x87, .x=0x12, .y=0xeb, .sp=0x61, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c4, .value=0xc8}, {.addr=0xd8c5, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xd8c6, .a=0x87, .x=0x12, .y=0xeb, .sp=0x61, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd8c4, .value=0xc8}, {.addr=0xd8c5, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xd8c4, .value=0xc8, .type=IO_READ},
        {.addr=0xd8c5, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0287) {
    const struct CPU_State initial_cpu = {.pc=0xc241, .a=0x25, .x=0x13, .y=0x39, .sp=0x4f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc241, .value=0xc8}, {.addr=0xc242, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xc243, .a=0x25, .x=0x13, .y=0x39, .sp=0x4f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc241, .value=0xc8}, {.addr=0xc242, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xc241, .value=0xc8, .type=IO_READ},
        {.addr=0xc242, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0288) {
    const struct CPU_State initial_cpu = {.pc=0x8e72, .a=0x56, .x=0x86, .y=0x51, .sp=0x58, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8e72, .value=0xc8}, {.addr=0x8e73, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x8e74, .a=0x56, .x=0x86, .y=0x51, .sp=0x58, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8e72, .value=0xc8}, {.addr=0x8e73, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x8e72, .value=0xc8, .type=IO_READ},
        {.addr=0x8e73, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0289) {
    const struct CPU_State initial_cpu = {.pc=0x26fc, .a=0x21, .x=0x6d, .y=0x63, .sp=0x68, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x26fc, .value=0xc8}, {.addr=0x26fd, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x26fe, .a=0x21, .x=0x6d, .y=0x63, .sp=0x68, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x26fc, .value=0xc8}, {.addr=0x26fd, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x26fc, .value=0xc8, .type=IO_READ},
        {.addr=0x26fd, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_028A) {
    const struct CPU_State initial_cpu = {.pc=0x0e1e, .a=0xf1, .x=0x03, .y=0x6a, .sp=0xca, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0e1e, .value=0xc8}, {.addr=0x0e1f, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x0e20, .a=0xf1, .x=0x03, .y=0x6a, .sp=0xca, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0e1e, .value=0xc8}, {.addr=0x0e1f, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x0e1e, .value=0xc8, .type=IO_READ},
        {.addr=0x0e1f, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_028B) {
    const struct CPU_State initial_cpu = {.pc=0x4c37, .a=0xc4, .x=0x88, .y=0x35, .sp=0x9f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c37, .value=0xc8}, {.addr=0x4c38, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x4c39, .a=0xc4, .x=0x88, .y=0x35, .sp=0x9f, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x4c37, .value=0xc8}, {.addr=0x4c38, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x4c37, .value=0xc8, .type=IO_READ},
        {.addr=0x4c38, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_028C) {
    const struct CPU_State initial_cpu = {.pc=0x57bd, .a=0x9f, .x=0xcb, .y=0x6b, .sp=0xde, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x57bd, .value=0xc8}, {.addr=0x57be, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x57bf, .a=0x9f, .x=0xcb, .y=0x6b, .sp=0xde, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x57bd, .value=0xc8}, {.addr=0x57be, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x57bd, .value=0xc8, .type=IO_READ},
        {.addr=0x57be, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_028D) {
    const struct CPU_State initial_cpu = {.pc=0x9dd0, .a=0x59, .x=0x5f, .y=0x81, .sp=0xb4, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd0, .value=0xc8}, {.addr=0x9dd1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9dd2, .a=0x59, .x=0x5f, .y=0x81, .sp=0xb4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9dd0, .value=0xc8}, {.addr=0x9dd1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9dd0, .value=0xc8, .type=IO_READ},
        {.addr=0x9dd1, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_028E) {
    const struct CPU_State initial_cpu = {.pc=0x51b7, .a=0x8e, .x=0xb6, .y=0x52, .sp=0x89, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x51b7, .value=0xc8}, {.addr=0x51b8, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x51b9, .a=0x8e, .x=0xb6, .y=0x52, .sp=0x89, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x51b7, .value=0xc8}, {.addr=0x51b8, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x51b7, .value=0xc8, .type=IO_READ},
        {.addr=0x51b8, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_028F) {
    const struct CPU_State initial_cpu = {.pc=0x9b6d, .a=0x11, .x=0xb2, .y=0x25, .sp=0xde, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b6d, .value=0xc8}, {.addr=0x9b6e, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x9b6f, .a=0x11, .x=0xb2, .y=0x25, .sp=0xde, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9b6d, .value=0xc8}, {.addr=0x9b6e, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x9b6d, .value=0xc8, .type=IO_READ},
        {.addr=0x9b6e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0290) {
    const struct CPU_State initial_cpu = {.pc=0x86cb, .a=0xdd, .x=0x16, .y=0xf4, .sp=0xcc, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x86cb, .value=0xc8}, {.addr=0x86cc, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x86cd, .a=0xdd, .x=0x16, .y=0xf4, .sp=0xcc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x86cb, .value=0xc8}, {.addr=0x86cc, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x86cb, .value=0xc8, .type=IO_READ},
        {.addr=0x86cc, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0291) {
    const struct CPU_State initial_cpu = {.pc=0x3f6a, .a=0x5e, .x=0xfd, .y=0x97, .sp=0xff, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x3f6a, .value=0xc8}, {.addr=0x3f6b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3f6c, .a=0x5e, .x=0xfd, .y=0x97, .sp=0xff, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3f6a, .value=0xc8}, {.addr=0x3f6b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3f6a, .value=0xc8, .type=IO_READ},
        {.addr=0x3f6b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0292) {
    const struct CPU_State initial_cpu = {.pc=0xf3dd, .a=0x8a, .x=0x90, .y=0x81, .sp=0xa9, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf3dd, .value=0xc8}, {.addr=0xf3de, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xf3df, .a=0x8a, .x=0x90, .y=0x81, .sp=0xa9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf3dd, .value=0xc8}, {.addr=0xf3de, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xf3dd, .value=0xc8, .type=IO_READ},
        {.addr=0xf3de, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0293) {
    const struct CPU_State initial_cpu = {.pc=0x39c2, .a=0x64, .x=0x7c, .y=0x44, .sp=0xa1, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x39c2, .value=0xc8}, {.addr=0x39c3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x39c4, .a=0x64, .x=0x7c, .y=0x44, .sp=0xa1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x39c2, .value=0xc8}, {.addr=0x39c3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x39c2, .value=0xc8, .type=IO_READ},
        {.addr=0x39c3, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0294) {
    const struct CPU_State initial_cpu = {.pc=0xbb8c, .a=0x8d, .x=0x8f, .y=0x11, .sp=0x2d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xbb8c, .value=0xc8}, {.addr=0xbb8d, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xbb8e, .a=0x8d, .x=0x8f, .y=0x11, .sp=0x2d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbb8c, .value=0xc8}, {.addr=0xbb8d, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xbb8c, .value=0xc8, .type=IO_READ},
        {.addr=0xbb8d, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0295) {
    const struct CPU_State initial_cpu = {.pc=0x5467, .a=0x31, .x=0x16, .y=0x14, .sp=0xfa, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x5467, .value=0xc8}, {.addr=0x5468, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x5469, .a=0x31, .x=0x16, .y=0x14, .sp=0xfa, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5467, .value=0xc8}, {.addr=0x5468, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x5467, .value=0xc8, .type=IO_READ},
        {.addr=0x5468, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0296) {
    const struct CPU_State initial_cpu = {.pc=0x3491, .a=0xac, .x=0x58, .y=0x81, .sp=0x4c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3491, .value=0xc8}, {.addr=0x3492, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x3493, .a=0xac, .x=0x58, .y=0x81, .sp=0x4c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3491, .value=0xc8}, {.addr=0x3492, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x3491, .value=0xc8, .type=IO_READ},
        {.addr=0x3492, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0297) {
    const struct CPU_State initial_cpu = {.pc=0x3f29, .a=0xbe, .x=0xd1, .y=0x45, .sp=0xc0, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x3f29, .value=0xc8}, {.addr=0x3f2a, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x3f2b, .a=0xbe, .x=0xd1, .y=0x45, .sp=0xc0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3f29, .value=0xc8}, {.addr=0x3f2a, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x3f29, .value=0xc8, .type=IO_READ},
        {.addr=0x3f2a, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0298) {
    const struct CPU_State initial_cpu = {.pc=0x830e, .a=0x61, .x=0xe9, .y=0xbe, .sp=0x01, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x830e, .value=0xc8}, {.addr=0x830f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x8310, .a=0x61, .x=0xe9, .y=0xbe, .sp=0x01, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x830e, .value=0xc8}, {.addr=0x830f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x830e, .value=0xc8, .type=IO_READ},
        {.addr=0x830f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0299) {
    const struct CPU_State initial_cpu = {.pc=0x30f3, .a=0xad, .x=0xcb, .y=0xfb, .sp=0xb1, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x30f3, .value=0xc8}, {.addr=0x30f4, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x30f5, .a=0xad, .x=0xcb, .y=0xfb, .sp=0xb1, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x30f3, .value=0xc8}, {.addr=0x30f4, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x30f3, .value=0xc8, .type=IO_READ},
        {.addr=0x30f4, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_029A) {
    const struct CPU_State initial_cpu = {.pc=0x39b9, .a=0xc2, .x=0xd4, .y=0x10, .sp=0xff, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x39b9, .value=0xc8}, {.addr=0x39ba, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x39bb, .a=0xc2, .x=0xd4, .y=0x10, .sp=0xff, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x39b9, .value=0xc8}, {.addr=0x39ba, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x39b9, .value=0xc8, .type=IO_READ},
        {.addr=0x39ba, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_029B) {
    const struct CPU_State initial_cpu = {.pc=0x2cd6, .a=0x35, .x=0xab, .y=0x0c, .sp=0xeb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x2cd6, .value=0xc8}, {.addr=0x2cd7, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x2cd8, .a=0x35, .x=0xab, .y=0x0c, .sp=0xeb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2cd6, .value=0xc8}, {.addr=0x2cd7, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x2cd6, .value=0xc8, .type=IO_READ},
        {.addr=0x2cd7, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_029C) {
    const struct CPU_State initial_cpu = {.pc=0xdcf3, .a=0x6a, .x=0x63, .y=0xa6, .sp=0xad, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf3, .value=0xc8}, {.addr=0xdcf4, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xdcf5, .a=0x6a, .x=0x63, .y=0xa6, .sp=0xad, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xdcf3, .value=0xc8}, {.addr=0xdcf4, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xdcf3, .value=0xc8, .type=IO_READ},
        {.addr=0xdcf4, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_029D) {
    const struct CPU_State initial_cpu = {.pc=0x68e2, .a=0x5d, .x=0xa6, .y=0x12, .sp=0x75, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x68e2, .value=0xc8}, {.addr=0x68e3, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x68e4, .a=0x5d, .x=0xa6, .y=0x12, .sp=0x75, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x68e2, .value=0xc8}, {.addr=0x68e3, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x68e2, .value=0xc8, .type=IO_READ},
        {.addr=0x68e3, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_029E) {
    const struct CPU_State initial_cpu = {.pc=0x506c, .a=0x9b, .x=0xd4, .y=0xd4, .sp=0x64, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x506c, .value=0xc8}, {.addr=0x506d, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x506e, .a=0x9b, .x=0xd4, .y=0xd4, .sp=0x64, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x506c, .value=0xc8}, {.addr=0x506d, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x506c, .value=0xc8, .type=IO_READ},
        {.addr=0x506d, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_029F) {
    const struct CPU_State initial_cpu = {.pc=0xb2c6, .a=0x23, .x=0x2f, .y=0xe0, .sp=0xb9, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb2c6, .value=0xc8}, {.addr=0xb2c7, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xb2c8, .a=0x23, .x=0x2f, .y=0xe0, .sp=0xb9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb2c6, .value=0xc8}, {.addr=0xb2c7, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xb2c6, .value=0xc8, .type=IO_READ},
        {.addr=0xb2c7, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd84d, .a=0xe0, .x=0x9d, .y=0xd9, .sp=0x93, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd84d, .value=0xc8}, {.addr=0xd84e, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xd84f, .a=0xe0, .x=0x9d, .y=0xd9, .sp=0x93, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd84d, .value=0xc8}, {.addr=0xd84e, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xd84d, .value=0xc8, .type=IO_READ},
        {.addr=0xd84e, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xd996, .a=0x6f, .x=0x4b, .y=0x0f, .sp=0x33, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd996, .value=0xc8}, {.addr=0xd997, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xd998, .a=0x6f, .x=0x4b, .y=0x0f, .sp=0x33, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd996, .value=0xc8}, {.addr=0xd997, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xd996, .value=0xc8, .type=IO_READ},
        {.addr=0xd997, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6c58, .a=0xa6, .x=0xcb, .y=0xc8, .sp=0x17, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6c58, .value=0xc8}, {.addr=0x6c59, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6c5a, .a=0xa6, .x=0xcb, .y=0xc8, .sp=0x17, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6c58, .value=0xc8}, {.addr=0x6c59, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6c58, .value=0xc8, .type=IO_READ},
        {.addr=0x6c59, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x4f94, .a=0x03, .x=0x49, .y=0x78, .sp=0x3e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4f94, .value=0xc8}, {.addr=0x4f95, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x4f96, .a=0x03, .x=0x49, .y=0x78, .sp=0x3e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4f94, .value=0xc8}, {.addr=0x4f95, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x4f94, .value=0xc8, .type=IO_READ},
        {.addr=0x4f95, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xa8e6, .a=0x9d, .x=0xff, .y=0x57, .sp=0x90, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xa8e6, .value=0xc8}, {.addr=0xa8e7, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xa8e8, .a=0x9d, .x=0xff, .y=0x57, .sp=0x90, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa8e6, .value=0xc8}, {.addr=0xa8e7, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xa8e6, .value=0xc8, .type=IO_READ},
        {.addr=0xa8e7, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x7462, .a=0x0e, .x=0x89, .y=0x7c, .sp=0xe1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7462, .value=0xc8}, {.addr=0x7463, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7464, .a=0x0e, .x=0x89, .y=0x7c, .sp=0xe1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7462, .value=0xc8}, {.addr=0x7463, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7462, .value=0xc8, .type=IO_READ},
        {.addr=0x7463, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xc592, .a=0xcf, .x=0x4f, .y=0x36, .sp=0x77, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc592, .value=0xc8}, {.addr=0xc593, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xc594, .a=0xcf, .x=0x4f, .y=0x36, .sp=0x77, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc592, .value=0xc8}, {.addr=0xc593, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xc592, .value=0xc8, .type=IO_READ},
        {.addr=0xc593, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x9623, .a=0x08, .x=0x80, .y=0xe0, .sp=0x8d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9623, .value=0xc8}, {.addr=0x9624, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x9625, .a=0x08, .x=0x80, .y=0xe0, .sp=0x8d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9623, .value=0xc8}, {.addr=0x9624, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x9623, .value=0xc8, .type=IO_READ},
        {.addr=0x9624, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x40a6, .a=0x86, .x=0x9c, .y=0x0f, .sp=0xa4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x40a6, .value=0xc8}, {.addr=0x40a7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x40a8, .a=0x86, .x=0x9c, .y=0x0f, .sp=0xa4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x40a6, .value=0xc8}, {.addr=0x40a7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x40a6, .value=0xc8, .type=IO_READ},
        {.addr=0x40a7, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xb137, .a=0x2f, .x=0xcd, .y=0xfd, .sp=0xc7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xb137, .value=0xc8}, {.addr=0xb138, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb139, .a=0x2f, .x=0xcd, .y=0xfd, .sp=0xc7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb137, .value=0xc8}, {.addr=0xb138, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb137, .value=0xc8, .type=IO_READ},
        {.addr=0xb138, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x7021, .a=0x78, .x=0x18, .y=0xf4, .sp=0xf2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x7021, .value=0xc8}, {.addr=0x7022, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x7023, .a=0x78, .x=0x18, .y=0xf4, .sp=0xf2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7021, .value=0xc8}, {.addr=0x7022, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x7021, .value=0xc8, .type=IO_READ},
        {.addr=0x7022, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xf737, .a=0x09, .x=0x4d, .y=0x94, .sp=0x9a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf737, .value=0xc8}, {.addr=0xf738, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xf739, .a=0x09, .x=0x4d, .y=0x94, .sp=0x9a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf737, .value=0xc8}, {.addr=0xf738, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xf737, .value=0xc8, .type=IO_READ},
        {.addr=0xf738, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xc21f, .a=0xbb, .x=0xd3, .y=0x54, .sp=0xa1, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xc21f, .value=0xc8}, {.addr=0xc220, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc221, .a=0xbb, .x=0xd3, .y=0x54, .sp=0xa1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc21f, .value=0xc8}, {.addr=0xc220, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc21f, .value=0xc8, .type=IO_READ},
        {.addr=0xc220, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xd263, .a=0x36, .x=0xea, .y=0x32, .sp=0x43, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd263, .value=0xc8}, {.addr=0xd264, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd265, .a=0x36, .x=0xea, .y=0x32, .sp=0x43, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd263, .value=0xc8}, {.addr=0xd264, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd263, .value=0xc8, .type=IO_READ},
        {.addr=0xd264, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xc151, .a=0x36, .x=0x29, .y=0xc3, .sp=0x67, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc151, .value=0xc8}, {.addr=0xc152, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xc153, .a=0x36, .x=0x29, .y=0xc3, .sp=0x67, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc151, .value=0xc8}, {.addr=0xc152, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xc151, .value=0xc8, .type=IO_READ},
        {.addr=0xc152, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x64aa, .a=0x5a, .x=0xce, .y=0x44, .sp=0xeb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x64aa, .value=0xc8}, {.addr=0x64ab, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x64ac, .a=0x5a, .x=0xce, .y=0x44, .sp=0xeb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x64aa, .value=0xc8}, {.addr=0x64ab, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x64aa, .value=0xc8, .type=IO_READ},
        {.addr=0x64ab, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xecba, .a=0x44, .x=0x03, .y=0x7f, .sp=0x55, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xecba, .value=0xc8}, {.addr=0xecbb, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xecbc, .a=0x44, .x=0x03, .y=0x7f, .sp=0x55, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xecba, .value=0xc8}, {.addr=0xecbb, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xecba, .value=0xc8, .type=IO_READ},
        {.addr=0xecbb, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xba4a, .a=0xd1, .x=0x12, .y=0xbb, .sp=0xc9, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xba4a, .value=0xc8}, {.addr=0xba4b, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xba4c, .a=0xd1, .x=0x12, .y=0xbb, .sp=0xc9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xba4a, .value=0xc8}, {.addr=0xba4b, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xba4a, .value=0xc8, .type=IO_READ},
        {.addr=0xba4b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xebfe, .a=0x6b, .x=0xa6, .y=0x53, .sp=0x0e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xebfe, .value=0xc8}, {.addr=0xebff, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xec00, .a=0x6b, .x=0xa6, .y=0x53, .sp=0x0e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xebfe, .value=0xc8}, {.addr=0xebff, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xebfe, .value=0xc8, .type=IO_READ},
        {.addr=0xebff, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xbdd8, .a=0xca, .x=0xd1, .y=0x3d, .sp=0xcc, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd8, .value=0xc8}, {.addr=0xbdd9, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xbdda, .a=0xca, .x=0xd1, .y=0x3d, .sp=0xcc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbdd8, .value=0xc8}, {.addr=0xbdd9, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xbdd8, .value=0xc8, .type=IO_READ},
        {.addr=0xbdd9, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xf52e, .a=0xbd, .x=0xa1, .y=0x91, .sp=0xaf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf52e, .value=0xc8}, {.addr=0xf52f, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xf530, .a=0xbd, .x=0xa1, .y=0x91, .sp=0xaf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf52e, .value=0xc8}, {.addr=0xf52f, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xf52e, .value=0xc8, .type=IO_READ},
        {.addr=0xf52f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xa63d, .a=0x23, .x=0xd8, .y=0xa2, .sp=0x94, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa63d, .value=0xc8}, {.addr=0xa63e, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xa63f, .a=0x23, .x=0xd8, .y=0xa2, .sp=0x94, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa63d, .value=0xc8}, {.addr=0xa63e, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xa63d, .value=0xc8, .type=IO_READ},
        {.addr=0xa63e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x83aa, .a=0x62, .x=0x16, .y=0x4d, .sp=0xe1, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x83aa, .value=0xc8}, {.addr=0x83ab, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x83ac, .a=0x62, .x=0x16, .y=0x4d, .sp=0xe1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x83aa, .value=0xc8}, {.addr=0x83ab, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x83aa, .value=0xc8, .type=IO_READ},
        {.addr=0x83ab, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x7715, .a=0xea, .x=0xe8, .y=0x06, .sp=0x6e, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x7715, .value=0xc8}, {.addr=0x7716, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x7717, .a=0xea, .x=0xe8, .y=0x06, .sp=0x6e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7715, .value=0xc8}, {.addr=0x7716, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x7715, .value=0xc8, .type=IO_READ},
        {.addr=0x7716, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xbe44, .a=0xc8, .x=0x75, .y=0x1c, .sp=0xd4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xbe44, .value=0xc8}, {.addr=0xbe45, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbe46, .a=0xc8, .x=0x75, .y=0x1c, .sp=0xd4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbe44, .value=0xc8}, {.addr=0xbe45, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbe44, .value=0xc8, .type=IO_READ},
        {.addr=0xbe45, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2eae, .a=0x7f, .x=0x8d, .y=0xa7, .sp=0x2e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2eae, .value=0xc8}, {.addr=0x2eaf, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x2eb0, .a=0x7f, .x=0x8d, .y=0xa7, .sp=0x2e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2eae, .value=0xc8}, {.addr=0x2eaf, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x2eae, .value=0xc8, .type=IO_READ},
        {.addr=0x2eaf, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xa632, .a=0xd4, .x=0xc8, .y=0xa6, .sp=0x41, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xa632, .value=0xc8}, {.addr=0xa633, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa634, .a=0xd4, .x=0xc8, .y=0xa6, .sp=0x41, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa632, .value=0xc8}, {.addr=0xa633, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa632, .value=0xc8, .type=IO_READ},
        {.addr=0xa633, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x4965, .a=0x75, .x=0xb8, .y=0xa8, .sp=0xff, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4965, .value=0xc8}, {.addr=0x4966, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x4967, .a=0x75, .x=0xb8, .y=0xa8, .sp=0xff, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x4965, .value=0xc8}, {.addr=0x4966, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x4965, .value=0xc8, .type=IO_READ},
        {.addr=0x4966, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xf869, .a=0x24, .x=0x6a, .y=0x33, .sp=0x7f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf869, .value=0xc8}, {.addr=0xf86a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf86b, .a=0x24, .x=0x6a, .y=0x33, .sp=0x7f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf869, .value=0xc8}, {.addr=0xf86a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf869, .value=0xc8, .type=IO_READ},
        {.addr=0xf86a, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x92cf, .a=0xaf, .x=0x97, .y=0xf5, .sp=0xe2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x92cf, .value=0xc8}, {.addr=0x92d0, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x92d1, .a=0xaf, .x=0x97, .y=0xf5, .sp=0xe2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x92cf, .value=0xc8}, {.addr=0x92d0, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x92cf, .value=0xc8, .type=IO_READ},
        {.addr=0x92d0, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x83e1, .a=0x48, .x=0xb5, .y=0x37, .sp=0x95, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x83e1, .value=0xc8}, {.addr=0x83e2, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x83e3, .a=0x48, .x=0xb5, .y=0x37, .sp=0x95, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x83e1, .value=0xc8}, {.addr=0x83e2, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x83e1, .value=0xc8, .type=IO_READ},
        {.addr=0x83e2, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x68ad, .a=0xae, .x=0xc4, .y=0x22, .sp=0xb9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x68ad, .value=0xc8}, {.addr=0x68ae, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x68af, .a=0xae, .x=0xc4, .y=0x22, .sp=0xb9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x68ad, .value=0xc8}, {.addr=0x68ae, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x68ad, .value=0xc8, .type=IO_READ},
        {.addr=0x68ae, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xf35e, .a=0xed, .x=0x50, .y=0x77, .sp=0xa9, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xf35e, .value=0xc8}, {.addr=0xf35f, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xf360, .a=0xed, .x=0x50, .y=0x77, .sp=0xa9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf35e, .value=0xc8}, {.addr=0xf35f, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xf35e, .value=0xc8, .type=IO_READ},
        {.addr=0xf35f, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x2055, .a=0xea, .x=0x5a, .y=0x74, .sp=0x10, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2055, .value=0xc8}, {.addr=0x2056, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x2057, .a=0xea, .x=0x5a, .y=0x74, .sp=0x10, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2055, .value=0xc8}, {.addr=0x2056, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x2055, .value=0xc8, .type=IO_READ},
        {.addr=0x2056, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xe3a4, .a=0x31, .x=0x7d, .y=0x48, .sp=0xab, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a4, .value=0xc8}, {.addr=0xe3a5, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xe3a6, .a=0x31, .x=0x7d, .y=0x48, .sp=0xab, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe3a4, .value=0xc8}, {.addr=0xe3a5, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xe3a4, .value=0xc8, .type=IO_READ},
        {.addr=0xe3a5, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x488c, .a=0x24, .x=0x0e, .y=0xee, .sp=0x71, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x488c, .value=0xc8}, {.addr=0x488d, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x488e, .a=0x24, .x=0x0e, .y=0xee, .sp=0x71, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x488c, .value=0xc8}, {.addr=0x488d, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x488c, .value=0xc8, .type=IO_READ},
        {.addr=0x488d, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x2df2, .a=0xe8, .x=0x18, .y=0x8f, .sp=0x5e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2df2, .value=0xc8}, {.addr=0x2df3, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x2df4, .a=0xe8, .x=0x18, .y=0x8f, .sp=0x5e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2df2, .value=0xc8}, {.addr=0x2df3, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x2df2, .value=0xc8, .type=IO_READ},
        {.addr=0x2df3, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x3708, .a=0x6c, .x=0x96, .y=0xaf, .sp=0xb0, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3708, .value=0xc8}, {.addr=0x3709, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x370a, .a=0x6c, .x=0x96, .y=0xaf, .sp=0xb0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3708, .value=0xc8}, {.addr=0x3709, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x3708, .value=0xc8, .type=IO_READ},
        {.addr=0x3709, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xf818, .a=0xcb, .x=0xa0, .y=0xa6, .sp=0xe1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf818, .value=0xc8}, {.addr=0xf819, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf81a, .a=0xcb, .x=0xa0, .y=0xa6, .sp=0xe1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf818, .value=0xc8}, {.addr=0xf819, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf818, .value=0xc8, .type=IO_READ},
        {.addr=0xf819, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9dbf, .a=0xf1, .x=0x95, .y=0x88, .sp=0x0b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9dbf, .value=0xc8}, {.addr=0x9dc0, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x9dc1, .a=0xf1, .x=0x95, .y=0x88, .sp=0x0b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9dbf, .value=0xc8}, {.addr=0x9dc0, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x9dbf, .value=0xc8, .type=IO_READ},
        {.addr=0x9dc0, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x4554, .a=0xac, .x=0xf5, .y=0x1e, .sp=0x16, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4554, .value=0xc8}, {.addr=0x4555, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x4556, .a=0xac, .x=0xf5, .y=0x1e, .sp=0x16, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4554, .value=0xc8}, {.addr=0x4555, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x4554, .value=0xc8, .type=IO_READ},
        {.addr=0x4555, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xdb93, .a=0x44, .x=0xcb, .y=0x7f, .sp=0x8e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xdb93, .value=0xc8}, {.addr=0xdb94, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xdb95, .a=0x44, .x=0xcb, .y=0x7f, .sp=0x8e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdb93, .value=0xc8}, {.addr=0xdb94, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xdb93, .value=0xc8, .type=IO_READ},
        {.addr=0xdb94, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x063d, .a=0x5b, .x=0x80, .y=0xc4, .sp=0x74, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x063d, .value=0xc8}, {.addr=0x063e, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x063f, .a=0x5b, .x=0x80, .y=0xc4, .sp=0x74, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x063d, .value=0xc8}, {.addr=0x063e, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x063d, .value=0xc8, .type=IO_READ},
        {.addr=0x063e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xfe00, .a=0x44, .x=0x20, .y=0xb1, .sp=0x73, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xfe00, .value=0xc8}, {.addr=0xfe01, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfe02, .a=0x44, .x=0x20, .y=0xb1, .sp=0x73, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfe00, .value=0xc8}, {.addr=0xfe01, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfe00, .value=0xc8, .type=IO_READ},
        {.addr=0xfe01, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xf731, .a=0xb3, .x=0xc8, .y=0xce, .sp=0x8e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf731, .value=0xc8}, {.addr=0xf732, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xf733, .a=0xb3, .x=0xc8, .y=0xce, .sp=0x8e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf731, .value=0xc8}, {.addr=0xf732, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xf731, .value=0xc8, .type=IO_READ},
        {.addr=0xf732, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x1953, .a=0xd0, .x=0xe2, .y=0x8e, .sp=0xe5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1953, .value=0xc8}, {.addr=0x1954, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x1955, .a=0xd0, .x=0xe2, .y=0x8e, .sp=0xe5, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1953, .value=0xc8}, {.addr=0x1954, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x1953, .value=0xc8, .type=IO_READ},
        {.addr=0x1954, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x5255, .a=0x9c, .x=0x1a, .y=0x37, .sp=0x3e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x5255, .value=0xc8}, {.addr=0x5256, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x5257, .a=0x9c, .x=0x1a, .y=0x37, .sp=0x3e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5255, .value=0xc8}, {.addr=0x5256, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x5255, .value=0xc8, .type=IO_READ},
        {.addr=0x5256, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x027c, .a=0x49, .x=0x80, .y=0x8d, .sp=0x31, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x027c, .value=0xc8}, {.addr=0x027d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x027e, .a=0x49, .x=0x80, .y=0x8d, .sp=0x31, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x027c, .value=0xc8}, {.addr=0x027d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x027c, .value=0xc8, .type=IO_READ},
        {.addr=0x027d, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xfb92, .a=0x84, .x=0x1e, .y=0x45, .sp=0x6b, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xfb92, .value=0xc8}, {.addr=0xfb93, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xfb94, .a=0x84, .x=0x1e, .y=0x45, .sp=0x6b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xfb92, .value=0xc8}, {.addr=0xfb93, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xfb92, .value=0xc8, .type=IO_READ},
        {.addr=0xfb93, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xcf6e, .a=0xb3, .x=0x8b, .y=0x99, .sp=0x2f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xcf6e, .value=0xc8}, {.addr=0xcf6f, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xcf70, .a=0xb3, .x=0x8b, .y=0x99, .sp=0x2f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xcf6e, .value=0xc8}, {.addr=0xcf6f, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xcf6e, .value=0xc8, .type=IO_READ},
        {.addr=0xcf6f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x298d, .a=0xdd, .x=0x6b, .y=0x26, .sp=0xf3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x298d, .value=0xc8}, {.addr=0x298e, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x298f, .a=0xdd, .x=0x6b, .y=0x26, .sp=0xf3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x298d, .value=0xc8}, {.addr=0x298e, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x298d, .value=0xc8, .type=IO_READ},
        {.addr=0x298e, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x2e0f, .a=0x17, .x=0xad, .y=0xcb, .sp=0xa7, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2e0f, .value=0xc8}, {.addr=0x2e10, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2e11, .a=0x17, .x=0xad, .y=0xcb, .sp=0xa7, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2e0f, .value=0xc8}, {.addr=0x2e10, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2e0f, .value=0xc8, .type=IO_READ},
        {.addr=0x2e10, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x6392, .a=0xbc, .x=0x0a, .y=0x81, .sp=0xf4, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6392, .value=0xc8}, {.addr=0x6393, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x6394, .a=0xbc, .x=0x0a, .y=0x81, .sp=0xf4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x6392, .value=0xc8}, {.addr=0x6393, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x6392, .value=0xc8, .type=IO_READ},
        {.addr=0x6393, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x0d38, .a=0x15, .x=0x04, .y=0xa8, .sp=0xa5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0d38, .value=0xc8}, {.addr=0x0d39, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x0d3a, .a=0x15, .x=0x04, .y=0xa8, .sp=0xa5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0d38, .value=0xc8}, {.addr=0x0d39, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x0d38, .value=0xc8, .type=IO_READ},
        {.addr=0x0d39, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x9d1e, .a=0x1b, .x=0x89, .y=0x3e, .sp=0x72, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9d1e, .value=0xc8}, {.addr=0x9d1f, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x9d20, .a=0x1b, .x=0x89, .y=0x3e, .sp=0x72, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9d1e, .value=0xc8}, {.addr=0x9d1f, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x9d1e, .value=0xc8, .type=IO_READ},
        {.addr=0x9d1f, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x92ff, .a=0xff, .x=0x69, .y=0xc4, .sp=0xf1, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x92ff, .value=0xc8}, {.addr=0x9300, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x9301, .a=0xff, .x=0x69, .y=0xc4, .sp=0xf1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x92ff, .value=0xc8}, {.addr=0x9300, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x92ff, .value=0xc8, .type=IO_READ},
        {.addr=0x9300, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x886d, .a=0x56, .x=0x45, .y=0xe0, .sp=0xb6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x886d, .value=0xc8}, {.addr=0x886e, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x886f, .a=0x56, .x=0x45, .y=0xe0, .sp=0xb6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x886d, .value=0xc8}, {.addr=0x886e, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x886d, .value=0xc8, .type=IO_READ},
        {.addr=0x886e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x946a, .a=0x6b, .x=0x06, .y=0xa8, .sp=0xfb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x946a, .value=0xc8}, {.addr=0x946b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x946c, .a=0x6b, .x=0x06, .y=0xa8, .sp=0xfb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x946a, .value=0xc8}, {.addr=0x946b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x946a, .value=0xc8, .type=IO_READ},
        {.addr=0x946b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x1e73, .a=0x2b, .x=0x42, .y=0x4d, .sp=0xb8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1e73, .value=0xc8}, {.addr=0x1e74, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x1e75, .a=0x2b, .x=0x42, .y=0x4d, .sp=0xb8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1e73, .value=0xc8}, {.addr=0x1e74, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x1e73, .value=0xc8, .type=IO_READ},
        {.addr=0x1e74, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6596, .a=0xd0, .x=0x1a, .y=0xbd, .sp=0x39, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6596, .value=0xc8}, {.addr=0x6597, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x6598, .a=0xd0, .x=0x1a, .y=0xbd, .sp=0x39, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6596, .value=0xc8}, {.addr=0x6597, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x6596, .value=0xc8, .type=IO_READ},
        {.addr=0x6597, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x6dc5, .a=0xae, .x=0x7a, .y=0x04, .sp=0x93, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6dc5, .value=0xc8}, {.addr=0x6dc6, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x6dc7, .a=0xae, .x=0x7a, .y=0x04, .sp=0x93, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6dc5, .value=0xc8}, {.addr=0x6dc6, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x6dc5, .value=0xc8, .type=IO_READ},
        {.addr=0x6dc6, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xeffc, .a=0xa6, .x=0xe6, .y=0xd2, .sp=0x3c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xeffc, .value=0xc8}, {.addr=0xeffd, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xeffe, .a=0xa6, .x=0xe6, .y=0xd2, .sp=0x3c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xeffc, .value=0xc8}, {.addr=0xeffd, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xeffc, .value=0xc8, .type=IO_READ},
        {.addr=0xeffd, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x187c, .a=0xc5, .x=0xc0, .y=0xfb, .sp=0xf8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x187c, .value=0xc8}, {.addr=0x187d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x187e, .a=0xc5, .x=0xc0, .y=0xfb, .sp=0xf8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x187c, .value=0xc8}, {.addr=0x187d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x187c, .value=0xc8, .type=IO_READ},
        {.addr=0x187d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x0dd3, .a=0xc7, .x=0x21, .y=0xe9, .sp=0xae, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd3, .value=0xc8}, {.addr=0x0dd4, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0dd5, .a=0xc7, .x=0x21, .y=0xe9, .sp=0xae, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0dd3, .value=0xc8}, {.addr=0x0dd4, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0dd3, .value=0xc8, .type=IO_READ},
        {.addr=0x0dd4, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x4b4c, .a=0xd4, .x=0x7c, .y=0x47, .sp=0x50, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4c, .value=0xc8}, {.addr=0x4b4d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x4b4e, .a=0xd4, .x=0x7c, .y=0x47, .sp=0x50, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4b4c, .value=0xc8}, {.addr=0x4b4d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x4b4c, .value=0xc8, .type=IO_READ},
        {.addr=0x4b4d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x3ca1, .a=0x10, .x=0x7b, .y=0xb5, .sp=0xa6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca1, .value=0xc8}, {.addr=0x3ca2, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x3ca3, .a=0x10, .x=0x7b, .y=0xb5, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3ca1, .value=0xc8}, {.addr=0x3ca2, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x3ca1, .value=0xc8, .type=IO_READ},
        {.addr=0x3ca2, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xeba8, .a=0xee, .x=0xc2, .y=0x02, .sp=0x91, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xeba8, .value=0xc8}, {.addr=0xeba9, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xebaa, .a=0xee, .x=0xc2, .y=0x02, .sp=0x91, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xeba8, .value=0xc8}, {.addr=0xeba9, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xeba8, .value=0xc8, .type=IO_READ},
        {.addr=0xeba9, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x49eb, .a=0x21, .x=0x11, .y=0x2f, .sp=0xb1, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x49eb, .value=0xc8}, {.addr=0x49ec, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x49ed, .a=0x21, .x=0x11, .y=0x2f, .sp=0xb1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x49eb, .value=0xc8}, {.addr=0x49ec, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x49eb, .value=0xc8, .type=IO_READ},
        {.addr=0x49ec, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xcf44, .a=0x37, .x=0x1a, .y=0x87, .sp=0x9f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcf44, .value=0xc8}, {.addr=0xcf45, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcf46, .a=0x37, .x=0x1a, .y=0x87, .sp=0x9f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xcf44, .value=0xc8}, {.addr=0xcf45, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcf44, .value=0xc8, .type=IO_READ},
        {.addr=0xcf45, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xf0af, .a=0x5d, .x=0x21, .y=0x3f, .sp=0x4d, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf0af, .value=0xc8}, {.addr=0xf0b0, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xf0b1, .a=0x5d, .x=0x21, .y=0x3f, .sp=0x4d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf0af, .value=0xc8}, {.addr=0xf0b0, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xf0af, .value=0xc8, .type=IO_READ},
        {.addr=0xf0b0, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x71f3, .a=0x6c, .x=0x11, .y=0x88, .sp=0x6b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x71f3, .value=0xc8}, {.addr=0x71f4, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x71f5, .a=0x6c, .x=0x11, .y=0x88, .sp=0x6b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x71f3, .value=0xc8}, {.addr=0x71f4, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x71f3, .value=0xc8, .type=IO_READ},
        {.addr=0x71f4, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xedc4, .a=0xf9, .x=0x93, .y=0x8c, .sp=0x04, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xedc4, .value=0xc8}, {.addr=0xedc5, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xedc6, .a=0xf9, .x=0x93, .y=0x8c, .sp=0x04, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xedc4, .value=0xc8}, {.addr=0xedc5, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xedc4, .value=0xc8, .type=IO_READ},
        {.addr=0xedc5, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x2fa2, .a=0xfc, .x=0xf8, .y=0x14, .sp=0xbe, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa2, .value=0xc8}, {.addr=0x2fa3, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x2fa4, .a=0xfc, .x=0xf8, .y=0x14, .sp=0xbe, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2fa2, .value=0xc8}, {.addr=0x2fa3, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x2fa2, .value=0xc8, .type=IO_READ},
        {.addr=0x2fa3, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xb2d9, .a=0xe2, .x=0x7b, .y=0xf6, .sp=0x8d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d9, .value=0xc8}, {.addr=0xb2da, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xb2db, .a=0xe2, .x=0x7b, .y=0xf6, .sp=0x8d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb2d9, .value=0xc8}, {.addr=0xb2da, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xb2d9, .value=0xc8, .type=IO_READ},
        {.addr=0xb2da, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x30c4, .a=0xaf, .x=0x2f, .y=0x4a, .sp=0x87, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x30c4, .value=0xc8}, {.addr=0x30c5, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x30c6, .a=0xaf, .x=0x2f, .y=0x4a, .sp=0x87, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x30c4, .value=0xc8}, {.addr=0x30c5, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x30c4, .value=0xc8, .type=IO_READ},
        {.addr=0x30c5, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xe8e0, .a=0xbb, .x=0xff, .y=0xbc, .sp=0xe1, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e0, .value=0xc8}, {.addr=0xe8e1, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xe8e2, .a=0xbb, .x=0xff, .y=0xbc, .sp=0xe1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe8e0, .value=0xc8}, {.addr=0xe8e1, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xe8e0, .value=0xc8, .type=IO_READ},
        {.addr=0xe8e1, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x97bb, .a=0xa9, .x=0xa5, .y=0x9e, .sp=0x2a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x97bb, .value=0xc8}, {.addr=0x97bc, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x97bd, .a=0xa9, .x=0xa5, .y=0x9e, .sp=0x2a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x97bb, .value=0xc8}, {.addr=0x97bc, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x97bb, .value=0xc8, .type=IO_READ},
        {.addr=0x97bc, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x1f34, .a=0x58, .x=0xef, .y=0x98, .sp=0x16, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1f34, .value=0xc8}, {.addr=0x1f35, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x1f36, .a=0x58, .x=0xef, .y=0x98, .sp=0x16, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1f34, .value=0xc8}, {.addr=0x1f35, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x1f34, .value=0xc8, .type=IO_READ},
        {.addr=0x1f35, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xd804, .a=0x96, .x=0x3a, .y=0xed, .sp=0x3a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd804, .value=0xc8}, {.addr=0xd805, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd806, .a=0x96, .x=0x3a, .y=0xed, .sp=0x3a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd804, .value=0xc8}, {.addr=0xd805, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd804, .value=0xc8, .type=IO_READ},
        {.addr=0xd805, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xea91, .a=0xf0, .x=0xf7, .y=0xc3, .sp=0x8f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xea91, .value=0xc8}, {.addr=0xea92, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xea93, .a=0xf0, .x=0xf7, .y=0xc3, .sp=0x8f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xea91, .value=0xc8}, {.addr=0xea92, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xea91, .value=0xc8, .type=IO_READ},
        {.addr=0xea92, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x11b9, .a=0x4b, .x=0x22, .y=0xba, .sp=0x20, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x11b9, .value=0xc8}, {.addr=0x11ba, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x11bb, .a=0x4b, .x=0x22, .y=0xba, .sp=0x20, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x11b9, .value=0xc8}, {.addr=0x11ba, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x11b9, .value=0xc8, .type=IO_READ},
        {.addr=0x11ba, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xf4a9, .a=0xc8, .x=0x4c, .y=0xc0, .sp=0x08, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a9, .value=0xc8}, {.addr=0xf4aa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf4ab, .a=0xc8, .x=0x4c, .y=0xc0, .sp=0x08, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf4a9, .value=0xc8}, {.addr=0xf4aa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf4a9, .value=0xc8, .type=IO_READ},
        {.addr=0xf4aa, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xe1b9, .a=0x2d, .x=0x73, .y=0x8a, .sp=0x11, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b9, .value=0xc8}, {.addr=0xe1ba, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xe1bb, .a=0x2d, .x=0x73, .y=0x8a, .sp=0x11, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe1b9, .value=0xc8}, {.addr=0xe1ba, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xe1b9, .value=0xc8, .type=IO_READ},
        {.addr=0xe1ba, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xf002, .a=0x8e, .x=0x9e, .y=0x4e, .sp=0xe6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf002, .value=0xc8}, {.addr=0xf003, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xf004, .a=0x8e, .x=0x9e, .y=0x4e, .sp=0xe6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf002, .value=0xc8}, {.addr=0xf003, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xf002, .value=0xc8, .type=IO_READ},
        {.addr=0xf003, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xe116, .a=0x44, .x=0x13, .y=0x0c, .sp=0x11, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe116, .value=0xc8}, {.addr=0xe117, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xe118, .a=0x44, .x=0x13, .y=0x0c, .sp=0x11, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe116, .value=0xc8}, {.addr=0xe117, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xe116, .value=0xc8, .type=IO_READ},
        {.addr=0xe117, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x1ece, .a=0xe4, .x=0xdd, .y=0x0f, .sp=0x70, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x1ece, .value=0xc8}, {.addr=0x1ecf, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x1ed0, .a=0xe4, .x=0xdd, .y=0x0f, .sp=0x70, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1ece, .value=0xc8}, {.addr=0x1ecf, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x1ece, .value=0xc8, .type=IO_READ},
        {.addr=0x1ecf, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x7911, .a=0x6f, .x=0x30, .y=0x32, .sp=0x27, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7911, .value=0xc8}, {.addr=0x7912, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x7913, .a=0x6f, .x=0x30, .y=0x32, .sp=0x27, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7911, .value=0xc8}, {.addr=0x7912, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x7911, .value=0xc8, .type=IO_READ},
        {.addr=0x7912, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xaab8, .a=0xcf, .x=0x7a, .y=0xe0, .sp=0x6a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xaab8, .value=0xc8}, {.addr=0xaab9, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xaaba, .a=0xcf, .x=0x7a, .y=0xe0, .sp=0x6a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xaab8, .value=0xc8}, {.addr=0xaab9, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xaab8, .value=0xc8, .type=IO_READ},
        {.addr=0xaab9, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x5986, .a=0xc4, .x=0xd8, .y=0x27, .sp=0xb5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5986, .value=0xc8}, {.addr=0x5987, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x5988, .a=0xc4, .x=0xd8, .y=0x27, .sp=0xb5, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5986, .value=0xc8}, {.addr=0x5987, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x5986, .value=0xc8, .type=IO_READ},
        {.addr=0x5987, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xac57, .a=0x16, .x=0x94, .y=0xcf, .sp=0xe5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xac57, .value=0xc8}, {.addr=0xac58, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xac59, .a=0x16, .x=0x94, .y=0xcf, .sp=0xe5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xac57, .value=0xc8}, {.addr=0xac58, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xac57, .value=0xc8, .type=IO_READ},
        {.addr=0xac58, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x5b74, .a=0xb5, .x=0x5c, .y=0xd8, .sp=0xdf, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x5b74, .value=0xc8}, {.addr=0x5b75, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x5b76, .a=0xb5, .x=0x5c, .y=0xd8, .sp=0xdf, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5b74, .value=0xc8}, {.addr=0x5b75, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x5b74, .value=0xc8, .type=IO_READ},
        {.addr=0x5b75, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x384c, .a=0x0f, .x=0x4c, .y=0x99, .sp=0x26, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x384c, .value=0xc8}, {.addr=0x384d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x384e, .a=0x0f, .x=0x4c, .y=0x99, .sp=0x26, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x384c, .value=0xc8}, {.addr=0x384d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x384c, .value=0xc8, .type=IO_READ},
        {.addr=0x384d, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xe381, .a=0x9c, .x=0xa1, .y=0xc4, .sp=0x9c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xe381, .value=0xc8}, {.addr=0xe382, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xe383, .a=0x9c, .x=0xa1, .y=0xc4, .sp=0x9c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe381, .value=0xc8}, {.addr=0xe382, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xe381, .value=0xc8, .type=IO_READ},
        {.addr=0xe382, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xc0a2, .a=0x20, .x=0xb2, .y=0xfe, .sp=0x12, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc0a2, .value=0xc8}, {.addr=0xc0a3, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xc0a4, .a=0x20, .x=0xb2, .y=0xfe, .sp=0x12, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc0a2, .value=0xc8}, {.addr=0xc0a3, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xc0a2, .value=0xc8, .type=IO_READ},
        {.addr=0xc0a3, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x827a, .a=0x82, .x=0x59, .y=0x24, .sp=0xf5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x827a, .value=0xc8}, {.addr=0x827b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x827c, .a=0x82, .x=0x59, .y=0x24, .sp=0xf5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x827a, .value=0xc8}, {.addr=0x827b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x827a, .value=0xc8, .type=IO_READ},
        {.addr=0x827b, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xf2ba, .a=0x99, .x=0xbd, .y=0xbc, .sp=0x44, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ba, .value=0xc8}, {.addr=0xf2bb, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xf2bc, .a=0x99, .x=0xbd, .y=0xbc, .sp=0x44, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf2ba, .value=0xc8}, {.addr=0xf2bb, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xf2ba, .value=0xc8, .type=IO_READ},
        {.addr=0xf2bb, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0300) {
    const struct CPU_State initial_cpu = {.pc=0xf523, .a=0xa3, .x=0x08, .y=0x2d, .sp=0x4c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xf523, .value=0xc8}, {.addr=0xf524, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf525, .a=0xa3, .x=0x08, .y=0x2d, .sp=0x4c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf523, .value=0xc8}, {.addr=0xf524, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf523, .value=0xc8, .type=IO_READ},
        {.addr=0xf524, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0301) {
    const struct CPU_State initial_cpu = {.pc=0x437d, .a=0x3d, .x=0x52, .y=0xd0, .sp=0xa6, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x437d, .value=0xc8}, {.addr=0x437e, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x437f, .a=0x3d, .x=0x52, .y=0xd0, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x437d, .value=0xc8}, {.addr=0x437e, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x437d, .value=0xc8, .type=IO_READ},
        {.addr=0x437e, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0302) {
    const struct CPU_State initial_cpu = {.pc=0xd5e6, .a=0x3b, .x=0x29, .y=0xf1, .sp=0xaa, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xd5e6, .value=0xc8}, {.addr=0xd5e7, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xd5e8, .a=0x3b, .x=0x29, .y=0xf1, .sp=0xaa, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd5e6, .value=0xc8}, {.addr=0xd5e7, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xd5e6, .value=0xc8, .type=IO_READ},
        {.addr=0xd5e7, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0303) {
    const struct CPU_State initial_cpu = {.pc=0x7aef, .a=0x21, .x=0x59, .y=0xd6, .sp=0xeb, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7aef, .value=0xc8}, {.addr=0x7af0, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x7af1, .a=0x21, .x=0x59, .y=0xd6, .sp=0xeb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7aef, .value=0xc8}, {.addr=0x7af0, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x7aef, .value=0xc8, .type=IO_READ},
        {.addr=0x7af0, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0304) {
    const struct CPU_State initial_cpu = {.pc=0x15aa, .a=0x40, .x=0x18, .y=0x62, .sp=0x18, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x15aa, .value=0xc8}, {.addr=0x15ab, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x15ac, .a=0x40, .x=0x18, .y=0x62, .sp=0x18, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x15aa, .value=0xc8}, {.addr=0x15ab, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x15aa, .value=0xc8, .type=IO_READ},
        {.addr=0x15ab, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0305) {
    const struct CPU_State initial_cpu = {.pc=0xb26a, .a=0xeb, .x=0x1b, .y=0x15, .sp=0xa8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb26a, .value=0xc8}, {.addr=0xb26b, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xb26c, .a=0xeb, .x=0x1b, .y=0x15, .sp=0xa8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb26a, .value=0xc8}, {.addr=0xb26b, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xb26a, .value=0xc8, .type=IO_READ},
        {.addr=0xb26b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0306) {
    const struct CPU_State initial_cpu = {.pc=0x1bab, .a=0x47, .x=0xdc, .y=0xec, .sp=0x1d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1bab, .value=0xc8}, {.addr=0x1bac, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x1bad, .a=0x47, .x=0xdc, .y=0xec, .sp=0x1d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1bab, .value=0xc8}, {.addr=0x1bac, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x1bab, .value=0xc8, .type=IO_READ},
        {.addr=0x1bac, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2b47, .a=0x56, .x=0x9d, .y=0x83, .sp=0x2a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2b47, .value=0xc8}, {.addr=0x2b48, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x2b49, .a=0x56, .x=0x9d, .y=0x83, .sp=0x2a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2b47, .value=0xc8}, {.addr=0x2b48, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x2b47, .value=0xc8, .type=IO_READ},
        {.addr=0x2b48, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0308) {
    const struct CPU_State initial_cpu = {.pc=0xe616, .a=0xcd, .x=0x17, .y=0x30, .sp=0xf3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe616, .value=0xc8}, {.addr=0xe617, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xe618, .a=0xcd, .x=0x17, .y=0x30, .sp=0xf3, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe616, .value=0xc8}, {.addr=0xe617, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xe616, .value=0xc8, .type=IO_READ},
        {.addr=0xe617, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0309) {
    const struct CPU_State initial_cpu = {.pc=0x017f, .a=0xf5, .x=0x5e, .y=0x79, .sp=0x18, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0xc8}, {.addr=0x0180, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x0181, .a=0xf5, .x=0x5e, .y=0x79, .sp=0x18, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xc8}, {.addr=0x0180, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x017f, .value=0xc8, .type=IO_READ},
        {.addr=0x0180, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_030A) {
    const struct CPU_State initial_cpu = {.pc=0x8907, .a=0x7f, .x=0x6e, .y=0xb5, .sp=0xa0, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x8907, .value=0xc8}, {.addr=0x8908, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x8909, .a=0x7f, .x=0x6e, .y=0xb5, .sp=0xa0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8907, .value=0xc8}, {.addr=0x8908, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x8907, .value=0xc8, .type=IO_READ},
        {.addr=0x8908, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_030B) {
    const struct CPU_State initial_cpu = {.pc=0xe22f, .a=0x50, .x=0xdc, .y=0x9a, .sp=0x25, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe22f, .value=0xc8}, {.addr=0xe230, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe231, .a=0x50, .x=0xdc, .y=0x9a, .sp=0x25, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe22f, .value=0xc8}, {.addr=0xe230, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe22f, .value=0xc8, .type=IO_READ},
        {.addr=0xe230, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_030C) {
    const struct CPU_State initial_cpu = {.pc=0x3d5e, .a=0x66, .x=0xb4, .y=0x73, .sp=0x90, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3d5e, .value=0xc8}, {.addr=0x3d5f, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x3d60, .a=0x66, .x=0xb4, .y=0x73, .sp=0x90, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3d5e, .value=0xc8}, {.addr=0x3d5f, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x3d5e, .value=0xc8, .type=IO_READ},
        {.addr=0x3d5f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_030D) {
    const struct CPU_State initial_cpu = {.pc=0x5241, .a=0xcb, .x=0xed, .y=0x43, .sp=0x58, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5241, .value=0xc8}, {.addr=0x5242, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5243, .a=0xcb, .x=0xed, .y=0x43, .sp=0x58, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5241, .value=0xc8}, {.addr=0x5242, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5241, .value=0xc8, .type=IO_READ},
        {.addr=0x5242, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_030E) {
    const struct CPU_State initial_cpu = {.pc=0xf7ac, .a=0x5f, .x=0x18, .y=0x8e, .sp=0xc7, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xf7ac, .value=0xc8}, {.addr=0xf7ad, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xf7ae, .a=0x5f, .x=0x18, .y=0x8e, .sp=0xc7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf7ac, .value=0xc8}, {.addr=0xf7ad, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xf7ac, .value=0xc8, .type=IO_READ},
        {.addr=0xf7ad, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_030F) {
    const struct CPU_State initial_cpu = {.pc=0xab27, .a=0x8a, .x=0x85, .y=0x21, .sp=0xec, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xab27, .value=0xc8}, {.addr=0xab28, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xab29, .a=0x8a, .x=0x85, .y=0x21, .sp=0xec, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xab27, .value=0xc8}, {.addr=0xab28, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xab27, .value=0xc8, .type=IO_READ},
        {.addr=0xab28, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0310) {
    const struct CPU_State initial_cpu = {.pc=0x576e, .a=0x63, .x=0x56, .y=0x8b, .sp=0xab, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x576e, .value=0xc8}, {.addr=0x576f, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x5770, .a=0x63, .x=0x56, .y=0x8b, .sp=0xab, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x576e, .value=0xc8}, {.addr=0x576f, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x576e, .value=0xc8, .type=IO_READ},
        {.addr=0x576f, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0311) {
    const struct CPU_State initial_cpu = {.pc=0x5182, .a=0x41, .x=0xcc, .y=0x09, .sp=0x54, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x5182, .value=0xc8}, {.addr=0x5183, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5184, .a=0x41, .x=0xcc, .y=0x09, .sp=0x54, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5182, .value=0xc8}, {.addr=0x5183, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5182, .value=0xc8, .type=IO_READ},
        {.addr=0x5183, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0312) {
    const struct CPU_State initial_cpu = {.pc=0x55e8, .a=0x84, .x=0x3d, .y=0x56, .sp=0xc7, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x55e8, .value=0xc8}, {.addr=0x55e9, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x55ea, .a=0x84, .x=0x3d, .y=0x56, .sp=0xc7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x55e8, .value=0xc8}, {.addr=0x55e9, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x55e8, .value=0xc8, .type=IO_READ},
        {.addr=0x55e9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0313) {
    const struct CPU_State initial_cpu = {.pc=0x4ba1, .a=0x4f, .x=0xcb, .y=0xe2, .sp=0x25, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba1, .value=0xc8}, {.addr=0x4ba2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4ba3, .a=0x4f, .x=0xcb, .y=0xe2, .sp=0x25, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4ba1, .value=0xc8}, {.addr=0x4ba2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4ba1, .value=0xc8, .type=IO_READ},
        {.addr=0x4ba2, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0314) {
    const struct CPU_State initial_cpu = {.pc=0x06bf, .a=0x1b, .x=0xfc, .y=0xa8, .sp=0x6a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x06bf, .value=0xc8}, {.addr=0x06c0, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x06c1, .a=0x1b, .x=0xfc, .y=0xa8, .sp=0x6a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x06bf, .value=0xc8}, {.addr=0x06c0, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x06bf, .value=0xc8, .type=IO_READ},
        {.addr=0x06c0, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0315) {
    const struct CPU_State initial_cpu = {.pc=0xf0b4, .a=0x2a, .x=0x02, .y=0x07, .sp=0x95, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xf0b4, .value=0xc8}, {.addr=0xf0b5, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xf0b6, .a=0x2a, .x=0x02, .y=0x07, .sp=0x95, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf0b4, .value=0xc8}, {.addr=0xf0b5, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xf0b4, .value=0xc8, .type=IO_READ},
        {.addr=0xf0b5, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0316) {
    const struct CPU_State initial_cpu = {.pc=0x5fe4, .a=0xed, .x=0x96, .y=0x83, .sp=0x1a, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe4, .value=0xc8}, {.addr=0x5fe5, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x5fe6, .a=0xed, .x=0x96, .y=0x83, .sp=0x1a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5fe4, .value=0xc8}, {.addr=0x5fe5, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x5fe4, .value=0xc8, .type=IO_READ},
        {.addr=0x5fe5, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0317) {
    const struct CPU_State initial_cpu = {.pc=0x6b9f, .a=0x42, .x=0x3a, .y=0xde, .sp=0x72, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9f, .value=0xc8}, {.addr=0x6ba0, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x6ba1, .a=0x42, .x=0x3a, .y=0xde, .sp=0x72, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6b9f, .value=0xc8}, {.addr=0x6ba0, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x6b9f, .value=0xc8, .type=IO_READ},
        {.addr=0x6ba0, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0318) {
    const struct CPU_State initial_cpu = {.pc=0x5aba, .a=0xbe, .x=0xb5, .y=0x3f, .sp=0xc3, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5aba, .value=0xc8}, {.addr=0x5abb, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x5abc, .a=0xbe, .x=0xb5, .y=0x3f, .sp=0xc3, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5aba, .value=0xc8}, {.addr=0x5abb, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x5aba, .value=0xc8, .type=IO_READ},
        {.addr=0x5abb, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0319) {
    const struct CPU_State initial_cpu = {.pc=0x9c94, .a=0x20, .x=0xeb, .y=0x82, .sp=0x0d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9c94, .value=0xc8}, {.addr=0x9c95, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9c96, .a=0x20, .x=0xeb, .y=0x82, .sp=0x0d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9c94, .value=0xc8}, {.addr=0x9c95, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9c94, .value=0xc8, .type=IO_READ},
        {.addr=0x9c95, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_031A) {
    const struct CPU_State initial_cpu = {.pc=0xa65f, .a=0x88, .x=0x16, .y=0xb2, .sp=0xb9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa65f, .value=0xc8}, {.addr=0xa660, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xa661, .a=0x88, .x=0x16, .y=0xb2, .sp=0xb9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa65f, .value=0xc8}, {.addr=0xa660, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xa65f, .value=0xc8, .type=IO_READ},
        {.addr=0xa660, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_031B) {
    const struct CPU_State initial_cpu = {.pc=0x2c06, .a=0xbb, .x=0xbc, .y=0xbd, .sp=0x0d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x2c06, .value=0xc8}, {.addr=0x2c07, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x2c08, .a=0xbb, .x=0xbc, .y=0xbd, .sp=0x0d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2c06, .value=0xc8}, {.addr=0x2c07, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x2c06, .value=0xc8, .type=IO_READ},
        {.addr=0x2c07, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_031C) {
    const struct CPU_State initial_cpu = {.pc=0x0ae7, .a=0xdb, .x=0xf3, .y=0xeb, .sp=0x3e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae7, .value=0xc8}, {.addr=0x0ae8, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x0ae9, .a=0xdb, .x=0xf3, .y=0xeb, .sp=0x3e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0ae7, .value=0xc8}, {.addr=0x0ae8, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x0ae7, .value=0xc8, .type=IO_READ},
        {.addr=0x0ae8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_031D) {
    const struct CPU_State initial_cpu = {.pc=0xcf61, .a=0x7e, .x=0xe1, .y=0xf6, .sp=0xfa, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xcf61, .value=0xc8}, {.addr=0xcf62, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xcf63, .a=0x7e, .x=0xe1, .y=0xf6, .sp=0xfa, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xcf61, .value=0xc8}, {.addr=0xcf62, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xcf61, .value=0xc8, .type=IO_READ},
        {.addr=0xcf62, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_031E) {
    const struct CPU_State initial_cpu = {.pc=0xca7b, .a=0xa9, .x=0xc0, .y=0xc0, .sp=0xc1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xca7b, .value=0xc8}, {.addr=0xca7c, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xca7d, .a=0xa9, .x=0xc0, .y=0xc0, .sp=0xc1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xca7b, .value=0xc8}, {.addr=0xca7c, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xca7b, .value=0xc8, .type=IO_READ},
        {.addr=0xca7c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_031F) {
    const struct CPU_State initial_cpu = {.pc=0x80a7, .a=0x1a, .x=0xb9, .y=0x54, .sp=0x83, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x80a7, .value=0xc8}, {.addr=0x80a8, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x80a9, .a=0x1a, .x=0xb9, .y=0x54, .sp=0x83, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x80a7, .value=0xc8}, {.addr=0x80a8, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x80a7, .value=0xc8, .type=IO_READ},
        {.addr=0x80a8, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0320) {
    const struct CPU_State initial_cpu = {.pc=0x4606, .a=0xce, .x=0x41, .y=0x81, .sp=0x49, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4606, .value=0xc8}, {.addr=0x4607, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x4608, .a=0xce, .x=0x41, .y=0x81, .sp=0x49, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4606, .value=0xc8}, {.addr=0x4607, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x4606, .value=0xc8, .type=IO_READ},
        {.addr=0x4607, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0efb, .a=0xbd, .x=0xa0, .y=0x26, .sp=0x18, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0efb, .value=0xc8}, {.addr=0x0efc, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x0efd, .a=0xbd, .x=0xa0, .y=0x26, .sp=0x18, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0efb, .value=0xc8}, {.addr=0x0efc, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x0efb, .value=0xc8, .type=IO_READ},
        {.addr=0x0efc, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0322) {
    const struct CPU_State initial_cpu = {.pc=0x029a, .a=0x6e, .x=0xfb, .y=0xb7, .sp=0x23, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x029a, .value=0xc8}, {.addr=0x029b, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x029c, .a=0x6e, .x=0xfb, .y=0xb7, .sp=0x23, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x029a, .value=0xc8}, {.addr=0x029b, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x029a, .value=0xc8, .type=IO_READ},
        {.addr=0x029b, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0323) {
    const struct CPU_State initial_cpu = {.pc=0x5c87, .a=0xd4, .x=0x79, .y=0x62, .sp=0xf6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5c87, .value=0xc8}, {.addr=0x5c88, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x5c89, .a=0xd4, .x=0x79, .y=0x62, .sp=0xf6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5c87, .value=0xc8}, {.addr=0x5c88, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x5c87, .value=0xc8, .type=IO_READ},
        {.addr=0x5c88, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0324) {
    const struct CPU_State initial_cpu = {.pc=0xbe2f, .a=0x44, .x=0x96, .y=0x4b, .sp=0x26, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xbe2f, .value=0xc8}, {.addr=0xbe30, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xbe31, .a=0x44, .x=0x96, .y=0x4b, .sp=0x26, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbe2f, .value=0xc8}, {.addr=0xbe30, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xbe2f, .value=0xc8, .type=IO_READ},
        {.addr=0xbe30, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0325) {
    const struct CPU_State initial_cpu = {.pc=0x7b07, .a=0xef, .x=0x4c, .y=0xdd, .sp=0xe9, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b07, .value=0xc8}, {.addr=0x7b08, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x7b09, .a=0xef, .x=0x4c, .y=0xdd, .sp=0xe9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7b07, .value=0xc8}, {.addr=0x7b08, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x7b07, .value=0xc8, .type=IO_READ},
        {.addr=0x7b08, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0326) {
    const struct CPU_State initial_cpu = {.pc=0x7429, .a=0x61, .x=0x29, .y=0xf0, .sp=0x85, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7429, .value=0xc8}, {.addr=0x742a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x742b, .a=0x61, .x=0x29, .y=0xf0, .sp=0x85, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7429, .value=0xc8}, {.addr=0x742a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7429, .value=0xc8, .type=IO_READ},
        {.addr=0x742a, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0327) {
    const struct CPU_State initial_cpu = {.pc=0xc61a, .a=0xbb, .x=0xa8, .y=0x83, .sp=0xd5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc61a, .value=0xc8}, {.addr=0xc61b, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xc61c, .a=0xbb, .x=0xa8, .y=0x83, .sp=0xd5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc61a, .value=0xc8}, {.addr=0xc61b, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xc61a, .value=0xc8, .type=IO_READ},
        {.addr=0xc61b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0328) {
    const struct CPU_State initial_cpu = {.pc=0x5c64, .a=0x59, .x=0x93, .y=0x04, .sp=0xd9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5c64, .value=0xc8}, {.addr=0x5c65, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5c66, .a=0x59, .x=0x93, .y=0x04, .sp=0xd9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5c64, .value=0xc8}, {.addr=0x5c65, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5c64, .value=0xc8, .type=IO_READ},
        {.addr=0x5c65, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0329) {
    const struct CPU_State initial_cpu = {.pc=0xc104, .a=0xd1, .x=0xb2, .y=0x05, .sp=0x7d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xc104, .value=0xc8}, {.addr=0xc105, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc106, .a=0xd1, .x=0xb2, .y=0x05, .sp=0x7d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc104, .value=0xc8}, {.addr=0xc105, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc104, .value=0xc8, .type=IO_READ},
        {.addr=0xc105, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4890, .a=0xec, .x=0x07, .y=0x85, .sp=0xfc, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4890, .value=0xc8}, {.addr=0x4891, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4892, .a=0xec, .x=0x07, .y=0x85, .sp=0xfc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4890, .value=0xc8}, {.addr=0x4891, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4890, .value=0xc8, .type=IO_READ},
        {.addr=0x4891, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_032B) {
    const struct CPU_State initial_cpu = {.pc=0x47f9, .a=0xe5, .x=0x8c, .y=0xce, .sp=0xb2, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x47f9, .value=0xc8}, {.addr=0x47fa, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x47fb, .a=0xe5, .x=0x8c, .y=0xce, .sp=0xb2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x47f9, .value=0xc8}, {.addr=0x47fa, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x47f9, .value=0xc8, .type=IO_READ},
        {.addr=0x47fa, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_032C) {
    const struct CPU_State initial_cpu = {.pc=0x95ef, .a=0x47, .x=0x9c, .y=0x12, .sp=0xcc, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x95ef, .value=0xc8}, {.addr=0x95f0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x95f1, .a=0x47, .x=0x9c, .y=0x12, .sp=0xcc, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x95ef, .value=0xc8}, {.addr=0x95f0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x95ef, .value=0xc8, .type=IO_READ},
        {.addr=0x95f0, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_032D) {
    const struct CPU_State initial_cpu = {.pc=0x476f, .a=0xa2, .x=0xc7, .y=0x30, .sp=0xe3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x476f, .value=0xc8}, {.addr=0x4770, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x4771, .a=0xa2, .x=0xc7, .y=0x30, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x476f, .value=0xc8}, {.addr=0x4770, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x476f, .value=0xc8, .type=IO_READ},
        {.addr=0x4770, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_032E) {
    const struct CPU_State initial_cpu = {.pc=0xdabf, .a=0xa8, .x=0xfc, .y=0x51, .sp=0x8d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xdabf, .value=0xc8}, {.addr=0xdac0, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xdac1, .a=0xa8, .x=0xfc, .y=0x51, .sp=0x8d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xdabf, .value=0xc8}, {.addr=0xdac0, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xdabf, .value=0xc8, .type=IO_READ},
        {.addr=0xdac0, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2ac5, .a=0x87, .x=0xf4, .y=0x44, .sp=0xc6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac5, .value=0xc8}, {.addr=0x2ac6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2ac7, .a=0x87, .x=0xf4, .y=0x44, .sp=0xc6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2ac5, .value=0xc8}, {.addr=0x2ac6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2ac5, .value=0xc8, .type=IO_READ},
        {.addr=0x2ac6, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0330) {
    const struct CPU_State initial_cpu = {.pc=0x16d1, .a=0xc5, .x=0x50, .y=0x31, .sp=0xda, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x16d1, .value=0xc8}, {.addr=0x16d2, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x16d3, .a=0xc5, .x=0x50, .y=0x31, .sp=0xda, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x16d1, .value=0xc8}, {.addr=0x16d2, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x16d1, .value=0xc8, .type=IO_READ},
        {.addr=0x16d2, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa1f4, .a=0xb4, .x=0x3f, .y=0x3d, .sp=0x12, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f4, .value=0xc8}, {.addr=0xa1f5, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xa1f6, .a=0xb4, .x=0x3f, .y=0x3d, .sp=0x12, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa1f4, .value=0xc8}, {.addr=0xa1f5, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xa1f4, .value=0xc8, .type=IO_READ},
        {.addr=0xa1f5, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0332) {
    const struct CPU_State initial_cpu = {.pc=0x86df, .a=0x87, .x=0x04, .y=0x53, .sp=0x2a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x86df, .value=0xc8}, {.addr=0x86e0, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x86e1, .a=0x87, .x=0x04, .y=0x53, .sp=0x2a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x86df, .value=0xc8}, {.addr=0x86e0, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x86df, .value=0xc8, .type=IO_READ},
        {.addr=0x86e0, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0333) {
    const struct CPU_State initial_cpu = {.pc=0x661a, .a=0x80, .x=0xa4, .y=0x91, .sp=0x3c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x661a, .value=0xc8}, {.addr=0x661b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x661c, .a=0x80, .x=0xa4, .y=0x91, .sp=0x3c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x661a, .value=0xc8}, {.addr=0x661b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x661a, .value=0xc8, .type=IO_READ},
        {.addr=0x661b, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0334) {
    const struct CPU_State initial_cpu = {.pc=0x2339, .a=0x9c, .x=0x86, .y=0x8d, .sp=0x93, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x2339, .value=0xc8}, {.addr=0x233a, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x233b, .a=0x9c, .x=0x86, .y=0x8d, .sp=0x93, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2339, .value=0xc8}, {.addr=0x233a, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x2339, .value=0xc8, .type=IO_READ},
        {.addr=0x233a, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0335) {
    const struct CPU_State initial_cpu = {.pc=0xe2b5, .a=0x15, .x=0xf2, .y=0xcc, .sp=0x49, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe2b5, .value=0xc8}, {.addr=0xe2b6, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xe2b7, .a=0x15, .x=0xf2, .y=0xcc, .sp=0x49, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe2b5, .value=0xc8}, {.addr=0xe2b6, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xe2b5, .value=0xc8, .type=IO_READ},
        {.addr=0xe2b6, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0336) {
    const struct CPU_State initial_cpu = {.pc=0xcc26, .a=0xc9, .x=0xfc, .y=0x3c, .sp=0xe3, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xcc26, .value=0xc8}, {.addr=0xcc27, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xcc28, .a=0xc9, .x=0xfc, .y=0x3c, .sp=0xe3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xcc26, .value=0xc8}, {.addr=0xcc27, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xcc26, .value=0xc8, .type=IO_READ},
        {.addr=0xcc27, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0337) {
    const struct CPU_State initial_cpu = {.pc=0x8014, .a=0xf8, .x=0xb6, .y=0xd0, .sp=0xe9, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8014, .value=0xc8}, {.addr=0x8015, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x8016, .a=0xf8, .x=0xb6, .y=0xd0, .sp=0xe9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8014, .value=0xc8}, {.addr=0x8015, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x8014, .value=0xc8, .type=IO_READ},
        {.addr=0x8015, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0338) {
    const struct CPU_State initial_cpu = {.pc=0x6f1e, .a=0x7a, .x=0x58, .y=0xce, .sp=0xc6, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6f1e, .value=0xc8}, {.addr=0x6f1f, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x6f20, .a=0x7a, .x=0x58, .y=0xce, .sp=0xc6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6f1e, .value=0xc8}, {.addr=0x6f1f, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x6f1e, .value=0xc8, .type=IO_READ},
        {.addr=0x6f1f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0339) {
    const struct CPU_State initial_cpu = {.pc=0x3cc0, .a=0x2e, .x=0xc7, .y=0xd8, .sp=0x77, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc0, .value=0xc8}, {.addr=0x3cc1, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x3cc2, .a=0x2e, .x=0xc7, .y=0xd8, .sp=0x77, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3cc0, .value=0xc8}, {.addr=0x3cc1, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x3cc0, .value=0xc8, .type=IO_READ},
        {.addr=0x3cc1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_033A) {
    const struct CPU_State initial_cpu = {.pc=0x0e31, .a=0xed, .x=0x45, .y=0x38, .sp=0xc6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0e31, .value=0xc8}, {.addr=0x0e32, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x0e33, .a=0xed, .x=0x45, .y=0x38, .sp=0xc6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0e31, .value=0xc8}, {.addr=0x0e32, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x0e31, .value=0xc8, .type=IO_READ},
        {.addr=0x0e32, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_033B) {
    const struct CPU_State initial_cpu = {.pc=0xe865, .a=0x48, .x=0xea, .y=0xa8, .sp=0x8b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe865, .value=0xc8}, {.addr=0xe866, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xe867, .a=0x48, .x=0xea, .y=0xa8, .sp=0x8b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe865, .value=0xc8}, {.addr=0xe866, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xe865, .value=0xc8, .type=IO_READ},
        {.addr=0xe866, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_033C) {
    const struct CPU_State initial_cpu = {.pc=0x60b2, .a=0x9a, .x=0xb4, .y=0xd2, .sp=0x73, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x60b2, .value=0xc8}, {.addr=0x60b3, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x60b4, .a=0x9a, .x=0xb4, .y=0xd2, .sp=0x73, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x60b2, .value=0xc8}, {.addr=0x60b3, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x60b2, .value=0xc8, .type=IO_READ},
        {.addr=0x60b3, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_033D) {
    const struct CPU_State initial_cpu = {.pc=0x8644, .a=0x8c, .x=0xf3, .y=0x1c, .sp=0xed, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8644, .value=0xc8}, {.addr=0x8645, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x8646, .a=0x8c, .x=0xf3, .y=0x1c, .sp=0xed, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8644, .value=0xc8}, {.addr=0x8645, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x8644, .value=0xc8, .type=IO_READ},
        {.addr=0x8645, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_033E) {
    const struct CPU_State initial_cpu = {.pc=0x9a44, .a=0x72, .x=0x0a, .y=0x08, .sp=0xb1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9a44, .value=0xc8}, {.addr=0x9a45, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x9a46, .a=0x72, .x=0x0a, .y=0x08, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9a44, .value=0xc8}, {.addr=0x9a45, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x9a44, .value=0xc8, .type=IO_READ},
        {.addr=0x9a45, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_033F) {
    const struct CPU_State initial_cpu = {.pc=0xd8b5, .a=0xb0, .x=0x32, .y=0x62, .sp=0x00, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b5, .value=0xc8}, {.addr=0xd8b6, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xd8b7, .a=0xb0, .x=0x32, .y=0x62, .sp=0x00, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd8b5, .value=0xc8}, {.addr=0xd8b6, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xd8b5, .value=0xc8, .type=IO_READ},
        {.addr=0xd8b6, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0340) {
    const struct CPU_State initial_cpu = {.pc=0x1e97, .a=0xe9, .x=0x69, .y=0x50, .sp=0x00, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x1e97, .value=0xc8}, {.addr=0x1e98, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x1e99, .a=0xe9, .x=0x69, .y=0x50, .sp=0x00, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1e97, .value=0xc8}, {.addr=0x1e98, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x1e97, .value=0xc8, .type=IO_READ},
        {.addr=0x1e98, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0341) {
    const struct CPU_State initial_cpu = {.pc=0x6565, .a=0xbf, .x=0x21, .y=0x00, .sp=0x80, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6565, .value=0xc8}, {.addr=0x6566, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x6567, .a=0xbf, .x=0x21, .y=0x00, .sp=0x80, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6565, .value=0xc8}, {.addr=0x6566, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x6565, .value=0xc8, .type=IO_READ},
        {.addr=0x6566, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0342) {
    const struct CPU_State initial_cpu = {.pc=0x337e, .a=0xf1, .x=0x6f, .y=0x12, .sp=0xf6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x337e, .value=0xc8}, {.addr=0x337f, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x3380, .a=0xf1, .x=0x6f, .y=0x12, .sp=0xf6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x337e, .value=0xc8}, {.addr=0x337f, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x337e, .value=0xc8, .type=IO_READ},
        {.addr=0x337f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0343) {
    const struct CPU_State initial_cpu = {.pc=0xc7d3, .a=0x4b, .x=0x6a, .y=0x7a, .sp=0x54, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d3, .value=0xc8}, {.addr=0xc7d4, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xc7d5, .a=0x4b, .x=0x6a, .y=0x7a, .sp=0x54, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc7d3, .value=0xc8}, {.addr=0xc7d4, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xc7d3, .value=0xc8, .type=IO_READ},
        {.addr=0xc7d4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0344) {
    const struct CPU_State initial_cpu = {.pc=0xffc3, .a=0x45, .x=0x85, .y=0x71, .sp=0x93, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xffc3, .value=0xc8}, {.addr=0xffc4, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xffc5, .a=0x45, .x=0x85, .y=0x71, .sp=0x93, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xffc3, .value=0xc8}, {.addr=0xffc4, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xffc3, .value=0xc8, .type=IO_READ},
        {.addr=0xffc4, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0345) {
    const struct CPU_State initial_cpu = {.pc=0xe999, .a=0x81, .x=0x90, .y=0x7a, .sp=0xf4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xe999, .value=0xc8}, {.addr=0xe99a, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xe99b, .a=0x81, .x=0x90, .y=0x7a, .sp=0xf4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe999, .value=0xc8}, {.addr=0xe99a, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xe999, .value=0xc8, .type=IO_READ},
        {.addr=0xe99a, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0346) {
    const struct CPU_State initial_cpu = {.pc=0x342c, .a=0x98, .x=0xeb, .y=0xa7, .sp=0x3e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x342c, .value=0xc8}, {.addr=0x342d, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x342e, .a=0x98, .x=0xeb, .y=0xa7, .sp=0x3e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x342c, .value=0xc8}, {.addr=0x342d, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x342c, .value=0xc8, .type=IO_READ},
        {.addr=0x342d, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0347) {
    const struct CPU_State initial_cpu = {.pc=0x7cab, .a=0x98, .x=0x16, .y=0xb9, .sp=0x20, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7cab, .value=0xc8}, {.addr=0x7cac, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7cad, .a=0x98, .x=0x16, .y=0xb9, .sp=0x20, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7cab, .value=0xc8}, {.addr=0x7cac, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7cab, .value=0xc8, .type=IO_READ},
        {.addr=0x7cac, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0348) {
    const struct CPU_State initial_cpu = {.pc=0xf4cc, .a=0xbb, .x=0x01, .y=0x66, .sp=0x94, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf4cc, .value=0xc8}, {.addr=0xf4cd, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xf4ce, .a=0xbb, .x=0x01, .y=0x66, .sp=0x94, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf4cc, .value=0xc8}, {.addr=0xf4cd, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xf4cc, .value=0xc8, .type=IO_READ},
        {.addr=0xf4cd, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0349) {
    const struct CPU_State initial_cpu = {.pc=0x6c07, .a=0x72, .x=0xb0, .y=0xc1, .sp=0x74, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6c07, .value=0xc8}, {.addr=0x6c08, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x6c09, .a=0x72, .x=0xb0, .y=0xc1, .sp=0x74, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6c07, .value=0xc8}, {.addr=0x6c08, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x6c07, .value=0xc8, .type=IO_READ},
        {.addr=0x6c08, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_034A) {
    const struct CPU_State initial_cpu = {.pc=0x3977, .a=0xe5, .x=0xc1, .y=0x7e, .sp=0x77, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3977, .value=0xc8}, {.addr=0x3978, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3979, .a=0xe5, .x=0xc1, .y=0x7e, .sp=0x77, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3977, .value=0xc8}, {.addr=0x3978, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3977, .value=0xc8, .type=IO_READ},
        {.addr=0x3978, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_034B) {
    const struct CPU_State initial_cpu = {.pc=0x0596, .a=0x9b, .x=0x50, .y=0x55, .sp=0x36, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0596, .value=0xc8}, {.addr=0x0597, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x0598, .a=0x9b, .x=0x50, .y=0x55, .sp=0x36, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0596, .value=0xc8}, {.addr=0x0597, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x0596, .value=0xc8, .type=IO_READ},
        {.addr=0x0597, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_034C) {
    const struct CPU_State initial_cpu = {.pc=0xc317, .a=0x35, .x=0xe7, .y=0x40, .sp=0x05, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc317, .value=0xc8}, {.addr=0xc318, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xc319, .a=0x35, .x=0xe7, .y=0x40, .sp=0x05, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xc317, .value=0xc8}, {.addr=0xc318, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xc317, .value=0xc8, .type=IO_READ},
        {.addr=0xc318, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_034D) {
    const struct CPU_State initial_cpu = {.pc=0xc121, .a=0x4f, .x=0x44, .y=0x6b, .sp=0x7f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xc121, .value=0xc8}, {.addr=0xc122, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xc123, .a=0x4f, .x=0x44, .y=0x6b, .sp=0x7f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc121, .value=0xc8}, {.addr=0xc122, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xc121, .value=0xc8, .type=IO_READ},
        {.addr=0xc122, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_034E) {
    const struct CPU_State initial_cpu = {.pc=0xcf4f, .a=0xd4, .x=0x80, .y=0x38, .sp=0xde, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xcf4f, .value=0xc8}, {.addr=0xcf50, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xcf51, .a=0xd4, .x=0x80, .y=0x38, .sp=0xde, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcf4f, .value=0xc8}, {.addr=0xcf50, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcf4f, .value=0xc8, .type=IO_READ},
        {.addr=0xcf50, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_034F) {
    const struct CPU_State initial_cpu = {.pc=0xf9f4, .a=0x67, .x=0xf1, .y=0x81, .sp=0xd5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f4, .value=0xc8}, {.addr=0xf9f5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf9f6, .a=0x67, .x=0xf1, .y=0x81, .sp=0xd5, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf9f4, .value=0xc8}, {.addr=0xf9f5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf9f4, .value=0xc8, .type=IO_READ},
        {.addr=0xf9f5, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0350) {
    const struct CPU_State initial_cpu = {.pc=0x9ce6, .a=0x3e, .x=0xba, .y=0xdd, .sp=0x68, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce6, .value=0xc8}, {.addr=0x9ce7, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x9ce8, .a=0x3e, .x=0xba, .y=0xdd, .sp=0x68, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9ce6, .value=0xc8}, {.addr=0x9ce7, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x9ce6, .value=0xc8, .type=IO_READ},
        {.addr=0x9ce7, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0351) {
    const struct CPU_State initial_cpu = {.pc=0x3e43, .a=0x6f, .x=0x41, .y=0xb7, .sp=0xc7, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3e43, .value=0xc8}, {.addr=0x3e44, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x3e45, .a=0x6f, .x=0x41, .y=0xb7, .sp=0xc7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3e43, .value=0xc8}, {.addr=0x3e44, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x3e43, .value=0xc8, .type=IO_READ},
        {.addr=0x3e44, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0352) {
    const struct CPU_State initial_cpu = {.pc=0x1964, .a=0x94, .x=0xaf, .y=0x25, .sp=0xa0, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x1964, .value=0xc8}, {.addr=0x1965, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1966, .a=0x94, .x=0xaf, .y=0x25, .sp=0xa0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1964, .value=0xc8}, {.addr=0x1965, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1964, .value=0xc8, .type=IO_READ},
        {.addr=0x1965, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0353) {
    const struct CPU_State initial_cpu = {.pc=0x1629, .a=0xa6, .x=0xdb, .y=0xf2, .sp=0xab, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x1629, .value=0xc8}, {.addr=0x162a, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x162b, .a=0xa6, .x=0xdb, .y=0xf2, .sp=0xab, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1629, .value=0xc8}, {.addr=0x162a, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1629, .value=0xc8, .type=IO_READ},
        {.addr=0x162a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0354) {
    const struct CPU_State initial_cpu = {.pc=0xd437, .a=0x5e, .x=0x50, .y=0xbc, .sp=0x7d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xd437, .value=0xc8}, {.addr=0xd438, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd439, .a=0x5e, .x=0x50, .y=0xbc, .sp=0x7d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd437, .value=0xc8}, {.addr=0xd438, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd437, .value=0xc8, .type=IO_READ},
        {.addr=0xd438, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0355) {
    const struct CPU_State initial_cpu = {.pc=0xb046, .a=0x28, .x=0x68, .y=0x45, .sp=0x84, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb046, .value=0xc8}, {.addr=0xb047, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xb048, .a=0x28, .x=0x68, .y=0x45, .sp=0x84, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb046, .value=0xc8}, {.addr=0xb047, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xb046, .value=0xc8, .type=IO_READ},
        {.addr=0xb047, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0356) {
    const struct CPU_State initial_cpu = {.pc=0x3d8e, .a=0x41, .x=0x6e, .y=0x74, .sp=0x0f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8e, .value=0xc8}, {.addr=0x3d8f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d90, .a=0x41, .x=0x6e, .y=0x74, .sp=0x0f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3d8e, .value=0xc8}, {.addr=0x3d8f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d8e, .value=0xc8, .type=IO_READ},
        {.addr=0x3d8f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0357) {
    const struct CPU_State initial_cpu = {.pc=0x49ec, .a=0x3c, .x=0xd6, .y=0x93, .sp=0xec, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x49ec, .value=0xc8}, {.addr=0x49ed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x49ee, .a=0x3c, .x=0xd6, .y=0x93, .sp=0xec, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x49ec, .value=0xc8}, {.addr=0x49ed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x49ec, .value=0xc8, .type=IO_READ},
        {.addr=0x49ed, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0358) {
    const struct CPU_State initial_cpu = {.pc=0x43f2, .a=0x11, .x=0x09, .y=0x13, .sp=0x71, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x43f2, .value=0xc8}, {.addr=0x43f3, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x43f4, .a=0x11, .x=0x09, .y=0x13, .sp=0x71, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x43f2, .value=0xc8}, {.addr=0x43f3, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x43f2, .value=0xc8, .type=IO_READ},
        {.addr=0x43f3, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0359) {
    const struct CPU_State initial_cpu = {.pc=0xf648, .a=0x71, .x=0x40, .y=0xe0, .sp=0x5c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf648, .value=0xc8}, {.addr=0xf649, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xf64a, .a=0x71, .x=0x40, .y=0xe0, .sp=0x5c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf648, .value=0xc8}, {.addr=0xf649, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xf648, .value=0xc8, .type=IO_READ},
        {.addr=0xf649, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_035A) {
    const struct CPU_State initial_cpu = {.pc=0x06e0, .a=0x1f, .x=0xbb, .y=0xd2, .sp=0x9b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x06e0, .value=0xc8}, {.addr=0x06e1, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x06e2, .a=0x1f, .x=0xbb, .y=0xd2, .sp=0x9b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x06e0, .value=0xc8}, {.addr=0x06e1, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x06e0, .value=0xc8, .type=IO_READ},
        {.addr=0x06e1, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_035B) {
    const struct CPU_State initial_cpu = {.pc=0x5a61, .a=0xca, .x=0xae, .y=0xaa, .sp=0xff, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5a61, .value=0xc8}, {.addr=0x5a62, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5a63, .a=0xca, .x=0xae, .y=0xaa, .sp=0xff, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5a61, .value=0xc8}, {.addr=0x5a62, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5a61, .value=0xc8, .type=IO_READ},
        {.addr=0x5a62, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_035C) {
    const struct CPU_State initial_cpu = {.pc=0xbd3d, .a=0x5b, .x=0x48, .y=0x7e, .sp=0xb7, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3d, .value=0xc8}, {.addr=0xbd3e, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xbd3f, .a=0x5b, .x=0x48, .y=0x7e, .sp=0xb7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbd3d, .value=0xc8}, {.addr=0xbd3e, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xbd3d, .value=0xc8, .type=IO_READ},
        {.addr=0xbd3e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_035D) {
    const struct CPU_State initial_cpu = {.pc=0x6b27, .a=0x5a, .x=0xfc, .y=0xcb, .sp=0xe9, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6b27, .value=0xc8}, {.addr=0x6b28, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x6b29, .a=0x5a, .x=0xfc, .y=0xcb, .sp=0xe9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6b27, .value=0xc8}, {.addr=0x6b28, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x6b27, .value=0xc8, .type=IO_READ},
        {.addr=0x6b28, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd1f1, .a=0x27, .x=0x47, .y=0x5a, .sp=0xf0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f1, .value=0xc8}, {.addr=0xd1f2, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xd1f3, .a=0x27, .x=0x47, .y=0x5a, .sp=0xf0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd1f1, .value=0xc8}, {.addr=0xd1f2, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xd1f1, .value=0xc8, .type=IO_READ},
        {.addr=0xd1f2, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_035F) {
    const struct CPU_State initial_cpu = {.pc=0xf571, .a=0x5d, .x=0x6c, .y=0x1d, .sp=0x28, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf571, .value=0xc8}, {.addr=0xf572, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xf573, .a=0x5d, .x=0x6c, .y=0x1d, .sp=0x28, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf571, .value=0xc8}, {.addr=0xf572, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xf571, .value=0xc8, .type=IO_READ},
        {.addr=0xf572, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0360) {
    const struct CPU_State initial_cpu = {.pc=0x6f1e, .a=0x83, .x=0x14, .y=0x10, .sp=0xcc, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6f1e, .value=0xc8}, {.addr=0x6f1f, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x6f20, .a=0x83, .x=0x14, .y=0x10, .sp=0xcc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6f1e, .value=0xc8}, {.addr=0x6f1f, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x6f1e, .value=0xc8, .type=IO_READ},
        {.addr=0x6f1f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0361) {
    const struct CPU_State initial_cpu = {.pc=0x3f61, .a=0x18, .x=0xd1, .y=0x0e, .sp=0xba, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3f61, .value=0xc8}, {.addr=0x3f62, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x3f63, .a=0x18, .x=0xd1, .y=0x0e, .sp=0xba, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3f61, .value=0xc8}, {.addr=0x3f62, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x3f61, .value=0xc8, .type=IO_READ},
        {.addr=0x3f62, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0362) {
    const struct CPU_State initial_cpu = {.pc=0xe48c, .a=0xec, .x=0x5a, .y=0x69, .sp=0x96, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xe48c, .value=0xc8}, {.addr=0xe48d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe48e, .a=0xec, .x=0x5a, .y=0x69, .sp=0x96, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe48c, .value=0xc8}, {.addr=0xe48d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe48c, .value=0xc8, .type=IO_READ},
        {.addr=0xe48d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0363) {
    const struct CPU_State initial_cpu = {.pc=0xa5f5, .a=0xe0, .x=0x96, .y=0xce, .sp=0x8f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f5, .value=0xc8}, {.addr=0xa5f6, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa5f7, .a=0xe0, .x=0x96, .y=0xce, .sp=0x8f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa5f5, .value=0xc8}, {.addr=0xa5f6, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa5f5, .value=0xc8, .type=IO_READ},
        {.addr=0xa5f6, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0364) {
    const struct CPU_State initial_cpu = {.pc=0xb456, .a=0xe1, .x=0x9b, .y=0x5a, .sp=0x95, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb456, .value=0xc8}, {.addr=0xb457, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xb458, .a=0xe1, .x=0x9b, .y=0x5a, .sp=0x95, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb456, .value=0xc8}, {.addr=0xb457, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xb456, .value=0xc8, .type=IO_READ},
        {.addr=0xb457, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0365) {
    const struct CPU_State initial_cpu = {.pc=0xa754, .a=0xfe, .x=0x6b, .y=0x95, .sp=0x55, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa754, .value=0xc8}, {.addr=0xa755, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xa756, .a=0xfe, .x=0x6b, .y=0x95, .sp=0x55, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa754, .value=0xc8}, {.addr=0xa755, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xa754, .value=0xc8, .type=IO_READ},
        {.addr=0xa755, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0366) {
    const struct CPU_State initial_cpu = {.pc=0x19f4, .a=0x0d, .x=0x20, .y=0xdc, .sp=0x09, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x19f4, .value=0xc8}, {.addr=0x19f5, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x19f6, .a=0x0d, .x=0x20, .y=0xdc, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x19f4, .value=0xc8}, {.addr=0x19f5, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x19f4, .value=0xc8, .type=IO_READ},
        {.addr=0x19f5, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0367) {
    const struct CPU_State initial_cpu = {.pc=0x448a, .a=0xc5, .x=0x1f, .y=0x1c, .sp=0x5f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x448a, .value=0xc8}, {.addr=0x448b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x448c, .a=0xc5, .x=0x1f, .y=0x1c, .sp=0x5f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x448a, .value=0xc8}, {.addr=0x448b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x448a, .value=0xc8, .type=IO_READ},
        {.addr=0x448b, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0368) {
    const struct CPU_State initial_cpu = {.pc=0x68f0, .a=0xfb, .x=0x5f, .y=0xb3, .sp=0xf9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x68f0, .value=0xc8}, {.addr=0x68f1, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x68f2, .a=0xfb, .x=0x5f, .y=0xb3, .sp=0xf9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x68f0, .value=0xc8}, {.addr=0x68f1, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x68f0, .value=0xc8, .type=IO_READ},
        {.addr=0x68f1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0369) {
    const struct CPU_State initial_cpu = {.pc=0x930b, .a=0xea, .x=0xf4, .y=0xa2, .sp=0xd2, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x930b, .value=0xc8}, {.addr=0x930c, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x930d, .a=0xea, .x=0xf4, .y=0xa2, .sp=0xd2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x930b, .value=0xc8}, {.addr=0x930c, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x930b, .value=0xc8, .type=IO_READ},
        {.addr=0x930c, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_036A) {
    const struct CPU_State initial_cpu = {.pc=0x2ced, .a=0x43, .x=0x3e, .y=0x94, .sp=0x35, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2ced, .value=0xc8}, {.addr=0x2cee, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2cef, .a=0x43, .x=0x3e, .y=0x94, .sp=0x35, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2ced, .value=0xc8}, {.addr=0x2cee, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2ced, .value=0xc8, .type=IO_READ},
        {.addr=0x2cee, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_036B) {
    const struct CPU_State initial_cpu = {.pc=0x0ffc, .a=0x46, .x=0x49, .y=0x7e, .sp=0x9f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0ffc, .value=0xc8}, {.addr=0x0ffd, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x0ffe, .a=0x46, .x=0x49, .y=0x7e, .sp=0x9f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0ffc, .value=0xc8}, {.addr=0x0ffd, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x0ffc, .value=0xc8, .type=IO_READ},
        {.addr=0x0ffd, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_036C) {
    const struct CPU_State initial_cpu = {.pc=0xc957, .a=0xe2, .x=0xba, .y=0x5f, .sp=0xd6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc957, .value=0xc8}, {.addr=0xc958, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xc959, .a=0xe2, .x=0xba, .y=0x5f, .sp=0xd6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc957, .value=0xc8}, {.addr=0xc958, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xc957, .value=0xc8, .type=IO_READ},
        {.addr=0xc958, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_036D) {
    const struct CPU_State initial_cpu = {.pc=0x0424, .a=0xe6, .x=0xb1, .y=0xea, .sp=0xbe, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0424, .value=0xc8}, {.addr=0x0425, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x0426, .a=0xe6, .x=0xb1, .y=0xea, .sp=0xbe, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0424, .value=0xc8}, {.addr=0x0425, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x0424, .value=0xc8, .type=IO_READ},
        {.addr=0x0425, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_036E) {
    const struct CPU_State initial_cpu = {.pc=0x43de, .a=0x1a, .x=0xbc, .y=0x71, .sp=0xdd, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x43de, .value=0xc8}, {.addr=0x43df, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x43e0, .a=0x1a, .x=0xbc, .y=0x71, .sp=0xdd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x43de, .value=0xc8}, {.addr=0x43df, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x43de, .value=0xc8, .type=IO_READ},
        {.addr=0x43df, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_036F) {
    const struct CPU_State initial_cpu = {.pc=0x9493, .a=0x65, .x=0x0e, .y=0xde, .sp=0x75, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9493, .value=0xc8}, {.addr=0x9494, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x9495, .a=0x65, .x=0x0e, .y=0xde, .sp=0x75, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9493, .value=0xc8}, {.addr=0x9494, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x9493, .value=0xc8, .type=IO_READ},
        {.addr=0x9494, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0370) {
    const struct CPU_State initial_cpu = {.pc=0xc058, .a=0x33, .x=0x22, .y=0x55, .sp=0xc9, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc058, .value=0xc8}, {.addr=0xc059, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc05a, .a=0x33, .x=0x22, .y=0x55, .sp=0xc9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc058, .value=0xc8}, {.addr=0xc059, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc058, .value=0xc8, .type=IO_READ},
        {.addr=0xc059, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa780, .a=0x39, .x=0x8e, .y=0xd7, .sp=0xfa, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa780, .value=0xc8}, {.addr=0xa781, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xa782, .a=0x39, .x=0x8e, .y=0xd7, .sp=0xfa, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xa780, .value=0xc8}, {.addr=0xa781, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xa780, .value=0xc8, .type=IO_READ},
        {.addr=0xa781, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0372) {
    const struct CPU_State initial_cpu = {.pc=0x8dab, .a=0xef, .x=0x27, .y=0xc5, .sp=0x95, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8dab, .value=0xc8}, {.addr=0x8dac, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x8dad, .a=0xef, .x=0x27, .y=0xc5, .sp=0x95, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8dab, .value=0xc8}, {.addr=0x8dac, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x8dab, .value=0xc8, .type=IO_READ},
        {.addr=0x8dac, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0373) {
    const struct CPU_State initial_cpu = {.pc=0x3761, .a=0x1c, .x=0xbe, .y=0x69, .sp=0x84, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3761, .value=0xc8}, {.addr=0x3762, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3763, .a=0x1c, .x=0xbe, .y=0x69, .sp=0x84, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3761, .value=0xc8}, {.addr=0x3762, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3761, .value=0xc8, .type=IO_READ},
        {.addr=0x3762, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0374) {
    const struct CPU_State initial_cpu = {.pc=0x76dd, .a=0xaf, .x=0xd9, .y=0x99, .sp=0x9f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x76dd, .value=0xc8}, {.addr=0x76de, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x76df, .a=0xaf, .x=0xd9, .y=0x99, .sp=0x9f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x76dd, .value=0xc8}, {.addr=0x76de, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x76dd, .value=0xc8, .type=IO_READ},
        {.addr=0x76de, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0375) {
    const struct CPU_State initial_cpu = {.pc=0x3f4c, .a=0xfa, .x=0x2c, .y=0xb8, .sp=0x65, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x3f4c, .value=0xc8}, {.addr=0x3f4d, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x3f4e, .a=0xfa, .x=0x2c, .y=0xb8, .sp=0x65, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3f4c, .value=0xc8}, {.addr=0x3f4d, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x3f4c, .value=0xc8, .type=IO_READ},
        {.addr=0x3f4d, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0376) {
    const struct CPU_State initial_cpu = {.pc=0x232c, .a=0x95, .x=0x70, .y=0x82, .sp=0x38, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x232c, .value=0xc8}, {.addr=0x232d, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x232e, .a=0x95, .x=0x70, .y=0x82, .sp=0x38, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x232c, .value=0xc8}, {.addr=0x232d, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x232c, .value=0xc8, .type=IO_READ},
        {.addr=0x232d, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0377) {
    const struct CPU_State initial_cpu = {.pc=0x4ef9, .a=0xea, .x=0x1c, .y=0xb2, .sp=0x77, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef9, .value=0xc8}, {.addr=0x4efa, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x4efb, .a=0xea, .x=0x1c, .y=0xb2, .sp=0x77, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4ef9, .value=0xc8}, {.addr=0x4efa, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x4ef9, .value=0xc8, .type=IO_READ},
        {.addr=0x4efa, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0378) {
    const struct CPU_State initial_cpu = {.pc=0x60c6, .a=0xe1, .x=0x73, .y=0xc6, .sp=0xec, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x60c6, .value=0xc8}, {.addr=0x60c7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x60c8, .a=0xe1, .x=0x73, .y=0xc6, .sp=0xec, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x60c6, .value=0xc8}, {.addr=0x60c7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x60c6, .value=0xc8, .type=IO_READ},
        {.addr=0x60c7, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0379) {
    const struct CPU_State initial_cpu = {.pc=0xa0ac, .a=0xff, .x=0xde, .y=0xcd, .sp=0x34, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ac, .value=0xc8}, {.addr=0xa0ad, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xa0ae, .a=0xff, .x=0xde, .y=0xcd, .sp=0x34, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa0ac, .value=0xc8}, {.addr=0xa0ad, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xa0ac, .value=0xc8, .type=IO_READ},
        {.addr=0xa0ad, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_037A) {
    const struct CPU_State initial_cpu = {.pc=0x5b8b, .a=0x08, .x=0x81, .y=0xfd, .sp=0x6a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5b8b, .value=0xc8}, {.addr=0x5b8c, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x5b8d, .a=0x08, .x=0x81, .y=0xfd, .sp=0x6a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5b8b, .value=0xc8}, {.addr=0x5b8c, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x5b8b, .value=0xc8, .type=IO_READ},
        {.addr=0x5b8c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_037B) {
    const struct CPU_State initial_cpu = {.pc=0x8756, .a=0xd8, .x=0x83, .y=0xd5, .sp=0x35, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x8756, .value=0xc8}, {.addr=0x8757, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x8758, .a=0xd8, .x=0x83, .y=0xd5, .sp=0x35, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8756, .value=0xc8}, {.addr=0x8757, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x8756, .value=0xc8, .type=IO_READ},
        {.addr=0x8757, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_037C) {
    const struct CPU_State initial_cpu = {.pc=0xd56f, .a=0x02, .x=0xa5, .y=0xd0, .sp=0x51, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd56f, .value=0xc8}, {.addr=0xd570, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd571, .a=0x02, .x=0xa5, .y=0xd0, .sp=0x51, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xd56f, .value=0xc8}, {.addr=0xd570, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd56f, .value=0xc8, .type=IO_READ},
        {.addr=0xd570, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_037D) {
    const struct CPU_State initial_cpu = {.pc=0x9f51, .a=0x64, .x=0xc9, .y=0x6c, .sp=0xbf, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9f51, .value=0xc8}, {.addr=0x9f52, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x9f53, .a=0x64, .x=0xc9, .y=0x6c, .sp=0xbf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9f51, .value=0xc8}, {.addr=0x9f52, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x9f51, .value=0xc8, .type=IO_READ},
        {.addr=0x9f52, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_037E) {
    const struct CPU_State initial_cpu = {.pc=0xdb61, .a=0x2d, .x=0x2c, .y=0x1d, .sp=0xa9, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xdb61, .value=0xc8}, {.addr=0xdb62, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xdb63, .a=0x2d, .x=0x2c, .y=0x1d, .sp=0xa9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xdb61, .value=0xc8}, {.addr=0xdb62, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xdb61, .value=0xc8, .type=IO_READ},
        {.addr=0xdb62, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_037F) {
    const struct CPU_State initial_cpu = {.pc=0x622c, .a=0x77, .x=0x17, .y=0x5a, .sp=0x7b, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x622c, .value=0xc8}, {.addr=0x622d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x622e, .a=0x77, .x=0x17, .y=0x5a, .sp=0x7b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x622c, .value=0xc8}, {.addr=0x622d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x622c, .value=0xc8, .type=IO_READ},
        {.addr=0x622d, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0380) {
    const struct CPU_State initial_cpu = {.pc=0x4d02, .a=0x1b, .x=0xfc, .y=0xae, .sp=0x07, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4d02, .value=0xc8}, {.addr=0x4d03, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x4d04, .a=0x1b, .x=0xfc, .y=0xae, .sp=0x07, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4d02, .value=0xc8}, {.addr=0x4d03, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x4d02, .value=0xc8, .type=IO_READ},
        {.addr=0x4d03, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0381) {
    const struct CPU_State initial_cpu = {.pc=0x10aa, .a=0x98, .x=0xeb, .y=0xd4, .sp=0x20, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x10aa, .value=0xc8}, {.addr=0x10ab, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x10ac, .a=0x98, .x=0xeb, .y=0xd4, .sp=0x20, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x10aa, .value=0xc8}, {.addr=0x10ab, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x10aa, .value=0xc8, .type=IO_READ},
        {.addr=0x10ab, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0382) {
    const struct CPU_State initial_cpu = {.pc=0xa2ad, .a=0xfc, .x=0xe9, .y=0x65, .sp=0xa6, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ad, .value=0xc8}, {.addr=0xa2ae, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa2af, .a=0xfc, .x=0xe9, .y=0x65, .sp=0xa6, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa2ad, .value=0xc8}, {.addr=0xa2ae, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa2ad, .value=0xc8, .type=IO_READ},
        {.addr=0xa2ae, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0383) {
    const struct CPU_State initial_cpu = {.pc=0x3371, .a=0x75, .x=0x0a, .y=0xb5, .sp=0xb0, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3371, .value=0xc8}, {.addr=0x3372, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x3373, .a=0x75, .x=0x0a, .y=0xb5, .sp=0xb0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3371, .value=0xc8}, {.addr=0x3372, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x3371, .value=0xc8, .type=IO_READ},
        {.addr=0x3372, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb2ec, .a=0x04, .x=0x67, .y=0xf9, .sp=0xe8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ec, .value=0xc8}, {.addr=0xb2ed, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xb2ee, .a=0x04, .x=0x67, .y=0xf9, .sp=0xe8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb2ec, .value=0xc8}, {.addr=0xb2ed, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xb2ec, .value=0xc8, .type=IO_READ},
        {.addr=0xb2ed, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0385) {
    const struct CPU_State initial_cpu = {.pc=0xe4e4, .a=0xc1, .x=0xdf, .y=0x28, .sp=0x19, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e4, .value=0xc8}, {.addr=0xe4e5, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xe4e6, .a=0xc1, .x=0xdf, .y=0x28, .sp=0x19, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe4e4, .value=0xc8}, {.addr=0xe4e5, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xe4e4, .value=0xc8, .type=IO_READ},
        {.addr=0xe4e5, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3e39, .a=0x4c, .x=0x65, .y=0x77, .sp=0xb9, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x3e39, .value=0xc8}, {.addr=0x3e3a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3e3b, .a=0x4c, .x=0x65, .y=0x77, .sp=0xb9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3e39, .value=0xc8}, {.addr=0x3e3a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3e39, .value=0xc8, .type=IO_READ},
        {.addr=0x3e3a, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0387) {
    const struct CPU_State initial_cpu = {.pc=0x50d1, .a=0x11, .x=0x21, .y=0xb0, .sp=0xf4, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x50d1, .value=0xc8}, {.addr=0x50d2, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x50d3, .a=0x11, .x=0x21, .y=0xb0, .sp=0xf4, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x50d1, .value=0xc8}, {.addr=0x50d2, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x50d1, .value=0xc8, .type=IO_READ},
        {.addr=0x50d2, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0388) {
    const struct CPU_State initial_cpu = {.pc=0x85ef, .a=0x11, .x=0xd2, .y=0x59, .sp=0xa6, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x85ef, .value=0xc8}, {.addr=0x85f0, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x85f1, .a=0x11, .x=0xd2, .y=0x59, .sp=0xa6, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x85ef, .value=0xc8}, {.addr=0x85f0, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x85ef, .value=0xc8, .type=IO_READ},
        {.addr=0x85f0, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0389) {
    const struct CPU_State initial_cpu = {.pc=0xb314, .a=0x3c, .x=0xad, .y=0xcb, .sp=0x75, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb314, .value=0xc8}, {.addr=0xb315, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xb316, .a=0x3c, .x=0xad, .y=0xcb, .sp=0x75, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb314, .value=0xc8}, {.addr=0xb315, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xb314, .value=0xc8, .type=IO_READ},
        {.addr=0xb315, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6d5d, .a=0x77, .x=0x28, .y=0xa0, .sp=0xec, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5d, .value=0xc8}, {.addr=0x6d5e, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6d5f, .a=0x77, .x=0x28, .y=0xa0, .sp=0xec, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6d5d, .value=0xc8}, {.addr=0x6d5e, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6d5d, .value=0xc8, .type=IO_READ},
        {.addr=0x6d5e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7a92, .a=0xad, .x=0x34, .y=0xa7, .sp=0x38, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x7a92, .value=0xc8}, {.addr=0x7a93, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x7a94, .a=0xad, .x=0x34, .y=0xa7, .sp=0x38, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7a92, .value=0xc8}, {.addr=0x7a93, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x7a92, .value=0xc8, .type=IO_READ},
        {.addr=0x7a93, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_038C) {
    const struct CPU_State initial_cpu = {.pc=0xae5d, .a=0xc7, .x=0x06, .y=0x70, .sp=0x48, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xae5d, .value=0xc8}, {.addr=0xae5e, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xae5f, .a=0xc7, .x=0x06, .y=0x70, .sp=0x48, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xae5d, .value=0xc8}, {.addr=0xae5e, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xae5d, .value=0xc8, .type=IO_READ},
        {.addr=0xae5e, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_038D) {
    const struct CPU_State initial_cpu = {.pc=0x3506, .a=0xed, .x=0xee, .y=0x25, .sp=0x75, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3506, .value=0xc8}, {.addr=0x3507, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3508, .a=0xed, .x=0xee, .y=0x25, .sp=0x75, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3506, .value=0xc8}, {.addr=0x3507, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3506, .value=0xc8, .type=IO_READ},
        {.addr=0x3507, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_038E) {
    const struct CPU_State initial_cpu = {.pc=0x819c, .a=0x1a, .x=0x65, .y=0x0e, .sp=0xad, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x819c, .value=0xc8}, {.addr=0x819d, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x819e, .a=0x1a, .x=0x65, .y=0x0e, .sp=0xad, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x819c, .value=0xc8}, {.addr=0x819d, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x819c, .value=0xc8, .type=IO_READ},
        {.addr=0x819d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_038F) {
    const struct CPU_State initial_cpu = {.pc=0x7a43, .a=0xd9, .x=0x04, .y=0xe3, .sp=0x9e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7a43, .value=0xc8}, {.addr=0x7a44, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x7a45, .a=0xd9, .x=0x04, .y=0xe3, .sp=0x9e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7a43, .value=0xc8}, {.addr=0x7a44, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x7a43, .value=0xc8, .type=IO_READ},
        {.addr=0x7a44, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0390) {
    const struct CPU_State initial_cpu = {.pc=0x38ad, .a=0x40, .x=0x82, .y=0xf5, .sp=0xf1, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x38ad, .value=0xc8}, {.addr=0x38ae, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x38af, .a=0x40, .x=0x82, .y=0xf5, .sp=0xf1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x38ad, .value=0xc8}, {.addr=0x38ae, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x38ad, .value=0xc8, .type=IO_READ},
        {.addr=0x38ae, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0391) {
    const struct CPU_State initial_cpu = {.pc=0x2c24, .a=0x09, .x=0x0f, .y=0x12, .sp=0xe6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2c24, .value=0xc8}, {.addr=0x2c25, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x2c26, .a=0x09, .x=0x0f, .y=0x12, .sp=0xe6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2c24, .value=0xc8}, {.addr=0x2c25, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x2c24, .value=0xc8, .type=IO_READ},
        {.addr=0x2c25, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0392) {
    const struct CPU_State initial_cpu = {.pc=0x52f4, .a=0xca, .x=0xf4, .y=0xf4, .sp=0xdd, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x52f4, .value=0xc8}, {.addr=0x52f5, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x52f6, .a=0xca, .x=0xf4, .y=0xf4, .sp=0xdd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x52f4, .value=0xc8}, {.addr=0x52f5, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x52f4, .value=0xc8, .type=IO_READ},
        {.addr=0x52f5, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0393) {
    const struct CPU_State initial_cpu = {.pc=0xfbb0, .a=0xed, .x=0xe5, .y=0x6a, .sp=0xc4, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb0, .value=0xc8}, {.addr=0xfbb1, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xfbb2, .a=0xed, .x=0xe5, .y=0x6a, .sp=0xc4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfbb0, .value=0xc8}, {.addr=0xfbb1, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xfbb0, .value=0xc8, .type=IO_READ},
        {.addr=0xfbb1, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0394) {
    const struct CPU_State initial_cpu = {.pc=0x01ce, .a=0xc2, .x=0xf6, .y=0x50, .sp=0x12, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xc8}, {.addr=0x01cf, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x01d0, .a=0xc2, .x=0xf6, .y=0x50, .sp=0x12, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xc8}, {.addr=0x01cf, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x01ce, .value=0xc8, .type=IO_READ},
        {.addr=0x01cf, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0395) {
    const struct CPU_State initial_cpu = {.pc=0xb7ec, .a=0x8a, .x=0xd3, .y=0xf0, .sp=0xf2, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ec, .value=0xc8}, {.addr=0xb7ed, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xb7ee, .a=0x8a, .x=0xd3, .y=0xf0, .sp=0xf2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb7ec, .value=0xc8}, {.addr=0xb7ed, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xb7ec, .value=0xc8, .type=IO_READ},
        {.addr=0xb7ed, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0396) {
    const struct CPU_State initial_cpu = {.pc=0x56ce, .a=0x09, .x=0x80, .y=0x97, .sp=0x6a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x56ce, .value=0xc8}, {.addr=0x56cf, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x56d0, .a=0x09, .x=0x80, .y=0x97, .sp=0x6a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x56ce, .value=0xc8}, {.addr=0x56cf, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x56ce, .value=0xc8, .type=IO_READ},
        {.addr=0x56cf, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0397) {
    const struct CPU_State initial_cpu = {.pc=0x15f6, .a=0xdf, .x=0x44, .y=0x50, .sp=0x0a, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x15f6, .value=0xc8}, {.addr=0x15f7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x15f8, .a=0xdf, .x=0x44, .y=0x50, .sp=0x0a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x15f6, .value=0xc8}, {.addr=0x15f7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x15f6, .value=0xc8, .type=IO_READ},
        {.addr=0x15f7, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0398) {
    const struct CPU_State initial_cpu = {.pc=0xdf80, .a=0xad, .x=0x80, .y=0x67, .sp=0x7d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xdf80, .value=0xc8}, {.addr=0xdf81, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xdf82, .a=0xad, .x=0x80, .y=0x67, .sp=0x7d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xdf80, .value=0xc8}, {.addr=0xdf81, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xdf80, .value=0xc8, .type=IO_READ},
        {.addr=0xdf81, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_0399) {
    const struct CPU_State initial_cpu = {.pc=0x6706, .a=0x04, .x=0x38, .y=0x53, .sp=0x02, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6706, .value=0xc8}, {.addr=0x6707, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x6708, .a=0x04, .x=0x38, .y=0x53, .sp=0x02, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6706, .value=0xc8}, {.addr=0x6707, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x6706, .value=0xc8, .type=IO_READ},
        {.addr=0x6707, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_039A) {
    const struct CPU_State initial_cpu = {.pc=0x5d82, .a=0xc8, .x=0x28, .y=0x29, .sp=0xf6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5d82, .value=0xc8}, {.addr=0x5d83, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x5d84, .a=0xc8, .x=0x28, .y=0x29, .sp=0xf6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5d82, .value=0xc8}, {.addr=0x5d83, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x5d82, .value=0xc8, .type=IO_READ},
        {.addr=0x5d83, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_039B) {
    const struct CPU_State initial_cpu = {.pc=0xe0d2, .a=0xf0, .x=0xe3, .y=0x4d, .sp=0x5a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d2, .value=0xc8}, {.addr=0xe0d3, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xe0d4, .a=0xf0, .x=0xe3, .y=0x4d, .sp=0x5a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe0d2, .value=0xc8}, {.addr=0xe0d3, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xe0d2, .value=0xc8, .type=IO_READ},
        {.addr=0xe0d3, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_039C) {
    const struct CPU_State initial_cpu = {.pc=0x72b8, .a=0x2c, .x=0x14, .y=0xdc, .sp=0x98, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x72b8, .value=0xc8}, {.addr=0x72b9, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x72ba, .a=0x2c, .x=0x14, .y=0xdc, .sp=0x98, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x72b8, .value=0xc8}, {.addr=0x72b9, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x72b8, .value=0xc8, .type=IO_READ},
        {.addr=0x72b9, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_039D) {
    const struct CPU_State initial_cpu = {.pc=0xdf58, .a=0x5a, .x=0x89, .y=0x1e, .sp=0xe0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xdf58, .value=0xc8}, {.addr=0xdf59, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xdf5a, .a=0x5a, .x=0x89, .y=0x1e, .sp=0xe0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xdf58, .value=0xc8}, {.addr=0xdf59, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xdf58, .value=0xc8, .type=IO_READ},
        {.addr=0xdf59, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_039E) {
    const struct CPU_State initial_cpu = {.pc=0x4364, .a=0x6d, .x=0x80, .y=0xc2, .sp=0xb7, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4364, .value=0xc8}, {.addr=0x4365, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x4366, .a=0x6d, .x=0x80, .y=0xc2, .sp=0xb7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4364, .value=0xc8}, {.addr=0x4365, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x4364, .value=0xc8, .type=IO_READ},
        {.addr=0x4365, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_039F) {
    const struct CPU_State initial_cpu = {.pc=0x076b, .a=0x0c, .x=0x84, .y=0x35, .sp=0x98, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x076b, .value=0xc8}, {.addr=0x076c, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x076d, .a=0x0c, .x=0x84, .y=0x35, .sp=0x98, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x076b, .value=0xc8}, {.addr=0x076c, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x076b, .value=0xc8, .type=IO_READ},
        {.addr=0x076c, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x3cf3, .a=0x4e, .x=0x6d, .y=0x97, .sp=0x22, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf3, .value=0xc8}, {.addr=0x3cf4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x3cf5, .a=0x4e, .x=0x6d, .y=0x97, .sp=0x22, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3cf3, .value=0xc8}, {.addr=0x3cf4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x3cf3, .value=0xc8, .type=IO_READ},
        {.addr=0x3cf4, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xbb40, .a=0x60, .x=0xd5, .y=0xc4, .sp=0xf5, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xbb40, .value=0xc8}, {.addr=0xbb41, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xbb42, .a=0x60, .x=0xd5, .y=0xc4, .sp=0xf5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbb40, .value=0xc8}, {.addr=0xbb41, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xbb40, .value=0xc8, .type=IO_READ},
        {.addr=0xbb41, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xd7bc, .a=0xd2, .x=0x76, .y=0x7c, .sp=0x56, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd7bc, .value=0xc8}, {.addr=0xd7bd, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xd7be, .a=0xd2, .x=0x76, .y=0x7c, .sp=0x56, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd7bc, .value=0xc8}, {.addr=0xd7bd, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xd7bc, .value=0xc8, .type=IO_READ},
        {.addr=0xd7bd, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xc4bb, .a=0xe3, .x=0xfd, .y=0x0c, .sp=0x4c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bb, .value=0xc8}, {.addr=0xc4bc, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xc4bd, .a=0xe3, .x=0xfd, .y=0x0c, .sp=0x4c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xc4bb, .value=0xc8}, {.addr=0xc4bc, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xc4bb, .value=0xc8, .type=IO_READ},
        {.addr=0xc4bc, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xa844, .a=0x77, .x=0x3d, .y=0xbf, .sp=0xe7, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa844, .value=0xc8}, {.addr=0xa845, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa846, .a=0x77, .x=0x3d, .y=0xbf, .sp=0xe7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa844, .value=0xc8}, {.addr=0xa845, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa844, .value=0xc8, .type=IO_READ},
        {.addr=0xa845, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x8e94, .a=0x99, .x=0x11, .y=0xed, .sp=0xab, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8e94, .value=0xc8}, {.addr=0x8e95, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x8e96, .a=0x99, .x=0x11, .y=0xed, .sp=0xab, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8e94, .value=0xc8}, {.addr=0x8e95, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x8e94, .value=0xc8, .type=IO_READ},
        {.addr=0x8e95, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3977, .a=0xe2, .x=0x61, .y=0x06, .sp=0x53, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3977, .value=0xc8}, {.addr=0x3978, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x3979, .a=0xe2, .x=0x61, .y=0x06, .sp=0x53, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3977, .value=0xc8}, {.addr=0x3978, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x3977, .value=0xc8, .type=IO_READ},
        {.addr=0x3978, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x362e, .a=0xf2, .x=0xe8, .y=0x5b, .sp=0x08, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x362e, .value=0xc8}, {.addr=0x362f, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x3630, .a=0xf2, .x=0xe8, .y=0x5b, .sp=0x08, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x362e, .value=0xc8}, {.addr=0x362f, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x362e, .value=0xc8, .type=IO_READ},
        {.addr=0x362f, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xb4c7, .a=0xdc, .x=0x0e, .y=0xb0, .sp=0x9a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xb4c7, .value=0xc8}, {.addr=0xb4c8, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xb4c9, .a=0xdc, .x=0x0e, .y=0xb0, .sp=0x9a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb4c7, .value=0xc8}, {.addr=0xb4c8, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xb4c7, .value=0xc8, .type=IO_READ},
        {.addr=0xb4c8, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x6024, .a=0xe0, .x=0xea, .y=0x63, .sp=0xed, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6024, .value=0xc8}, {.addr=0x6025, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x6026, .a=0xe0, .x=0xea, .y=0x63, .sp=0xed, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6024, .value=0xc8}, {.addr=0x6025, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x6024, .value=0xc8, .type=IO_READ},
        {.addr=0x6025, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x69d2, .a=0x8e, .x=0x86, .y=0x7f, .sp=0x72, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x69d2, .value=0xc8}, {.addr=0x69d3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x69d4, .a=0x8e, .x=0x86, .y=0x7f, .sp=0x72, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x69d2, .value=0xc8}, {.addr=0x69d3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x69d2, .value=0xc8, .type=IO_READ},
        {.addr=0x69d3, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x6abb, .a=0x59, .x=0x5d, .y=0xf6, .sp=0xb1, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6abb, .value=0xc8}, {.addr=0x6abc, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x6abd, .a=0x59, .x=0x5d, .y=0xf6, .sp=0xb1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6abb, .value=0xc8}, {.addr=0x6abc, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x6abb, .value=0xc8, .type=IO_READ},
        {.addr=0x6abc, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcaa6, .a=0xf7, .x=0x05, .y=0x7c, .sp=0xfb, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa6, .value=0xc8}, {.addr=0xcaa7, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xcaa8, .a=0xf7, .x=0x05, .y=0x7c, .sp=0xfb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xcaa6, .value=0xc8}, {.addr=0xcaa7, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xcaa6, .value=0xc8, .type=IO_READ},
        {.addr=0xcaa7, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xd881, .a=0x55, .x=0xbe, .y=0x98, .sp=0x8b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xd881, .value=0xc8}, {.addr=0xd882, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xd883, .a=0x55, .x=0xbe, .y=0x98, .sp=0x8b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd881, .value=0xc8}, {.addr=0xd882, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xd881, .value=0xc8, .type=IO_READ},
        {.addr=0xd882, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x8aea, .a=0x38, .x=0xbc, .y=0xd1, .sp=0xad, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8aea, .value=0xc8}, {.addr=0x8aeb, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x8aec, .a=0x38, .x=0xbc, .y=0xd1, .sp=0xad, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8aea, .value=0xc8}, {.addr=0x8aeb, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x8aea, .value=0xc8, .type=IO_READ},
        {.addr=0x8aeb, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x74b7, .a=0xad, .x=0xad, .y=0xba, .sp=0x55, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x74b7, .value=0xc8}, {.addr=0x74b8, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x74b9, .a=0xad, .x=0xad, .y=0xba, .sp=0x55, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x74b7, .value=0xc8}, {.addr=0x74b8, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x74b7, .value=0xc8, .type=IO_READ},
        {.addr=0x74b8, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xe470, .a=0x40, .x=0xf9, .y=0xce, .sp=0x1e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe470, .value=0xc8}, {.addr=0xe471, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe472, .a=0x40, .x=0xf9, .y=0xce, .sp=0x1e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe470, .value=0xc8}, {.addr=0xe471, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe470, .value=0xc8, .type=IO_READ},
        {.addr=0xe471, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x32f0, .a=0xac, .x=0x0c, .y=0x69, .sp=0xb9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x32f0, .value=0xc8}, {.addr=0x32f1, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x32f2, .a=0xac, .x=0x0c, .y=0x69, .sp=0xb9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x32f0, .value=0xc8}, {.addr=0x32f1, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x32f0, .value=0xc8, .type=IO_READ},
        {.addr=0x32f1, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xc743, .a=0xfc, .x=0x29, .y=0x90, .sp=0xea, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc743, .value=0xc8}, {.addr=0xc744, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xc745, .a=0xfc, .x=0x29, .y=0x90, .sp=0xea, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc743, .value=0xc8}, {.addr=0xc744, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xc743, .value=0xc8, .type=IO_READ},
        {.addr=0xc744, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x28f3, .a=0x8c, .x=0x2b, .y=0xef, .sp=0xbd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x28f3, .value=0xc8}, {.addr=0x28f4, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x28f5, .a=0x8c, .x=0x2b, .y=0xef, .sp=0xbd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x28f3, .value=0xc8}, {.addr=0x28f4, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x28f3, .value=0xc8, .type=IO_READ},
        {.addr=0x28f4, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x334b, .a=0x8e, .x=0xbb, .y=0xd3, .sp=0xdc, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x334b, .value=0xc8}, {.addr=0x334c, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x334d, .a=0x8e, .x=0xbb, .y=0xd3, .sp=0xdc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x334b, .value=0xc8}, {.addr=0x334c, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x334b, .value=0xc8, .type=IO_READ},
        {.addr=0x334c, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xfb7f, .a=0x85, .x=0xcb, .y=0xd8, .sp=0x2f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7f, .value=0xc8}, {.addr=0xfb80, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xfb81, .a=0x85, .x=0xcb, .y=0xd8, .sp=0x2f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfb7f, .value=0xc8}, {.addr=0xfb80, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xfb7f, .value=0xc8, .type=IO_READ},
        {.addr=0xfb80, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x46a1, .a=0xa2, .x=0xb6, .y=0x54, .sp=0xf0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x46a1, .value=0xc8}, {.addr=0x46a2, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x46a3, .a=0xa2, .x=0xb6, .y=0x54, .sp=0xf0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x46a1, .value=0xc8}, {.addr=0x46a2, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x46a1, .value=0xc8, .type=IO_READ},
        {.addr=0x46a2, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xb1f5, .a=0x02, .x=0x71, .y=0xdb, .sp=0x1b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f5, .value=0xc8}, {.addr=0xb1f6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xb1f7, .a=0x02, .x=0x71, .y=0xdb, .sp=0x1b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb1f5, .value=0xc8}, {.addr=0xb1f6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xb1f5, .value=0xc8, .type=IO_READ},
        {.addr=0xb1f6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xdb15, .a=0xe9, .x=0x35, .y=0xbb, .sp=0x2f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb15, .value=0xc8}, {.addr=0xdb16, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xdb17, .a=0xe9, .x=0x35, .y=0xbb, .sp=0x2f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xdb15, .value=0xc8}, {.addr=0xdb16, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xdb15, .value=0xc8, .type=IO_READ},
        {.addr=0xdb16, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xf0b0, .a=0xd8, .x=0x02, .y=0xe1, .sp=0x1f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf0b0, .value=0xc8}, {.addr=0xf0b1, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xf0b2, .a=0xd8, .x=0x02, .y=0xe1, .sp=0x1f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf0b0, .value=0xc8}, {.addr=0xf0b1, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xf0b0, .value=0xc8, .type=IO_READ},
        {.addr=0xf0b1, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x4879, .a=0xb7, .x=0xc6, .y=0x36, .sp=0x30, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x4879, .value=0xc8}, {.addr=0x487a, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x487b, .a=0xb7, .x=0xc6, .y=0x36, .sp=0x30, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4879, .value=0xc8}, {.addr=0x487a, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4879, .value=0xc8, .type=IO_READ},
        {.addr=0x487a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xdb45, .a=0x6a, .x=0x0f, .y=0x5f, .sp=0x72, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xdb45, .value=0xc8}, {.addr=0xdb46, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xdb47, .a=0x6a, .x=0x0f, .y=0x5f, .sp=0x72, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xdb45, .value=0xc8}, {.addr=0xdb46, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xdb45, .value=0xc8, .type=IO_READ},
        {.addr=0xdb46, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x9c85, .a=0x1c, .x=0x2b, .y=0x72, .sp=0xd5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x9c85, .value=0xc8}, {.addr=0x9c86, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9c87, .a=0x1c, .x=0x2b, .y=0x72, .sp=0xd5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9c85, .value=0xc8}, {.addr=0x9c86, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9c85, .value=0xc8, .type=IO_READ},
        {.addr=0x9c86, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x6eed, .a=0x31, .x=0x26, .y=0xf8, .sp=0xd9, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x6eed, .value=0xc8}, {.addr=0x6eee, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x6eef, .a=0x31, .x=0x26, .y=0xf8, .sp=0xd9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6eed, .value=0xc8}, {.addr=0x6eee, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x6eed, .value=0xc8, .type=IO_READ},
        {.addr=0x6eee, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x7f73, .a=0xdd, .x=0xe2, .y=0x00, .sp=0xeb, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7f73, .value=0xc8}, {.addr=0x7f74, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x7f75, .a=0xdd, .x=0xe2, .y=0x00, .sp=0xeb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7f73, .value=0xc8}, {.addr=0x7f74, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x7f73, .value=0xc8, .type=IO_READ},
        {.addr=0x7f74, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xe465, .a=0x30, .x=0xfd, .y=0xd6, .sp=0x9f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe465, .value=0xc8}, {.addr=0xe466, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xe467, .a=0x30, .x=0xfd, .y=0xd6, .sp=0x9f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe465, .value=0xc8}, {.addr=0xe466, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xe465, .value=0xc8, .type=IO_READ},
        {.addr=0xe466, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x327b, .a=0x01, .x=0xdb, .y=0xa6, .sp=0x2e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x327b, .value=0xc8}, {.addr=0x327c, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x327d, .a=0x01, .x=0xdb, .y=0xa6, .sp=0x2e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x327b, .value=0xc8}, {.addr=0x327c, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x327b, .value=0xc8, .type=IO_READ},
        {.addr=0x327c, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x9f8d, .a=0xee, .x=0x1f, .y=0xa7, .sp=0x1e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9f8d, .value=0xc8}, {.addr=0x9f8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9f8f, .a=0xee, .x=0x1f, .y=0xa7, .sp=0x1e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9f8d, .value=0xc8}, {.addr=0x9f8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9f8d, .value=0xc8, .type=IO_READ},
        {.addr=0x9f8e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xd9df, .a=0x92, .x=0x46, .y=0x16, .sp=0xdb, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xd9df, .value=0xc8}, {.addr=0xd9e0, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd9e1, .a=0x92, .x=0x46, .y=0x16, .sp=0xdb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd9df, .value=0xc8}, {.addr=0xd9e0, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd9df, .value=0xc8, .type=IO_READ},
        {.addr=0xd9e0, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xf2c4, .a=0x81, .x=0x85, .y=0xf5, .sp=0xf2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c4, .value=0xc8}, {.addr=0xf2c5, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xf2c6, .a=0x81, .x=0x85, .y=0xf5, .sp=0xf2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf2c4, .value=0xc8}, {.addr=0xf2c5, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xf2c4, .value=0xc8, .type=IO_READ},
        {.addr=0xf2c5, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x49b2, .a=0xcd, .x=0x51, .y=0x62, .sp=0x7e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x49b2, .value=0xc8}, {.addr=0x49b3, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x49b4, .a=0xcd, .x=0x51, .y=0x62, .sp=0x7e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x49b2, .value=0xc8}, {.addr=0x49b3, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x49b2, .value=0xc8, .type=IO_READ},
        {.addr=0x49b3, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x08ad, .a=0x8e, .x=0xa9, .y=0xc8, .sp=0xd7, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x08ad, .value=0xc8}, {.addr=0x08ae, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x08af, .a=0x8e, .x=0xa9, .y=0xc8, .sp=0xd7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x08ad, .value=0xc8}, {.addr=0x08ae, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x08ad, .value=0xc8, .type=IO_READ},
        {.addr=0x08ae, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x1ebb, .a=0x82, .x=0xa6, .y=0x3e, .sp=0x5c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x1ebb, .value=0xc8}, {.addr=0x1ebc, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x1ebd, .a=0x82, .x=0xa6, .y=0x3e, .sp=0x5c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1ebb, .value=0xc8}, {.addr=0x1ebc, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x1ebb, .value=0xc8, .type=IO_READ},
        {.addr=0x1ebc, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xd5b2, .a=0x71, .x=0xe2, .y=0xce, .sp=0x64, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b2, .value=0xc8}, {.addr=0xd5b3, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xd5b4, .a=0x71, .x=0xe2, .y=0xce, .sp=0x64, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd5b2, .value=0xc8}, {.addr=0xd5b3, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xd5b2, .value=0xc8, .type=IO_READ},
        {.addr=0xd5b3, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x94eb, .a=0x0f, .x=0xe3, .y=0x0c, .sp=0x17, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x94eb, .value=0xc8}, {.addr=0x94ec, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x94ed, .a=0x0f, .x=0xe3, .y=0x0c, .sp=0x17, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x94eb, .value=0xc8}, {.addr=0x94ec, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x94eb, .value=0xc8, .type=IO_READ},
        {.addr=0x94ec, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xe53a, .a=0xfe, .x=0xa4, .y=0x91, .sp=0x13, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe53a, .value=0xc8}, {.addr=0xe53b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xe53c, .a=0xfe, .x=0xa4, .y=0x91, .sp=0x13, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe53a, .value=0xc8}, {.addr=0xe53b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xe53a, .value=0xc8, .type=IO_READ},
        {.addr=0xe53b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x61b2, .a=0xcd, .x=0x0d, .y=0x59, .sp=0x4a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x61b2, .value=0xc8}, {.addr=0x61b3, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x61b4, .a=0xcd, .x=0x0d, .y=0x59, .sp=0x4a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x61b2, .value=0xc8}, {.addr=0x61b3, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x61b2, .value=0xc8, .type=IO_READ},
        {.addr=0x61b3, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xff40, .a=0x84, .x=0xa0, .y=0x3a, .sp=0x47, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xff40, .value=0xc8}, {.addr=0xff41, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xff42, .a=0x84, .x=0xa0, .y=0x3a, .sp=0x47, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xff40, .value=0xc8}, {.addr=0xff41, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xff40, .value=0xc8, .type=IO_READ},
        {.addr=0xff41, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x9900, .a=0x15, .x=0xf6, .y=0xee, .sp=0x1d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x9900, .value=0xc8}, {.addr=0x9901, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x9902, .a=0x15, .x=0xf6, .y=0xee, .sp=0x1d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9900, .value=0xc8}, {.addr=0x9901, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x9900, .value=0xc8, .type=IO_READ},
        {.addr=0x9901, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa0c7, .a=0xb1, .x=0xa2, .y=0xa6, .sp=0x2d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c7, .value=0xc8}, {.addr=0xa0c8, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xa0c9, .a=0xb1, .x=0xa2, .y=0xa6, .sp=0x2d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa0c7, .value=0xc8}, {.addr=0xa0c8, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xa0c7, .value=0xc8, .type=IO_READ},
        {.addr=0xa0c8, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xb636, .a=0xf8, .x=0x12, .y=0x39, .sp=0xd8, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xb636, .value=0xc8}, {.addr=0xb637, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb638, .a=0xf8, .x=0x12, .y=0x39, .sp=0xd8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb636, .value=0xc8}, {.addr=0xb637, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb636, .value=0xc8, .type=IO_READ},
        {.addr=0xb637, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xaa0e, .a=0xda, .x=0xaf, .y=0x22, .sp=0xf8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0e, .value=0xc8}, {.addr=0xaa0f, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xaa10, .a=0xda, .x=0xaf, .y=0x22, .sp=0xf8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaa0e, .value=0xc8}, {.addr=0xaa0f, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xaa0e, .value=0xc8, .type=IO_READ},
        {.addr=0xaa0f, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xcadf, .a=0xb2, .x=0x16, .y=0xa6, .sp=0x07, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xcadf, .value=0xc8}, {.addr=0xcae0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcae1, .a=0xb2, .x=0x16, .y=0xa6, .sp=0x07, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xcadf, .value=0xc8}, {.addr=0xcae0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcadf, .value=0xc8, .type=IO_READ},
        {.addr=0xcae0, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xbbf9, .a=0xd0, .x=0xfa, .y=0xbd, .sp=0xe7, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf9, .value=0xc8}, {.addr=0xbbfa, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xbbfb, .a=0xd0, .x=0xfa, .y=0xbd, .sp=0xe7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbbf9, .value=0xc8}, {.addr=0xbbfa, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xbbf9, .value=0xc8, .type=IO_READ},
        {.addr=0xbbfa, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xd2e0, .a=0x75, .x=0xfd, .y=0x8a, .sp=0x49, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd2e0, .value=0xc8}, {.addr=0xd2e1, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd2e2, .a=0x75, .x=0xfd, .y=0x8a, .sp=0x49, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd2e0, .value=0xc8}, {.addr=0xd2e1, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd2e0, .value=0xc8, .type=IO_READ},
        {.addr=0xd2e1, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x437b, .a=0x2d, .x=0xb6, .y=0x16, .sp=0x89, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x437b, .value=0xc8}, {.addr=0x437c, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x437d, .a=0x2d, .x=0xb6, .y=0x16, .sp=0x89, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x437b, .value=0xc8}, {.addr=0x437c, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x437b, .value=0xc8, .type=IO_READ},
        {.addr=0x437c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x9a95, .a=0xd3, .x=0x46, .y=0xe6, .sp=0xd0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x9a95, .value=0xc8}, {.addr=0x9a96, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x9a97, .a=0xd3, .x=0x46, .y=0xe6, .sp=0xd0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9a95, .value=0xc8}, {.addr=0x9a96, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x9a95, .value=0xc8, .type=IO_READ},
        {.addr=0x9a96, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x5934, .a=0x01, .x=0x2f, .y=0x83, .sp=0x22, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5934, .value=0xc8}, {.addr=0x5935, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5936, .a=0x01, .x=0x2f, .y=0x83, .sp=0x22, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5934, .value=0xc8}, {.addr=0x5935, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5934, .value=0xc8, .type=IO_READ},
        {.addr=0x5935, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x98be, .a=0xd7, .x=0x5f, .y=0xdb, .sp=0x74, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x98be, .value=0xc8}, {.addr=0x98bf, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x98c0, .a=0xd7, .x=0x5f, .y=0xdb, .sp=0x74, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x98be, .value=0xc8}, {.addr=0x98bf, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x98be, .value=0xc8, .type=IO_READ},
        {.addr=0x98bf, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x53bf, .a=0x54, .x=0x92, .y=0xbb, .sp=0x98, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x53bf, .value=0xc8}, {.addr=0x53c0, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x53c1, .a=0x54, .x=0x92, .y=0xbb, .sp=0x98, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x53bf, .value=0xc8}, {.addr=0x53c0, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x53bf, .value=0xc8, .type=IO_READ},
        {.addr=0x53c0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xf42f, .a=0x09, .x=0xa5, .y=0x73, .sp=0x3a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf42f, .value=0xc8}, {.addr=0xf430, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xf431, .a=0x09, .x=0xa5, .y=0x73, .sp=0x3a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf42f, .value=0xc8}, {.addr=0xf430, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xf42f, .value=0xc8, .type=IO_READ},
        {.addr=0xf430, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xec30, .a=0xf5, .x=0x80, .y=0xf0, .sp=0xef, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xec30, .value=0xc8}, {.addr=0xec31, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xec32, .a=0xf5, .x=0x80, .y=0xf0, .sp=0xef, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xec30, .value=0xc8}, {.addr=0xec31, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xec30, .value=0xc8, .type=IO_READ},
        {.addr=0xec31, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x1d41, .a=0x98, .x=0xfb, .y=0xdc, .sp=0x39, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d41, .value=0xc8}, {.addr=0x1d42, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x1d43, .a=0x98, .x=0xfb, .y=0xdc, .sp=0x39, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1d41, .value=0xc8}, {.addr=0x1d42, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x1d41, .value=0xc8, .type=IO_READ},
        {.addr=0x1d42, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x7197, .a=0x9b, .x=0x2d, .y=0x24, .sp=0x0a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7197, .value=0xc8}, {.addr=0x7198, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x7199, .a=0x9b, .x=0x2d, .y=0x24, .sp=0x0a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7197, .value=0xc8}, {.addr=0x7198, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x7197, .value=0xc8, .type=IO_READ},
        {.addr=0x7198, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xca4e, .a=0x67, .x=0x7a, .y=0x4d, .sp=0xc8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xca4e, .value=0xc8}, {.addr=0xca4f, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xca50, .a=0x67, .x=0x7a, .y=0x4d, .sp=0xc8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xca4e, .value=0xc8}, {.addr=0xca4f, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xca4e, .value=0xc8, .type=IO_READ},
        {.addr=0xca4f, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x971e, .a=0x77, .x=0x19, .y=0xa0, .sp=0x43, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x971e, .value=0xc8}, {.addr=0x971f, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x9720, .a=0x77, .x=0x19, .y=0xa0, .sp=0x43, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x971e, .value=0xc8}, {.addr=0x971f, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x971e, .value=0xc8, .type=IO_READ},
        {.addr=0x971f, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xc63f, .a=0xc7, .x=0x3c, .y=0x38, .sp=0x6a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc63f, .value=0xc8}, {.addr=0xc640, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xc641, .a=0xc7, .x=0x3c, .y=0x38, .sp=0x6a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc63f, .value=0xc8}, {.addr=0xc640, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xc63f, .value=0xc8, .type=IO_READ},
        {.addr=0xc640, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x8b77, .a=0x69, .x=0x53, .y=0xe6, .sp=0xf1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x8b77, .value=0xc8}, {.addr=0x8b78, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x8b79, .a=0x69, .x=0x53, .y=0xe6, .sp=0xf1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8b77, .value=0xc8}, {.addr=0x8b78, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x8b77, .value=0xc8, .type=IO_READ},
        {.addr=0x8b78, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x1d7e, .a=0xe5, .x=0x08, .y=0xdb, .sp=0x7d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1d7e, .value=0xc8}, {.addr=0x1d7f, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x1d80, .a=0xe5, .x=0x08, .y=0xdb, .sp=0x7d, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1d7e, .value=0xc8}, {.addr=0x1d7f, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x1d7e, .value=0xc8, .type=IO_READ},
        {.addr=0x1d7f, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xb895, .a=0xbd, .x=0xb0, .y=0x75, .sp=0xb2, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb895, .value=0xc8}, {.addr=0xb896, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xb897, .a=0xbd, .x=0xb0, .y=0x75, .sp=0xb2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb895, .value=0xc8}, {.addr=0xb896, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xb895, .value=0xc8, .type=IO_READ},
        {.addr=0xb896, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x409d, .a=0x51, .x=0xc8, .y=0x38, .sp=0xd5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x409d, .value=0xc8}, {.addr=0x409e, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x409f, .a=0x51, .x=0xc8, .y=0x38, .sp=0xd5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x409d, .value=0xc8}, {.addr=0x409e, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x409d, .value=0xc8, .type=IO_READ},
        {.addr=0x409e, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xa4af, .a=0x05, .x=0x19, .y=0xd5, .sp=0xb9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa4af, .value=0xc8}, {.addr=0xa4b0, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xa4b1, .a=0x05, .x=0x19, .y=0xd5, .sp=0xb9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa4af, .value=0xc8}, {.addr=0xa4b0, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xa4af, .value=0xc8, .type=IO_READ},
        {.addr=0xa4b0, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x0c33, .a=0xe4, .x=0x62, .y=0xc2, .sp=0xed, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0c33, .value=0xc8}, {.addr=0x0c34, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x0c35, .a=0xe4, .x=0x62, .y=0xc2, .sp=0xed, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0c33, .value=0xc8}, {.addr=0x0c34, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x0c33, .value=0xc8, .type=IO_READ},
        {.addr=0x0c34, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x0490, .a=0xa1, .x=0x32, .y=0xcf, .sp=0x6f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0490, .value=0xc8}, {.addr=0x0491, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0492, .a=0xa1, .x=0x32, .y=0xcf, .sp=0x6f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0490, .value=0xc8}, {.addr=0x0491, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x0490, .value=0xc8, .type=IO_READ},
        {.addr=0x0491, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x006f, .a=0x40, .x=0x3e, .y=0xbe, .sp=0xb8, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0xc8}, {.addr=0x0070, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0071, .a=0x40, .x=0x3e, .y=0xbe, .sp=0xb8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0xc8}, {.addr=0x0070, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x006f, .value=0xc8, .type=IO_READ},
        {.addr=0x0070, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_C8, _C8_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xf34c, .a=0xde, .x=0xe5, .y=0xbd, .sp=0x3a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf34c, .value=0xc8}, {.addr=0xf34d, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xf34e, .a=0xde, .x=0xe5, .y=0xbd, .sp=0x3a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf34c, .value=0xc8}, {.addr=0xf34d, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xf34c, .value=0xc8, .type=IO_READ},
        {.addr=0xf34d, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("C8 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
